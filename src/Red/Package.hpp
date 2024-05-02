#pragma once

#include "Red/Common.hpp"

namespace Red
{
struct PackageHeader
{
    struct Chunk
    {
        uint32_t typeID;
        uint32_t offset;
    };
    RED4EXT_ASSERT_SIZE(Chunk, 0x8);

    struct Name
    {
        uint32_t offset : 24;
        uint32_t size : 8;
    };
    RED4EXT_ASSERT_SIZE(Name, 0x4);

    struct Import
    {
        uint32_t offset : 23;
        uint32_t size : 8;
        uint32_t sync : 1;
    };
    RED4EXT_ASSERT_SIZE(Import, 0x4);

    uint8_t version;       // 00
    uint8_t unk01;         // 01
    uint16_t unk02;        // 02
    Range<Chunk> root;     // 08
    Range<Chunk> chunks;   // 18
    Range<Name> names;     // 28
    Range<Import> imports; // 38
    void* buffer;          // 48
    uint32_t size;         // 50
};
RED4EXT_ASSERT_SIZE(PackageHeader, 0x58);
RED4EXT_ASSERT_OFFSET(PackageHeader, unk02, 0x02);
RED4EXT_ASSERT_OFFSET(PackageHeader, root, 0x08);
RED4EXT_ASSERT_OFFSET(PackageHeader, buffer, 0x48);

struct ObjectPackageHeader
{
    ObjectPackageHeader();

    [[nodiscard]] bool IsEmpty() const;

    int16_t rootIndex;     // 00 - Set to 0 if package contains root Entity, otherwise -1
    Range<CRUID> cruids;   // 08
    PackageHeader package; // 18
};
RED4EXT_ASSERT_SIZE(ObjectPackageHeader, 0x70);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, rootIndex, 0x0);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, cruids, 0x08);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, package, 0x18);

struct ObjectPackageReader
{
    ObjectPackageReader(void* aBuffer, uint32_t aSize);
    ObjectPackageReader(const DeferredDataBuffer& aBuffer);
    ObjectPackageReader(const DataBuffer& aBuffer);
    ObjectPackageReader(const RawBuffer& aBuffer);

    virtual ~ObjectPackageReader() = default;      // 00
    virtual void sub_08(uint64_t a1, uint64_t a2); // 08

    void ReadHeader();
    void ReadHeader(ObjectPackageHeader& aData);

    [[nodiscard]] bool IsEmpty() const;

    void* buffer;               // 08
    uint32_t size;              // 10
    ObjectPackageHeader header; // 18
};
RED4EXT_ASSERT_SIZE(ObjectPackageReader, 0x88);
RED4EXT_ASSERT_OFFSET(ObjectPackageReader, buffer, 0x08);
RED4EXT_ASSERT_OFFSET(ObjectPackageReader, size, 0x10);
RED4EXT_ASSERT_OFFSET(ObjectPackageReader, header, 0x18);

struct PackageExtractorParams
{
    PackageExtractorParams(const ObjectPackageHeader& aHeader);
    PackageExtractorParams(const PackageHeader& aHeader);

    PackageHeader header;          // 00
    ResourceLoader* loader;        // 58
    bool disablePostLoad;          // 60 - See PackageExtractor
    bool disableImports;           // 61 - See PackageExtractor
    bool disablePreInitialization; // 62 - See PackageExtractor
    uint8_t unk63;                 // 63
    uint8_t unk64;                 // 64
    DynArray<uint32_t> unk68;      // 68
    uint32_t unk78;                // 78
    RawBuffer unk80;               // 80 - Moved to PackageExtractor in ctor
};
RED4EXT_ASSERT_SIZE(PackageExtractorParams, 0xA0);
RED4EXT_ASSERT_OFFSET(PackageExtractorParams, loader, 0x58);
RED4EXT_ASSERT_OFFSET(PackageExtractorParams, disablePostLoad, 0x60);
RED4EXT_ASSERT_OFFSET(PackageExtractorParams, disableImports, 0x61);
RED4EXT_ASSERT_OFFSET(PackageExtractorParams, disablePreInitialization, 0x62);
RED4EXT_ASSERT_OFFSET(PackageExtractorParams, unk80, 0x80);

struct PackageExtractor
{
    PackageExtractor(const PackageExtractorParams& aParams);

    void ExtractSync();
    JobHandle ExtractAsync();

    WeakPtr<PackageExtractor> self;                 // 00
    PackageHeader header;                           // 10
    DynArray<uint32_t> unk68;                       // 68
    uint32_t unk78;                                 // 78
    RawBuffer unk80;                                // 80
    ResourceLoader* loader;                         // A0
    DynArray<Handle<ISerializable>> results;        // A8
    bool disablePostLoad;                           // B8 - Don't call serializable->PostLoad()
    bool disableImports;                            // B9 - Don't load resource dependencies
    bool disablePreInitialization;                  // BA - Don't call pre-initilization during PostLoad()
    uint8_t unkBB;                                  // BB
    uint8_t unkBC;                                  // BC
    DynArray<Handle<ISerializable>> objects;        // C0
    DynArray<SharedPtr<ResourceToken<>>> resources; // D0
    DynArray<uint32_t> unkE0;                       // E0
    void* unkF0;                                    // F0
    void* unkF8;                                    // F8
    void* unk100;                                   // 100
    void* unk108;                                   // 108
    void* unk110;                                   // 110
    void* unk118;                                   // 118
};
RED4EXT_ASSERT_SIZE(PackageExtractor, 0x120);
RED4EXT_ASSERT_OFFSET(PackageExtractor, header, 0x10);
RED4EXT_ASSERT_OFFSET(PackageExtractor, results, 0xA8);
RED4EXT_ASSERT_OFFSET(PackageExtractor, disablePostLoad, 0xB8);
RED4EXT_ASSERT_OFFSET(PackageExtractor, disableImports, 0xB9);
RED4EXT_ASSERT_OFFSET(PackageExtractor, disablePreInitialization, 0xBA);
RED4EXT_ASSERT_OFFSET(PackageExtractor, objects, 0xC0);
RED4EXT_ASSERT_OFFSET(PackageExtractor, resources, 0xD0);
}
