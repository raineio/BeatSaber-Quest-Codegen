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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: PbeParametersGenerator
  class PbeParametersGenerator;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: PbeUtilities
  class PbeUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Security::PbeUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PbeUtilities*, "Org.BouncyCastle.Security", "PbeUtilities");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.PbeUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class PbeUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary algorithmType
    static System::Collections::IDictionary* _get_algorithmType();
    // Set static field: static private readonly System.Collections.IDictionary algorithmType
    static void _set_algorithmType(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x152F7FC
    static void _cctor();
    // static private Org.BouncyCastle.Crypto.PbeParametersGenerator MakePbeGenerator(System.String type, Org.BouncyCastle.Crypto.IDigest digest, System.Byte[] key, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x1534DEC
    static Org::BouncyCastle::Crypto::PbeParametersGenerator* MakePbeGenerator(::StringW type, Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> salt, int iterationCount);
    // static public System.Boolean IsPkcs12(System.String algorithm)
    // Offset: 0x1534FD8
    static bool IsPkcs12(::StringW algorithm);
    // static public System.Boolean IsPkcs5Scheme2(System.String algorithm)
    // Offset: 0x15351D4
    static bool IsPkcs5Scheme2(::StringW algorithm);
    // static public Org.BouncyCastle.Crypto.ICipherParameters GenerateCipherParameters(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Char[] password, System.Boolean wrongPkcs12Zero)
    // Offset: 0x15353D0
    static Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<::Il2CppChar> password, bool wrongPkcs12Zero);
    // static public Org.BouncyCastle.Crypto.ICipherParameters GenerateCipherParameters(System.String algorithm, System.Char[] password, System.Boolean wrongPkcs12Zero, Org.BouncyCastle.Asn1.Asn1Encodable pbeParameters)
    // Offset: 0x1535488
    static Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::StringW algorithm, ::ArrayW<::Il2CppChar> password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters);
    // static public System.Object CreateEngine(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID)
    // Offset: 0x1536700
    static ::Il2CppObject* CreateEngine(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID);
    // static public System.Object CreateEngine(System.String algorithm)
    // Offset: 0x1536834
    static ::Il2CppObject* CreateEngine(::StringW algorithm);
    // static private Org.BouncyCastle.Crypto.ICipherParameters FixDesParity(System.String mechanism, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x153650C
    static Org::BouncyCastle::Crypto::ICipherParameters* FixDesParity(::StringW mechanism, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
  }; // Org.BouncyCastle.Security.PbeUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::PbeUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator
// Il2CppName: MakePbeGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::PbeParametersGenerator* (*)(::StringW, Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IDigest")->byval_arg;
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterationCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "MakePbeGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, digest, key, salt, iterationCount});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::IsPkcs12
// Il2CppName: IsPkcs12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPkcs12)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "IsPkcs12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2
// Il2CppName: IsPkcs5Scheme2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "IsPkcs5Scheme2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters
// Il2CppName: GenerateCipherParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<::Il2CppChar>, bool)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  static const MethodInfo* get() {
    static auto* algID = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier")->byval_arg;
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* wrongPkcs12Zero = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "GenerateCipherParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algID, password, wrongPkcs12Zero});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters
// Il2CppName: GenerateCipherParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::ArrayW<::Il2CppChar>, bool, Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* wrongPkcs12Zero = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pbeParameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "GenerateCipherParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, password, wrongPkcs12Zero, pbeParameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::CreateEngine
// Il2CppName: CreateEngine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  static const MethodInfo* get() {
    static auto* algID = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "CreateEngine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algID});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::CreateEngine
// Il2CppName: CreateEngine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "CreateEngine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PbeUtilities::FixDesParity
// Il2CppName: FixDesParity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Security::PbeUtilities::FixDesParity)> {
  static const MethodInfo* get() {
    static auto* mechanism = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PbeUtilities*), "FixDesParity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mechanism, parameters});
  }
};
