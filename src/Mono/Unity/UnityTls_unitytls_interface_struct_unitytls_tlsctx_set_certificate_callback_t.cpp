// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx
#include "Mono/Unity/UnityTls_unitytls_tlsctx.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
#include "Mono/Unity/UnityTls_unitytls_tlsctx_certificate_callback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Unity").WithContext("unitytls_tlsctx_set_certificate_callback_t").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t.Invoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Unity").WithContext("unitytls_tlsctx_set_certificate_callback_t").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(ctx, cb, userData, errorState)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ctx, cb, userData, errorState);
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Unity").WithContext("unitytls_tlsctx_set_certificate_callback_t").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(ctx, cb, userData, errorState, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, ctx, cb, userData, errorState, callback, object);
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t.EndInvoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Unity").WithContext("unitytls_tlsctx_set_certificate_callback_t").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}