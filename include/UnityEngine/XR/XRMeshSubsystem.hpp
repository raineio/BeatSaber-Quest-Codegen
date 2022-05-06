// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
// Including type: UnityEngine.XR.MeshGenerationResult
#include "UnityEngine/XR/MeshGenerationResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystemDescriptor
  class XRMeshSubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystem
  class XRMeshSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRMeshSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 106D658
  // [NativeHeaderAttribute] Offset: 106D658
  // [NativeHeaderAttribute] Offset: 106D658
  // [NativeConditionalAttribute] Offset: 106D658
  class XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRMeshSubsystemDescriptor*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2ADAFF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRMeshSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::XRMeshSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRMeshSubsystem*, creationType>()));
    }
    // private System.Void InvokeMeshReadyDelegate(UnityEngine.XR.MeshGenerationResult result, System.Action`1<UnityEngine.XR.MeshGenerationResult> onMeshGenerationComplete)
    // Offset: 0x2ADAF6C
    void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);
  }; // UnityEngine.XR.XRMeshSubsystem
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRMeshSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate
// Il2CppName: InvokeMeshReadyDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRMeshSubsystem::*)(::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*)>(&UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "MeshGenerationResult")->byval_arg;
    static auto* onMeshGenerationComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "MeshGenerationResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRMeshSubsystem*), "InvokeMeshReadyDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, onMeshGenerationComplete});
  }
};
