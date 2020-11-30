// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
#include "Org/BouncyCastle/Crypto/Generators/DHBasicKeyPairGenerator.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHKeyGenerationParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.KeyGenerationParameters
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
#include "Org/BouncyCastle/Crypto/AsymmetricCipherKeyPair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator.Init
void Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("DHBasicKeyPairGenerator").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator.GenerateKeyPair
Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::GenerateKeyPair() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("DHBasicKeyPairGenerator").WithContext("GenerateKeyPair");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), "GenerateKeyPair", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator..ctor
Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("DHBasicKeyPairGenerator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHBasicKeyPairGenerator*>());
}