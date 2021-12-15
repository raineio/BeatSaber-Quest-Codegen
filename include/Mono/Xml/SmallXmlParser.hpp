// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Xml
namespace Mono::Xml {
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Forward declaring type: SmallXmlParser
  class SmallXmlParser;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Xml::SmallXmlParser);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallXmlParser : public ::Il2CppObject {
    public:
    // Nested type: Mono::Xml::SmallXmlParser::IContentHandler
    class IContentHandler;
    // Nested type: Mono::Xml::SmallXmlParser::IAttrList
    class IAttrList;
    // Nested type: Mono::Xml::SmallXmlParser::AttrListImpl
    class AttrListImpl;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler handler
    // Size: 0x8
    // Offset: 0x10
    Mono::Xml::SmallXmlParser::IContentHandler* handler;
    // Field size check
    static_assert(sizeof(Mono::Xml::SmallXmlParser::IContentHandler*) == 0x8);
    // private System.IO.TextReader reader
    // Size: 0x8
    // Offset: 0x18
    System::IO::TextReader* reader;
    // Field size check
    static_assert(sizeof(System::IO::TextReader*) == 0x8);
    // private System.Collections.Stack elementNames
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Stack* elementNames;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.Collections.Stack xmlSpaces
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Stack* xmlSpaces;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.String xmlSpace
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* xmlSpace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Text.StringBuilder buffer
    // Size: 0x8
    // Offset: 0x38
    System::Text::StringBuilder* buffer;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Char[] nameBuffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Il2CppChar> nameBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Boolean isWhitespace
    // Size: 0x1
    // Offset: 0x48
    bool isWhitespace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isWhitespace and: attributes
    char __padding7[0x7] = {};
    // private Mono.Xml.SmallXmlParser/Mono.Xml.AttrListImpl attributes
    // Size: 0x8
    // Offset: 0x50
    Mono::Xml::SmallXmlParser::AttrListImpl* attributes;
    // Field size check
    static_assert(sizeof(Mono::Xml::SmallXmlParser::AttrListImpl*) == 0x8);
    // private System.Int32 line
    // Size: 0x4
    // Offset: 0x58
    int line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 column
    // Size: 0x4
    // Offset: 0x5C
    int column;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean resetColumn
    // Size: 0x1
    // Offset: 0x60
    bool resetColumn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler handler
    Mono::Xml::SmallXmlParser::IContentHandler*& dyn_handler();
    // Get instance field reference: private System.IO.TextReader reader
    System::IO::TextReader*& dyn_reader();
    // Get instance field reference: private System.Collections.Stack elementNames
    System::Collections::Stack*& dyn_elementNames();
    // Get instance field reference: private System.Collections.Stack xmlSpaces
    System::Collections::Stack*& dyn_xmlSpaces();
    // Get instance field reference: private System.String xmlSpace
    ::Il2CppString*& dyn_xmlSpace();
    // Get instance field reference: private System.Text.StringBuilder buffer
    System::Text::StringBuilder*& dyn_buffer();
    // Get instance field reference: private System.Char[] nameBuffer
    ::ArrayW<::Il2CppChar>& dyn_nameBuffer();
    // Get instance field reference: private System.Boolean isWhitespace
    bool& dyn_isWhitespace();
    // Get instance field reference: private Mono.Xml.SmallXmlParser/Mono.Xml.AttrListImpl attributes
    Mono::Xml::SmallXmlParser::AttrListImpl*& dyn_attributes();
    // Get instance field reference: private System.Int32 line
    int& dyn_line();
    // Get instance field reference: private System.Int32 column
    int& dyn_column();
    // Get instance field reference: private System.Boolean resetColumn
    bool& dyn_resetColumn();
    // private System.Exception Error(System.String msg)
    // Offset: 0x1C94078
    System::Exception* Error(::Il2CppString* msg);
    // private System.Exception UnexpectedEndError()
    // Offset: 0x1C941B8
    System::Exception* UnexpectedEndError();
    // private System.Boolean IsNameChar(System.Char c, System.Boolean start)
    // Offset: 0x1C94288
    bool IsNameChar(::Il2CppChar c, bool start);
    // private System.Boolean IsWhitespace(System.Int32 c)
    // Offset: 0x1C9439C
    bool IsWhitespace(int c);
    // public System.Void SkipWhitespaces()
    // Offset: 0x1C943CC
    void SkipWhitespaces();
    // private System.Void HandleWhitespaces()
    // Offset: 0x1C94498
    void HandleWhitespaces();
    // public System.Void SkipWhitespaces(System.Boolean expected)
    // Offset: 0x1C943D4
    void SkipWhitespaces(bool expected);
    // private System.Int32 Peek()
    // Offset: 0x1C945D0
    int Peek();
    // private System.Int32 Read()
    // Offset: 0x1C9455C
    int Read();
    // public System.Void Expect(System.Int32 c)
    // Offset: 0x1C945F0
    void Expect(int c);
    // private System.String ReadUntil(System.Char until, System.Boolean handleReferences)
    // Offset: 0x1C946D4
    ::Il2CppString* ReadUntil(::Il2CppChar until, bool handleReferences);
    // public System.String ReadName()
    // Offset: 0x1C94960
    ::Il2CppString* ReadName();
    // public System.Void Parse(System.IO.TextReader input, Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler handler)
    // Offset: 0x1C93A48
    void Parse(System::IO::TextReader* input, Mono::Xml::SmallXmlParser::IContentHandler* handler);
    // private System.Void Cleanup()
    // Offset: 0x1C95324
    void Cleanup();
    // public System.Void ReadContent()
    // Offset: 0x1C94B04
    void ReadContent();
    // private System.Void HandleBufferedContent()
    // Offset: 0x1C951D4
    void HandleBufferedContent();
    // private System.Void ReadCharacters()
    // Offset: 0x1C95730
    void ReadCharacters();
    // private System.Void ReadReference()
    // Offset: 0x1C947D0
    void ReadReference();
    // private System.Int32 ReadCharacterReference()
    // Offset: 0x1C957BC
    int ReadCharacterReference();
    // private System.Void ReadAttribute(Mono.Xml.SmallXmlParser/Mono.Xml.AttrListImpl a)
    // Offset: 0x1C955D4
    void ReadAttribute(Mono::Xml::SmallXmlParser::AttrListImpl* a);
    // private System.Void ReadCDATASection()
    // Offset: 0x1C9540C
    void ReadCDATASection();
    // private System.Void ReadComment()
    // Offset: 0x1C95528
    void ReadComment();
    // public System.Void .ctor()
    // Offset: 0x1C93960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SmallXmlParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParser*, creationType>()));
    }
  }; // Mono.Xml.SmallXmlParser
  #pragma pack(pop)
  static check_size<sizeof(SmallXmlParser), 96 + sizeof(bool)> __Mono_Xml_SmallXmlParserSizeCheck;
  static_assert(sizeof(SmallXmlParser) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (Mono::Xml::SmallXmlParser::*)(::Il2CppString*)>(&Mono::Xml::SmallXmlParser::Error)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::UnexpectedEndError
// Il2CppName: UnexpectedEndError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::UnexpectedEndError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "UnexpectedEndError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IsNameChar
// Il2CppName: IsNameChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Xml::SmallXmlParser::*)(::Il2CppChar, bool)>(&Mono::Xml::SmallXmlParser::IsNameChar)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "IsNameChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, start});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IsWhitespace
// Il2CppName: IsWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Xml::SmallXmlParser::*)(int)>(&Mono::Xml::SmallXmlParser::IsWhitespace)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "IsWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::SkipWhitespaces
// Il2CppName: SkipWhitespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::SkipWhitespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "SkipWhitespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::HandleWhitespaces
// Il2CppName: HandleWhitespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::HandleWhitespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "HandleWhitespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::SkipWhitespaces
// Il2CppName: SkipWhitespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)(bool)>(&Mono::Xml::SmallXmlParser::SkipWhitespaces)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "SkipWhitespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Expect
// Il2CppName: Expect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)(int)>(&Mono::Xml::SmallXmlParser::Expect)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Expect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadUntil
// Il2CppName: ReadUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Xml::SmallXmlParser::*)(::Il2CppChar, bool)>(&Mono::Xml::SmallXmlParser::ReadUntil)> {
  static const MethodInfo* get() {
    static auto* until = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* handleReferences = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{until, handleReferences});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadName
// Il2CppName: ReadName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)(System::IO::TextReader*, Mono::Xml::SmallXmlParser::IContentHandler*)>(&Mono::Xml::SmallXmlParser::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "TextReader")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IContentHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, handler});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadContent
// Il2CppName: ReadContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::HandleBufferedContent
// Il2CppName: HandleBufferedContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::HandleBufferedContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "HandleBufferedContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadCharacters
// Il2CppName: ReadCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadReference
// Il2CppName: ReadReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadCharacterReference
// Il2CppName: ReadCharacterReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadCharacterReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadCharacterReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadAttribute
// Il2CppName: ReadAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)(Mono::Xml::SmallXmlParser::AttrListImpl*)>(&Mono::Xml::SmallXmlParser::ReadAttribute)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/AttrListImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadCDATASection
// Il2CppName: ReadCDATASection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadCDATASection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadCDATASection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::ReadComment
// Il2CppName: ReadComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::*)()>(&Mono::Xml::SmallXmlParser::ReadComment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser*), "ReadComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
