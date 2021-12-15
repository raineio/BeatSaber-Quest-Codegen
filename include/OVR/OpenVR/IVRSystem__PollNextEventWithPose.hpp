// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRSystem::_PollNextEventWithPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEventWithPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF1AD4
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x232F808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEventWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_PollNextEventWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEventWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x232F818
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x232FAF4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t pEvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x232FBE4
    bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEventWithPose
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(OVR::OpenVR::ETrackingUniverseOrigin, ByRef<OVR::OpenVR::VREvent_t>, uint, ByRef<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, pEvent, uncbVREvent, pTrackedDevicePose});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(OVR::OpenVR::ETrackingUniverseOrigin, ByRef<OVR::OpenVR::VREvent_t>, uint, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(ByRef<OVR::OpenVR::VREvent_t>, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, pTrackedDevicePose, result});
  }
};
