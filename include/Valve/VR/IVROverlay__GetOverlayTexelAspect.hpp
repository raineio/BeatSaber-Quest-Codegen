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
NEED_NO_BOX(::Valve::VR::IVROverlay::_GetOverlayTexelAspect);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_GetOverlayTexelAspect*, "Valve.VR", "IVROverlay/_GetOverlayTexelAspect");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlayTexelAspect
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D58C8
  class IVROverlay::_GetOverlayTexelAspect : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2723A78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTexelAspect* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_GetOverlayTexelAspect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTexelAspect*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect)
    // Offset: 0x2723A88
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float> pfTexelAspect);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2723D0C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float> pfTexelAspect, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.Single pfTexelAspect, System.IAsyncResult result)
    // Offset: 0x2723DBC
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<float> pfTexelAspect, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlayTexelAspect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexelAspect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexelAspect::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexelAspect::*)(uint64_t, ByRef<float>)>(&Valve::VR::IVROverlay::_GetOverlayTexelAspect::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pfTexelAspect = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexelAspect*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pfTexelAspect});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexelAspect::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayTexelAspect::*)(uint64_t, ByRef<float>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayTexelAspect::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pfTexelAspect = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexelAspect*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pfTexelAspect, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexelAspect::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexelAspect::*)(ByRef<float>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayTexelAspect::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pfTexelAspect = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexelAspect*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfTexelAspect, result});
  }
};
