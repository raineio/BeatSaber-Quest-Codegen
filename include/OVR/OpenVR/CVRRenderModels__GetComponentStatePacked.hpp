// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.CVRRenderModels
#include "OVR/OpenVR/CVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRRenderModels/OVR.OpenVR._GetComponentStatePacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1089520
  class CVRRenderModels::_GetComponentStatePacked : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A9A17C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels::_GetComponentStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x1A99C1C
    bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A9A18C
    ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x1A9A27C
    bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRRenderModels/OVR.OpenVR._GetComponentStatePacked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pState, pComponentState, result});
  }
};
