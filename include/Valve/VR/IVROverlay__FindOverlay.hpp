// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
NEED_NO_BOX(Valve::VR::IVROverlay::_FindOverlay);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_FindOverlay*, "Valve.VR", "IVROverlay/_FindOverlay");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._FindOverlay
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF7634
  class IVROverlay::_FindOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x225BBF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_FindOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_FindOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_FindOverlay*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.String pchOverlayKey, ref System.UInt64 pOverlayHandle)
    // Offset: 0x225BC04
    Valve::VR::EVROverlayError Invoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, ref System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x225BFF4
    System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x225C090
    Valve::VR::EVROverlayError EndInvoke(ByRef<uint64_t> pOverlayHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._FindOverlay
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_FindOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_FindOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_FindOverlay::*)(::StringW, ByRef<uint64_t>)>(&Valve::VR::IVROverlay::_FindOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_FindOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pOverlayHandle});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_FindOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_FindOverlay::*)(::StringW, ByRef<uint64_t>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_FindOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_FindOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pOverlayHandle, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_FindOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_FindOverlay::*)(ByRef<uint64_t>, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_FindOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_FindOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOverlayHandle, result});
  }
};
