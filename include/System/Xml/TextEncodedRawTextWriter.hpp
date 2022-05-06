// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: TextEncodedRawTextWriter
  class TextEncodedRawTextWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::TextEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextEncodedRawTextWriter*, "System.Xml", "TextEncodedRawTextWriter");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB6
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.TextEncodedRawTextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class TextEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
    public:
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x2067AA8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Boolean XmlEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x2067A64
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::TextEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEncodedRawTextWriter*, creationType>(writer, settings)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x2067A6C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::TextEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEncodedRawTextWriter*, creationType>(stream, settings)));
    }
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x2067A74
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x2067A78
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::StringW xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x2067A7C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x2067A80
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x2067A84
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x2067A88
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void StartElementContent()
    // Offset: 0x2067A8C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x2067A90
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x2067A9C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x2067AA4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x2067AB0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCData(System.String text)
    void WriteCData(::StringW text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x2067AB8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteComment(System.String text)
    void WriteComment(::StringW text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x2067ABC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::StringW name, ::StringW text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x2067AC0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::StringW name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x2067AC4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x2067AC8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x2067ACC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::StringW ws);
    // public override System.Void WriteString(System.String textBlock)
    // Offset: 0x2067AE0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String textBlock)
    void WriteString(::StringW textBlock);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x2067AF4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x2067B08
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x2067B1C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::StringW data);
  }; // System.Xml.TextEncodedRawTextWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks
// Il2CppName: get_SupportsNamespaceDeclarationInChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::TextEncodedRawTextWriter::*)()>(&System::Xml::TextEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "get_SupportsNamespaceDeclarationInChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::System::Xml::XmlStandalone)>(&System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)()>(&System::Xml::TextEncodedRawTextWriter::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)()>(&System::Xml::TextEncodedRawTextWriter::WriteEndAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteNamespaceDeclaration
// Il2CppName: WriteNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteNamespaceDeclaration)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteCData)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW, ::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::Il2CppChar)>(&System::Xml::TextEncodedRawTextWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::TextEncodedRawTextWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteString)> {
  static const MethodInfo* get() {
    static auto* textBlock = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textBlock});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::TextEncodedRawTextWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::TextEncodedRawTextWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::TextEncodedRawTextWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::TextEncodedRawTextWriter::*)(::StringW)>(&System::Xml::TextEncodedRawTextWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::TextEncodedRawTextWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
