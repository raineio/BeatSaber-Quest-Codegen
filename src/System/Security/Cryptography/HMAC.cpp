// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.HMAC.get_BlockSizeValue
int System::Security::Cryptography::HMAC::get_BlockSizeValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("get_BlockSizeValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_BlockSizeValue", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.set_BlockSizeValue
void System::Security::Cryptography::HMAC::set_BlockSizeValue(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("set_BlockSizeValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_BlockSizeValue", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Security.Cryptography.HMAC.UpdateIOPadBuffers
void System::Security::Cryptography::HMAC::UpdateIOPadBuffers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("UpdateIOPadBuffers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdateIOPadBuffers", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.InitializeKey
void System::Security::Cryptography::HMAC::InitializeKey(::Array<uint8_t>* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("InitializeKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitializeKey", {}, ::il2cpp_utils::ExtractTypes(key)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
}
// Autogenerated method: System.Security.Cryptography.HMAC.Create
System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::Create() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("Create");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "HMAC", il2cpp_utils::NoArgClass<System::Security::Cryptography::HMAC*>(), "Create", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::HMAC*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.get_Key
::Array<uint8_t>* System::Security::Cryptography::HMAC::get_Key() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("get_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "get_Key", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.set_Key
void System::Security::Cryptography::HMAC::set_Key(::Array<uint8_t>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("set_Key");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Key", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Security.Cryptography.HMAC.Initialize
void System::Security::Cryptography::HMAC::Initialize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("Initialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Initialize", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.HashCore
void System::Security::Cryptography::HMAC::HashCore(::Array<uint8_t>* rgb, int ib, int cb) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("HashCore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HashCore", {}, ::il2cpp_utils::ExtractTypes(rgb, ib, cb)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, rgb, ib, cb);
}
// Autogenerated method: System.Security.Cryptography.HMAC.HashFinal
::Array<uint8_t>* System::Security::Cryptography::HMAC::HashFinal() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("HashFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "HashFinal", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.HMAC.Dispose
void System::Security::Cryptography::HMAC::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}
// Autogenerated method: System.Security.Cryptography.HMAC..ctor
System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("HMAC").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<HMAC*>());
}