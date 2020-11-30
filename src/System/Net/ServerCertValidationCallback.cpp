// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ServerCertValidationCallback
#include "System/Net/ServerCertValidationCallback.hpp"
// Including type: System.Net.ServerCertValidationCallback/CallbackContext
#include "System/Net/ServerCertValidationCallback_CallbackContext.hpp"
// Including type: System.Net.Security.RemoteCertificateValidationCallback
#include "System/Net/Security/RemoteCertificateValidationCallback.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Chain
#include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
// Including type: System.Net.Security.SslPolicyErrors
#include "System/Net/Security/SslPolicyErrors.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.ServerCertValidationCallback..ctor
System::Net::ServerCertValidationCallback* System::Net::ServerCertValidationCallback::New_ctor(System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("ServerCertValidationCallback").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ServerCertValidationCallback*>(validationCallback));
}
// Autogenerated method: System.Net.ServerCertValidationCallback.Callback
void System::Net::ServerCertValidationCallback::Callback(::Il2CppObject* state) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("ServerCertValidationCallback").WithContext("Callback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Callback", {}, ::il2cpp_utils::ExtractTypes(state)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, state);
}
// Autogenerated method: System.Net.ServerCertValidationCallback.Invoke
bool System::Net::ServerCertValidationCallback::Invoke(::Il2CppObject* request, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("ServerCertValidationCallback").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(request, certificate, chain, sslPolicyErrors)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, request, certificate, chain, sslPolicyErrors);
}