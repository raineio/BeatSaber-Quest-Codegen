// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerBitString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBitString*, "Org.BouncyCastle.Asn1", "DerBitString");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerBitString
  // [TokenAttribute] Offset: FFFFFFFF
  class DerBitString : public Org::BouncyCastle::Asn1::DerStringBase {
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
    // protected readonly System.Byte[] mData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> mData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected readonly System.Int32 mPadBits
    // Size: 0x4
    // Offset: 0x18
    int mPadBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly System.Char[] table
    static ::ArrayW<::Il2CppChar> _get_table();
    // Set static field: static private readonly System.Char[] table
    static void _set_table(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: protected readonly System.Byte[] mData
    ::ArrayW<uint8_t>& dyn_mData();
    // Get instance field reference: protected readonly System.Int32 mPadBits
    int& dyn_mPadBits();
    // public System.Int32 get_PadBits()
    // Offset: 0x18F92C8
    int get_PadBits();
    // public System.Void .ctor(System.Byte[] data, System.Int32 padBits)
    // Offset: 0x18F2088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerBitString* New_ctor(::ArrayW<uint8_t> data, int padBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerBitString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerBitString*, creationType>(data, padBits)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x18F9158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerBitString* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerBitString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerBitString*, creationType>(data)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18F961C
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.DerBitString GetInstance(System.Object obj)
    // Offset: 0x18F8DD0
    static Org::BouncyCastle::Asn1::DerBitString* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerBitString GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x18F8FE0
    static Org::BouncyCastle::Asn1::DerBitString* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Byte[] GetOctets()
    // Offset: 0x18F9160
    ::ArrayW<uint8_t> GetOctets();
    // public System.Byte[] GetBytes()
    // Offset: 0x18F9210
    ::ArrayW<uint8_t> GetBytes();
    // static Org.BouncyCastle.Asn1.DerBitString FromAsn1Octets(System.Byte[] octets)
    // Offset: 0x18EDB8C
    static Org::BouncyCastle::Asn1::DerBitString* FromAsn1Octets(::ArrayW<uint8_t> octets);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x18F2330
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x18F9330
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.Int32 DerStringBase::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x18F93C8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String GetString()
    // Offset: 0x18F94B0
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::StringW GetString();
  }; // Org.BouncyCastle.Asn1.DerBitString
  #pragma pack(pop)
  static check_size<sizeof(DerBitString), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_DerBitStringSizeCheck;
  static_assert(sizeof(DerBitString) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::get_PadBits
// Il2CppName: get_PadBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerBitString::*)()>(&Org::BouncyCastle::Asn1::DerBitString::get_PadBits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "get_PadBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DerBitString::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::DerBitString::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::DerBitString::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* isExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, isExplicit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::DerBitString::*)()>(&Org::BouncyCastle::Asn1::DerBitString::GetOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::DerBitString::*)()>(&Org::BouncyCastle::Asn1::DerBitString::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::FromAsn1Octets
// Il2CppName: FromAsn1Octets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::DerBitString::FromAsn1Octets)> {
  static const MethodInfo* get() {
    static auto* octets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "FromAsn1Octets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{octets});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerBitString::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerBitString::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerBitString::*)()>(&Org::BouncyCastle::Asn1::DerBitString::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerBitString::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerBitString::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerBitString::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::DerBitString::*)()>(&Org::BouncyCastle::Asn1::DerBitString::GetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerBitString*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
