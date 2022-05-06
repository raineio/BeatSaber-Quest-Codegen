// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
NEED_NO_BOX(::Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/Valve.VR._SetWorkingSeatedZeroPoseToRawTrackingPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 108D5D8
  class IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x267DB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x267DB34
    void Invoke(ByRef<::Valve::VR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x267DD88
    ::System::IAsyncResult* BeginInvoke(ByRef<::Valve::VR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x267DE1C
    void EndInvoke(ByRef<::Valve::VR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/Valve.VR._SetWorkingSeatedZeroPoseToRawTrackingPose
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* pMatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMatSeatedZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::*)(ByRef<::Valve::VR::HmdMatrix34_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pMatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMatSeatedZeroPoseToRawTrackingPose, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::*)(ByRef<::Valve::VR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pMatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMatSeatedZeroPoseToRawTrackingPose, result});
  }
};
