// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: DCE318
  class IVROverlay::_IsActiveDashboardOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsActiveDashboardOverlay
    _IsActiveDashboardOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EF59B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_IsActiveDashboardOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_IsActiveDashboardOverlay*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle)
    // Offset: 0x1EF59C8
    bool Invoke(uint64_t ulOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EF5C30
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EF5CBC
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_IsActiveDashboardOverlay");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::*)(uint64_t)>(&OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::*)(uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
