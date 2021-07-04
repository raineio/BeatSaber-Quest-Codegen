// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle
  // [UnmanagedFunctionPointerAttribute] Offset: DD43C4
  class IVROverlay::_ReleaseNativeOverlayHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseNativeOverlayHandle
    _ReleaseNativeOverlayHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCE0D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ReleaseNativeOverlayHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ReleaseNativeOverlayHandle*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle)
    // Offset: 0x1FCE0E0
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCE364
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FCE40C
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle*, "Valve.VR", "IVROverlay/_ReleaseNativeOverlayHandle");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::*)(uint64_t, System::IntPtr)>(&Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::*)(uint64_t, System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
