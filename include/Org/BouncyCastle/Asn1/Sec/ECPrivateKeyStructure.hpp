// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Sec
namespace Org::BouncyCastle::Asn1::Sec {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Sec.ECPrivateKeyStructure
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPrivateKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    public:
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1Sequence*
    constexpr operator Org::BouncyCastle::Asn1::Asn1Sequence*() const noexcept {
      return seq;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Sequence seq
    Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1975920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyStructure*, creationType>(seq)));
    }
    // public System.Void .ctor(System.Int32 orderBitLength, Org.BouncyCastle.Math.BigInteger key)
    // Offset: 0x19759BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyStructure* New_ctor(int orderBitLength, Org::BouncyCastle::Math::BigInteger* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyStructure*, creationType>(orderBitLength, key)));
    }
    // public System.Void .ctor(System.Int32 orderBitLength, Org.BouncyCastle.Math.BigInteger key, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x19759C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyStructure* New_ctor(int orderBitLength, Org::BouncyCastle::Math::BigInteger* key, Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyStructure*, creationType>(orderBitLength, key, parameters)));
    }
    // public System.Void .ctor(System.Int32 orderBitLength, Org.BouncyCastle.Math.BigInteger key, Org.BouncyCastle.Asn1.DerBitString publicKey, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x19759D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyStructure* New_ctor(int orderBitLength, Org::BouncyCastle::Math::BigInteger* key, Org::BouncyCastle::Asn1::DerBitString* publicKey, Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyStructure*, creationType>(orderBitLength, key, publicKey, parameters)));
    }
    // static public Org.BouncyCastle.Asn1.Sec.ECPrivateKeyStructure GetInstance(System.Object obj)
    // Offset: 0x197587C
    static Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* GetInstance(::Il2CppObject* obj);
    // public Org.BouncyCastle.Math.BigInteger GetKey()
    // Offset: 0x1975C80
    Org::BouncyCastle::Math::BigInteger* GetKey();
    // public Org.BouncyCastle.Asn1.DerBitString GetPublicKey()
    // Offset: 0x1975D50
    Org::BouncyCastle::Asn1::DerBitString* GetPublicKey();
    // public Org.BouncyCastle.Asn1.Asn1Object GetParameters()
    // Offset: 0x19760CC
    Org::BouncyCastle::Asn1::Asn1Object* GetParameters();
    // private Org.BouncyCastle.Asn1.Asn1Object GetObjectInTag(System.Int32 tagNo)
    // Offset: 0x1975DD8
    Org::BouncyCastle::Asn1::Asn1Object* GetObjectInTag(int tagNo);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19760D4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Sec.ECPrivateKeyStructure
  #pragma pack(pop)
  static check_size<sizeof(ECPrivateKeyStructure), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*)> __Org_BouncyCastle_Asn1_Sec_ECPrivateKeyStructureSizeCheck;
  static_assert(sizeof(ECPrivateKeyStructure) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Sec", "ECPrivateKeyStructure");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetPublicKey
// Il2CppName: GetPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetPublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "GetPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetParameters
// Il2CppName: GetParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "GetParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetObjectInTag
// Il2CppName: GetObjectInTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(int)>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetObjectInTag)> {
  static const MethodInfo* get() {
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "GetObjectInTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tagNo});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
