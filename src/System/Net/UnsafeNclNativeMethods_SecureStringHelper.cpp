// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.UnsafeNclNativeMethods/SecureStringHelper
#include "System/Net/UnsafeNclNativeMethods_SecureStringHelper.hpp"
// Including type: System.Security.SecureString
#include "System/Security/SecureString.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.UnsafeNclNativeMethods/SecureStringHelper.CreateString
::Il2CppString* System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateString(System::Security::SecureString* secureString) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SecureStringHelper").WithContext("CreateString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "UnsafeNclNativeMethods/SecureStringHelper", il2cpp_utils::NoArgClass<::Il2CppString*>(), "CreateString", {}, ::il2cpp_utils::ExtractTypes(secureString)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, secureString);
}
// Autogenerated method: System.Net.UnsafeNclNativeMethods/SecureStringHelper.CreateSecureString
System::Security::SecureString* System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateSecureString(::Il2CppString* plainString) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SecureStringHelper").WithContext("CreateSecureString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "UnsafeNclNativeMethods/SecureStringHelper", il2cpp_utils::NoArgClass<System::Security::SecureString*>(), "CreateSecureString", {}, ::il2cpp_utils::ExtractTypes(plainString)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::SecureString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, plainString);
}