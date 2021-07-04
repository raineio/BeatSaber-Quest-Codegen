// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/_FreeTextureD3D11
  // [UnmanagedFunctionPointerAttribute] Offset: DD45B8
  class IVRRenderModels::_FreeTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FreeTextureD3D11
    _FreeTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C89E14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_FreeTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_FreeTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_FreeTextureD3D11*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pD3D11Texture2D)
    // Offset: 0x1C89E24
    void Invoke(System::IntPtr pD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8A080
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C8A10C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_FreeTextureD3D11
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_FreeTextureD3D11*, "Valve.VR", "IVRRenderModels/_FreeTextureD3D11");
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeTextureD3D11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeTextureD3D11::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRRenderModels::_FreeTextureD3D11::*)(System::IntPtr)>(&Valve::VR::IVRRenderModels::_FreeTextureD3D11::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeTextureD3D11*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeTextureD3D11::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_FreeTextureD3D11::*)(System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_FreeTextureD3D11::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeTextureD3D11*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_FreeTextureD3D11::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRRenderModels::_FreeTextureD3D11::*)(System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_FreeTextureD3D11::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_FreeTextureD3D11*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
