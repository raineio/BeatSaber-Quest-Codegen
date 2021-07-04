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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_PollNextEventWithPose
  // [UnmanagedFunctionPointerAttribute] Offset: DCD378
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEventWithPose
    _PollNextEventWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B5CE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEventWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_PollNextEventWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEventWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x20B5CF4
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B5FD0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t pEvent, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x20B60C0
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_PollNextEventWithPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::VREvent_t&, uint, OVR::OpenVR::TrackedDevicePose_t&)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VREvent_t&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::TrackedDevicePose_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::VREvent_t&, uint, OVR::OpenVR::TrackedDevicePose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VREvent_t&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::TrackedDevicePose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEventWithPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEventWithPose::*)(OVR::OpenVR::VREvent_t&, OVR::OpenVR::TrackedDevicePose_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_PollNextEventWithPose::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VREvent_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::TrackedDevicePose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
