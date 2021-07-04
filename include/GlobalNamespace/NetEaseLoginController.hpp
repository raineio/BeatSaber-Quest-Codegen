// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseLoginController
  class NetEaseLoginController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NetEaseLoginController::$Start$d__3
    class $Start$d__3;
    // Nested type: GlobalNamespace::NetEaseLoginController::$LoginAsync$d__4
    struct $LoginAsync$d__4;
    // private MenuScenesTransitionSetupDataSO _arcadeMenuTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuScenesTransitionSetupDataSO* arcadeMenuTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE13CC8
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE13CD8
    // private NetEaseManager _netEaseManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetEaseManager* netEaseManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // Creating value type constructor for type: NetEaseLoginController
    NetEaseLoginController(GlobalNamespace::MenuScenesTransitionSetupDataSO* arcadeMenuTransitionSetupData_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::NetEaseManager* netEaseManager_ = {}) noexcept : arcadeMenuTransitionSetupData{arcadeMenuTransitionSetupData_}, gameScenesManager{gameScenesManager_}, netEaseManager{netEaseManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1017C38
    System::Collections::IEnumerator* Start();
    // private System.Void LoginAsync()
    // Offset: 0x1017CD4
    void LoginAsync();
    // public System.Void .ctor()
    // Offset: 0x1017D94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseLoginController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseLoginController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseLoginController*, creationType>()));
    }
  }; // NetEaseLoginController
  #pragma pack(pop)
  static check_size<sizeof(NetEaseLoginController), 40 + sizeof(GlobalNamespace::NetEaseManager*)> __GlobalNamespace_NetEaseLoginControllerSizeCheck;
  static_assert(sizeof(NetEaseLoginController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLoginController*, "", "NetEaseLoginController");
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::NetEaseLoginController::*)()>(&GlobalNamespace::NetEaseLoginController::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLoginController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::LoginAsync
// Il2CppName: LoginAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLoginController::*)()>(&GlobalNamespace::NetEaseLoginController::LoginAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLoginController*), "LoginAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
