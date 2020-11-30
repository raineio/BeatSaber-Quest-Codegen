// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Security.RemoteCertificateValidationCallback
#include "System/Net/Security/RemoteCertificateValidationCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Chain
#include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
// Including type: System.Net.Security.SslPolicyErrors
#include "System/Net/Security/SslPolicyErrors.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Security.RemoteCertificateValidationCallback..ctor
System::Net::Security::RemoteCertificateValidationCallback* System::Net::Security::RemoteCertificateValidationCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("RemoteCertificateValidationCallback").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<RemoteCertificateValidationCallback*>(object, method));
}
// Autogenerated method: System.Net.Security.RemoteCertificateValidationCallback.Invoke
bool System::Net::Security::RemoteCertificateValidationCallback::Invoke(::Il2CppObject* sender, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("RemoteCertificateValidationCallback").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(sender, certificate, chain, sslPolicyErrors)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, sender, certificate, chain, sslPolicyErrors);
}
// Autogenerated method: System.Net.Security.RemoteCertificateValidationCallback.BeginInvoke
System::IAsyncResult* System::Net::Security::RemoteCertificateValidationCallback::BeginInvoke(::Il2CppObject* sender, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("RemoteCertificateValidationCallback").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(sender, certificate, chain, sslPolicyErrors, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, sender, certificate, chain, sslPolicyErrors, callback, object);
}
// Autogenerated method: System.Net.Security.RemoteCertificateValidationCallback.EndInvoke
bool System::Net::Security::RemoteCertificateValidationCallback::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("RemoteCertificateValidationCallback").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result);
}