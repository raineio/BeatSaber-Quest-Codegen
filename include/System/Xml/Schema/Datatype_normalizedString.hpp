// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_string
#include "System/Xml/Schema/Datatype_string.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlSchemaWhiteSpace
  struct XmlSchemaWhiteSpace;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_normalizedString
  class Datatype_normalizedString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_normalizedString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_normalizedString*, "System.Xml.Schema", "Datatype_normalizedString");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_normalizedString
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string {
    public:
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1C4D0A4
    // Implemented from: System.Xml.Schema.Datatype_string
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_string::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // override System.Xml.Schema.XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
    // Offset: 0x1C4D0AC
    // Implemented from: System.Xml.Schema.Datatype_string
    // Base method: System.Xml.Schema.XmlSchemaWhiteSpace Datatype_string::get_BuiltInWhitespaceFacet()
    ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
    // public System.Void .ctor()
    // Offset: 0x1C4D0B4
    // Implemented from: System.Xml.Schema.Datatype_string
    // Base method: System.Void Datatype_string::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_normalizedString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_normalizedString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_normalizedString*, creationType>()));
    }
  }; // System.Xml.Schema.Datatype_normalizedString
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_normalizedString::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_normalizedString::*)()>(&System::Xml::Schema::Datatype_normalizedString::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_normalizedString*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_normalizedString::get_BuiltInWhitespaceFacet
// Il2CppName: get_BuiltInWhitespaceFacet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (System::Xml::Schema::Datatype_normalizedString::*)()>(&System::Xml::Schema::Datatype_normalizedString::get_BuiltInWhitespaceFacet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_normalizedString*), "get_BuiltInWhitespaceFacet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_normalizedString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
