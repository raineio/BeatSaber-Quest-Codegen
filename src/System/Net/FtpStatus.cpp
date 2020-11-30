// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FtpStatus
#include "System/Net/FtpStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.FtpStatus..ctor
System::Net::FtpStatus* System::Net::FtpStatus::New_ctor(System::Net::FtpStatusCode statusCode, ::Il2CppString* statusDescription) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpStatus").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FtpStatus*>(statusCode, statusDescription));
}
// Autogenerated method: System.Net.FtpStatus.get_StatusCode
System::Net::FtpStatusCode System::Net::FtpStatus::get_StatusCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpStatus").WithContext("get_StatusCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::FtpStatusCode>(), "get_StatusCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::FtpStatusCode, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpStatus.get_StatusDescription
::Il2CppString* System::Net::FtpStatus::get_StatusDescription() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpStatus").WithContext("get_StatusDescription");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_StatusDescription", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}