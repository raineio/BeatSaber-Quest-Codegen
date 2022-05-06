// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: TlsEccUtilities
  class TlsEccUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsEccUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.String[] CurveNames
    static ::ArrayW<::StringW> _get_CurveNames();
    // Set static field: static private readonly System.String[] CurveNames
    static void _set_CurveNames(::ArrayW<::StringW> value);
    // static private System.Void .cctor()
    // Offset: 0x16071A4
    static void _cctor();
    // static public System.String GetNameOfNamedCurve(System.Int32 namedCurve)
    // Offset: 0x160679C
    static ::StringW GetNameOfNamedCurve(int namedCurve);
    // static public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters GetParametersForNamedCurve(System.Int32 namedCurve)
    // Offset: 0x16068F0
    static ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int namedCurve);
    // static public System.Boolean IsSupportedNamedCurve(System.Int32 namedCurve)
    // Offset: 0x1606860
    static bool IsSupportedNamedCurve(int namedCurve);
    // static public System.Boolean IsCompressionPreferred(System.Byte[] ecPointFormats, System.Byte compressionFormat)
    // Offset: 0x1606A10
    static bool IsCompressionPreferred(::ArrayW<uint8_t> ecPointFormats, uint8_t compressionFormat);
    // static public System.Byte[] SerializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x1606A70
    static ::ArrayW<uint8_t> SerializeECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point);
    // static public Org.BouncyCastle.Math.EC.ECPoint DeserializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECCurve curve, System.Byte[] encoding)
    // Offset: 0x1606B64
    static ::Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECCurve* curve, ::ArrayW<uint8_t> encoding);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters DeserializeECPublicKey(System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters curve_params, System.Byte[] encoding)
    // Offset: 0x1606CD4
    static ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* DeserializeECPublicKey(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, ::ArrayW<uint8_t> encoding);
    // static public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateECKeyPair(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams)
    // Offset: 0x1606E80
    static ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom random, System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams, System.IO.Stream output)
    // Offset: 0x1606F28
    static ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams, ::System::IO::Stream* output);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters ValidateECPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters key)
    // Offset: 0x16070F4
    static ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);
    // static public System.Void WriteECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point, System.IO.Stream output)
    // Offset: 0x1607048
    static void WriteECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::System::IO::Stream* output);
  }; // Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve
// Il2CppName: GetNameOfNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve)> {
  static const MethodInfo* get() {
    static auto* namedCurve = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GetNameOfNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namedCurve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve
// Il2CppName: GetParametersForNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve)> {
  static const MethodInfo* get() {
    static auto* namedCurve = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GetParametersForNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namedCurve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve
// Il2CppName: IsSupportedNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve)> {
  static const MethodInfo* get() {
    static auto* namedCurve = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "IsSupportedNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namedCurve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred
// Il2CppName: IsCompressionPreferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred)> {
  static const MethodInfo* get() {
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* compressionFormat = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "IsCompressionPreferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ecPointFormats, compressionFormat});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint
// Il2CppName: SerializeECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint)> {
  static const MethodInfo* get() {
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "SerializeECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ecPointFormats, point});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint
// Il2CppName: DeserializeECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECCurve*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint)> {
  static const MethodInfo* get() {
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* encoding = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "DeserializeECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ecPointFormats, curve, encoding});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey
// Il2CppName: DeserializeECPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey)> {
  static const MethodInfo* get() {
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* curve_params = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters")->byval_arg;
    static auto* encoding = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "DeserializeECPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ecPointFormats, curve_params, encoding});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair
// Il2CppName: GenerateECKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* ecParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GenerateECKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, ecParams});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange
// Il2CppName: GenerateEphemeralClientKeyExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ecParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "GenerateEphemeralClientKeyExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, ecPointFormats, ecParams, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey
// Il2CppName: ValidateECPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "ValidateECPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint
// Il2CppName: WriteECPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*, ::System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint)> {
  static const MethodInfo* get() {
    static auto* ecPointFormats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*), "WriteECPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ecPointFormats, point, output});
  }
};
