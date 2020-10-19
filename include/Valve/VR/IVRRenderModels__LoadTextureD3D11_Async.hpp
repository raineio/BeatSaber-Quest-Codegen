// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async
  class IVRRenderModels::_LoadTextureD3D11_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CA2D68
    static IVRRenderModels::_LoadTextureD3D11_Async* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x1CA2D7C
    Valve::VR::EVRRenderModelError Invoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CA3028
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(ref System.IntPtr ppD3D11Texture2D, System.IAsyncResult result)
    // Offset: 0x1CA30F0
    Valve::VR::EVRRenderModelError EndInvoke(System::IntPtr& ppD3D11Texture2D, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadTextureD3D11_Async*, "Valve.VR", "IVRRenderModels/_LoadTextureD3D11_Async");
#pragma pack(pop)
