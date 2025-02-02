// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4OnGoingToBackgroundSaveHandler
  class PS4OnGoingToBackgroundSaveHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*, "", "PS4OnGoingToBackgroundSaveHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PS4OnGoingToBackgroundSaveHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4OnGoingToBackgroundSaveHandler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LocalLeaderboardsModel _localLeaderboardModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LocalLeaderboardsModel* localLeaderboardModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0x111C368
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LocalLeaderboardsModel _localLeaderboardModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocalLeaderboardsModel*& dyn__localLeaderboardModel();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // public System.Void .ctor()
    // Offset: 0x138949C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4OnGoingToBackgroundSaveHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4OnGoingToBackgroundSaveHandler*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x1389270
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1389358
    void OnDisable();
    // private System.Void HandlePS4HelperDidGoToBackgroundExecution()
    // Offset: 0x1389450
    void HandlePS4HelperDidGoToBackgroundExecution();
  }; // PS4OnGoingToBackgroundSaveHandler
  #pragma pack(pop)
  static check_size<sizeof(PS4OnGoingToBackgroundSaveHandler), 40 + sizeof(::GlobalNamespace::PlayerDataModel*)> __GlobalNamespace_PS4OnGoingToBackgroundSaveHandlerSizeCheck;
  static_assert(sizeof(PS4OnGoingToBackgroundSaveHandler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(&GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(&GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::HandlePS4HelperDidGoToBackgroundExecution
// Il2CppName: HandlePS4HelperDidGoToBackgroundExecution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(&GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::HandlePS4HelperDidGoToBackgroundExecution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*), "HandlePS4HelperDidGoToBackgroundExecution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
