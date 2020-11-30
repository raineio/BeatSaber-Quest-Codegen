// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.AuthenticationManager
#include "System/Net/AuthenticationManager.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Net.ICredentialPolicy
#include "System/Net/ICredentialPolicy.hpp"
// Including type: System.Net.Authorization
#include "System/Net/Authorization.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.ArrayList modules
System::Collections::ArrayList* System::Net::AuthenticationManager::_get_modules() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_get_modules");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::ArrayList*>("System.Net", "AuthenticationManager", "modules"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.ArrayList modules
void System::Net::AuthenticationManager::_set_modules(System::Collections::ArrayList* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_set_modules");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "AuthenticationManager", "modules", value));
}
// Autogenerated static field getter
// Get static field: static private System.Object locker
::Il2CppObject* System::Net::AuthenticationManager::_get_locker() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_get_locker");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("System.Net", "AuthenticationManager", "locker"));
}
// Autogenerated static field setter
// Set static field: static private System.Object locker
void System::Net::AuthenticationManager::_set_locker(::Il2CppObject* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_set_locker");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "AuthenticationManager", "locker", value));
}
// Autogenerated static field getter
// Get static field: static private System.Net.ICredentialPolicy credential_policy
System::Net::ICredentialPolicy* System::Net::AuthenticationManager::_get_credential_policy() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_get_credential_policy");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::ICredentialPolicy*>("System.Net", "AuthenticationManager", "credential_policy"));
}
// Autogenerated static field setter
// Set static field: static private System.Net.ICredentialPolicy credential_policy
void System::Net::AuthenticationManager::_set_credential_policy(System::Net::ICredentialPolicy* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("_set_credential_policy");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "AuthenticationManager", "credential_policy", value));
}
// Autogenerated method: System.Net.AuthenticationManager.EnsureModules
void System::Net::AuthenticationManager::EnsureModules() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("EnsureModules");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "AuthenticationManager", il2cpp_utils::NoArgClass<void>(), "EnsureModules", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Net.AuthenticationManager.Authenticate
System::Net::Authorization* System::Net::AuthenticationManager::Authenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("Authenticate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "AuthenticationManager", il2cpp_utils::NoArgClass<System::Net::Authorization*>(), "Authenticate", {}, ::il2cpp_utils::ExtractTypes(challenge, request, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::Authorization*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, challenge, request, credentials);
}
// Autogenerated method: System.Net.AuthenticationManager.DoAuthenticate
System::Net::Authorization* System::Net::AuthenticationManager::DoAuthenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("DoAuthenticate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "AuthenticationManager", il2cpp_utils::NoArgClass<System::Net::Authorization*>(), "DoAuthenticate", {}, ::il2cpp_utils::ExtractTypes(challenge, request, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::Authorization*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, challenge, request, credentials);
}
// Autogenerated method: System.Net.AuthenticationManager.PreAuthenticate
System::Net::Authorization* System::Net::AuthenticationManager::PreAuthenticate(System::Net::WebRequest* request, System::Net::ICredentials* credentials) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext("PreAuthenticate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "AuthenticationManager", il2cpp_utils::NoArgClass<System::Net::Authorization*>(), "PreAuthenticate", {}, ::il2cpp_utils::ExtractTypes(request, credentials)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::Authorization*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, request, credentials);
}
// Autogenerated method: System.Net.AuthenticationManager..cctor
void System::Net::AuthenticationManager::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("AuthenticationManager").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "AuthenticationManager", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}