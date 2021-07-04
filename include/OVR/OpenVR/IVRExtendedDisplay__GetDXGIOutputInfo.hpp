// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DCD4E0
  class IVRExtendedDisplay::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDXGIOutputInfo
    _GetDXGIOutputInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE5474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetDXGIOutputInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1EE5484
    void Invoke(int& pnAdapterIndex, int& pnAdapterOutputIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE56F0
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.IAsyncResult result)
    // Offset: 0x1EE579C
    void EndInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*, "OVR.OpenVR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&)>(&OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&, System::IAsyncResult*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
