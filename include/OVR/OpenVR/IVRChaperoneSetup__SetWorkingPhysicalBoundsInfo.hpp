// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingPhysicalBoundsInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF218C
  class IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17E2CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount)
    // Offset: 0x17DAC40
    bool Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint unQuadsCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x17E2CC4
    System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint unQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x17E2D60
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingPhysicalBoundsInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::*)(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>, uint)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t"), 1)->this_arg;
    static auto* unQuadsCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer, unQuadsCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::*)(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t"), 1)->this_arg;
    static auto* unQuadsCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer, unQuadsCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
