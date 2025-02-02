// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_anySimpleType
#include "System/Xml/Schema/Datatype_anySimpleType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaWhiteSpace
  struct XmlSchemaWhiteSpace;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_anyAtomicType
  class Datatype_anyAtomicType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_anyAtomicType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_anyAtomicType*, "System.Xml.Schema", "Datatype_anyAtomicType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_anyAtomicType
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_anyAtomicType : public ::System::Xml::Schema::Datatype_anySimpleType {
    public:
    // override System.Xml.Schema.XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
    // Offset: 0x1D11D58
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlSchemaWhiteSpace Datatype_anySimpleType::get_BuiltInWhitespaceFacet()
    ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1D11D60
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_anySimpleType::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public System.Void .ctor()
    // Offset: 0x1D11D68
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_anyAtomicType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_anyAtomicType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_anyAtomicType*, creationType>()));
    }
    // override System.Xml.Schema.XmlValueConverter CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x1D11CF0
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlValueConverter Datatype_anySimpleType::CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);
  }; // System.Xml.Schema.Datatype_anyAtomicType
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_anyAtomicType::get_BuiltInWhitespaceFacet
// Il2CppName: get_BuiltInWhitespaceFacet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (System::Xml::Schema::Datatype_anyAtomicType::*)()>(&System::Xml::Schema::Datatype_anyAtomicType::get_BuiltInWhitespaceFacet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_anyAtomicType*), "get_BuiltInWhitespaceFacet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_anyAtomicType::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_anyAtomicType::*)()>(&System::Xml::Schema::Datatype_anyAtomicType::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_anyAtomicType*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_anyAtomicType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_anyAtomicType::CreateValueConverter
// Il2CppName: CreateValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::Datatype_anyAtomicType::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::Datatype_anyAtomicType::CreateValueConverter)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_anyAtomicType*), "CreateValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
