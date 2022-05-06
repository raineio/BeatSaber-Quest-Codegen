// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerSequence
#include "Org/BouncyCastle/Asn1/DerSequence.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: LazyDerSequence
  class LazyDerSequence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyDerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyDerSequence*, "Org.BouncyCastle.Asn1", "LazyDerSequence");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.LazyDerSequence
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10B2484
  class LazyDerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
    public:
    public:
    // private System.Byte[] encoded
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> encoded;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*>
    constexpr operator ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*>() const noexcept = delete;
    // Get instance field reference: private System.Byte[] encoded
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_encoded();
    // System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x1CC81CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyDerSequence* New_ctor(::ArrayW<uint8_t> encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::LazyDerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyDerSequence*, creationType>(encoded)));
    }
    // private System.Void Parse()
    // Offset: 0x1CC8340
    void Parse();
    // public override Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x1CC8494
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: Org.BouncyCastle.Asn1.Asn1Encodable Asn1Sequence::get_Item(System.Int32 index)
    ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public override System.Int32 get_Count()
    // Offset: 0x1CC84EC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Int32 Asn1Sequence::get_Count()
    int get_Count();
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1CC84C4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Collections.IEnumerator Asn1Sequence::GetEnumerator()
    ::System::Collections::IEnumerator* GetEnumerator();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1CC8514
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.LazyDerSequence
  #pragma pack(pop)
  static check_size<sizeof(LazyDerSequence), 24 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Asn1_LazyDerSequenceSizeCheck;
  static_assert(sizeof(LazyDerSequence) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(&Org::BouncyCastle::Asn1::LazyDerSequence::Parse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSequence*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (Org::BouncyCastle::Asn1::LazyDerSequence::*)(int)>(&Org::BouncyCastle::Asn1::LazyDerSequence::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSequence*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(&Org::BouncyCastle::Asn1::LazyDerSequence::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSequence*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(&Org::BouncyCastle::Asn1::LazyDerSequence::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSequence*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSequence::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyDerSequence::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::LazyDerSequence::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSequence*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
