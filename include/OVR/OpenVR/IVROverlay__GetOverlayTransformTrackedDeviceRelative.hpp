// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceRelative");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTransformTrackedDeviceRelative
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1088B98
  class IVROverlay::_GetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x24C1B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformTrackedDeviceRelative* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformTrackedDeviceRelative*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref OVR.OpenVR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x24C1B7C
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref OVR.OpenVR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x24C1E18
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt32 punTrackedDevice, ref OVR.OpenVR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x24C1EEC
    ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTransformTrackedDeviceRelative
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ByRef<uint>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punTrackedDevice = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pmatTrackedDeviceToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ByRef<uint>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punTrackedDevice = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pmatTrackedDeviceToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::*)(ByRef<uint>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punTrackedDevice = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pmatTrackedDeviceToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result});
  }
};
