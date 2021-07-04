// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsnEncodedData
  class AsnEncodedData : public ::Il2CppObject {
    public:
    // System.Security.Cryptography.Oid _oid
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::Oid* oid;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::Oid*) == 0x8);
    // System.Byte[] _raw
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* raw;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AsnEncodedData
    AsnEncodedData(System::Security::Cryptography::Oid* oid_ = {}, ::Array<uint8_t>* raw_ = {}) noexcept : oid{oid_}, raw{raw_} {}
    // public System.Void .ctor(System.String oid, System.Byte[] rawData)
    // Offset: 0x15CDF00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor(::Il2CppString* oid, ::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>(oid, rawData)));
    }
    // public System.Void .ctor(System.Security.Cryptography.Oid oid, System.Byte[] rawData)
    // Offset: 0x15CE050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor(System::Security::Cryptography::Oid* oid, ::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>(oid, rawData)));
    }
    // public System.Security.Cryptography.Oid get_Oid()
    // Offset: 0x15CE114
    System::Security::Cryptography::Oid* get_Oid();
    // public System.Void set_Oid(System.Security.Cryptography.Oid value)
    // Offset: 0x15CE098
    void set_Oid(System::Security::Cryptography::Oid* value);
    // public System.Byte[] get_RawData()
    // Offset: 0x15CE11C
    ::Array<uint8_t>* get_RawData();
    // public System.Void set_RawData(System.Byte[] value)
    // Offset: 0x15CDF88
    void set_RawData(::Array<uint8_t>* value);
    // public System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x15CE124
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // public System.String Format(System.Boolean multiLine)
    // Offset: 0x15CE218
    ::Il2CppString* Format(bool multiLine);
    // System.String ToString(System.Boolean multiLine)
    // Offset: 0x15CE3D8
    ::Il2CppString* ToString(bool multiLine);
    // System.String Default(System.Boolean multiLine)
    // Offset: 0x15CE2C0
    ::Il2CppString* Default(bool multiLine);
    // System.String BasicConstraintsExtension(System.Boolean multiLine)
    // Offset: 0x15CE574
    ::Il2CppString* BasicConstraintsExtension(bool multiLine);
    // System.String EnhancedKeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x15CE68C
    ::Il2CppString* EnhancedKeyUsageExtension(bool multiLine);
    // System.String KeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x15CE7A4
    ::Il2CppString* KeyUsageExtension(bool multiLine);
    // System.String SubjectKeyIdentifierExtension(System.Boolean multiLine)
    // Offset: 0x15CE8BC
    ::Il2CppString* SubjectKeyIdentifierExtension(bool multiLine);
    // System.String SubjectAltName(System.Boolean multiLine)
    // Offset: 0x15CE9D4
    ::Il2CppString* SubjectAltName(bool multiLine);
    // System.String NetscapeCertType(System.Boolean multiLine)
    // Offset: 0x15CED50
    ::Il2CppString* NetscapeCertType(bool multiLine);
    // protected System.Void .ctor()
    // Offset: 0x15CDEF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsnEncodedData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsnEncodedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsnEncodedData*, creationType>()));
    }
  }; // System.Security.Cryptography.AsnEncodedData
  #pragma pack(pop)
  static check_size<sizeof(AsnEncodedData), 24 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_AsnEncodedDataSizeCheck;
  static_assert(sizeof(AsnEncodedData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::get_Oid
// Il2CppName: get_Oid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::Oid* (System::Security::Cryptography::AsnEncodedData::*)()>(&System::Security::Cryptography::AsnEncodedData::get_Oid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "get_Oid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::set_Oid
// Il2CppName: set_Oid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsnEncodedData::*)(System::Security::Cryptography::Oid*)>(&System::Security::Cryptography::AsnEncodedData::set_Oid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "set_Oid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::Oid*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::get_RawData
// Il2CppName: get_RawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::AsnEncodedData::*)()>(&System::Security::Cryptography::AsnEncodedData::get_RawData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "get_RawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::set_RawData
// Il2CppName: set_RawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsnEncodedData::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::AsnEncodedData::set_RawData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "set_RawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsnEncodedData::*)(System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::AsnEncodedData::CopyFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::AsnEncodedData*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::Format)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::Default
// Il2CppName: Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::Default)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::BasicConstraintsExtension
// Il2CppName: BasicConstraintsExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::BasicConstraintsExtension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "BasicConstraintsExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::EnhancedKeyUsageExtension
// Il2CppName: EnhancedKeyUsageExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::EnhancedKeyUsageExtension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "EnhancedKeyUsageExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::KeyUsageExtension
// Il2CppName: KeyUsageExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::KeyUsageExtension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "KeyUsageExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::SubjectKeyIdentifierExtension
// Il2CppName: SubjectKeyIdentifierExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::SubjectKeyIdentifierExtension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "SubjectKeyIdentifierExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::SubjectAltName
// Il2CppName: SubjectAltName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::SubjectAltName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "SubjectAltName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::NetscapeCertType
// Il2CppName: NetscapeCertType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsnEncodedData::*)(bool)>(&System::Security::Cryptography::AsnEncodedData::NetscapeCertType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsnEncodedData*), "NetscapeCertType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsnEncodedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
