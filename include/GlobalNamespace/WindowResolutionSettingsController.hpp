// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
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
  // Forward declaring type: Vector2IntSO
  class Vector2IntSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WindowResolutionSettingsController
  class WindowResolutionSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WindowResolutionSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: WindowResolutionSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class WindowResolutionSettingsController : public ::GlobalNamespace::ListSettingsController {
    public:
    public:
    // private Vector2IntSO _windowResolution
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::Vector2IntSO* windowResolution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector2IntSO*) == 0x8);
    // private UnityEngine.Vector2Int[] _windowResolutions
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector2Int> windowResolutions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2Int>) == 0x8);
    public:
    // Get instance field reference: private Vector2IntSO _windowResolution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector2IntSO*& dyn__windowResolution();
    // Get instance field reference: private UnityEngine.Vector2Int[] _windowResolutions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2Int>& dyn__windowResolutions();
    // public System.Void .ctor()
    // Offset: 0x1663718
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowResolutionSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WindowResolutionSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowResolutionSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1663308
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x166358C
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1663618
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::StringW TextForValue(int idx);
  }; // WindowResolutionSettingsController
  #pragma pack(pop)
  static check_size<sizeof(WindowResolutionSettingsController), 48 + sizeof(::ArrayW<::UnityEngine::Vector2Int>)> __GlobalNamespace_WindowResolutionSettingsControllerSizeCheck;
  static_assert(sizeof(WindowResolutionSettingsController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::WindowResolutionSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::WindowResolutionSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WindowResolutionSettingsController::*)(int)>(&GlobalNamespace::WindowResolutionSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::WindowResolutionSettingsController::*)(int)>(&GlobalNamespace::WindowResolutionSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
