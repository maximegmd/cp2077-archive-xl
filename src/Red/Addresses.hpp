#pragma once

// Generated by cp77ida.py on 2024-01-31 for Cyberpunk 2077 v.2.11
// DO NOT MODIFY. USE tools\ida\scan.py TO GENERATE THIS FILE.

#include <cstdint>

namespace Red::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t Main = 0x1406A4828 - ImageBase; // 40 55 53 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? FF 15 ? ? ? ? E8, expected: 1, index: 0

constexpr uintptr_t AnimatedComponent_InitializeAnimations = 0x1404DC194 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89  7C 24 20 55 48 8B EC 48 83 EC 50 48 8B D9 48 8D 05 ? ? ? ? 33 C9, expected: 1, index: 0

constexpr uintptr_t AppearanceChanger_ComputePlayerGarment = 0x140AC44C8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 4C 8B F1 49 8B D9 48 8D 4D ? 49 8B F8  48 8B F2 E8, expected: 1, index: 0
constexpr uintptr_t AppearanceChanger_GetBaseMeshOffset = 0x14045AA68 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 48 8D 05 ? ? ? ? 4C 8B FA 48 8B 11 48 89 45 ?, expected: 1, index: 0
constexpr uintptr_t AppearanceChanger_GetSuffixValue = 0x1407793E8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 4C 89 48 ? 55 57 41 54 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 33 F6 4D 8B F0 4C 8B F9 48 85 D2, expected: 1, index: 0
constexpr uintptr_t AppearanceChanger_RegisterPart = 0x140416D58 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 41 57 48 83 EC ? 48 8D 99 ? ? ? ? 48 8B F9 48 8B CB 4D 8B F1 4D 8B F8 48 8B F2 E8, expected: 1, index: 0
constexpr uintptr_t AppearanceChanger_SelectAppearanceName = 0x1404B8D3C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 48 83 21 00 4D 8B F8 4C 8B 45 ? 49 8B F1 48 8B DA, expected: 1, index: 0

constexpr uintptr_t AppearanceChangeSystem_ChangeAppearance = 0x140805DC8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 54 41 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B 42 ? 4C 8B EA 4C 8B F1, expected: 1, index: 0

constexpr uintptr_t AppearanceNameVisualTagsPreset_GetVisualTags = 0x1402BD704 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 50 ? 57 48 83 EC ? 49 8B D8 48 8D 50 ? 4C 8D 40 ? 48 83 C1 ? 49 8B F9 E8 ? ? ? ? 48 8B 4C 24, expected: 1, index: 0

constexpr uintptr_t AppearanceResource_FindAppearanceDefinition = 0x14076FCE4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 48 8D B9 ? ? ? ? 48 8B F1 48 8B CF 45 8B F9 49 8B D8 4C 8B F2 E8, expected: 1, index: 0

constexpr uintptr_t AttachmentSlots_InitializeSlots = 0x1402BF4B4 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 83 7A ? ? 48 8B DA 0F 84, expected: 1, index: 0
constexpr uintptr_t AttachmentSlots_IsSlotEmpty = 0x1404BC1D0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8D B9 ? ? ? ? 48 8B F1 48 8B CF 48 8B DA E8 ? ? ? ? 48 8B D3 48 8B CE E8 ? ? ? ? 33 ? 48 85 C0 74, expected: 3, index: 0
constexpr uintptr_t AttachmentSlots_IsSlotSpawning = 0x1404BFE54 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8D B9 ? ? ? ? 48 8B F1 48 8B CF 48 8B DA E8 ? ? ? ? 48 8B D3 48 8B CE E8 ? ? ? ? 33 ? 48 85 C0 74, expected: 3, index: 1

constexpr uintptr_t CBaseEngine_LoadGatheredResources = 0x14071DB7C - ImageBase; // 48 83 EC ? 48 8B 01 FF 90 ? ? ? ? 33 C9 84 C0 0F 95 C1 E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? B0 01 48 83 C4 ? C3, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationFeetController_CheckState = 0x1404BBF24 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 48 8B 41 ? 48 8B D9 48 8B F2 4D 8B F0 48 8B 15, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationGenitalsController_OnAttach = 0x14178AB60 - ImageBase; // F6 05 ? ? ? ? 01 0F 85 ? ? ? ? E9, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationGenitalsController_CheckState = 0x1404BD764 - ImageBase; // 4C 89 44 24 ? 48 89 54 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 01 48 8B FA 45, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationHairstyleController_OnDetach = 0x1411B6A1C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 78 ? 4C 89 70 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B FA 48 8B D9 48 81 C1 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationHairstyleController_CheckState = 0x1404BDBD0 - ImageBase; // 48 89 54 24 ? 48 89 4C 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 41 ? 48 8B D9, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationHelper_GetHairColor = 0x140293620 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 48 83 EC ? 48 8B F1 48 8B 0A 49 8D 53 ? 48 8B 01 FF 90, expected: 1, index: 0

constexpr uintptr_t CharacterCustomizationSystem_Initialize = 0x14276F15C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC ? 4C 8B E2 4D 8B F1 48 8D 55, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_Uninitialize = 0x14276E928 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8D 91 ? ? ? ? 48 8D 4C 24 ? E8 ? ? ? ? 48 8B CB E8 ? ? ? ? B2 01 48 8B CB E8, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_EnsureState = 0x14029379C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 4C 8B F1 48 8B F2 48 8B 0A, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeAppOption = 0x14276B91C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 83 EC ? 48 8B F1 44 8B E2 49 8B 08 48 8D 55, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeMorphOption = 0x14276BD0C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 4C 8B E9 48 8B DA, expected: 1, index: 0
constexpr uintptr_t CharacterCustomizationSystem_InitializeSwitcherOption = 0x14276C5BC - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 40 ? 55 41 54 41 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F1, expected: 1, index: 0

constexpr uintptr_t CMesh_GetAppearance = 0x1403A754C - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 83 38 00 74 ? 48 83 C4 ? 5B C3, expected: 1, index: 0

constexpr uintptr_t Entity_ReassembleAppearance = 0x140C538B4 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 4C 8B F2 49 8B F9 48, expected: 1, index: 0

constexpr uintptr_t EntityTemplate_FindAppearance = 0x14076E7C8 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 85 D2 74 ? 48 3B 15 ? ? ? ? 75 ? 48 8B 51 ? 48 3B 15 ? ? ? ? 74, expected: 1, index: 0

constexpr uintptr_t FactoryIndex_LoadFactoryAsync = 0x1408055C8 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 81 EC ? ? ? ? 48 83 65 ? 00 49 8B F8 83 65 ? 00 4C 8D 45 ? 48 83 65 ? 00, expected: 1, index: 0
constexpr uintptr_t FactoryIndex_ResolveResource = 0x141FE2EEC - ImageBase; // 40 53 48 83 EC ? 48 8B DA 48 8D 54 24 ? E8 ? ? ? ? 48 8B 08 48 8B C3 48 89 0B 48 83 C4 ? 5B C3, expected: 1, index: 0

constexpr uintptr_t GameApplication_InitResourceDepot = 0x140520518 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 44 8B 82 ? ? ? ? 45 33 F6, expected: 1, index: 0

constexpr uintptr_t GarmentAssembler_FindState = 0x140903100 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 83 EC ? 48 8B FA 48 8B D9 33 F6 48 8D 4C 24, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_RemoveItem = 0x140BA9128 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 49 8B F8 4C 8B C2 48 8D 54 24 20 E8 ? ? ? ? 44 8B 47, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_ProcessGarment = 0x140AC341C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 57 48 83 EC ? 49 8B D9 49 8B F8 48 8B F2 48 8B E9 45 33 C9 48 8D 48 ? 41 B0 ? 33 D2, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_ProcessSkinnedMesh = 0x1407F4800 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 57 41 56 41 57 48 81 EC ? ? ? ? 8B FA 4C 8B F1 49 8B 11 48 8D 48 ? 48 83 C2 ? 4D 8B F8, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_ProcessMorphedMesh = 0x1407F3F18 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 60 ? 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 49 8B 19 4C 8B F9 4D 8B E0 8B FA 48 8B 4B, expected: 1, index: 0
constexpr uintptr_t GarmentAssembler_OnGameDetach = 0x14087B89C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F1 E8 ? ? ? ? 48 8D 8E ? ? ? ? E8, expected: 1, index: 0

constexpr uintptr_t GarmentAssemblerState_AddItem = 0x140AC3A24 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 48 83 EC ? 48 8B 02 48 8B F2, expected: 2, index: 0
constexpr uintptr_t GarmentAssemblerState_AddCustomItem = 0x1413436F0 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 48 83 EC ? 48 8B 02 48 8B F2, expected: 2, index: 1
constexpr uintptr_t GarmentAssemblerState_ChangeItem = 0x140AC30B0 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 44 8B 42 ? 48 8B FA, expected: 2, index: 0
constexpr uintptr_t GarmentAssemblerState_ChangeCustomItem = 0x14134364C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 44 8B 42 ? 48 8B FA, expected: 2, index: 1

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x141B4B7B0 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B F9 48 8B DA 48 8B 49 ? 48 81 C1 ? ? ? ? E8 ? ? ? ? 48 8B 13, expected: 1, index: 0

constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x140F90DF8 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 49 8B D9 48 8D 54 24 ? E8 ? ? ? ? 48 8B 4C 24 ? 48 85 C9 74 ? 45 33 C9 4C 8B C3 48 8B D7 E8, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x14076FF2C - ImageBase; // 48 83 EC ? 4C 8B D2 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 45 8A C1 49 8B D2 48 8B C8 E8 ? ? ? ? B0 01 48 83 C4 ? C3, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x1409D2A78 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 49 8B D9 48 8D 54 24 ? E8 ? ? ? ? 48 8B 4C 24 ? 48 85 C9 74 ? 4C 8B C3 48 8B D7 E8, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x14076FF58 - ImageBase; // 40 53 48 83 EC 20 48 8B DA 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 48 8B D3 48 8B C8 E8 ? ? ? ? 48 8B C3, expected: 1, index: 0

constexpr uintptr_t ItemFactoryAppearanceChangeRequest_LoadTemplate = 0x1412ACDB8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 33 FF 48 8D B1 ? ? ? ? 48 8B D9 48, expected: 1, index: 0
constexpr uintptr_t ItemFactoryAppearanceChangeRequest_LoadAppearance = 0x14121D340 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? 48 8B F1 33 FF 48 8B 49 ? 48 89 4D, expected: 1, index: 0

constexpr uintptr_t ItemFactoryRequest_LoadAppearance = 0x14067DDAC - ImageBase; // 48 89 5C 24 ? 55 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B D9 33 FF 48 8B 49 ? 48 89 4C 24 ? 48 8B 43 ? 48 89 44 24, expected: 1, index: 0

constexpr uintptr_t JobHandle_Wait = 0x140456ABC - ImageBase; // 48 8B 11 41 83 C9 FF 48 8B 0D ? ? ? ? 45 33 C0 E9, expected: 1, index: 0

constexpr uintptr_t JournalManager_LoadJournal = 0x1409DB4AC - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B F9 E8 ? ? ? ? 48 8D 57, expected: 1, index: 0
constexpr uintptr_t JournalManager_TrackQuest = 0x140340954 - ImageBase; // 40 55 53 56 57 41 54 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B F1 33 FF 48 8B CA 44 0F B6 FF 4C 8B F2 E8, expected: 1, index: 0

constexpr uintptr_t JournalRootFolderEntry_Initialize = 0x1409D9FE8 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4D 8B C1 49 8B F1 48 8B DA 48 8B F9 E8 ? ? ? ? 4C 8B C6 48 8B D3, expected: 1, index: 0

constexpr uintptr_t JournalTree_ProcessJournalIndex = 0x141C8CCA0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 33 E4 C7 44 24 ? FF FF FF FF, expected: 1, index: 0

constexpr uintptr_t Localization_LoadOnScreens = 0x1406A3438 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 0F 57 C0 48 8B D9 F3 0F 7F 45 ? 48 85 D2 0F 84, expected: 1, index: 0
constexpr uintptr_t Localization_LoadSubtitles = 0x1406A32BC - ImageBase; // 48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 0F 57 C0 48 8B D9 F3 0F 7F 45 ? 48 85 D2 0F 84 ? ? ? ? 48 8B 0D, expected: 1, index: 0
constexpr uintptr_t Localization_LoadVoiceOvers = 0x141B384E0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 48 89 54 24 ? 55 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC, expected: 1, index: 0
constexpr uintptr_t Localization_LoadLipsyncs = 0x14049EC18 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 8A DA 48 8B F9 48 8B 15 ? ? ? ? 48 8D 4C 24 ? 48 81 C2 ? ? ? ? E8 ? ? ? ? 48 8D 54 24, expected: 1, index: 0

constexpr uintptr_t MappinSystem_GetMappinData = 0x140512548 - ImageBase; // 48 8B 41 ? 48 85 C0 74 ? 44 8B 40 4C 48 8B 48 40 49 C1 E0 05 4C 03 C1 49 3B C8 74, expected: 2, index: 0
constexpr uintptr_t MappinSystem_GetPoiData = 0x140950A28 - ImageBase; // 48 8B 41 ? 48 85 C0 74 ? 44 8B 40 4C 48 8B 48 40 49 C1 E0 05 4C 03 C1 49 3B C8 74, expected: 2, index: 1
constexpr uintptr_t MappinSystem_OnStreamingWorldLoaded = 0x14098C004 - ImageBase; // 48 89 5C 24 ? 55 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 82 ? ? ? ? 48 8B D9, expected: 1, index: 0

constexpr uintptr_t MeshAppearance_LoadMaterialSetupAsync = 0x1403A7EBC - ImageBase; // 48 89 5C 24 ? 55 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 65 48 8B 04 25 ? ? ? ? 48 8B D9 B9 ? ? ? ? 0F 57 C0, expected: 1, index: 0

constexpr uintptr_t QuestLoader_ProcessPhaseResource = 0x1401A4A34 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 54 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 59 ? 48 8B F9 48 8B CB 4D 8B F0 E8, expected: 1, index: 0

constexpr uintptr_t ResourceDepot_InitializeArchives = 0x1405EF65C - ImageBase; // 48 89 5C 24 ? 55 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B F1 48 8D 91 ? ? ? ? 48 8D 4D ? E8 ? ? ? ? 48 8D 7E, expected: 1, index: 0
constexpr uintptr_t ResourceDepot_LoadArchives = 0x1405F14CC - ImageBase; // 4C 89 4C 24 ? 48 89 4C 24 ? 55 53 56 57 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 8B 78 ? 41 83 CE FF, expected: 1, index: 0

constexpr uintptr_t ResourceLoader_OnUpdate = 0x14045A404 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 33 F6 4C 8B F1, expected: 1, index: 0

constexpr uintptr_t ResourcePath_Create = 0x14013087C - ImageBase; // 40 53 48 81 EC ? ? ? ? 83 7A 08 00 48 8B D9 74 ? F2 0F 10 02 48 8D 4C 24 ? 8B 42 08 48 8D 54 24 ? F2 0F 11 44 24, expected: 1, index: 0

constexpr uintptr_t StreamingSector_OnReady = 0x1404588C4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 91 ? ? ? ? 33 FF 48 8B D9, expected: 1, index: 0

constexpr uintptr_t StreamingWorld_OnLoad = 0x14108B200 - ImageBase; // 48 89 5C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC ? 4C 8B F2 48 8B F9 E8 ? ? ? ? 41 F6 46 08 02 4C 8D A7, expected: 1, index: 0

constexpr uintptr_t TPPRepresentationComponent_OnAttach = 0x1408E20A4 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 66 83 89 ? ? ? ? 02 48 8B DA 48 8B F1 E8, expected: 1, index: 0
constexpr uintptr_t TPPRepresentationComponent_OnItemEquipped = 0x1404BB850 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 48 8B F1 49 8B D8 49 8B C8 48 8B FA E8, expected: 1, index: 0
constexpr uintptr_t TPPRepresentationComponent_OnItemUnequipped = 0x1413703E4 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 4C 89 40 ? 48 89 50 ? 57 48 83 EC ? 48 8B F1 49 8B D8 49 8B C8 48 8B FA E8, expected: 1, index: 0
constexpr uintptr_t TPPRepresentationComponent_RegisterAffectedItem = 0x1408E0148 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8D B9 ? ? ? ? 48 8B E9 48 8B CF 49 8B F0 48 8B DA E8 ? ? ? ? 0F 57 C0 48 89 5C 24 ? 48 8B D6 48 8D 4C 24, expected: 1, index: 0
constexpr uintptr_t TPPRepresentationComponent_IsAffectedSlot = 0x1404BB7BC - ImageBase; // 48 89 4C 24 ? 48 8D 15 ? ? ? ? 48 8B 02 3B C1 75 ? 48 C1 E8 ? 3A 44 24 ? 74, expected: 1, index: 0

constexpr uintptr_t TweakDB_Load = 0x140528F6C - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 ? EC ? ? ? ? 48 8B F9 48 8B DA 48 8B 0D, expected: 1, index: 0
}
