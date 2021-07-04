// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  class Blake2sDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    // private System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x10
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyLength
    // Size: 0x4
    // Offset: 0x14
    int keyLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] salt
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* salt;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] personalization
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* personalization;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x38
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferPos and: internalState
    char __padding6[0x4] = {};
    // private System.UInt32[] internalState
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* internalState;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] chainValue
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint>* chainValue;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32 t0
    // Size: 0x4
    // Offset: 0x50
    uint t0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 t1
    // Size: 0x4
    // Offset: 0x54
    uint t1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 f0
    // Size: 0x4
    // Offset: 0x58
    uint f0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Blake2sDigest
    Blake2sDigest(int digestLength_ = {}, int keyLength_ = {}, ::Array<uint8_t>* salt_ = {}, ::Array<uint8_t>* personalization_ = {}, ::Array<uint8_t>* key_ = {}, ::Array<uint8_t>* buffer_ = {}, int bufferPos_ = {}, ::Array<uint>* internalState_ = {}, ::Array<uint>* chainValue_ = {}, uint t0_ = {}, uint t1_ = {}, uint f0_ = {}) noexcept : digestLength{digestLength_}, keyLength{keyLength_}, salt{salt_}, personalization{personalization_}, key{key_}, buffer{buffer_}, bufferPos{bufferPos_}, internalState{internalState_}, chainValue{chainValue_}, t0{t0_}, t1{t1_}, f0{f0_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Get static field: static private readonly System.UInt32[] blake2s_IV
    static ::Array<uint>* _get_blake2s_IV();
    // Set static field: static private readonly System.UInt32[] blake2s_IV
    static void _set_blake2s_IV(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[,] blake2s_sigma
    static ::Array<uint8_t>* _get_blake2s_sigma();
    // Set static field: static private readonly System.Byte[,] blake2s_sigma
    static void _set_blake2s_sigma(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Int32 digestBits)
    // Offset: 0x1CCF588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Blake2sDigest* New_ctor(int digestBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Blake2sDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Blake2sDigest*, creationType>(digestBits)));
    }
    // private System.Void Init()
    // Offset: 0x1CCF690
    void Init();
    // private System.Void InitializeInternalState()
    // Offset: 0x1CCFA04
    void InitializeInternalState();
    // public System.Void Update(System.Byte b)
    // Offset: 0x1CCFBB8
    void Update(uint8_t b);
    // public System.Void BlockUpdate(System.Byte[] message, System.Int32 offset, System.Int32 len)
    // Offset: 0x1CD0208
    void BlockUpdate(::Array<uint8_t>* message, int offset, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOffset)
    // Offset: 0x1CD034C
    int DoFinal(::Array<uint8_t>* output, int outOffset);
    // public System.Void Reset()
    // Offset: 0x1CD0490
    void Reset();
    // private System.Void Compress(System.Byte[] message, System.Int32 messagePos)
    // Offset: 0x1CCFC7C
    void Compress(::Array<uint8_t>* message, int messagePos);
    // private System.Void G(System.UInt32 m1, System.UInt32 m2, System.Int32 posA, System.Int32 posB, System.Int32 posC, System.Int32 posD)
    // Offset: 0x1CD0500
    void G(uint m1, uint m2, int posA, int posB, int posC, int posD);
    // private System.UInt32 rotr32(System.UInt32 x, System.Int32 rot)
    // Offset: 0x1CD06F0
    uint rotr32(uint x, int rot);
    // public System.String get_AlgorithmName()
    // Offset: 0x1CD06F8
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1CD0740
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x1CD0748
    int GetByteLength();
    // static private System.Void .cctor()
    // Offset: 0x1CD0750
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  #pragma pack(pop)
  static check_size<sizeof(Blake2sDigest), 88 + sizeof(uint)> __Org_BouncyCastle_Crypto_Digests_Blake2sDigestSizeCheck;
  static_assert(sizeof(Blake2sDigest) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2sDigest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::InitializeInternalState
// Il2CppName: InitializeInternalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::InitializeInternalState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "InitializeInternalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::BlockUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Compress
// Il2CppName: Compress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Compress)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Compress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint, uint, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::G)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::rotr32
// Il2CppName: rotr32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::rotr32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "rotr32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetByteLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
