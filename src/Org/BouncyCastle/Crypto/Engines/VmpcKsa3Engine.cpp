// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
#include "Org/BouncyCastle/Crypto/Engines/VmpcKsa3Engine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine.InitKey
void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("VmpcKsa3Engine").WithContext("InitKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitKey", {}, ::il2cpp_utils::ExtractTypes(keyBytes, ivBytes)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, keyBytes, ivBytes);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine..ctor
Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine* Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("VmpcKsa3Engine").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<VmpcKsa3Engine*>());
}