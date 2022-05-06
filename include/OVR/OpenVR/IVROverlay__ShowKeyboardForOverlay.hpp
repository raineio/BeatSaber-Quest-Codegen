// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay*, "OVR.OpenVR", "IVROverlay/_ShowKeyboardForOverlay");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._ShowKeyboardForOverlay
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1088E7C
  class IVROverlay::_ShowKeyboardForOverlay : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x26F3EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowKeyboardForOverlay* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowKeyboardForOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x26F3EB0
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::StringW pchDescription, uint unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x26F41FC
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::StringW pchDescription, uint unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x26F4328
    ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._ShowKeyboardForOverlay
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::*)(uint64_t, int, int, ::StringW, uint, ::StringW, bool, uint64_t)>(&OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eInputMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* eLineInputMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pchDescription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unCharMax = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchExistingText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bUseMinimalMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::*)(uint64_t, int, int, ::StringW, uint, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eInputMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* eLineInputMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pchDescription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unCharMax = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchExistingText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bUseMinimalMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
