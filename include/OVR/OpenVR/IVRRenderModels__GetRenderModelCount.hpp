// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetRenderModelCount
  // [UnmanagedFunctionPointerAttribute] Offset: DCE4E4
  class IVRRenderModels::_GetRenderModelCount : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRenderModelCount
    _GetRenderModelCount() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A3CAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetRenderModelCount* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetRenderModelCount*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke()
    // Offset: 0x20A3CBC
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A3ED0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x20A3EFC
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetRenderModelCount
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelCount*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelCount");
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::*)()>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelCount*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelCount*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelCount::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelCount*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
