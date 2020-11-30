// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFNetwork/CFWebProxy
#include "Mono/Net/CFNetwork_CFWebProxy.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: Mono.Net.CFProxy
#include "Mono/Net/CFProxy.hpp"
// Including type: System.Net.NetworkCredential
#include "System/Net/NetworkCredential.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.GetProxyUri
System::Uri* Mono::Net::CFNetwork::CFWebProxy::GetProxyUri(Mono::Net::CFProxy* proxy, System::Net::NetworkCredential*& credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("GetProxyUri");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Net", "CFNetwork/CFWebProxy", il2cpp_utils::NoArgClass<System::Uri*>(), "GetProxyUri", {}, ::il2cpp_utils::ExtractTypes(proxy, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, proxy, credentials);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.GetProxyUriFromScript
System::Uri* Mono::Net::CFNetwork::CFWebProxy::GetProxyUriFromScript(System::IntPtr script, System::Uri* targetUri, System::Net::NetworkCredential*& credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("GetProxyUriFromScript");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Net", "CFNetwork/CFWebProxy", il2cpp_utils::NoArgClass<System::Uri*>(), "GetProxyUriFromScript", {}, ::il2cpp_utils::ExtractTypes(script, targetUri, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, script, targetUri, credentials);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.ExecuteProxyAutoConfigurationURL
System::Uri* Mono::Net::CFNetwork::CFWebProxy::ExecuteProxyAutoConfigurationURL(System::IntPtr proxyAutoConfigURL, System::Uri* targetUri, System::Net::NetworkCredential*& credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("ExecuteProxyAutoConfigurationURL");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Net", "CFNetwork/CFWebProxy", il2cpp_utils::NoArgClass<System::Uri*>(), "ExecuteProxyAutoConfigurationURL", {}, ::il2cpp_utils::ExtractTypes(proxyAutoConfigURL, targetUri, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, proxyAutoConfigURL, targetUri, credentials);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.SelectProxy
System::Uri* Mono::Net::CFNetwork::CFWebProxy::SelectProxy(::Array<Mono::Net::CFProxy*>* proxies, System::Uri* targetUri, System::Net::NetworkCredential*& credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("SelectProxy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Net", "CFNetwork/CFWebProxy", il2cpp_utils::NoArgClass<System::Uri*>(), "SelectProxy", {}, ::il2cpp_utils::ExtractTypes(proxies, targetUri, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, proxies, targetUri, credentials);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy..ctor
Mono::Net::CFNetwork::CFWebProxy* Mono::Net::CFNetwork::CFWebProxy::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<CFNetwork::CFWebProxy*>());
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.get_Credentials
System::Net::ICredentials* Mono::Net::CFNetwork::CFWebProxy::get_Credentials() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("get_Credentials");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::ICredentials*>(), "get_Credentials", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::ICredentials*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.GetProxy
System::Uri* Mono::Net::CFNetwork::CFWebProxy::GetProxy(System::Uri* targetUri) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("GetProxy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Uri*>(), "GetProxy", {}, ::il2cpp_utils::ExtractTypes(targetUri)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(this, ___internal__method, targetUri);
}
// Autogenerated method: Mono.Net.CFNetwork/CFWebProxy.IsBypassed
bool Mono::Net::CFNetwork::CFWebProxy::IsBypassed(System::Uri* targetUri) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFWebProxy").WithContext("IsBypassed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "IsBypassed", {}, ::il2cpp_utils::ExtractTypes(targetUri)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, targetUri);
}