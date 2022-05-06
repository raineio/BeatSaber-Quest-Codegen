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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_GetOverlayKey);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_GetOverlayKey*, "Valve.VR", "IVROverlay/_GetOverlayKey");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlayKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 108DA60
  class IVROverlay::_GetOverlayKey : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x268C504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayKey* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_GetOverlayKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayKey*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.EVROverlayError pError)
    // Offset: 0x268C514
    uint Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint unBufferSize, ByRef<::Valve::VR::EVROverlayError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.EVROverlayError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x268C7CC
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint unBufferSize, ByRef<::Valve::VR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.EVROverlayError pError, System.IAsyncResult result)
    // Offset: 0x268C8A4
    uint EndInvoke(ByRef<::Valve::VR::EVROverlayError> pError, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlayKey
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayKey::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVROverlay::_GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder*, uint, ByRef<::Valve::VR::EVROverlayError>)>(&Valve::VR::IVROverlay::_GetOverlayKey::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVROverlayError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayKey*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pchValue, unBufferSize, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayKey::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder*, uint, ByRef<::Valve::VR::EVROverlayError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayKey::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVROverlayError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayKey*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pchValue, unBufferSize, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayKey::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVROverlay::_GetOverlayKey::*)(ByRef<::Valve::VR::EVROverlayError>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayKey::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVROverlayError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayKey*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
