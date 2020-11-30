// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Security.LocalCertSelectionCallback
#include "System/Net/Security/LocalCertSelectionCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Security.LocalCertSelectionCallback..ctor
System::Net::Security::LocalCertSelectionCallback* System::Net::Security::LocalCertSelectionCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("LocalCertSelectionCallback").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LocalCertSelectionCallback*>(object, method));
}
// Autogenerated method: System.Net.Security.LocalCertSelectionCallback.Invoke
System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::LocalCertSelectionCallback::Invoke(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("LocalCertSelectionCallback").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Security::Cryptography::X509Certificates::X509Certificate*>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(targetHost, localCertificates, remoteCertificate, acceptableIssuers)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal__method, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
}
// Autogenerated method: System.Net.Security.LocalCertSelectionCallback.BeginInvoke
System::IAsyncResult* System::Net::Security::LocalCertSelectionCallback::BeginInvoke(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("LocalCertSelectionCallback").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object);
}
// Autogenerated method: System.Net.Security.LocalCertSelectionCallback.EndInvoke
System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::LocalCertSelectionCallback::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("LocalCertSelectionCallback").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Security::Cryptography::X509Certificates::X509Certificate*>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal__method, result);
}