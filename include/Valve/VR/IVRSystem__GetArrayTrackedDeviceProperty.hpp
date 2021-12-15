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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: _GetArrayTrackedDeviceProperty
  class _GetArrayTrackedDeviceProperty;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetArrayTrackedDeviceProperty");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetArrayTrackedDeviceProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF6B80
  class IVRSystem::_GetArrayTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC7044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetArrayTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetArrayTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1EC7054
    uint Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, ByRef<Valve::VR::ETrackedPropertyError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC7350
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, ByRef<Valve::VR::ETrackedPropertyError> pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x1EC7470
    uint EndInvoke(ByRef<Valve::VR::ETrackedPropertyError> pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetArrayTrackedDeviceProperty
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, uint, System::IntPtr, uint, ByRef<Valve::VR::ETrackedPropertyError>)>(&Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, uint, System::IntPtr, uint, ByRef<Valve::VR::ETrackedPropertyError>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(ByRef<Valve::VR::ETrackedPropertyError>, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
