// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerOtherPlayersScoreDiffTextManager
  class MultiplayerOtherPlayersScoreDiffTextManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*, "", "MultiplayerOtherPlayersScoreDiffTextManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOtherPlayersScoreDiffTextManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerOtherPlayersScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c
    class $$c;
    public:
    // [InjectAttribute] Offset: 0x10DC5C8
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0x10DC5D8
    // private readonly MultiplayerPlayersManager _playersManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10DC5E8
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10DC5F8
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10DC608
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10DC618
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // private System.Single _timeToNextUpdate
    // Size: 0x4
    // Offset: 0x48
    float timeToNextUpdate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kUpdateInterval
    static constexpr const float kUpdateInterval = 0.5;
    // Get static field: static private System.Single kUpdateInterval
    static float _get_kUpdateInterval();
    // Set static field: static private System.Single kUpdateInterval
    static void _set_kUpdateInterval(float value);
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private readonly MultiplayerPlayersManager _playersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlayersManager*& dyn__playersManager();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly CoreGameHUDController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CoreGameHUDController::InitData*& dyn__initData();
    // Get instance field reference: private System.Single _timeToNextUpdate
    [[deprecated("Use field access instead!")]] float& dyn__timeToNextUpdate();
    // public System.Void .ctor()
    // Offset: 0x13B2C34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOtherPlayersScoreDiffTextManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOtherPlayersScoreDiffTextManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13B1B10
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13B1BD8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13B1CB4
    void Update();
    // private System.Void InitLeftRightPositions()
    // Offset: 0x13B2610
    void InitLeftRightPositions();
    // private System.Void HideAll()
    // Offset: 0x13B2074
    void HideAll();
    // private System.Void HandleStateChanged(MultiplayerController/State newState)
    // Offset: 0x13B2B14
    void HandleStateChanged(::GlobalNamespace::MultiplayerController::State newState);
  }; // MultiplayerOtherPlayersScoreDiffTextManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerOtherPlayersScoreDiffTextManager), 72 + sizeof(float)> __GlobalNamespace_MultiplayerOtherPlayersScoreDiffTextManagerSizeCheck;
  static_assert(sizeof(MultiplayerOtherPlayersScoreDiffTextManager) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions
// Il2CppName: InitLeftRightPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "InitLeftRightPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll
// Il2CppName: HideAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "HideAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)(::GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* newState = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newState});
  }
};
