// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerApplicationSpecific
  class DerApplicationSpecific : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.Boolean isConstructed
    // Size: 0x1
    // Offset: 0x10
    bool isConstructed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConstructed and: tag
    char __padding0[0x3] = {};
    // private readonly System.Int32 tag
    // Size: 0x4
    // Offset: 0x14
    int tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Byte[] octets
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* octets;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DerApplicationSpecific
    DerApplicationSpecific(bool isConstructed_ = {}, int tag_ = {}, ::Array<uint8_t>* octets_ = {}) noexcept : isConstructed{isConstructed_}, tag{tag_}, octets{octets_} {}
    // System.Void .ctor(System.Boolean isConstructed, System.Int32 tag, System.Byte[] octets)
    // Offset: 0x16F0CD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerApplicationSpecific* New_ctor(bool isConstructed, int tag, ::Array<uint8_t>* octets) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerApplicationSpecific::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerApplicationSpecific*, creationType>(isConstructed, tag, octets)));
    }
    // public System.Void .ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1EncodableVector vec)
    // Offset: 0x16F784C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerApplicationSpecific* New_ctor(int tagNo, Org::BouncyCastle::Asn1::Asn1EncodableVector* vec) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerApplicationSpecific::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerApplicationSpecific*, creationType>(tagNo, vec)));
    }
    // public System.Boolean IsConstructed()
    // Offset: 0x16FE344
    bool IsConstructed();
    // public System.Byte[] GetContents()
    // Offset: 0x16FE34C
    ::Array<uint8_t>* GetContents();
    // public System.Int32 get_ApplicationTag()
    // Offset: 0x16FE354
    int get_ApplicationTag();
    // public Org.BouncyCastle.Asn1.Asn1Object GetObject(System.Int32 derTagNo)
    // Offset: 0x16FE35C
    Org::BouncyCastle::Asn1::Asn1Object* GetObject(int derTagNo);
    // private System.Byte[] ReplaceTagNumber(System.Int32 newTag, System.Byte[] input)
    // Offset: 0x16FE440
    ::Array<uint8_t>* ReplaceTagNumber(int newTag, ::Array<uint8_t>* input);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x16FE590
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x16FE61C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x16FE724
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
  }; // Org.BouncyCastle.Asn1.DerApplicationSpecific
  #pragma pack(pop)
  static check_size<sizeof(DerApplicationSpecific), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_DerApplicationSpecificSizeCheck;
  static_assert(sizeof(DerApplicationSpecific) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerApplicationSpecific*, "Org.BouncyCastle.Asn1", "DerApplicationSpecific");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::IsConstructed
// Il2CppName: IsConstructed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)()>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::IsConstructed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "IsConstructed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::GetContents
// Il2CppName: GetContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)()>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::GetContents)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "GetContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::get_ApplicationTag
// Il2CppName: get_ApplicationTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)()>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::get_ApplicationTag)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "get_ApplicationTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)(int)>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::GetObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::ReplaceTagNumber
// Il2CppName: ReplaceTagNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)(int, ::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::ReplaceTagNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "ReplaceTagNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerOutputStream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::Asn1Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerApplicationSpecific::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerApplicationSpecific::*)()>(&Org::BouncyCastle::Asn1::DerApplicationSpecific::Asn1GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerApplicationSpecific*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
