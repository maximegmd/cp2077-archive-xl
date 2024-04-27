#pragma once

#include "Red/EntityTemplate.hpp"
#include "Red/ResourcePath.hpp"

namespace App
{
using DynamicPartList = Core::Map<Red::CName, Red::CName>;
using DynamicTagList = Core::Set<Red::CName>;

struct DynamicAppearanceName
{
    DynamicAppearanceName();
    explicit DynamicAppearanceName(Red::CName aAppearance);

    static bool CheckMark(Red::CName aAppearance);

    Red::CName value;
    Red::CName name;
    Red::CName variant;
    DynamicPartList parts;
    uint64_t context;
    bool isDynamic;
};

struct DynamicAppearanceRef
{
    explicit DynamicAppearanceRef(Red::CName aReference);

    [[nodiscard]] bool Match(Red::CName aVariant) const;
    [[nodiscard]] bool Match(const DynamicTagList& aConditions) const;

    Red::CName value;
    Red::CName name;
    DynamicTagList variants;
    DynamicTagList conditions;
    bool isDynamic;
    bool isConditional;
    int8_t weight;
};

class DynamicAppearanceController
{
public:
    struct AttributeData
    {
        AttributeData() = default;

        AttributeData(std::string aValue, std::string aSuffix)
            : value(std::move(aValue))
            , suffix(std::move(aSuffix))
        {
        }

        AttributeData(Red::CName aName)
        {
            if (aName)
            {
                value = aName.ToString();
                suffix = value;
            }
        }

        std::string value;
        std::string suffix;
    };

    using DynamicAttrList = Core::Map<Red::CName, AttributeData>;

    struct DynamicString
    {
        bool valid;
        std::string value;
        DynamicTagList attributes;
    };

    [[nodiscard]] DynamicAppearanceName ParseAppearance(Red::CName aAppearance) const;
    [[nodiscard]] DynamicAppearanceRef ParseReference(Red::CName aReference) const;
    [[nodiscard]] bool MatchReference(const DynamicAppearanceRef& aReference, Red::Entity* aEntity,
                                      Red::CName aVariant) const;

    [[nodiscard]] Red::CName ResolveName(Red::Entity* aEntity, const DynamicPartList& aVariant,
                                         Red::CName aName) const;
    [[nodiscard]] Red::ResourcePath ResolvePath(Red::Entity* aEntity, const DynamicPartList& aVariant,
                                                Red::ResourcePath aPath) const;

    void UpdateState(Red::Entity* aEntity);
    void RemoveState(Red::Entity* aEntity);

    void RegisterPath(Red::ResourcePath aPath, const char* aPathStr);
    void RegisterPath(Red::ResourcePath aPath, const std::string& aPathStr);
    void RegisterPath(Red::ResourcePath aPath, const std::string_view& aPathStr);
    void RegisterPath(Red::ResourcePath aPath, const Red::StringView& aPathStr);

    bool SupportsDynamicAppearance(const Red::EntityTemplate* aTemplate);
    void MarkDynamicAppearanceName(Red::CName& aAppearanceName, Red::Entity* aEntity);
    void MarkDynamicAppearanceName(Red::CName& aAppearanceName, DynamicAppearanceName& aSelector);
    std::string_view GetBaseAppearanceName(Red::CName aAppearanceName);

    [[nodiscard]] const std::string& GetPathStr(Red::ResourcePath aPath) const;

    static bool IsMale(Red::Entity* aEntity);

    [[nodiscard]] bool IsDynamicValue(const char* aValue) const;
    [[nodiscard]] bool IsDynamicValue(const std::string& aValue) const;
    [[nodiscard]] bool IsDynamicValue(const std::string_view& aValue) const;
    [[nodiscard]] bool IsDynamicValue(const Red::StringView& aValue) const;
    [[nodiscard]] bool IsDynamicValue(Red::CName aValue) const;

    DynamicString ProcessString(const DynamicAttrList& aAttrs, const DynamicPartList& aVariant,
                                const char* aInput) const;

private:
    struct EntityState
    {
        DynamicAttrList values;
        DynamicAttrList fallback;
        DynamicTagList conditions;
    };

    struct CustomizationData
    {
        bool isMale;
        Red::CName skinColor;
        Red::CName eyesColor;
        Red::CName hairColor;
    };

    AttributeData GetSuffixData(Red::Entity* aEntity, Red::TweakDBID aSuffixID) const;
    CustomizationData GetCustomizationData(Red::Entity* aEntity) const;

    Core::Map<Red::Entity*, EntityState> m_states;
    Core::Map<Red::ResourcePath, std::string> m_paths;
};
}
