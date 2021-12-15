// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*, "Valve.VR", "IVRCompositor/_GetMirrorTextureD3D11");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureD3D11
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF756C
  class IVRCompositor::_GetMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22547D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetMirrorTextureD3D11*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(Valve.VR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0x22547E4
    Valve::VR::EVRCompositorError Invoke(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, ByRef<System::IntPtr> ppD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2254A9C
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, ByRef<System::IntPtr> ppD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref System.IntPtr ppD3D11ShaderResourceView, System.IAsyncResult result)
    // Offset: 0x2254B64
    Valve::VR::EVRCompositorError EndInvoke(ByRef<System::IntPtr> ppD3D11ShaderResourceView, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureD3D11
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::*)(Valve::VR::EVREye, System::IntPtr, ByRef<System::IntPtr>)>(&Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pD3D11DeviceOrResource = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11ShaderResourceView = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::*)(Valve::VR::EVREye, System::IntPtr, ByRef<System::IntPtr>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pD3D11DeviceOrResource = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11ShaderResourceView = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::*)(ByRef<System::IntPtr>, System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* ppD3D11ShaderResourceView = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureD3D11*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppD3D11ShaderResourceView, result});
  }
};
