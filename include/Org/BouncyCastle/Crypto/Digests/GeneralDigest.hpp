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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
  class GeneralDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Byte[] xBuf
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* xBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 xBufOff
    // Size: 0x4
    // Offset: 0x18
    int xBufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: xBufOff and: byteCount
    char __padding1[0x4] = {};
    // private System.Int64 byteCount
    // Size: 0x8
    // Offset: 0x20
    int64_t byteCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: GeneralDigest
    GeneralDigest(::Array<uint8_t>* xBuf_ = {}, int xBufOff_ = {}, int64_t byteCount_ = {}) noexcept : xBuf{xBuf_}, xBufOff{xBufOff_}, byteCount{byteCount_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Crypto.Digests.GeneralDigest t)
    // Offset: 0x1CD1D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::GeneralDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::GeneralDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralDigest*, creationType>(t)));
    }
    // protected System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.GeneralDigest t)
    // Offset: 0x1CD1DF0
    void CopyIn(Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1CD1E48
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1CD1EDC
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Void Finish()
    // Offset: 0x1CD20C0
    void Finish();
    // public System.Void Reset()
    // Offset: 0x1CD2128
    void Reset();
    // public System.Int32 GetByteLength()
    // Offset: 0x1CD2158
    int GetByteLength();
    // System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0xFFFFFFFF
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0xFFFFFFFF
    void ProcessLength(int64_t bitLength);
    // System.Void ProcessBlock()
    // Offset: 0xFFFFFFFF
    void ProcessBlock();
    // public System.String get_AlgorithmName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0xFFFFFFFF
    int GetDigestSize();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFF
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable t)
    // Offset: 0xFFFFFFFF
    void Reset(Org::BouncyCastle::Utilities::IMemoable* t);
    // System.Void .ctor()
    // Offset: 0x1CD1D04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::GeneralDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralDigest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.GeneralDigest
  #pragma pack(pop)
  static check_size<sizeof(GeneralDigest), 32 + sizeof(int64_t)> __Org_BouncyCastle_Crypto_Digests_GeneralDigestSizeCheck;
  static_assert(sizeof(GeneralDigest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::GeneralDigest*, "Org.BouncyCastle.Crypto.Digests", "GeneralDigest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(Org::BouncyCastle::Crypto::Digests::GeneralDigest*)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::CopyIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Digests::GeneralDigest*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::BlockUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::Finish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::GetByteLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::ProcessBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::GeneralDigest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::GeneralDigest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::GeneralDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Utilities::IMemoable*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::GeneralDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
