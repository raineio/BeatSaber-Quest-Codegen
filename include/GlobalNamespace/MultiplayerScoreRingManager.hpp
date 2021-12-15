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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerScoreRingManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreRingManager*, "", "MultiplayerScoreRingManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7A
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreRingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreRingManager : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    // [InjectAttribute] Offset: 0xF3F3A0
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F3B0
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F3C0
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F3D0
    // private readonly BeatmapObjectSpawnCenter _spawnCenter
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectSpawnCenter* spawnCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F3E0
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F3F0
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F400
    // private readonly MultiplayerScoreRingItem/Pool _scoreRingItemPool
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MultiplayerScoreRingItem::Pool* scoreRingItemPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingItem::Pool*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreRingItem> _scoreRingItems
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreRingItem*>* scoreRingItems;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreRingItem*>*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _allActivePlayers
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* allActivePlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
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
    GlobalNamespace::MultiplayerScoreRingItem* firstPlayerItem;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingItem*) == 0x8);
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
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _delayBetweenScoreUpdates
    float& dyn__delayBetweenScoreUpdates();
    // Get instance field reference: private System.Single _centerDistanceOffset
    float& dyn__centerDistanceOffset();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    GlobalNamespace::MultiplayerPlayersManager*& dyn__multiplayerPlayersManager();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly BeatmapObjectSpawnCenter _spawnCenter
    GlobalNamespace::BeatmapObjectSpawnCenter*& dyn__spawnCenter();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly MultiplayerScoreRingItem/Pool _scoreRingItemPool
    GlobalNamespace::MultiplayerScoreRingItem::Pool*& dyn__scoreRingItemPool();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreRingItem> _scoreRingItems
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreRingItem*>*& dyn__scoreRingItems();
    // Get instance field reference: private System.Collections.Generic.List`1<IConnectedPlayer> _allActivePlayers
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*& dyn__allActivePlayers();
    // Get instance field reference: private System.Int32 _currentlyScoreUpdateIndex
    int& dyn__currentlyScoreUpdateIndex();
    // Get instance field reference: private System.Single _timeSinceLastScoreUpdate
    float& dyn__timeSinceLastScoreUpdate();
    // Get instance field reference: private MultiplayerScoreRingItem _firstPlayerItem
    GlobalNamespace::MultiplayerScoreRingItem*& dyn__firstPlayerItem();
    // Get instance field reference: private System.Boolean _spawnCenterDistanceFound
    bool& dyn__spawnCenterDistanceFound();
    // Get instance field reference: private System.Boolean _playersSpawned
    bool& dyn__playersSpawned();
    // protected System.Void Start()
    // Offset: 0x1178A24
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11790F4
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1179414
    void Update();
    // private System.Void UpdateScore(IConnectedPlayer playerToUpdate)
    // Offset: 0x11794F8
    void UpdateScore(GlobalNamespace::IConnectedPlayer* playerToUpdate);
    // public System.Void AnimateColorsForPlayer(System.String userId, UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11796DC
    void AnimateColorsForPlayer(::Il2CppString* userId, UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType);
    // public MultiplayerScoreRingItem GetScoreRingItem(System.String userId)
    // Offset: 0x1179848
    GlobalNamespace::MultiplayerScoreRingItem* GetScoreRingItem(::Il2CppString* userId);
    // public UnityEngine.GameObject[] GetScoreRingItems()
    // Offset: 0x1170474
    ::ArrayW<UnityEngine::GameObject*> GetScoreRingItems();
    // public System.Void AnimateColorsForAllPlayers(UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x1179938
    void AnimateColorsForAllPlayers(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType);
    // private System.Void SetPlayerToFailedState(IConnectedPlayer player)
    // Offset: 0x1179AB0
    void SetPlayerToFailedState(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void TrySpawnTexts()
    // Offset: 0x1179BC0
    void TrySpawnTexts();
    // private System.Void SpawnTexts()
    // Offset: 0x1179BD8
    void SpawnTexts();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x1178BE0
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single spawnCenterDistance)
    // Offset: 0x1178BB0
    void HandleSpawnCenterDistanceWasFound(float spawnCenterDistance);
    // private System.Void HandlePlayerSpawningDidFinish()
    // Offset: 0x1178BC8
    void HandlePlayerSpawningDidFinish();
    // private System.Void HandlePlayerStateChanged(IConnectedPlayer player)
    // Offset: 0x117A210
    void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x117A254
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x117A258
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreRingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreRingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreRingManager*, creationType>()));
    }
  }; // MultiplayerScoreRingManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreRingManager), 121 + sizeof(bool)> __GlobalNamespace_MultiplayerScoreRingManagerSizeCheck;
  static_assert(sizeof(MultiplayerScoreRingManager) == 0x7A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::UpdateScore)> {
  static const MethodInfo* get() {
    static auto* playerToUpdate = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "UpdateScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerToUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer
// Il2CppName: AnimateColorsForPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::Il2CppString*, UnityEngine::Color, UnityEngine::Color, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* scoreColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "AnimateColorsForPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, nameColor, scoreColor, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem
// Il2CppName: GetScoreRingItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerScoreRingItem* (GlobalNamespace::MultiplayerScoreRingManager::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "GetScoreRingItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems
// Il2CppName: GetScoreRingItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::GameObject*> (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "GetScoreRingItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers
// Il2CppName: AnimateColorsForAllPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(UnityEngine::Color, UnityEngine::Color, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers)> {
  static const MethodInfo* get() {
    static auto* nameColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* scoreColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "AnimateColorsForAllPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameColor, scoreColor, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState
// Il2CppName: SetPlayerToFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandlePlayerStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected
// Il2CppName: HandlePlayerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreRingManager*), "HandlePlayerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreRingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
