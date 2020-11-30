// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.BufferOffsetSize2
#include "Mono/Net/Security/BufferOffsetSize2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Net.Security.BufferOffsetSize2..ctor
Mono::Net::Security::BufferOffsetSize2* Mono::Net::Security::BufferOffsetSize2::New_ctor(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net::Security").WithContext("BufferOffsetSize2").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BufferOffsetSize2*>(size));
}
// Autogenerated method: Mono.Net.Security.BufferOffsetSize2.Reset
void Mono::Net::Security::BufferOffsetSize2::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net::Security").WithContext("BufferOffsetSize2").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Net.Security.BufferOffsetSize2.MakeRoom
void Mono::Net::Security::BufferOffsetSize2::MakeRoom(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net::Security").WithContext("BufferOffsetSize2").WithContext("MakeRoom");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "MakeRoom", {}, ::il2cpp_utils::ExtractTypes(size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, size);
}
// Autogenerated method: Mono.Net.Security.BufferOffsetSize2.AppendData
void Mono::Net::Security::BufferOffsetSize2::AppendData(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net::Security").WithContext("BufferOffsetSize2").WithContext("AppendData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AppendData", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, size);
}