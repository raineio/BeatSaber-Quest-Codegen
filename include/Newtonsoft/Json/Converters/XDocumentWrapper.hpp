// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XContainerWrapper
#include "Newtonsoft/Json/Converters/XContainerWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlDocument
#include "Newtonsoft/Json/Converters/IXmlDocument.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XDocument
  class XDocument;
}
// Forward declaring namespace: Newtonsoft::Json::Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: IXmlElement
  class IXmlElement;
  // Skipping declaration: IXmlNode because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XDocumentWrapper
  class XDocumentWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDocumentWrapper*, "Newtonsoft.Json.Converters", "XDocumentWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XDocumentWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XDocumentWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper/*, public ::Newtonsoft::Json::Converters::IXmlDocument*/ {
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlDocument
    operator ::Newtonsoft::Json::Converters::IXmlDocument() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(this);
    }
    // Creating interface conversion operator: i_IXmlDocument
    inline ::Newtonsoft::Json::Converters::IXmlDocument* i_IXmlDocument() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(this);
    }
    // private System.Xml.Linq.XDocument get_Document()
    // Offset: 0x17B5A18
    ::System::Xml::Linq::XDocument* get_Document();
    // public Newtonsoft.Json.Converters.IXmlElement get_DocumentElement()
    // Offset: 0x17B62DC
    ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();
    // public System.Void .ctor(System.Xml.Linq.XDocument document)
    // Offset: 0x17B5614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDocumentWrapper* New_ctor(::System::Xml::Linq::XDocument* document) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XDocumentWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDocumentWrapper*, creationType>(document)));
    }
    // public Newtonsoft.Json.Converters.IXmlNode CreateComment(System.String text)
    // Offset: 0x17B5BE0
    ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW text);
    // public Newtonsoft.Json.Converters.IXmlNode CreateTextNode(System.String text)
    // Offset: 0x17B5C64
    ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW text);
    // public Newtonsoft.Json.Converters.IXmlNode CreateCDataSection(System.String data)
    // Offset: 0x17B5CE8
    ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW data);
    // public Newtonsoft.Json.Converters.IXmlNode CreateWhitespace(System.String text)
    // Offset: 0x17B5D6C
    ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW text);
    // public Newtonsoft.Json.Converters.IXmlNode CreateSignificantWhitespace(System.String text)
    // Offset: 0x17B5DF0
    ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW text);
    // public Newtonsoft.Json.Converters.IXmlNode CreateXmlDeclaration(System.String version, System.String encoding, System.String standalone)
    // Offset: 0x17B5E74
    ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);
    // public Newtonsoft.Json.Converters.IXmlNode CreateXmlDocumentType(System.String name, System.String publicId, System.String systemId, System.String internalSubset)
    // Offset: 0x17B5F0C
    ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);
    // public Newtonsoft.Json.Converters.IXmlNode CreateProcessingInstruction(System.String target, System.String data)
    // Offset: 0x17B5FB4
    ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);
    // public Newtonsoft.Json.Converters.IXmlElement CreateElement(System.String elementName)
    // Offset: 0x17B6044
    ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);
    // public Newtonsoft.Json.Converters.IXmlElement CreateElement(System.String qualifiedName, System.String namespaceUri)
    // Offset: 0x17B60D8
    ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);
    // public Newtonsoft.Json.Converters.IXmlNode CreateAttribute(System.String name, System.String value)
    // Offset: 0x17B6184
    ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);
    // public Newtonsoft.Json.Converters.IXmlNode CreateAttribute(System.String qualifiedName, System.String namespaceUri, System.String value)
    // Offset: 0x17B6228
    ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);
    // public override System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_ChildNodes()
    // Offset: 0x17B5A98
    // Implemented from: Newtonsoft.Json.Converters.XContainerWrapper
    // Base method: System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> XContainerWrapper::get_ChildNodes()
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();
    // public override Newtonsoft.Json.Converters.IXmlNode AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    // Offset: 0x17B637C
    // Implemented from: Newtonsoft.Json.Converters.XContainerWrapper
    // Base method: Newtonsoft.Json.Converters.IXmlNode XContainerWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);
  }; // Newtonsoft.Json.Converters.XDocumentWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::get_Document
// Il2CppName: get_Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XDocument* (Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(&Newtonsoft::Json::Converters::XDocumentWrapper::get_Document)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "get_Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::get_DocumentElement
// Il2CppName: get_DocumentElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(&Newtonsoft::Json::Converters::XDocumentWrapper::get_DocumentElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "get_DocumentElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateComment
// Il2CppName: CreateComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateTextNode
// Il2CppName: CreateTextNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateTextNode)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateTextNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateCDataSection
// Il2CppName: CreateCDataSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateCDataSection)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateCDataSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateWhitespace
// Il2CppName: CreateWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateWhitespace)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateSignificantWhitespace
// Il2CppName: CreateSignificantWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateSignificantWhitespace)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateSignificantWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDeclaration
// Il2CppName: CreateXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, encoding, standalone});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDocumentType
// Il2CppName: CreateXmlDocumentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDocumentType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* publicId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* internalSubset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateXmlDocumentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, publicId, systemId, internalSubset});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateProcessingInstruction
// Il2CppName: CreateProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, data});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement
// Il2CppName: CreateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement)> {
  static const MethodInfo* get() {
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementName});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement
// Il2CppName: CreateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement)> {
  static const MethodInfo* get() {
    static auto* qualifiedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qualifiedName, namespaceUri});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute
// Il2CppName: CreateAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute
// Il2CppName: CreateAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(&Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute)> {
  static const MethodInfo* get() {
    static auto* qualifiedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "CreateAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qualifiedName, namespaceUri, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(&Newtonsoft::Json::Converters::XDocumentWrapper::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDocumentWrapper::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XDocumentWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XDocumentWrapper::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDocumentWrapper*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
