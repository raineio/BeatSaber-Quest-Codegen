// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.Security.AuthenticatedStream
#include "System/Net/Security/AuthenticatedStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Security.AuthenticatedStream..ctor
System::Net::Security::AuthenticatedStream* System::Net::Security::AuthenticatedStream::New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("AuthenticatedStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<AuthenticatedStream*>(innerStream, leaveInnerStreamOpen));
}
// Autogenerated method: System.Net.Security.AuthenticatedStream.get_InnerStream
System::IO::Stream* System::Net::Security::AuthenticatedStream::get_InnerStream() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("AuthenticatedStream").WithContext("get_InnerStream");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IO::Stream*>(), "get_InnerStream", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::IO::Stream*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.Security.AuthenticatedStream.get_IsAuthenticated
bool System::Net::Security::AuthenticatedStream::get_IsAuthenticated() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("AuthenticatedStream").WithContext("get_IsAuthenticated");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsAuthenticated", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.Security.AuthenticatedStream.Dispose
void System::Net::Security::AuthenticatedStream::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Security").WithContext("AuthenticatedStream").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}