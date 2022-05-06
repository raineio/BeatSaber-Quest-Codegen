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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlSchemaWhiteSpace
  struct XmlSchemaWhiteSpace;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_NOTATION
  class Datatype_NOTATION;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_NOTATION);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NOTATION*, "System.Xml.Schema", "Datatype_NOTATION");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_NOTATION
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_NOTATION : public ::System::Xml::Schema::Datatype_anySimpleType {
    public:
    // Get static field: static private readonly System.Type atomicValueType
    static ::System::Type* _get_atomicValueType();
    // Set static field: static private readonly System.Type atomicValueType
    static void _set_atomicValueType(::System::Type* value);
    // Get static field: static private readonly System.Type listValueType
    static ::System::Type* _get_listValueType();
    // Set static field: static private readonly System.Type listValueType
    static void _set_listValueType(::System::Type* value);
    // override System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0x1C53B9C
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.FacetsChecker Datatype_anySimpleType::get_FacetsChecker()
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1C53C04
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_anySimpleType::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public override System.Xml.XmlTokenizedType get_TokenizedType()
    // Offset: 0x1C53C0C
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.XmlTokenizedType Datatype_anySimpleType::get_TokenizedType()
    ::System::Xml::XmlTokenizedType get_TokenizedType();
    // public override System.Type get_ValueType()
    // Offset: 0x1C53C14
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ValueType()
    ::System::Type* get_ValueType();
    // override System.Type get_ListValueType()
    // Offset: 0x1C53C7C
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ListValueType()
    ::System::Type* get_ListValueType();
    // override System.Xml.Schema.XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
    // Offset: 0x1C53CE4
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlSchemaWhiteSpace Datatype_anySimpleType::get_BuiltInWhitespaceFacet()
    ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
    // public System.Void .ctor()
    // Offset: 0x1C53F14
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_NOTATION* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_NOTATION::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_NOTATION*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C53F78
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
    // override System.Xml.Schema.XmlValueConverter CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x1C53B90
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlValueConverter Datatype_anySimpleType::CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);
    // override System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x1C53CEC
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Exception Datatype_anySimpleType::TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
  }; // System.Xml.Schema.Datatype_NOTATION
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_TokenizedType
// Il2CppName: get_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_TokenizedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_ListValueType
// Il2CppName: get_ListValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_ListValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_ListValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::get_BuiltInWhitespaceFacet
// Il2CppName: get_BuiltInWhitespaceFacet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (System::Xml::Schema::Datatype_NOTATION::*)()>(&System::Xml::Schema::Datatype_NOTATION::get_BuiltInWhitespaceFacet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "get_BuiltInWhitespaceFacet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_NOTATION::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::CreateValueConverter
// Il2CppName: CreateValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::Datatype_NOTATION::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::Datatype_NOTATION::CreateValueConverter)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "CreateValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NOTATION::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_NOTATION::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_NOTATION::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NOTATION*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
