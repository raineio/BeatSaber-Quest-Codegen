// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
#include "Org/BouncyCastle/Crypto/Signers/DsaDigestSigner.hpp"
// Including type: Org.BouncyCastle.Crypto.IDsa
#include "Org/BouncyCastle/Crypto/IDsa.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaEncoding
#include "Org/BouncyCastle/Crypto/Signers/IDsaEncoding.hpp"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner..ctor
Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor(Org::BouncyCastle::Crypto::IDsa* dsa, Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DsaDigestSigner*>(dsa, digest));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner..ctor
Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor(Org::BouncyCastle::Crypto::IDsaExt* dsa, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DsaDigestSigner*>(dsa, digest, encoding));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner.GetOrder
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GetOrder() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext("GetOrder");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "GetOrder", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner.Init
void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(forSigning, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forSigning, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner.BlockUpdate
void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::BlockUpdate(::Array<uint8_t>* input, int inOff, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext("BlockUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "BlockUpdate", {}, ::il2cpp_utils::ExtractTypes(input, inOff, length)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff, length);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner.GenerateSignature
::Array<uint8_t>* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GenerateSignature() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext("GenerateSignature");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GenerateSignature", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner.Reset
void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("DsaDigestSigner").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}