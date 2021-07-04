// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
  // Forward declaring type: ECPublicKeyParameters
  class ECPublicKeyParameters;
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  class TlsEccUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TlsEccUtilities
    TlsEccUtilities() noexcept {}
    // Get static field: static private readonly System.String[] CurveNames
    static ::Array<::Il2CppString*>* _get_CurveNames();
    // Set static field: static private readonly System.String[] CurveNames
    static void _set_CurveNames(::Array<::Il2CppString*>* value);
    // static public System.String GetNameOfNamedCurve(System.Int32 namedCurve)
    // Offset: 0x126A938
    static ::Il2CppString* GetNameOfNamedCurve(int namedCurve);
    // static public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters GetParametersForNamedCurve(System.Int32 namedCurve)
    // Offset: 0x126AA8C
    static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int namedCurve);
    // static public System.Boolean IsSupportedNamedCurve(System.Int32 namedCurve)
    // Offset: 0x126A9FC
    static bool IsSupportedNamedCurve(int namedCurve);
    // static public System.Boolean IsCompressionPreferred(System.Byte[] ecPointFormats, System.Byte compressionFormat)
    // Offset: 0x126ABAC
    static bool IsCompressionPreferred(::Array<uint8_t>* ecPointFormats, uint8_t compressionFormat);
    // static public System.Byte[] SerializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x126AC0C
    static ::Array<uint8_t>* SerializeECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint* point);
    // static public Org.BouncyCastle.Math.EC.ECPoint DeserializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECCurve curve, System.Byte[] encoding)
    // Offset: 0x126AD00
    static Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECCurve* curve, ::Array<uint8_t>* encoding);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters DeserializeECPublicKey(System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters curve_params, System.Byte[] encoding)
    // Offset: 0x126AE70
    static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* DeserializeECPublicKey(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, ::Array<uint8_t>* encoding);
    // static public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateECKeyPair(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams)
    // Offset: 0x126B01C
    static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom random, System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams, System.IO.Stream output)
    // Offset: 0x126B0C4
    static Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(Org::BouncyCastle::Security::SecureRandom* random, ::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams, System::IO::Stream* output);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters ValidateECPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters key)
    // Offset: 0x126B290
    static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);
    // static public System.Void WriteECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point, System.IO.Stream output)
    // Offset: 0x126B1E4
    static void WriteECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint* point, System::IO::Stream* output);
    // static private System.Void .cctor()
    // Offset: 0x126B340
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve
// Il2CppName: GetNameOfNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GetNameOfNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve
// Il2CppName: GetParametersForNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GetParametersForNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve
// Il2CppName: IsSupportedNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "IsSupportedNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred
// Il2CppName: IsCompressionPreferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "IsCompressionPreferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint
// Il2CppName: SerializeECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "SerializeECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint
// Il2CppName: DeserializeECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(::Array<uint8_t>*, Org::BouncyCastle::Math::EC::ECCurve*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "DeserializeECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey
// Il2CppName: DeserializeECPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(::Array<uint8_t>*, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "DeserializeECPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair
// Il2CppName: GenerateECKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(Org::BouncyCastle::Security::SecureRandom*, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GenerateECKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange
// Il2CppName: GenerateEphemeralClientKeyExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (*)(Org::BouncyCastle::Security::SecureRandom*, ::Array<uint8_t>*, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GenerateEphemeralClientKeyExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey
// Il2CppName: ValidateECPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "ValidateECPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint
// Il2CppName: WriteECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, Org::BouncyCastle::Math::EC::ECPoint*, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "WriteECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
