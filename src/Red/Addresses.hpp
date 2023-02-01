#pragma once

// Generated by cp77ida.py on 2023-02-01 for Cyberpunk 2077 v.1.61
// DO NOT MODIFY. USE tools\ida\scan.py TO GENERATE THIS FILE.

#include <cstdint>

namespace Red::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t Main = 0x140196500 - ImageBase; // 40 53 48 81 EC ? ? ? ? FF 15 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t IsMainThread = 0x142B99AA0 - ImageBase; // 83 3D  ?  ? ? ? 00 74 17 65 48 8B 04 25 30 00 00 00 8B 48 48 39 0D ? ? ? ? 74 03 32 C0 C3, expected: 1, index: 0

constexpr uintptr_t AppearanceChanger_ComputePlayerGarment = 0x141C4C3F0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 4C 89 64 24 20 55 41 56 41 57 48 8D 6C 24 C0, expected: 1, index: 0

constexpr uintptr_t AppearanceChangeRequest_LoadEntityTemplate = 0x141C41430 - ImageBase; // 48 89 5C 24 18 48 89 74 24 20 55 57 41 56 48 8D 6C 24 B9 48 81 EC C0 00 00 00 45 32 F6 48 8B F9, expected: 1, index: 0

constexpr uintptr_t AppearanceNameVisualTagsPreset_GetVisualTags = 0x1417ACC50 - ImageBase; // 48 89 74 24 18 48 89 54 24 10 57 48 83 EC 40 49 8B F8 48 8D 54 24 20 4C 8D 44 24 58 48 83 C1 40 49 8B F1, expected: 1, index: 0

constexpr uintptr_t AppearanceResource_FindAppearanceDefinition = 0x141000D80 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 20 48 8B F1 45 8B F9 48 81 C1 F0 00 00 00 49 8B D8 4C 8B F2, expected: 1, index: 0

constexpr uintptr_t AttachmentSlots_InitializeSlots = 0x1416541F0 - ImageBase; // 48 8B C4 55 57 48 8D 68 B8 48 81 EC 38 01 00 00 83 7A 0C 00 48 8B FA, expected: 1, index: 0
constexpr uintptr_t AttachmentSlots_IsSlotEmpty = 0x14165C910 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 81 C1 00 01 00 00, expected: 4, index: 1
constexpr uintptr_t AttachmentSlots_IsSlotSpawning = 0x14165C9C0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 81 C1 00 01 00 00, expected: 4, index: 2

constexpr uintptr_t CBaseEngine_LoadGatheredResources = 0x140A79360 - ImageBase; // 40 53 48 83 EC 70 48 8B 01 FF 90 A0 00 00 00 33 DB 84 C0 8B CB 0F 95 C1 E8, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationFeetController_CheckState = 0x1424C7680 - ImageBase; // 48 8B C4 41 54 48 83 EC 70 48 89 58 20 48 89 78 E0 48 8B F9 4C 89 68 D8 4C 89 70 D0 4D 8B F0, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationFeetController_GetOwner = 0x1424C6710 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 40 48 8B 79 50 33 ED 89 6C 24 50 48 8B DA 48 85 FF 74, expected: 2, index: 1

constexpr uintptr_t CharacterCustomizationSystem_InitState = 0x1424D79B0 - ImageBase; // 48 8B C4 55 41 57 48 8D A8 38 FF FF FF 48 81 EC B8 01 00 00 48 89 58 08 48 89 78 20 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitOptions = 0x1424E92D0 - ImageBase; // 48 8B C4 44 88 40 18 48 89 50 10 55 56 48 8D 68 A1 48 81 EC E8 00 00 00 48 89 58 20 4C 89 68 D8, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitAppOption = 0x1424DE700 - ImageBase; // 4C 8B DC 48 81 EC 98 00 00 00 49 89 5B 08 49 8B D9 49 89 73 F8 48 8B F1 49 8B 08 4D 89 63 E8, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitMorphOption = 0x1424DF630 - ImageBase; // 48 8B C4 55 57 48 8D 68 A1 48 81 EC D8 00 00 00 48 89 58 08 49 8B D8 4C 89 60 20 4D 8B E1, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitSwitcherOption = 0x1424E08D0 - ImageBase; // 48 8B C4 44 89 48 20 4C 89 40 18 89 50 10 55 41 57 48 8D 68 B1 48 81 EC E8 00 00 00 48 89 70 E8, expected: 1, index: 0

constexpr uintptr_t Entity_GetComponents = 0x14104B5B0 - ImageBase; // 48 83 C1 70 E9, expected: 7, index: 1
constexpr uintptr_t Entity_ReassembleAppearance = 0x141047050 - ImageBase; // 40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 88 48 81 EC 78 01 00 00 4C 8B EA 49 8B D9, expected: 1, index: 0

constexpr uintptr_t EntityTemplate_FindAppearance = 0x1410676F0 - ImageBase; // 40 53 48 83 EC 20 48 8B  D9 48 85 D2 74 ? 48 3B 15 ? ? ? ? 75 ? 48  8B 51 60 48 3B 15 ? ? ? ? 48 89 7C 24 30 75, expected: 1, index: 0

constexpr uintptr_t FactoryIndex_LoadFactoryAsync = 0x141059080 - ImageBase; // 48 89 5C 24 18 55 56 57 41 56 41 57 48 8D 6C 24 C9 48 81 EC A0 00 00 00 45 33 FF 48 89 55 DF 4D 8B F0 44 89 7D FB 48 8B D9 4C 89 7D E7, expected: 1, index: 0
constexpr uintptr_t FactoryIndex_ResolveResource = 0x141058CD0 - ImageBase; // 40 53 48 83 EC 10 45 33 C9 48 8B DA 4C 8B D1 44 39 49 70, expected: 1, index: 0

constexpr uintptr_t GameApplication_InitResourceDepot = 0x142CC82E0 - ImageBase; // 48 89 74 24 18 55 48 8D 6C 24 A9 48 81 EC C0 00 00 00, expected: 1, index: 0

constexpr uintptr_t GarmentAssembler_AddItem = 0x141C2D7B0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 60 49 8B F8 4C 8B C2 48 8D 54 24 40 E8 ? ? ? ? 48 8B 07, expected: 2, index: 0
constexpr uintptr_t GarmentAssembler_AddCustomItem = 0x141C2D880 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 60 49 8B F8 4C 8B C2 48 8D 54 24 40 E8 ? ? ? ? 48 8B 07, expected: 2, index: 1
constexpr uintptr_t GarmentAssembler_ChangeItem = 0x141C2FE50 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 50 49 8B F8 4C 8B C2 48 8D 54 24 30 E8, expected: 2, index: 0
constexpr uintptr_t GarmentAssembler_ChangeCustomItem = 0x141C2FF00 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 50 49 8B F8 4C 8B C2 48 8D 54 24 30 E8, expected: 2, index: 1
constexpr uintptr_t GarmentAssembler_RemoveItem = 0x141C2F7B0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 49 8B F8 4C 8B C2 48 8D 54 24 20 E8 ? ? ? ? 44 8B 47, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_OnGameDetach = 0x141C2FFB0 - ImageBase; // 40 53 48 83 EC 20 8B 51 14 48 8B D9 48 8B 49 08 E8 ? ? ? ? C7 43 14 00 00 00 00, expected: 2, index: 1

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x1408D3450 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 48 8B 42 08 48 8B DA 4C 8B 0A 48 8B F9 4C 8B 41 18 4C 89 4C 24 20, expected: 1, index: 0

constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x14098D420 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8, expected: 2, index: 0
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x14098D500 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 48 8B FA 41 0F B6 D9 49 8B D0 E8 ? ? ? ? 48 85 C0 74, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x14098E430 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8, expected: 2, index: 1
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x14098E520 - ImageBase; // 40 53 48 83 EC 20 48 8B DA 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 48 8B  D3 48 8B C8 E8, expected: 2, index: 1

constexpr uintptr_t Localization_LoadOnScreens = 0x1406ED380 - ImageBase; // 40 55 53 57 48 8B EC 48 81 EC 80 00 00 00 0F 57 C0 48 8B D9 F3 0F 7F 45 A0 48 85 D2 75 17 33 FF 48 8B C1 48 89 39 48 89 79 08 48 81 C4 80 00 00, expected: 2, index: 0

constexpr uintptr_t ResourceLoader_OnUpdate = 0x140204860 - ImageBase; // 48 8B 49 48 48 85 C9 0F 85, expected: 9, index: 2

constexpr uintptr_t TagList_MergeWith = 0x1402ADEF0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B 1A 48 8B F1 8B 42 0C 48 8D 3C C3 48 3B DF 74, expected: 1, index: 0

constexpr uintptr_t TPPRepresentationComponent_OnAttach = 0x141A919C0 - ImageBase; // 48 89 54 24 10 55 53 56 57 41 56 41 57 48 8D AC 24 E8 FE FF FF 48 81 EC 18 02 00 00 45 33 F6, expected: 1, index: 0

constexpr uintptr_t TransactionSystem_IsSlotSpawning = 0x141AAF640 - ImageBase; // 40 53 48 83 EC 30 49 8B D8 4C 8B C2 48 8D 54 24 20 E8 ? ? ? ? 48 8B 4C 24 20 48 85 C9 75 04 32 DB EB ? 48 8B D3 E8 ? ? ? ? 0F B6 D8, expected: 3, index: 1
}
