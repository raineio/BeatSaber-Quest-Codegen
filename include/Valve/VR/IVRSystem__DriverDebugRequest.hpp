// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_DriverDebugRequest);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_DriverDebugRequest*, "Valve.VR", "IVRSystem/_DriverDebugRequest");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._DriverDebugRequest
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D4DD8
  class IVRSystem::_DriverDebugRequest : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23127D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_DriverDebugRequest* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_DriverDebugRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_DriverDebugRequest*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0x23127E8
    uint Invoke(uint unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2312AA4
    ::System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x2312B58
    uint EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._DriverDebugRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_DriverDebugRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_DriverDebugRequest::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_DriverDebugRequest::*)(uint, ::StringW, ::System::Text::StringBuilder*, uint)>(&Valve::VR::IVRSystem::_DriverDebugRequest::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchRequest = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchResponseBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unResponseBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_DriverDebugRequest*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_DriverDebugRequest::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_DriverDebugRequest::*)(uint, ::StringW, ::System::Text::StringBuilder*, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_DriverDebugRequest::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchRequest = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchResponseBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unResponseBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_DriverDebugRequest*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_DriverDebugRequest::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_DriverDebugRequest::*)(::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_DriverDebugRequest::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_DriverDebugRequest*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
