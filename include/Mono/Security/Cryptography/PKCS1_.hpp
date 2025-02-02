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
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: PKCS1
  class PKCS1_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS1_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS1_*, "Mono.Security.Cryptography", "PKCS1");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS1
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS1_ : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] emptySHA1
    static ::ArrayW<uint8_t> _get_emptySHA1();
    // Set static field: static private System.Byte[] emptySHA1
    static void _set_emptySHA1(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA256
    static ::ArrayW<uint8_t> _get_emptySHA256();
    // Set static field: static private System.Byte[] emptySHA256
    static void _set_emptySHA256(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA384
    static ::ArrayW<uint8_t> _get_emptySHA384();
    // Set static field: static private System.Byte[] emptySHA384
    static void _set_emptySHA384(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] emptySHA512
    static ::ArrayW<uint8_t> _get_emptySHA512();
    // Set static field: static private System.Byte[] emptySHA512
    static void _set_emptySHA512(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x1FE6F4C
    static void _cctor();
    // static private System.Boolean Compare(System.Byte[] array1, System.Byte[] array2)
    // Offset: 0x1FE62DC
    static bool Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2);
    // static public System.Byte[] I2OSP(System.Byte[] x, System.Int32 size)
    // Offset: 0x1FE6358
    static ::ArrayW<uint8_t> I2OSP(::ArrayW<uint8_t> x, int size);
    // static public System.Byte[] OS2IP(System.Byte[] x)
    // Offset: 0x1FE63EC
    static ::ArrayW<uint8_t> OS2IP(::ArrayW<uint8_t> x);
    // static public System.Byte[] RSAVP1(System.Security.Cryptography.RSA rsa, System.Byte[] s)
    // Offset: 0x1FE64C0
    static ::ArrayW<uint8_t> RSAVP1(::System::Security::Cryptography::RSA* rsa, ::ArrayW<uint8_t> s);
    // static public System.Boolean Verify_v15(System.Security.Cryptography.RSA rsa, System.Security.Cryptography.HashAlgorithm hash, System.Byte[] hashValue, System.Byte[] signature)
    // Offset: 0x1FE64E0
    static bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature);
    // static System.Boolean Verify_v15(System.Security.Cryptography.RSA rsa, System.String hashName, System.Byte[] hashValue, System.Byte[] signature)
    // Offset: 0x1FE6760
    static bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::StringW hashName, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature);
    // static public System.Boolean Verify_v15(System.Security.Cryptography.RSA rsa, System.Security.Cryptography.HashAlgorithm hash, System.Byte[] hashValue, System.Byte[] signature, System.Boolean tryNonStandardEncoding)
    // Offset: 0x1FE6570
    static bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature, bool tryNonStandardEncoding);
    // static public System.Byte[] Encode_v15(System.Security.Cryptography.HashAlgorithm hash, System.Byte[] hashValue, System.Int32 emLength)
    // Offset: 0x1FE6C48
    static ::ArrayW<uint8_t> Encode_v15(::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue, int emLength);
    // static System.Security.Cryptography.HashAlgorithm CreateFromName(System.String name)
    // Offset: 0x1FE68CC
    static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::StringW name);
  }; // Mono.Security.Cryptography.PKCS1
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::PKCS1_::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1_::Compare)> {
  static const MethodInfo* get() {
    static auto* array1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* array2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array1, array2});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::I2OSP
// Il2CppName: I2OSP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::PKCS1_::I2OSP)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "I2OSP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, size});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::OS2IP
// Il2CppName: OS2IP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1_::OS2IP)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "OS2IP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::RSAVP1
// Il2CppName: RSAVP1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1_::RSAVP1)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "RSAVP1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::Verify_v15
// Il2CppName: Verify_v15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1_::Verify_v15)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithm")->byval_arg;
    static auto* hashValue = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "Verify_v15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa, hash, hashValue, signature});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::Verify_v15
// Il2CppName: Verify_v15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1_::Verify_v15)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hashValue = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "Verify_v15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa, hashName, hashValue, signature});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::Verify_v15
// Il2CppName: Verify_v15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&Mono::Security::Cryptography::PKCS1_::Verify_v15)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithm")->byval_arg;
    static auto* hashValue = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* tryNonStandardEncoding = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "Verify_v15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa, hash, hashValue, signature, tryNonStandardEncoding});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::Encode_v15
// Il2CppName: Encode_v15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::PKCS1_::Encode_v15)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithm")->byval_arg;
    static auto* hashValue = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* emLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "Encode_v15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, hashValue, emLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS1_::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::StringW)>(&Mono::Security::Cryptography::PKCS1_::CreateFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS1_*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
