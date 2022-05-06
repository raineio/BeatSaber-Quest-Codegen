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
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerT61String
  class DerT61String;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerT61String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerT61String*, "Org.BouncyCastle.Asn1", "DerT61String");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerT61String
  // [TokenAttribute] Offset: FFFFFFFF
  class DerT61String : public ::Org::BouncyCastle::Asn1::DerStringBase {
    public:
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x10
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return str;
    }
    // Get instance field reference: private readonly System.String str
    [[deprecated("Use field access instead!")]] ::StringW& dyn_str();
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1C27C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerT61String* New_ctor(::ArrayW<uint8_t> str) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerT61String::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerT61String*, creationType>(str)));
    }
    // public System.Void .ctor(System.String str)
    // Offset: 0x1C37FA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerT61String* New_ctor(::StringW str) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerT61String::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerT61String*, creationType>(str)));
    }
    // public System.Byte[] GetOctets()
    // Offset: 0x1C38080
    ::ArrayW<uint8_t> GetOctets();
    // public override System.String GetString()
    // Offset: 0x1C3803C
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::StringW GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1C38044
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1C3808C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerT61String
  #pragma pack(pop)
  static check_size<sizeof(DerT61String), 16 + sizeof(::StringW)> __Org_BouncyCastle_Asn1_DerT61StringSizeCheck;
  static_assert(sizeof(DerT61String) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::DerT61String::*)()>(&Org::BouncyCastle::Asn1::DerT61String::GetOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerT61String*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::DerT61String::*)()>(&Org::BouncyCastle::Asn1::DerT61String::GetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerT61String*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerT61String::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerT61String::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerT61String*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerT61String::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerT61String::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerT61String::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerT61String*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
