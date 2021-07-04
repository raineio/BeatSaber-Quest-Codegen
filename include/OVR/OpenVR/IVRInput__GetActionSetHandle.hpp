// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetActionSetHandle
  // [UnmanagedFunctionPointerAttribute] Offset: DCE7DC
  class IVRInput::_GetActionSetHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetActionSetHandle
    _GetActionSetHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE8004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetActionSetHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetActionSetHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetActionSetHandle*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionSetName, ref System.UInt64 pHandle)
    // Offset: 0x1EE8014
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionSetName, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchActionSetName, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE8404
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionSetName, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x1EE84A0
    OVR::OpenVR::EVRInputError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetActionSetHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionSetHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionSetHandle::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetActionSetHandle::*)(::Il2CppString*, uint64_t&)>(&OVR::OpenVR::IVRInput::_GetActionSetHandle::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetActionSetHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint64_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionSetHandle::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetActionSetHandle::*)(::Il2CppString*, uint64_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetActionSetHandle::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetActionSetHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint64_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionSetHandle::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetActionSetHandle::*)(uint64_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetActionSetHandle::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetActionSetHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
