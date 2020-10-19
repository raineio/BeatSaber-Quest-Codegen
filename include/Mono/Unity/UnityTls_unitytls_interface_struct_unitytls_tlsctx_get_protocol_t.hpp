// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
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
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FA7D8
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Mono.Unity.UnityTls/unitytls_protocol Invoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x11FA7EC
    Mono::Unity::UnityTls::unitytls_protocol Invoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FAA60
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_protocol EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FAA90
    Mono::Unity::UnityTls::unitytls_protocol EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t");
#pragma pack(pop)
