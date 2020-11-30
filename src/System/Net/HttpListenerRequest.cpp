// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpListenerRequest
#include "System/Net/HttpListenerRequest.hpp"
// Including type: System.Net.CookieCollection
#include "System/Net/CookieCollection.hpp"
// Including type: System.Net.WebHeaderCollection
#include "System/Net/WebHeaderCollection.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Collections.Specialized.NameValueCollection
#include "System/Collections/Specialized/NameValueCollection.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Net.HttpListenerContext
#include "System/Net/HttpListenerContext.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Byte[] _100continue
::Array<uint8_t>* System::Net::HttpListenerRequest::_get__100continue() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("_get__100continue");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Net", "HttpListenerRequest", "_100continue"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] _100continue
void System::Net::HttpListenerRequest::_set__100continue(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("_set__100continue");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerRequest", "_100continue", value));
}
// Autogenerated static field getter
// Get static field: static private System.Char[] separators
::Array<::Il2CppChar>* System::Net::HttpListenerRequest::_get_separators() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("_get_separators");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Net", "HttpListenerRequest", "separators"));
}
// Autogenerated static field setter
// Set static field: static private System.Char[] separators
void System::Net::HttpListenerRequest::_set_separators(::Array<::Il2CppChar>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("_set_separators");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerRequest", "separators", value));
}
// Autogenerated method: System.Net.HttpListenerRequest..ctor
System::Net::HttpListenerRequest* System::Net::HttpListenerRequest::New_ctor(System::Net::HttpListenerContext* context) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<HttpListenerRequest*>(context));
}
// Autogenerated method: System.Net.HttpListenerRequest.SetRequestLine
void System::Net::HttpListenerRequest::SetRequestLine(::Il2CppString* req) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("SetRequestLine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetRequestLine", {}, ::il2cpp_utils::ExtractTypes(req)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, req);
}
// Autogenerated method: System.Net.HttpListenerRequest.CreateQueryString
void System::Net::HttpListenerRequest::CreateQueryString(::Il2CppString* query) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("CreateQueryString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CreateQueryString", {}, ::il2cpp_utils::ExtractTypes(query)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, query);
}
// Autogenerated method: System.Net.HttpListenerRequest.MaybeUri
bool System::Net::HttpListenerRequest::MaybeUri(::Il2CppString* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("MaybeUri");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequest", il2cpp_utils::NoArgClass<bool>(), "MaybeUri", {}, ::il2cpp_utils::ExtractTypes(s)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s);
}
// Autogenerated method: System.Net.HttpListenerRequest.IsPredefinedScheme
bool System::Net::HttpListenerRequest::IsPredefinedScheme(::Il2CppString* scheme) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("IsPredefinedScheme");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequest", il2cpp_utils::NoArgClass<bool>(), "IsPredefinedScheme", {}, ::il2cpp_utils::ExtractTypes(scheme)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scheme);
}
// Autogenerated method: System.Net.HttpListenerRequest.FinishInitialization
void System::Net::HttpListenerRequest::FinishInitialization() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("FinishInitialization");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "FinishInitialization", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.Unquote
::Il2CppString* System::Net::HttpListenerRequest::Unquote(::Il2CppString* str) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("Unquote");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequest", il2cpp_utils::NoArgClass<::Il2CppString*>(), "Unquote", {}, ::il2cpp_utils::ExtractTypes(str)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, str);
}
// Autogenerated method: System.Net.HttpListenerRequest.AddHeader
void System::Net::HttpListenerRequest::AddHeader(::Il2CppString* header) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("AddHeader");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AddHeader", {}, ::il2cpp_utils::ExtractTypes(header)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, header);
}
// Autogenerated method: System.Net.HttpListenerRequest.FlushInput
bool System::Net::HttpListenerRequest::FlushInput() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("FlushInput");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "FlushInput", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_HasEntityBody
bool System::Net::HttpListenerRequest::get_HasEntityBody() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_HasEntityBody");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_HasEntityBody", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_Headers
System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::get_Headers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_Headers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Specialized::NameValueCollection*>(), "get_Headers", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Specialized::NameValueCollection*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_InputStream
System::IO::Stream* System::Net::HttpListenerRequest::get_InputStream() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_InputStream");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IO::Stream*>(), "get_InputStream", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::IO::Stream*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_IsSecureConnection
bool System::Net::HttpListenerRequest::get_IsSecureConnection() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_IsSecureConnection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsSecureConnection", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_KeepAlive
bool System::Net::HttpListenerRequest::get_KeepAlive() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_KeepAlive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_KeepAlive", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_LocalEndPoint
System::Net::IPEndPoint* System::Net::HttpListenerRequest::get_LocalEndPoint() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_LocalEndPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::IPEndPoint*>(), "get_LocalEndPoint", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::IPEndPoint*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_ProtocolVersion
System::Version* System::Net::HttpListenerRequest::get_ProtocolVersion() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_ProtocolVersion");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Version*>(), "get_ProtocolVersion", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Version*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_Url
System::Uri* System::Net::HttpListenerRequest::get_Url() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_Url");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Uri*>(), "get_Url", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_UserHostAddress
::Il2CppString* System::Net::HttpListenerRequest::get_UserHostAddress() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_UserHostAddress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_UserHostAddress", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest.get_UserHostName
::Il2CppString* System::Net::HttpListenerRequest::get_UserHostName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext("get_UserHostName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_UserHostName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequest..cctor
void System::Net::HttpListenerRequest::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequest").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequest", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}