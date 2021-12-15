// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
  // Forward declaring type: _SetBool
  class _SetBool;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRSettings::_SetBool);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_SetBool*, "OVR.OpenVR", "IVRSettings/_SetBool");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSettings/OVR.OpenVR._SetBool
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF2D6C
  class IVRSettings::_SetBool : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x232445C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_SetBool* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSettings::_SetBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_SetBool*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x232446C
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, ByRef<OVR::OpenVR::EVRSettingsError> peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23248A4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x2324970
    void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/OVR.OpenVR._SetBool
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_SetBool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_SetBool::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSettings::_SetBool::*)(::Il2CppString*, ::Il2CppString*, bool, ByRef<OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::IVRSettings::_SetBool::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_SetBool*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, bValue, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_SetBool::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSettings::_SetBool::*)(::Il2CppString*, ::Il2CppString*, bool, ByRef<OVR::OpenVR::EVRSettingsError>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSettings::_SetBool::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_SetBool*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, bValue, peError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_SetBool::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSettings::_SetBool::*)(ByRef<OVR::OpenVR::EVRSettingsError>, System::IAsyncResult*)>(&OVR::OpenVR::IVRSettings::_SetBool::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_SetBool*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
