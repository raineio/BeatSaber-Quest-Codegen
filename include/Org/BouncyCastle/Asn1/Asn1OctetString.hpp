// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
#include "Org/BouncyCastle/Asn1/Asn1OctetStringParser.hpp"
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
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1OctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1OctetString*, "Org.BouncyCastle.Asn1", "Asn1OctetString");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1OctetString
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1OctetString : public ::Org::BouncyCastle::Asn1::Asn1Object/*, public ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*/ {
    public:
    public:
    // System.Byte[] str
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> str;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser
    operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this);
    }
    // Creating interface conversion operator: i_Asn1OctetStringParser
    inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* i_Asn1OctetStringParser() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return str;
    }
    // Get instance field reference: System.Byte[] str
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_str();
    // System.Void .ctor(System.Byte[] str)
    // Offset: 0x1CE6DEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1OctetString* New_ctor(::ArrayW<uint8_t> str) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Asn1OctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1OctetString*, creationType>(str)));
    }
    // static public Org.BouncyCastle.Asn1.Asn1OctetString GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x1CE6584
    static ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // static public Org.BouncyCastle.Asn1.Asn1OctetString GetInstance(System.Object obj)
    // Offset: 0x1CE6680
    static ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::Il2CppObject* obj);
    // public System.IO.Stream GetOctetStream()
    // Offset: 0x1CE6E88
    ::System::IO::Stream* GetOctetStream();
    // public System.Byte[] GetOctets()
    // Offset: 0x1CE6EF4
    ::ArrayW<uint8_t> GetOctets();
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1CE6EFC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1CE6F7C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x1CE7078
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.Asn1OctetString
  #pragma pack(pop)
  static check_size<sizeof(Asn1OctetString), 16 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Asn1_Asn1OctetStringSizeCheck;
  static_assert(sizeof(Asn1OctetString) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::Asn1OctetString::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* isExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, isExplicit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Asn1OctetString::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::GetOctetStream
// Il2CppName: GetOctetStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Org::BouncyCastle::Asn1::Asn1OctetString::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetString::GetOctetStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "GetOctetStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::Asn1OctetString::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetString::GetOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1OctetString::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetString::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Asn1OctetString::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::Asn1OctetString::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::Asn1OctetString::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetString::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetString*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
