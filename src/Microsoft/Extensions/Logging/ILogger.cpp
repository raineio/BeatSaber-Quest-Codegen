// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Extensions.Logging.ILogger
#include "Microsoft/Extensions/Logging/ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Extensions.Logging.ILogger.LogError
void Microsoft::Extensions::Logging::ILogger::LogError(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Microsoft::Extensions::Logging").WithContext("ILogger").WithContext("LogError");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogError", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: Microsoft.Extensions.Logging.ILogger.LogInformation
void Microsoft::Extensions::Logging::ILogger::LogInformation(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Microsoft::Extensions::Logging").WithContext("ILogger").WithContext("LogInformation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogInformation", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: Microsoft.Extensions.Logging.ILogger.LogWarning
void Microsoft::Extensions::Logging::ILogger::LogWarning(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Microsoft::Extensions::Logging").WithContext("ILogger").WithContext("LogWarning");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogWarning", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}