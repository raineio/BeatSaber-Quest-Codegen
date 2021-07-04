// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.TigerDigest
  class TigerDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Int64 a
    // Size: 0x8
    // Offset: 0x10
    int64_t a;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 b
    // Size: 0x8
    // Offset: 0x18
    int64_t b;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 c
    // Size: 0x8
    // Offset: 0x20
    int64_t c;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 byteCount
    // Size: 0x8
    // Offset: 0x28
    int64_t byteCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bOff
    // Size: 0x4
    // Offset: 0x38
    int bOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bOff and: x
    char __padding5[0x4] = {};
    // private System.Int64[] x
    // Size: 0x8
    // Offset: 0x40
    ::Array<int64_t>* x;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x48
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TigerDigest
    TigerDigest(int64_t a_ = {}, int64_t b_ = {}, int64_t c_ = {}, int64_t byteCount_ = {}, ::Array<uint8_t>* Buffer_ = {}, int bOff_ = {}, ::Array<int64_t>* x_ = {}, int xOff_ = {}) noexcept : a{a_}, b{b_}, c{c_}, byteCount{byteCount_}, Buffer{Buffer_}, bOff{bOff_}, x{x_}, xOff{xOff_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Int64[] t1
    static ::Array<int64_t>* _get_t1();
    // Set static field: static private readonly System.Int64[] t1
    static void _set_t1(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] t2
    static ::Array<int64_t>* _get_t2();
    // Set static field: static private readonly System.Int64[] t2
    static void _set_t2(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] t3
    static ::Array<int64_t>* _get_t3();
    // Set static field: static private readonly System.Int64[] t3
    static void _set_t3(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] t4
    static ::Array<int64_t>* _get_t4();
    // Set static field: static private readonly System.Int64[] t4
    static void _set_t4(::Array<int64_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.TigerDigest t)
    // Offset: 0x18DD4D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TigerDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::TigerDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::TigerDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TigerDigest*, creationType>(t)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x18DD664
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x18DD6AC
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x18DD6B4
    int GetByteLength();
    // private System.Void ProcessWord(System.Byte[] b, System.Int32 off)
    // Offset: 0x18DD6BC
    void ProcessWord(::Array<uint8_t>* b, int off);
    // public System.Void Update(System.Byte input)
    // Offset: 0x18DDBE4
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x18DDC68
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // private System.Void RoundABC(System.Int64 x, System.Int64 mul)
    // Offset: 0x18DDD94
    void RoundABC(int64_t x, int64_t mul);
    // private System.Void RoundBCA(System.Int64 x, System.Int64 mul)
    // Offset: 0x18DDF64
    void RoundBCA(int64_t x, int64_t mul);
    // private System.Void RoundCAB(System.Int64 x, System.Int64 mul)
    // Offset: 0x18DE130
    void RoundCAB(int64_t x, int64_t mul);
    // private System.Void KeySchedule()
    // Offset: 0x18DE2FC
    void KeySchedule();
    // private System.Void ProcessBlock()
    // Offset: 0x18DD7F8
    void ProcessBlock();
    // private System.Void UnpackWord(System.Int64 r, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18DE58C
    void UnpackWord(int64_t r, ::Array<uint8_t>* output, int outOff);
    // private System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x18DE688
    void ProcessLength(int64_t bitLength);
    // private System.Void Finish()
    // Offset: 0x18DE6C0
    void Finish();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18DE710
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18DD424
    void Reset();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18DE77C
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18DD564
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // static private System.Void .cctor()
    // Offset: 0x18DE7DC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18DD3A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TigerDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::TigerDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TigerDigest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.TigerDigest
  #pragma pack(pop)
  static check_size<sizeof(TigerDigest), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_TigerDigestSizeCheck;
  static_assert(sizeof(TigerDigest) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::TigerDigest*, "Org.BouncyCastle.Crypto.Digests", "TigerDigest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::GetByteLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::BlockUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundABC
// Il2CppName: RoundABC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundABC)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundABC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundBCA
// Il2CppName: RoundBCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundBCA)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundBCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundCAB
// Il2CppName: RoundCAB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundCAB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundCAB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::KeySchedule
// Il2CppName: KeySchedule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::KeySchedule)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "KeySchedule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::UnpackWord
// Il2CppName: UnpackWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::UnpackWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "UnpackWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Finish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Utilities::IMemoable*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
