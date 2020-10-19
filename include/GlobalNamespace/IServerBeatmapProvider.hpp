// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IServerBeatmapProvider
  class IServerBeatmapProvider : public System::IDisposable {
    public:
    // public System.Boolean VerifyBeatmapForConfiguration(BeatmapIdentifierNetSerializable beatmapId, GameplayServerConfiguration configuration)
    // Offset: 0xFFFFFFFF
    bool VerifyBeatmapForConfiguration(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayServerConfiguration configuration);
    // public BeatmapIdentifierNetSerializable SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks(System.Collections.Generic.Dictionary`2<System.String,BeatmapIdentifierNetSerializable> beatmapsSuggestedByPlayers, GameplayServerConfiguration configuration, System.Collections.Generic.Dictionary`2<System.String,SongPackMask> playerOwnedSongPacks)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapIdentifierNetSerializable* SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* beatmapsSuggestedByPlayers, GlobalNamespace::GameplayServerConfiguration configuration, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SongPackMask>* playerOwnedSongPacks);
  }; // IServerBeatmapProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerBeatmapProvider*, "", "IServerBeatmapProvider");
#pragma pack(pop)
