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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: _GetOverlayTransformAbsolute
  class _GetOverlayTransformAbsolute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformAbsolute");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTransformAbsolute
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF27E0
  class IVROverlay::_GetOverlayTransformAbsolute : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21892F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformAbsolute* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformAbsolute*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.ETrackingUniverseOrigin peTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x2189300
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.ETrackingUniverseOrigin peTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x218959C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.ETrackingUniverseOrigin peTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x2189670
    OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTransformAbsolute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::*)(uint64_t, ByRef<OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* peTrackingOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->this_arg;
    static auto* pmatTrackingOriginToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::*)(uint64_t, ByRef<OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<OVR::OpenVR::HmdMatrix34_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* peTrackingOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->this_arg;
    static auto* pmatTrackingOriginToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::*)(ByRef<OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<OVR::OpenVR::HmdMatrix34_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peTrackingOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->this_arg;
    static auto* pmatTrackingOriginToOverlayTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result});
  }
};
