#include "Module.hpp"
#include "App/Extensions/GarmentOverride/Dynamic.hpp"
#include "Red/FactoryIndex.hpp"
#include "Red/TweakDB.hpp"

namespace
{
constexpr auto ModuleName = "AppearanceSwap";

constexpr auto ItemEntityOffset = 0xD0; // todo: use OffsetPtr
constexpr auto EntityPathOffset = 0x60;
constexpr auto EntityNameFlat = ".entityName";
constexpr auto RecordOffset = 0x100;
constexpr auto FactoryOffset = 0x120;
}

std::string_view App::AppearanceSwapModule::GetName()
{
    return ModuleName;
}

bool App::AppearanceSwapModule::Load()
{
    if (!Hook<Raw::ItemFactoryAppearanceChangeRequest::LoadTemplate>(&OnLoadTemplate))
        throw std::runtime_error("Failed to hook [AppearanceChangeRequest::LoadTemplate].");

    if (!Hook<Raw::AppearanceChanger::SelectAppearanceName>(&OnSelectAppearance))
        throw std::runtime_error("Failed to hook [AppearanceChanger::SelectAppearanceName].");

    return true;
}

bool App::AppearanceSwapModule::Unload()
{
    Unhook<Raw::ItemFactoryAppearanceChangeRequest::LoadTemplate>();
    Unhook<Raw::AppearanceChanger::SelectAppearanceName>();

    return true;
}

bool App::AppearanceSwapModule::OnLoadTemplate(Red::ItemFactoryAppearanceChangeRequest* aRequest)
{
    Red::ResourcePath originalPath;

    auto targetEntity = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(aRequest) + ItemEntityOffset);
    auto visualRecord = *reinterpret_cast<Red::gamedataTweakDBRecord**>(aRequest + RecordOffset);
    auto entityFactory = *reinterpret_cast<uintptr_t*>(aRequest + FactoryOffset);

    if (entityFactory && targetEntity && visualRecord)
    {
        auto entityFlat = Red::GetFlatPtr<Red::CName>({visualRecord->recordID, EntityNameFlat});
        if (entityFlat)
        {
#ifndef NDEBUG
            auto recordName = Red::ToStringDebug(visualRecord->recordID);
            auto factoryName = entityFlat->ToString();
#endif

            Red::ResourcePath overridePath;
            Raw::FactoryIndex::ResolveResource(entityFactory, overridePath, *entityFlat);

            if (overridePath)
            {
                originalPath = *reinterpret_cast<Red::ResourcePath*>(targetEntity + EntityPathOffset);
                *reinterpret_cast<Red::ResourcePath*>(targetEntity + EntityPathOffset) = overridePath;
            }
        }
    }

    bool result = Raw::ItemFactoryAppearanceChangeRequest::LoadTemplate(aRequest);

    if (originalPath)
    {
        *reinterpret_cast<Red::ResourcePath*>(targetEntity + EntityPathOffset) = originalPath;
    }

    return result;
}

void* App::AppearanceSwapModule::OnSelectAppearance(Red::CName* aOut,
                                                    const Red::Handle<Red::TweakDBRecord>& aItemRecord,
                                                    const Red::ItemID& aItemID,
                                                    const Red::Handle<Red::AppearanceResource>& aAppearanceResource,
                                                    uint64_t a5, Red::CName aAppearanceName)
{
    if (!aAppearanceName)
    {
        auto appearanceName = Red::GetFlatValue<Red::CName>({aItemRecord->recordID, ".appearanceName"});
        if (appearanceName)
        {
            for (const auto& appearanceDefinition : aAppearanceResource->appearances)
            {
                if (appearanceDefinition->name == appearanceName)
                {
                    *aOut = appearanceName;
                    return aOut;
                }
            }
        }
    }

    return Raw::AppearanceChanger::SelectAppearanceName(aOut, aItemRecord, aItemID, aAppearanceResource,
                                                        a5, aAppearanceName);
}
