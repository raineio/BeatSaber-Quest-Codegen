// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerUtcTime
  class DerUtcTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUtcTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUtcTime*, "Org.BouncyCastle.Asn1", "DerUtcTime");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUtcTime
  // [TokenAttribute] Offset: FFFFFFFF
  class DerUtcTime : public ::Org::BouncyCastle::Asn1::Asn1Object {
    public:
    public:
    // private readonly System.String time
    // Size: 0x8
    // Offset: 0x10
    ::StringW time;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return time;
    }
    // Get instance field reference: private readonly System.String time
    [[deprecated("Use field access instead!")]] ::StringW& dyn_time();
    // public System.String get_TimeString()
    // Offset: 0x1C385C8
    ::StringW get_TimeString();
    // public System.String get_AdjustedTimeString()
    // Offset: 0x1C3847C
    ::StringW get_AdjustedTimeString();
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x1C27CDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUtcTime* New_ctor(::ArrayW<uint8_t> bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerUtcTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUtcTime*, creationType>(bytes)));
    }
    // public System.DateTime ToAdjustedDateTime()
    // Offset: 0x1C38424
    ::System::DateTime ToAdjustedDateTime();
    // private System.DateTime ParseDateString(System.String dateStr, System.String formatStr)
    // Offset: 0x1C38504
    ::System::DateTime ParseDateString(::StringW dateStr, ::StringW formatStr);
    // private System.Byte[] GetOctets()
    // Offset: 0x1C38980
    ::ArrayW<uint8_t> GetOctets();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1C3898C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1C389C8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1C38A7C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1C38A98
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.DerUtcTime
  #pragma pack(pop)
  static check_size<sizeof(DerUtcTime), 16 + sizeof(::StringW)> __Org_BouncyCastle_Asn1_DerUtcTimeSizeCheck;
  static_assert(sizeof(DerUtcTime) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::get_TimeString
// Il2CppName: get_TimeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::get_TimeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "get_TimeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::get_AdjustedTimeString
// Il2CppName: get_AdjustedTimeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::get_AdjustedTimeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "get_AdjustedTimeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ToAdjustedDateTime
// Il2CppName: ToAdjustedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::ToAdjustedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ToAdjustedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ParseDateString
// Il2CppName: ParseDateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Org::BouncyCastle::Asn1::DerUtcTime::*)(::StringW, ::StringW)>(&Org::BouncyCastle::Asn1::DerUtcTime::ParseDateString)> {
  static const MethodInfo* get() {
    static auto* dateStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ParseDateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateStr, formatStr});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::GetOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerUtcTime::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerUtcTime::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerUtcTime::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerUtcTime::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtcTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::DerUtcTime::*)()>(&Org::BouncyCastle::Asn1::DerUtcTime::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtcTime*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
