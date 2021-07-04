// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
  // [UnmanagedFunctionPointerAttribute] Offset: DCD314
  class IVRSystem::_GetMatrix34TrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetMatrix34TrackedDeviceProperty
    _GetMatrix34TrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B16CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetMatrix34TrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetMatrix34TrackedDeviceProperty*, creationType>(object, method)));
    }
    // public OVR.OpenVR.HmdMatrix34_t Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0x20B16DC
    OVR::OpenVR::HmdMatrix34_t Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B19BC
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix34_t EndInvoke(ref OVR.OpenVR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x20B1A90
    OVR::OpenVR::HmdMatrix34_t EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, OVR::OpenVR::ETrackedPropertyError&)>(&OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedDeviceProperty>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, OVR::OpenVR::ETrackedPropertyError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedDeviceProperty>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::*)(OVR::OpenVR::ETrackedPropertyError&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
