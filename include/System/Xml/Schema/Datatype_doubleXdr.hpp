// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_double
#include "System/Xml/Schema/Datatype_double.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_doubleXdr
  class Datatype_doubleXdr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_doubleXdr);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_doubleXdr*, "System.Xml.Schema", "Datatype_doubleXdr");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_doubleXdr
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_doubleXdr : public ::System::Xml::Schema::Datatype_double {
    public:
    // public System.Void .ctor()
    // Offset: 0x1C4AA38
    // Implemented from: System.Xml.Schema.Datatype_double
    // Base method: System.Void Datatype_double::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_doubleXdr* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_doubleXdr::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_doubleXdr*, creationType>()));
    }
    // public override System.Object ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr)
    // Offset: 0x1C4A808
    // Implemented from: System.Xml.Schema.DatatypeImplementation
    // Base method: System.Object DatatypeImplementation::ParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr)
    ::Il2CppObject* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);
  }; // System.Xml.Schema.Datatype_doubleXdr
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_doubleXdr::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_doubleXdr::ParseValue
// Il2CppName: ParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::Datatype_doubleXdr::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::Datatype_doubleXdr::ParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_doubleXdr*), "ParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr});
  }
};
