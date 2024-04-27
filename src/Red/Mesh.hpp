#pragma once

namespace Red
{
struct MeshMaterialsToken
{
    JobHandle job;
    SharedPtr<DynArray<Handle<IMaterial>>> materials;
};
}

namespace Raw::CMesh
{
using MaterialLock = Core::OffsetPtr<0x218, Red::SharedMutex>;

constexpr auto GetAppearance = Core::RawFunc<
    /* addr = */ Red::AddressLib::CMesh_GetAppearance,
    /* type = */ Red::Handle<Red::mesh::MeshAppearance>& (*)(Red::CMesh* aMesh, Red::CName aAppearance)>();

constexpr auto LoadMaterialsAsync = Core::RawFunc<
    /* addr = */ Red::AddressLib::CMesh_LoadMaterialsAsync,
    /* type = */ void* (*)(Red::CMesh* aMesh,
                           Red::MeshMaterialsToken& aOut,
                           const Red::DynArray<Red::CName>& aMaterialNames,
                           uint8_t a4)>();
}

namespace Raw::MeshMaterialBuffer
{
constexpr auto LoadMaterialAsync = Core::RawFunc<
    /* addr = */ Red::AddressLib::MeshMaterialBuffer_LoadMaterialAsync,
    /* type = */ void* (*)(Red::meshMeshMaterialBuffer* aBuffer,
                           Red::SharedPtr<Red::ResourceToken<Red::IMaterial>>& aOut,
                           const Red::Handle<Red::CMesh>& aMesh,
                           uint16_t aMaterialIndex,
                           uint64_t a5,
                           uint8_t a6)>();
}

namespace Raw::MeshAppearance
{
constexpr auto LoadMaterialSetupAsync = Core::RawFunc<
    /* addr = */ Red::AddressLib::MeshAppearance_LoadMaterialSetupAsync,
    /* type = */ void (*)(Red::mesh::MeshAppearance& aAppearance, Red::Handle<Red::mesh::MeshAppearance>& aOut,
                          uint8_t a3)>();
}

namespace Raw::MeshComponent
{
constexpr auto LoadResource = Core::RawVFunc<
        /* offset = */ 0x260,
        /* type = */ uint64_t(Red::IComponent::*)(Red::JobQueue& aQueue)>();
}
