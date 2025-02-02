// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
// Including type: System.Security.Cryptography.CspProviderFlags
#include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: KeyPairPersistence
  class KeyPairPersistence;
  // Forward declaring type: RSAManaged
  class RSAManaged_;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspParameters
  class CspParameters;
  // Forward declaring type: HashAlgorithmName
  struct HashAlgorithmName;
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
  // Forward declaring type: RSASignaturePadding
  class RSASignaturePadding;
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSACryptoServiceProvider
  class RSACryptoServiceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSACryptoServiceProvider*, "System.Security.Cryptography", "RSACryptoServiceProvider");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSACryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1076FB8
  class RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
    public:
    public:
    // private Mono.Security.Cryptography.KeyPairPersistence store
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Security::Cryptography::KeyPairPersistence* store;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::KeyPairPersistence*) == 0x8);
    // private System.Boolean persistKey
    // Size: 0x1
    // Offset: 0x28
    bool persistKey;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean persisted
    // Size: 0x1
    // Offset: 0x29
    bool persisted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean privateKeyExportable
    // Size: 0x1
    // Offset: 0x2A
    bool privateKeyExportable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x2B
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: rsa
    char __padding4[0x4] = {};
    // private Mono.Security.Cryptography.RSAManaged rsa
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::Cryptography::RSAManaged_* rsa;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::RSAManaged_*) == 0x8);
    public:
    // Get static field: static private System.Security.Cryptography.CspProviderFlags s_UseMachineKeyStore
    static ::System::Security::Cryptography::CspProviderFlags _get_s_UseMachineKeyStore();
    // Set static field: static private System.Security.Cryptography.CspProviderFlags s_UseMachineKeyStore
    static void _set_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value);
    // Get instance field reference: private Mono.Security.Cryptography.KeyPairPersistence store
    [[deprecated("Use field access instead!")]] ::Mono::Security::Cryptography::KeyPairPersistence*& dyn_store();
    // Get instance field reference: private System.Boolean persistKey
    [[deprecated("Use field access instead!")]] bool& dyn_persistKey();
    // Get instance field reference: private System.Boolean persisted
    [[deprecated("Use field access instead!")]] bool& dyn_persisted();
    // Get instance field reference: private System.Boolean privateKeyExportable
    [[deprecated("Use field access instead!")]] bool& dyn_privateKeyExportable();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // Get instance field reference: private Mono.Security.Cryptography.RSAManaged rsa
    [[deprecated("Use field access instead!")]] ::Mono::Security::Cryptography::RSAManaged_*& dyn_rsa();
    // static public System.Boolean get_UseMachineKeyStore()
    // Offset: 0x24E7688
    static bool get_UseMachineKeyStore();
    // public System.Boolean get_PublicOnly()
    // Offset: 0x24E8054
    bool get_PublicOnly();
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters)
    // Offset: 0x24E7C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSACryptoServiceProvider*, creationType>(parameters)));
    }
    // public System.Void .ctor(System.Int32 dwKeySize)
    // Offset: 0x24E7C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSACryptoServiceProvider* New_ctor(int dwKeySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSACryptoServiceProvider*, creationType>(dwKeySize)));
    }
    // public System.Void .ctor(System.Int32 dwKeySize, System.Security.Cryptography.CspParameters parameters)
    // Offset: 0x24E7C54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSACryptoServiceProvider* New_ctor(int dwKeySize, ::System::Security::Cryptography::CspParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSACryptoServiceProvider*, creationType>(dwKeySize, parameters)));
    }
    // static private System.Int32 GetAlgorithmId(System.Security.Cryptography.HashAlgorithmName hashAlgorithm)
    // Offset: 0x24E772C
    static int GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
    // static private System.Exception PaddingModeNotSupported()
    // Offset: 0x24E7AF0
    static ::System::Exception* PaddingModeNotSupported();
    // private System.Void Common(System.Int32 dwKeySize, System.Boolean parameters)
    // Offset: 0x24E7CC0
    void Common(int dwKeySize, bool parameters);
    // private System.Void Common(System.Security.Cryptography.CspParameters p)
    // Offset: 0x24E7EA4
    void Common(::System::Security::Cryptography::CspParameters* p);
    // static private System.Security.Cryptography.HashAlgorithm InternalHashToHashAlgorithm(System.Int32 calgHash)
    // Offset: 0x24E827C
    static ::System::Security::Cryptography::HashAlgorithm* InternalHashToHashAlgorithm(int calgHash);
    // private System.Boolean VerifyHash(System.Byte[] rgbHash, System.Int32 calgHash, System.Byte[] rgbSignature)
    // Offset: 0x24E7B6C
    bool VerifyHash(::ArrayW<uint8_t> rgbHash, int calgHash, ::ArrayW<uint8_t> rgbSignature);
    // private System.Void OnKeyGenerated(System.Object sender, System.EventArgs e)
    // Offset: 0x24E8518
    void OnKeyGenerated(::Il2CppObject* sender, ::System::EventArgs* e);
    // public override System.Int32 get_KeySize()
    // Offset: 0x24E8034
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Int32 AsymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public System.Void .ctor()
    // Offset: 0x24E6A04
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Void RSA::.ctor()
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSACryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSACryptoServiceProvider*, creationType>()));
    }
    // protected override System.Byte[] HashData(System.Byte[] data, System.Int32 offset, System.Int32 count, System.Security.Cryptography.HashAlgorithmName hashAlgorithm)
    // Offset: 0x24E76E4
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Byte[] RSA::HashData(System.Byte[] data, System.Int32 offset, System.Int32 count, System.Security.Cryptography.HashAlgorithmName hashAlgorithm)
    ::ArrayW<uint8_t> HashData(::ArrayW<uint8_t> data, int offset, int count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
    // public override System.Boolean VerifyHash(System.Byte[] hash, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x24E78A8
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Boolean RSA::VerifyHash(System.Byte[] hash, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    bool VerifyHash(::ArrayW<uint8_t> hash, ::ArrayW<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // protected override System.Void Finalize()
    // Offset: 0x24E7FC0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Byte[] EncryptValue(System.Byte[] rgb)
    // Offset: 0x24E8070
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Byte[] RSA::EncryptValue(System.Byte[] rgb)
    ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb);
    // public override System.Security.Cryptography.RSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0x24E8094
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Security.Cryptography.RSAParameters RSA::ExportParameters(System.Boolean includePrivateParameters)
    ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    // Offset: 0x24E8224
    // Implemented from: System.Security.Cryptography.RSA
    // Base method: System.Void RSA::ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x24E84B8
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.RSACryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(RSACryptoServiceProvider), 48 + sizeof(::Mono::Security::Cryptography::RSAManaged_*)> __System_Security_Cryptography_RSACryptoServiceProviderSizeCheck;
  static_assert(sizeof(RSACryptoServiceProvider) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore
// Il2CppName: get_UseMachineKeyStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "get_UseMachineKeyStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly
// Il2CppName: get_PublicOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "get_PublicOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId
// Il2CppName: GetAlgorithmId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId)> {
  static const MethodInfo* get() {
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "GetAlgorithmId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashAlgorithm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported
// Il2CppName: PaddingModeNotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "PaddingModeNotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::Common
// Il2CppName: Common
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)(int, bool)>(&System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  static const MethodInfo* get() {
    static auto* dwKeySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "Common", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dwKeySize, parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::Common
// Il2CppName: Common
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CspParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "Common", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm
// Il2CppName: InternalHashToHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(int)>(&System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* calgHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "InternalHashToHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calgHash});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash
// Il2CppName: VerifyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* calgHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "VerifyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash, calgHash, rgbSignature});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated
// Il2CppName: OnKeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)(::Il2CppObject*, ::System::EventArgs*)>(&System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "OnKeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::HashData
// Il2CppName: HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int, int, ::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::RSACryptoServiceProvider::HashData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count, hashAlgorithm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash
// Il2CppName: VerifyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  static const MethodInfo* get() {
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "VerifyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, signature, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&System::Security::Cryptography::RSACryptoServiceProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue
// Il2CppName: EncryptValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "EncryptValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::RSAParameters)>(&System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSACryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::RSACryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSACryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
