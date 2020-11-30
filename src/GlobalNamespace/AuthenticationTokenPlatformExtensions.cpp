// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AuthenticationTokenPlatformExtensions
#include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
GlobalNamespace::AuthenticationToken::Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(GlobalNamespace::UserInfo::Platform platform) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AuthenticationTokenPlatformExtensions").WithContext("ToAuthenticationTokenPlatform");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "AuthenticationTokenPlatformExtensions", il2cpp_utils::NoArgClass<GlobalNamespace::AuthenticationToken::Platform>(), "ToAuthenticationTokenPlatform", {}, ::il2cpp_utils::ExtractTypes(platform)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::AuthenticationToken::Platform, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, platform);
}
// Autogenerated method: AuthenticationTokenPlatformExtensions.ToUserInfoPlatform
GlobalNamespace::UserInfo::Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform(GlobalNamespace::AuthenticationToken::Platform platform) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AuthenticationTokenPlatformExtensions").WithContext("ToUserInfoPlatform");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "AuthenticationTokenPlatformExtensions", il2cpp_utils::NoArgClass<GlobalNamespace::UserInfo::Platform>(), "ToUserInfoPlatform", {}, ::il2cpp_utils::ExtractTypes(platform)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::UserInfo::Platform, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, platform);
}