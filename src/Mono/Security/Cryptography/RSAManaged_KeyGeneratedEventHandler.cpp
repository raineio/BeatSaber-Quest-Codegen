// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
#include "Mono/Security/Cryptography/RSAManaged_KeyGeneratedEventHandler.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler..ctor
Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("KeyGeneratedEventHandler").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<RSAManaged::KeyGeneratedEventHandler*>(object, method));
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler.Invoke
void Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler::Invoke(::Il2CppObject* sender, System::EventArgs* e) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("KeyGeneratedEventHandler").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(sender, e)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, sender, e);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler.BeginInvoke
System::IAsyncResult* Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler::BeginInvoke(::Il2CppObject* sender, System::EventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("KeyGeneratedEventHandler").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(sender, e, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, sender, e, callback, object);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler.EndInvoke
void Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("KeyGeneratedEventHandler").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}