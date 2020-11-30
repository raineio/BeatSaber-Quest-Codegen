// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.Type2Message
#include "Mono/Security/Protocol/Ntlm/Type2Message.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message..ctor
Mono::Security::Protocol::Ntlm::Type2Message* Mono::Security::Protocol::Ntlm::Type2Message::New_ctor(::Array<uint8_t>* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Type2Message*>(message));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_Nonce
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("get_Nonce");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "get_Nonce", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_TargetName
::Il2CppString* Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("get_TargetName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_TargetName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_TargetInfo
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("get_TargetInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "get_TargetInfo", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.Finalize
void Mono::Security::Protocol::Ntlm::Type2Message::Finalize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("Finalize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Finalize", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.Decode
void Mono::Security::Protocol::Ntlm::Type2Message::Decode(::Array<uint8_t>* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("Decode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Decode", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.GetBytes
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::GetBytes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Protocol::Ntlm").WithContext("Type2Message").WithContext("GetBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GetBytes", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}