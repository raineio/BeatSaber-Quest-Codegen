// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerScoreRingItem
#include "GlobalNamespace/MultiplayerScoreRingItem.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingManager*, "", "MultiplayerScoreRingManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7A
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreRingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreRingManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _delayBetweenScoreUpdates
    // Size: 0x4
    // Offset: 0x18
    float delayBetweenScoreUpdates;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _centerDistanceOffset
    // Size: 0x4
    // Offset: 0x1C
    float centerDistanceOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x10DCEE4
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCEF4
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCF04
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCF14
    // private readonly BeatmapObjectSpawnCenter _spawnCenter
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BeatmapObjectSpawnCenter* spawnCenter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCF24
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCF34
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10DCF44
    // private readonly MultiplayerScoreRingItem/Pool _scoreRingItemPool
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MultiplayerScoreRingItem::Pool* scoreRingItemPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreRingItem::Pool*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreRingItem> _scoreRingItems
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>* scoreRingItems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _allActivePlayers
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* allActivePlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Int32 _currentlyScoreUpdateIndex
    // Size: 0x4
    // Offset: 0x68
    int currentlyScoreUpdateIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _timeSinceLastScoreUpdate
    // Size: 0x4
    // Offset: 0x6C
    float timeSinceLastScoreUpdate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MultiplayerScoreRingItem _firstPlayerItem
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::MultiplayerScoreRingItem* firstPlayerItem;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreRingItem*) == 0x8);
    // private System.Boolean _spawnCenterDistanceFound
    // Size: 0x1
    // Offset: 0x78
    bool spawnCenterDistanceFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _playersSpawned
    // Size: 0x1
    // Offset: 0x79
    bool playersSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _delayBetweenScoreUpdates
    [[deprecated("Use field access instead!")]] float& dyn__delayBetweenScoreUpdates();
    // Get instance field reference: private System.Single _centerDistanceOffset
    [[deprecated("Use field access instead!")]] float& dyn__centerDistanceOffset();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlayersManager*& dyn__multiplayerPlayersManager();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly BeatmapObjectSpawnCenter _spawnCenter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectSpawnCenter*& dyn__spawnCenter();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly MultiplayerScoreRingItem/Pool _scoreRingItemPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreRingItem::Pool*& dyn__scoreRingItemPool();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreRingItem> _scoreRingItems
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*& dyn__scoreRingItems();
    // Get instance field reference: private System.Collections.Generic.List`1<IConnectedPlayer> _allActivePlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& dyn__allActivePlayers();
    // Get instance field reference: private System.Int32 _currentlyScoreUpdateIndex
    [[deprecated("Use field access instead!")]] int& dyn__currentlyScoreUpdateIndex();
    // Get instance field reference: private System.Single _timeSinceLastScoreUpdate
    [[deprecated("Use field access instead!")]] float& dyn__timeSinceLastScoreUpdate();
    // Get instance field reference: private MultiplayerScoreRingItem _firstPlayerItem
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreRingItem*& dyn__firstPlayerItem();
    // Get instance field reference: private System.Boolean _spawnCenterDistanceFound
    [[deprecated("Use field access instead!")]] bool& dyn__spawnCenterDistanceFound();
    // Get instance field reference: private System.Boolean _playersSpawned
    [[deprecated("Use field access instead!")]] bool& dyn__playersSpawned();
    // public System.Void .ctor()
    // Offset: 0x13BDBF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreRingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreRingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreRingManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13BC400
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13BCAB0
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13BCDD0
    void Update();
    // private System.Void UpdateScore(IConnectedPlayer playerToUpdate)
    // Offset: 0x13BCEB4
    void UpdateScore(::GlobalNamespace::IConnectedPlayer* playerToUpdate);
    // public System.Void AnimateColorsForPlayer(System.String userId, UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, EaseType easeType)
    // Offset: 0x13BD098
    void AnimateColorsForPlayer(::StringW userId, ::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float duration, ::GlobalNamespace::EaseType easeType);
    // public MultiplayerScoreRingItem GetScoreRingItem(System.String userId)
    // Offset: 0x13BD204
    ::GlobalNamespace::MultiplayerScoreRingItem* GetScoreRingItem(::StringW userId);
    // public UnityEngine.GameObject[] GetScoreRingItems()
    // Offset: 0x13B3E9C
    ::ArrayW<::UnityEngine::GameObject*> GetScoreRingItems();
    // public System.Void AnimateColorsForAllPlayers(UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, EaseType easeType)
    // Offset: 0x13BD2F4
    void AnimateColorsForAllPlayers(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float duration, ::GlobalNamespace::EaseType easeType);
    // private System.Void SetPlayerToFailedState(IConnectedPlayer player)
    // Offset: 0x13BD46C
    void SetPlayerToFailedState(::GlobalNamespace::IConnectedPlayer* player);
    // private System.Void TrySpawnTexts()
    // Offset: 0x13BD57C
    void TrySpawnTexts();
    // private System.Void SpawnTexts()
    // Offset: 0x13BD594
    void SpawnTexts();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x13BC5BC
    void HandleStateChanged(::GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single spawnCenterDistance)
    // Offset: 0x13BC58C
    void HandleSpawnCenterDistanceWasFound(float spawnCenterDistance);
    // private System.Void HandlePlayerSpawningDidFinish()
    // Offset: 0x13BC5A4
    void HandlePlayerSpawningDidFinish();
    // private System.Void HandlePlayerStateChanged(IConnectedPlayer player)
    // Offset: 0x13BDBAC
    void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x13BDBF0
    void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);
  }; // MultiplayerScoreRingManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreRingManager), 121 + sizeof(bool)> __GlobalNamespace_MultiplayerScoreRingManagerSizeCheck;
  static_assert(sizeof(MultiplayerScoreRingManager) == 0x7A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::UpdateScore
// Il2CppName: UpdateScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::UpdateScore)> {
  static const MethodInfo* get() {
    static auto* playerToUpdate = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "UpdateScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerToUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer
// Il2CppName: AnimateColorsForPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW, ::UnityEngine::Color, ::UnityEngine::Color, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* scoreColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "AnimateColorsForPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, nameColor, scoreColor, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem
// Il2CppName: GetScoreRingItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerScoreRingItem* (GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW)>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "GetScoreRingItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems
// Il2CppName: GetScoreRingItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "GetScoreRingItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers
// Il2CppName: AnimateColorsForAllPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::UnityEngine::Color, ::UnityEngine::Color, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers)> {
  static const MethodInfo* get() {
    static auto* nameColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* scoreColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "AnimateColorsForAllPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameColor, scoreColor, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState
// Il2CppName: SetPlayerToFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "SetPlayerToFailedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts
// Il2CppName: TrySpawnTexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "TrySpawnTexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts
// Il2CppName: SpawnTexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "SpawnTexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound
// Il2CppName: HandleSpawnCenterDistanceWasFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(float)>(&GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound)> {
  static const MethodInfo* get() {
    static auto* spawnCenterDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandleSpawnCenterDistanceWasFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spawnCenterDistance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish
// Il2CppName: HandlePlayerSpawningDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandlePlayerSpawningDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged
// Il2CppName: HandlePlayerStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandlePlayerStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected
// Il2CppName: HandlePlayerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandlePlayerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
