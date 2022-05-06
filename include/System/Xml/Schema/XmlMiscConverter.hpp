// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: XmlValueConverter because it is already included!
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlMiscConverter
  class XmlMiscConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlMiscConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlMiscConverter*, "System.Xml.Schema", "XmlMiscConverter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlMiscConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlMiscConverter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x2051B50
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);
    // private System.Object ChangeTypeWildcardDestination(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2052138
    ::Il2CppObject* ChangeTypeWildcardDestination(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Object ChangeTypeWildcardSource(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x20527B0
    ::Il2CppObject* ChangeTypeWildcardSource(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x2051AD8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlMiscConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlMiscConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlMiscConverter*, creationType>(schemaType)));
    }
    // public override System.String ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2051BB0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    ::StringW ToString(::Il2CppObject* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2052274
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x205291C
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlMiscConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlMiscConverter::Create)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::ChangeTypeWildcardDestination
// Il2CppName: ChangeTypeWildcardDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlMiscConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlMiscConverter::ChangeTypeWildcardDestination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "ChangeTypeWildcardDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::ChangeTypeWildcardSource
// Il2CppName: ChangeTypeWildcardSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlMiscConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlMiscConverter::ChangeTypeWildcardSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "ChangeTypeWildcardSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlMiscConverter::*)(::Il2CppObject*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlMiscConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlMiscConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlMiscConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlMiscConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlMiscConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlMiscConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlMiscConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
