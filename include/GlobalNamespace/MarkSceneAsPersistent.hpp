// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MarkSceneAsPersistent
  // [TokenAttribute] Offset: FFFFFFFF
  class MarkSceneAsPersistent : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [InjectAttribute] Offset: 0xEC9A90
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // protected System.Void Awake()
    // Offset: 0x13874A0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x13874F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarkSceneAsPersistent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MarkSceneAsPersistent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarkSceneAsPersistent*, creationType>()));
    }
  }; // MarkSceneAsPersistent
  #pragma pack(pop)
  static check_size<sizeof(MarkSceneAsPersistent), 24 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_MarkSceneAsPersistentSizeCheck;
  static_assert(sizeof(MarkSceneAsPersistent) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkSceneAsPersistent*, "", "MarkSceneAsPersistent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MarkSceneAsPersistent::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkSceneAsPersistent::*)()>(&GlobalNamespace::MarkSceneAsPersistent::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarkSceneAsPersistent*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarkSceneAsPersistent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
