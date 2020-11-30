// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator
#include "Org/BouncyCastle/Crypto/Generators/ECKeyPairGenerator.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECDomainParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Including type: Org.BouncyCastle.Crypto.KeyGenerationParameters
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
#include "Org/BouncyCastle/Crypto/AsymmetricCipherKeyPair.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/ECMultiplier.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParameters
#include "Org/BouncyCastle/Asn1/X9/X9ECParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECPublicKeyParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECPrivateKeyParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator..ctor
Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::New_ctor(::Il2CppString* algorithm) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ECKeyPairGenerator*>(algorithm));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator.Init
void Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator.GenerateKeyPair
Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GenerateKeyPair() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext("GenerateKeyPair");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), "GenerateKeyPair", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator.CreateBasePointMultiplier
Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::CreateBasePointMultiplier() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext("CreateBasePointMultiplier");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(), "CreateBasePointMultiplier", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator.FindECCurveByOid
Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::FindECCurveByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext("FindECCurveByOid");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Generators", "ECKeyPairGenerator", il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X9::X9ECParameters*>(), "FindECCurveByOid", {}, ::il2cpp_utils::ExtractTypes(oid)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, oid);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator.GetCorrespondingPublicKey
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GetCorrespondingPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext("GetCorrespondingPublicKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Generators", "ECKeyPairGenerator", il2cpp_utils::NoArgClass<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), "GetCorrespondingPublicKey", {}, ::il2cpp_utils::ExtractTypes(privKey)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, privKey);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator..ctor
Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Generators").WithContext("ECKeyPairGenerator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ECKeyPairGenerator*>());
}