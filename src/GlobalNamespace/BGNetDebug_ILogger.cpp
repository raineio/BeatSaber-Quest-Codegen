// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BGNetDebug/ILogger
#include "GlobalNamespace/BGNetDebug_ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BGNetDebug/ILogger.LogInfo
void GlobalNamespace::BGNetDebug::ILogger::LogInfo(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ILogger").WithContext("LogInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogInfo", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: BGNetDebug/ILogger.LogError
void GlobalNamespace::BGNetDebug::ILogger::LogError(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ILogger").WithContext("LogError");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogError", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: BGNetDebug/ILogger.LogWarning
void GlobalNamespace::BGNetDebug::ILogger::LogWarning(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ILogger").WithContext("LogWarning");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogWarning", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}