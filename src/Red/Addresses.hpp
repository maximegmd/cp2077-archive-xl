#pragma once

// Generated by cp77ida.py on 2023-06-26 for Cyberpunk 2077 v.1.63
// DO NOT MODIFY. USE tools\ida\scan.py TO GENERATE THIS FILE.

#include <cstdint>

namespace Red::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t Main = 0x1401A0550 - ImageBase; // 40 53 48 81 EC ? ? ? ? FF 15 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t IsMainThread = 0x142BD60A0 - ImageBase; // 83 3D  ?  ? ? ? 00 74 17 65 48 8B 04 25 30 00 00 00 8B 48 48 39 0D ? ? ? ? 74 03 32 C0 C3, expected: 1, index: 0

constexpr uintptr_t AnimatedComponent_InitializeAnimations = 0x140FECB40 - ImageBase; // 48 89 5C 24 18 55 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC 50 0F 57 C0 4C 8B F9 33 C0, expected: 1, index: 0

constexpr uintptr_t AppearanceChanger_ComputePlayerGarment = 0x141C61420 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 4C 89 64 24 20 55 41 56 41 57 48 8D 6C 24 C0, expected: 1, index: 0

constexpr uintptr_t AppearanceChangeRequest_LoadEntityTemplate = 0x141C56460 - ImageBase; // 48 89 5C 24 18 48 89 74 24 20 55 57 41 56 48 8D 6C 24 B9 48 81 EC C0 00 00 00 45 32 F6 48 8B F9, expected: 1, index: 0

constexpr uintptr_t AppearanceChangeSystem_ChangeAppearance = 0x1411435C0 - ImageBase; // 4C 8B DC 49 89 53 10 49 89 4B 08 55 53 56 41 54 41 57 49 8D AB 58 FE FF FF 48 81 EC 80 02 00 00, expected: 1, index: 0

constexpr uintptr_t AppearanceNameVisualTagsPreset_GetVisualTags = 0x1417C1B60 - ImageBase; // 48 89 74 24 18 48 89 54 24 10 57 48 83 EC 40 49 8B F8 48 8D 54 24 20 4C 8D 44 24 58 48 83 C1 40 49 8B F1, expected: 1, index: 0

constexpr uintptr_t AppearanceResource_FindAppearanceDefinition = 0x141013AB0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 20 48 8B F1 45 8B F9 48 81 C1 F0 00 00 00 49 8B D8 4C 8B F2, expected: 1, index: 0

constexpr uintptr_t AttachmentSlots_InitializeSlots = 0x141669100 - ImageBase; // 48 8B C4 55 57 48 8D 68 B8 48 81 EC 38 01 00 00 83 7A 0C 00 48 8B FA, expected: 1, index: 0
constexpr uintptr_t AttachmentSlots_IsSlotEmpty = 0x141671820 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 81 C1 00 01 00 00, expected: 4, index: 1
constexpr uintptr_t AttachmentSlots_IsSlotSpawning = 0x1416718D0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 81 C1 00 01 00 00, expected: 4, index: 2

constexpr uintptr_t CBaseEngine_LoadGatheredResources = 0x140A89710 - ImageBase; // 40 53 48 83 EC 70 48 8B 01 FF 90 A0 00 00 00 33 DB 84 C0 8B CB 0F 95 C1 E8, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationFeetController_CheckState = 0x1424DE720 - ImageBase; // 48 8B C4 41 54 48 83 EC 70 48 89 58 20 48 89 78 E0 48 8B F9 4C 89 68 D8 4C 89 70 D0 4D 8B F0, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationFeetController_GetOwner = 0x1424DD7B0 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 40 48 8B 79 50 33 ED 89 6C 24 50 48 8B DA 48 85 FF 74, expected: 2, index: 1

constexpr uintptr_t CharacterCustomizationHelper_GetHairColor = 0x141C032F0 - ImageBase; // 40 55 41 56 41 57 48 8B EC 48 83 EC 50 4C 8B F9 48 8B 0A 48 8D 55 D8 48 8B 01 FF 90 E8 01 00 00, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationSystem_Initialize = 0x142500370 - ImageBase; // 48 8B C4 44 88 40 18 48 89 50 10 55 56 48 8D 68 A1 48 81 EC E8 00 00 00 48 89 58 20 4C 89 68 D8, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_Uninitialize = 0x1424FE470 - ImageBase; // 40 53 56 57 48 83 EC 50 48 8B F1 48 83 C1 78 E8 ? ? ? ? 48 8B 86 F8 00 00 00 33 FF 0F 57 C0, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_EnsureState = 0x1424EEA50 - ImageBase; // 48 8B C4 55 41 57 48 8D A8 38 FF FF FF 48 81 EC B8 01 00 00 48 89 58 08 48 89 78 20 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeAppOption = 0x1424F57A0 - ImageBase; // 4C 8B DC 48 81 EC 98 00 00 00 49 89 5B 08 49 8B D9 49 89 73 F8 48 8B F1 49 8B 08 4D 89 63 E8, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeMorphOption = 0x1424F66D0 - ImageBase; // 48 8B C4 55 57 48 8D 68 A1 48 81 EC D8 00 00 00 48 89 58 08 49 8B D8 4C 89 60 20 4D 8B E1, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeSwitcherOption = 0x1424F7970 - ImageBase; // 48 8B C4 44 89 48 20 4C 89 40 18 89 50 10 55 41 57 48 8D 68 B1 48 81 EC E8 00 00 00 48 89 70 E8, expected: 1, index: 0

constexpr uintptr_t CMesh_GetAppearance = 0x140A20170 - ImageBase; // 40 53 48 83 EC 20 4C 8B 81 E0 01 00 00 48 8B D9 8B 81 EC 01 00 00 48 C1 E0 04 49 03 C0 4C 3B C0, expected: 1, index: 0

constexpr uintptr_t Entity_GetComponents = 0x14105E2E0 - ImageBase; // 48 83 C1 70 E9, expected: 7, index: 1
constexpr uintptr_t Entity_ReassembleAppearance = 0x141059D80 - ImageBase; // 40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 88 48 81 EC 78 01 00 00 4C 8B EA 49 8B D9, expected: 1, index: 0

constexpr uintptr_t EntityTemplate_FindAppearance = 0x14107A420 - ImageBase; // 40 53 48 83 EC 20 48 8B  D9 48 85 D2 74 ? 48 3B 15 ? ? ? ? 75 ? 48  8B 51 60 48 3B 15 ? ? ? ? 48 89 7C 24 30 75, expected: 1, index: 0

constexpr uintptr_t FactoryIndex_LoadFactoryAsync = 0x14106BDB0 - ImageBase; // 48 89 5C 24 18 55 56 57 41 56 41 57 48 8D 6C 24 C9 48 81 EC A0 00 00 00 45 33 FF 48 89 55 DF 4D 8B F0 44 89 7D FB 48 8B D9 4C 89 7D E7, expected: 1, index: 0
constexpr uintptr_t FactoryIndex_ResolveResource = 0x14106BA00 - ImageBase; // 40 53 48 83 EC 10 45 33 C9 48 8B DA 4C 8B D1 44 39 49 70, expected: 1, index: 0

constexpr uintptr_t GameApplication_InitResourceDepot = 0x142D574D0 - ImageBase; // 48 89 74 24 18 55 48 8D 6C 24 A9 48 81 EC C0 00 00 00, expected: 1, index: 0

constexpr uintptr_t GarmentAssembler_AddItem = 0x141C427E0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 60 49 8B F8 4C 8B C2 48 8D 54 24 40 E8 ? ? ? ? 48 8B 07, expected: 2, index: 0
constexpr uintptr_t GarmentAssembler_AddCustomItem = 0x141C428B0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 60 49 8B F8 4C 8B C2 48 8D 54 24 40 E8 ? ? ? ? 48 8B 07, expected: 2, index: 1
constexpr uintptr_t GarmentAssembler_ChangeItem = 0x141C44E80 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 50 49 8B F8 4C 8B C2 48 8D 54 24 30 E8, expected: 2, index: 0
constexpr uintptr_t GarmentAssembler_ChangeCustomItem = 0x141C44F30 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 50 49 8B F8 4C 8B C2 48 8D 54 24 30 E8, expected: 2, index: 1
constexpr uintptr_t GarmentAssembler_RemoveItem = 0x141C447E0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 49 8B F8 4C 8B C2 48 8D 54 24 20 E8 ? ? ? ? 44 8B 47, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_OnGameDetach = 0x141C44FE0 - ImageBase; // 40 53 48 83 EC 20 8B 51 14 48 8B D9 48 8B 49 08 E8 ? ? ? ? C7 43 14 00 00 00 00, expected: 2, index: 1

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x1408E2960 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 48 8B 42 08 48 8B DA 4C 8B 0A 48 8B F9 4C 8B 41 18 4C 89 4C 24 20, expected: 1, index: 0

constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x14099D6B0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8, expected: 2, index: 0
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x14099D790 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 48 8B FA 41 0F B6 D9 49 8B D0 E8 ? ? ? ? 48 85 C0 74, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x14099E6C0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8, expected: 2, index: 1
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x14099E7B0 - ImageBase; // 40 53 48 83 EC 20 48 8B DA 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 48 8B  D3 48 8B C8 E8, expected: 2, index: 1

constexpr uintptr_t JobHandle_Wait = 0x142C51C40 - ImageBase; // 40 53 48 83 EC 30 48 8B D9 33 D2 48 8B 0D ? ? ? ? E8, expected: 1, index: 0

constexpr uintptr_t JournalManager_LoadJournal = 0x14203C480 - ImageBase; // 48 89 5C 24 20 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 D9 48 81 EC D0 00 00 00 4C 8B E2, expected: 1, index: 0
constexpr uintptr_t JournalManager_GetEntryHash = 0x14203A720 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 20 33 F6 48 8B EA 8B DE 48 8B F9 66 90, expected: 1, index: 0
constexpr uintptr_t JournalManager_GetEntryByHash = 0x142039B00 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 20 33 F6 41 8B E8, expected: 1, index: 0
constexpr uintptr_t JournalManager_GetTrackedQuest = 0x14203B3D0 - ImageBase; // 48 8B 81 10 01 00 00 48 89 02 48 8B 81 18 01 00 00 48 89 42 08 48 85 C0 74 ? F0 FF 00 48 8B C2, expected: 1, index: 0
constexpr uintptr_t JournalManager_GetTrackedPointOfInterest = 0x14203B3A0 - ImageBase; // 48 8B 81 20 01 00 00 48 89 02 48 8B 81 28 01 00 00 48 89 42 08 48 85 C0 74 ? F0 FF 00 48 8B C2, expected: 1, index: 0
constexpr uintptr_t JournalManager_TrackQuest = 0x142043550 - ImageBase; // 48 89 54 24 10 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 18 FF FF FF 48 81 EC E8 01 00 00 48 8B 1A 45 32 ED 4C 8B F2 48 8B F1, expected: 1, index: 0
constexpr uintptr_t JournalManager_TrackPointOfInterest = 0x14137CE20 - ImageBase; // 48 81 C1 20 01 00 00 E9, expected: 8, index: 0

constexpr uintptr_t JournalRootFolderEntry_Initialize = 0x142027050 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 4D 8B C1 49 8B F1 48 8B DA 48 8B F9 E8, expected: 1, index: 0

constexpr uintptr_t JournalTree_ProcessJournalIndex = 0x142057930 - ImageBase; // 48 89 4C 24 08 55 41 56 48 81 EC B8 00 00 00 4C 8B F1 48 8B EA 48 8B 49 08 E8, expected: 1, index: 0

constexpr uintptr_t Localization_LoadOnScreens = 0x1406FC500 - ImageBase; // 40 55 53 57 48 8B EC 48 81 EC 80 00 00 00 0F 57 C0 48 8B D9 F3 0F 7F 45 A0 48 85 D2 75 17 33 FF 48 8B C1 48 89 39 48 89 79 08 48 81 C4 80 00 00, expected: 2, index: 0
constexpr uintptr_t Localization_LoadSubtitles = 0x1406FC750 - ImageBase; // 40 55 53 57 48 8B EC 48 81 EC 80 00 00 00 0F 57 C0 48 8B D9 F3 0F 7F 45 A0 48 85 D2 75 17 33 FF 48 8B C1 48 89 39 48 89 79 08 48 81 C4 80 00 00, expected: 2, index: 1
constexpr uintptr_t Localization_LoadVoiceOvers = 0x140700220 - ImageBase; // 48 89 5C 24 10 48 89 4C 24 08 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 A0 48 81 EC 60 01 00, expected: 1, index: 0
constexpr uintptr_t Localization_LoadLipsyncs = 0x142384200 - ImageBase; // 48 89 5C 24 10 48 89 74 24 20 57 48 83 EC 50 48 8B F1 0F B6 FA 48 8B 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 48 8D 48 20 E8, expected: 1, index: 0

constexpr uintptr_t MappinResource_GetMappinData = 0x142471870 - ImageBase; // 48 8B 41 40 8B 49 4C 48 C1 E1 05 48 03 C8 48 3B C1 74, expected: 1, index: 0

constexpr uintptr_t MeshAppearance_LoadMaterialSetupAsync = 0x140A281B0 - ImageBase; // 40 55 53 56 57 41 55 41 57 48 8D AC 24 78 FF FF FF 48 81 EC 88 01 00 00 45 0F B6 E8 48 8B F2 4C, expected: 1, index: 0

constexpr uintptr_t ResourceDepot_InitializeArchives = 0x143051600 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 55 41 54 41 55 41 56 41 57 48 8D 6C 24 C9 48 81 EC D0 00 00 00 4C 8B F9 48 83 C1 50 E8, expected: 1, index: 0
constexpr uintptr_t ResourceDepot_LoadArchives = 0x143051A20 - ImageBase; // 48 8B C4 4C 89 48 20 55 53 56 41 55 48 8D 68 B1 48 81 EC C8 00 00 00 49 8B 18 4C 8B EA, expected: 1, index: 0

constexpr uintptr_t ResourceLoader_OnUpdate = 0x14020E8B0 - ImageBase; // 48 8B 49 48 48 85 C9 0F 85, expected: 9, index: 2

constexpr uintptr_t StreamingWorld_OnLoad = 0x140BA6E90 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 48 8B D9 E8 ? ? ? ? 0F 57 C0 48 8D 93 D8 01 00 00, expected: 1, index: 0

constexpr uintptr_t TagList_MergeWith = 0x1402B7F40 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B 1A 48 8B F1 8B 42 0C 48 8D 3C C3 48 3B DF 74, expected: 1, index: 0

constexpr uintptr_t TPPRepresentationComponent_OnAttach = 0x141AA6940 - ImageBase; // 48 89 54 24 10 55 53 56 57 41 56 41 57 48 8D AC 24 E8 FE FF FF 48 81 EC 18 02 00 00 45 33 F6, expected: 1, index: 0

constexpr uintptr_t TransactionSystem_IsSlotSpawning = 0x141AC45C0 - ImageBase; // 40 53 48 83 EC 30 49 8B D8 4C 8B C2 48 8D 54 24 20 E8 ? ? ? ? 48 8B 4C 24 20 48 85 C9 75 04 32 DB EB ? 48 8B D3 E8 ? ? ? ? 0F B6 D8, expected: 3, index: 1

constexpr uintptr_t TweakDB_Load = 0x140BE6B50 - ImageBase; // 48 89 5C 24 18 55 57 41 56 48 8B EC 48 83 EC 70 48 8B D9 45 33 F6 48 8D, expected: 1, index: 0
}
