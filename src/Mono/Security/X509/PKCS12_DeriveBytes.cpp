// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.PKCS12/DeriveBytes
#include "Mono/Security/X509/PKCS12_DeriveBytes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Byte[] keyDiversifier
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::_get_keyDiversifier() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_get_keyDiversifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Mono.Security.X509", "PKCS12/DeriveBytes", "keyDiversifier"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] keyDiversifier
void Mono::Security::X509::PKCS12::DeriveBytes::_set_keyDiversifier(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_set_keyDiversifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.X509", "PKCS12/DeriveBytes", "keyDiversifier", value));
}
// Autogenerated static field getter
// Get static field: static private System.Byte[] ivDiversifier
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::_get_ivDiversifier() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_get_ivDiversifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Mono.Security.X509", "PKCS12/DeriveBytes", "ivDiversifier"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] ivDiversifier
void Mono::Security::X509::PKCS12::DeriveBytes::_set_ivDiversifier(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_set_ivDiversifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.X509", "PKCS12/DeriveBytes", "ivDiversifier", value));
}
// Autogenerated static field getter
// Get static field: static private System.Byte[] macDiversifier
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::_get_macDiversifier() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_get_macDiversifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Mono.Security.X509", "PKCS12/DeriveBytes", "macDiversifier"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] macDiversifier
void Mono::Security::X509::PKCS12::DeriveBytes::_set_macDiversifier(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("_set_macDiversifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.X509", "PKCS12/DeriveBytes", "macDiversifier", value));
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.set_HashName
void Mono::Security::X509::PKCS12::DeriveBytes::set_HashName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("set_HashName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_HashName", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.set_IterationCount
void Mono::Security::X509::PKCS12::DeriveBytes::set_IterationCount(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("set_IterationCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_IterationCount", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.set_Password
void Mono::Security::X509::PKCS12::DeriveBytes::set_Password(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("set_Password");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Password", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.set_Salt
void Mono::Security::X509::PKCS12::DeriveBytes::set_Salt(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("set_Salt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Salt", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.Adjust
void Mono::Security::X509::PKCS12::DeriveBytes::Adjust(::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("Adjust");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Adjust", {}, ::il2cpp_utils::ExtractTypes(a, aOff, b)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, a, aOff, b);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.Derive
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::Derive(::Array<uint8_t>* diversifier, int n) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("Derive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "Derive", {}, ::il2cpp_utils::ExtractTypes(diversifier, n)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, diversifier, n);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.DeriveKey
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::DeriveKey(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("DeriveKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "DeriveKey", {}, ::il2cpp_utils::ExtractTypes(size)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, size);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.DeriveIV
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::DeriveIV(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("DeriveIV");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "DeriveIV", {}, ::il2cpp_utils::ExtractTypes(size)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, size);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes.DeriveMAC
::Array<uint8_t>* Mono::Security::X509::PKCS12::DeriveBytes::DeriveMAC(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext("DeriveMAC");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "DeriveMAC", {}, ::il2cpp_utils::ExtractTypes(size)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, size);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes..cctor
void Mono::Security::X509::PKCS12::DeriveBytes::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Mono.Security.X509", "PKCS12/DeriveBytes", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Mono.Security.X509.PKCS12/DeriveBytes..ctor
Mono::Security::X509::PKCS12::DeriveBytes* Mono::Security::X509::PKCS12::DeriveBytes::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("DeriveBytes").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<PKCS12::DeriveBytes*>());
}