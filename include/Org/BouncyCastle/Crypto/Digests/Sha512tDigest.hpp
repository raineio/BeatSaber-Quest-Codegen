// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.LongDigest
#include "Org/BouncyCastle/Crypto/Digests/LongDigest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: Sha512tDigest
  class Sha512tDigest;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha512tDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*, "Org.BouncyCastle.Crypto.Digests", "Sha512tDigest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha512tDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class Sha512tDigest : public Org::BouncyCastle::Crypto::Digests::LongDigest {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x84
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64 H1t
    // Size: 0x8
    // Offset: 0x88
    uint64_t H1t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H2t
    // Size: 0x8
    // Offset: 0x90
    uint64_t H2t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H3t
    // Size: 0x8
    // Offset: 0x98
    uint64_t H3t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H4t
    // Size: 0x8
    // Offset: 0xA0
    uint64_t H4t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H5t
    // Size: 0x8
    // Offset: 0xA8
    uint64_t H5t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H6t
    // Size: 0x8
    // Offset: 0xB0
    uint64_t H6t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H7t
    // Size: 0x8
    // Offset: 0xB8
    uint64_t H7t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H8t
    // Size: 0x8
    // Offset: 0xC0
    uint64_t H8t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int32 digestLength
    int& dyn_digestLength();
    // Get instance field reference: private System.UInt64 H1t
    uint64_t& dyn_H1t();
    // Get instance field reference: private System.UInt64 H2t
    uint64_t& dyn_H2t();
    // Get instance field reference: private System.UInt64 H3t
    uint64_t& dyn_H3t();
    // Get instance field reference: private System.UInt64 H4t
    uint64_t& dyn_H4t();
    // Get instance field reference: private System.UInt64 H5t
    uint64_t& dyn_H5t();
    // Get instance field reference: private System.UInt64 H6t
    uint64_t& dyn_H6t();
    // Get instance field reference: private System.UInt64 H7t
    uint64_t& dyn_H7t();
    // Get instance field reference: private System.UInt64 H8t
    uint64_t& dyn_H8t();
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x1AE52F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512tDigest* New_ctor(int bitLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512tDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512tDigest*, creationType>(bitLength)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha512tDigest t)
    // Offset: 0x1AE55DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512tDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512tDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512tDigest*, creationType>(t)));
    }
    // private System.Void tIvGenerate(System.Int32 bitLength)
    // Offset: 0x1AE5448
    void tIvGenerate(int bitLength);
    // static private System.Void UInt64_To_BE(System.UInt64 n, System.Byte[] bs, System.Int32 off, System.Int32 max)
    // Offset: 0x1AE5810
    static void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs, int off, int max);
    // static private System.Void UInt32_To_BE(System.UInt32 n, System.Byte[] bs, System.Int32 off, System.Int32 max)
    // Offset: 0x1AE58BC
    static void UInt32_To_BE(uint n, ::ArrayW<uint8_t> bs, int off, int max);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1AE567C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.String LongDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1AE5700
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::GetDigestSize()
    int GetDigestSize();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1AE5708
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1AE5878
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset()
    void Reset();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1AE5994
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable LongDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1AE59F4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha512tDigest
  #pragma pack(pop)
  static check_size<sizeof(Sha512tDigest), 192 + sizeof(uint64_t)> __Org_BouncyCastle_Crypto_Digests_Sha512tDigestSizeCheck;
  static_assert(sizeof(Sha512tDigest) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::tIvGenerate
// Il2CppName: tIvGenerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)(int)>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::tIvGenerate)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "tIvGenerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt64_To_BE
// Il2CppName: UInt64_To_BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt64_To_BE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "UInt64_To_BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off, max});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt32_To_BE
// Il2CppName: UInt32_To_BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt32_To_BE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "UInt32_To_BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off, max});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512tDigest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
