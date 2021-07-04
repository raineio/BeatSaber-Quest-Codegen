// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: WindowResolutionSettingsController
  class WindowResolutionSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private Vector2IntSO _windowResolution
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::Vector2IntSO* windowResolution;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector2IntSO*) == 0x8);
    // private UnityEngine.Vector2Int[] _windowResolutions
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector2Int>* windowResolutions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector2Int>*) == 0x8);
    // Creating value type constructor for type: WindowResolutionSettingsController
    WindowResolutionSettingsController(GlobalNamespace::Vector2IntSO* windowResolution_ = {}, ::Array<UnityEngine::Vector2Int>* windowResolutions_ = {}) noexcept : windowResolution{windowResolution_}, windowResolutions{windowResolutions_} {}
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1DB353C
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1DB37C0
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1DB384C
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x1DB394C
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowResolutionSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WindowResolutionSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowResolutionSettingsController*, creationType>()));
    }
  }; // WindowResolutionSettingsController
  #pragma pack(pop)
  static check_size<sizeof(WindowResolutionSettingsController), 48 + sizeof(::Array<UnityEngine::Vector2Int>*)> __GlobalNamespace_WindowResolutionSettingsControllerSizeCheck;
  static_assert(sizeof(WindowResolutionSettingsController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::WindowResolutionSettingsController::*)(int&, int&)>(&GlobalNamespace::WindowResolutionSettingsController::GetInitValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WindowResolutionSettingsController::*)(int)>(&GlobalNamespace::WindowResolutionSettingsController::ApplyValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::WindowResolutionSettingsController::*)(int)>(&GlobalNamespace::WindowResolutionSettingsController::TextForValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindowResolutionSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindowResolutionSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
