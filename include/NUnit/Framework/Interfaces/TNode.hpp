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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: AttributeDictionary
  class AttributeDictionary;
  // Forward declaring type: NodeList
  class NodeList;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Interfaces::TNode);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TNode*, "NUnit.Framework.Interfaces", "TNode");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TNode
  // [TokenAttribute] Offset: FFFFFFFF
  class TNode : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Interfaces::TNode::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0xF303C0
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF303FC
    // private System.String <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF30438
    // private System.Boolean <ValueIsCDATA>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool ValueIsCDATA;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ValueIsCDATA and: Attributes
    char __padding2[0x7] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xF30474
    // private NUnit.Framework.Interfaces.AttributeDictionary <Attributes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::AttributeDictionary* Attributes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::AttributeDictionary*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF304B0
    // private NUnit.Framework.Interfaces.NodeList <ChildNodes>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::NodeList* ChildNodes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::NodeList*) == 0x8);
    public:
    // Get static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static System::Text::RegularExpressions::Regex* _get_InvalidXmlCharactersRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static void _set_InvalidXmlCharactersRegex(System::Text::RegularExpressions::Regex* value);
    // Get instance field reference: private System.String <Name>k__BackingField
    ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.String <Value>k__BackingField
    ::StringW& dyn_$Value$k__BackingField();
    // Get instance field reference: private System.Boolean <ValueIsCDATA>k__BackingField
    bool& dyn_$ValueIsCDATA$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Interfaces.AttributeDictionary <Attributes>k__BackingField
    NUnit::Framework::Interfaces::AttributeDictionary*& dyn_$Attributes$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Interfaces.NodeList <ChildNodes>k__BackingField
    NUnit::Framework::Interfaces::NodeList*& dyn_$ChildNodes$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x1941CE4
    ::StringW get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x1941CEC
    void set_Name(::StringW value);
    // public System.String get_Value()
    // Offset: 0x1941CF4
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1941CFC
    void set_Value(::StringW value);
    // public System.Boolean get_ValueIsCDATA()
    // Offset: 0x1941D04
    bool get_ValueIsCDATA();
    // private System.Void set_ValueIsCDATA(System.Boolean value)
    // Offset: 0x1941D0C
    void set_ValueIsCDATA(bool value);
    // public NUnit.Framework.Interfaces.AttributeDictionary get_Attributes()
    // Offset: 0x1941D18
    NUnit::Framework::Interfaces::AttributeDictionary* get_Attributes();
    // private System.Void set_Attributes(NUnit.Framework.Interfaces.AttributeDictionary value)
    // Offset: 0x1941D20
    void set_Attributes(NUnit::Framework::Interfaces::AttributeDictionary* value);
    // public NUnit.Framework.Interfaces.NodeList get_ChildNodes()
    // Offset: 0x1941D28
    NUnit::Framework::Interfaces::NodeList* get_ChildNodes();
    // private System.Void set_ChildNodes(NUnit.Framework.Interfaces.NodeList value)
    // Offset: 0x1941D30
    void set_ChildNodes(NUnit::Framework::Interfaces::NodeList* value);
    // public System.String get_OuterXml()
    // Offset: 0x1941D38
    ::StringW get_OuterXml();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1941BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x1941C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::StringW name, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value)));
    }
    // public System.Void .ctor(System.String name, System.String value, System.Boolean valueIsCDATA)
    // Offset: 0x1941CA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::StringW name, ::StringW value, bool valueIsCDATA) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value, valueIsCDATA)));
    }
    // static private System.Void .cctor()
    // Offset: 0x194266C
    static void _cctor();
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name)
    // Offset: 0x19420E0
    NUnit::Framework::Interfaces::TNode* AddElement(::StringW name);
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name, System.String value)
    // Offset: 0x194216C
    NUnit::Framework::Interfaces::TNode* AddElement(::StringW name, ::StringW value);
    // public NUnit.Framework.Interfaces.TNode AddElementWithCDATA(System.String name, System.String value)
    // Offset: 0x1942368
    NUnit::Framework::Interfaces::TNode* AddElementWithCDATA(::StringW name, ::StringW value);
    // public System.Void AddAttribute(System.String name, System.String value)
    // Offset: 0x194242C
    void AddAttribute(::StringW name, ::StringW value);
    // public System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x1941EA0
    void WriteTo(System::Xml::XmlWriter* writer);
    // static private System.String EscapeInvalidXmlCharacters(System.String str)
    // Offset: 0x194222C
    static ::StringW EscapeInvalidXmlCharacters(::StringW str);
    // static private System.String CharToUnicodeSequence(System.Char symbol)
    // Offset: 0x19425E8
    static ::StringW CharToUnicodeSequence(::Il2CppChar symbol);
    // private System.Void WriteCDataTo(System.Xml.XmlWriter writer)
    // Offset: 0x19424C8
    void WriteCDataTo(System::Xml::XmlWriter* writer);
  }; // NUnit.Framework.Interfaces.TNode
  #pragma pack(pop)
  static check_size<sizeof(TNode), 48 + sizeof(NUnit::Framework::Interfaces::NodeList*)> __NUnit_Framework_Interfaces_TNodeSizeCheck;
  static_assert(sizeof(TNode) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::StringW)>(&NUnit::Framework::Interfaces::TNode::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::StringW)>(&NUnit::Framework::Interfaces::TNode::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_ValueIsCDATA
// Il2CppName: get_ValueIsCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_ValueIsCDATA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_ValueIsCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_ValueIsCDATA
// Il2CppName: set_ValueIsCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(bool)>(&NUnit::Framework::Interfaces::TNode::set_ValueIsCDATA)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_ValueIsCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::AttributeDictionary* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Attributes
// Il2CppName: set_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(NUnit::Framework::Interfaces::AttributeDictionary*)>(&NUnit::Framework::Interfaces::TNode::set_Attributes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "AttributeDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::NodeList* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_ChildNodes
// Il2CppName: set_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(NUnit::Framework::Interfaces::NodeList*)>(&NUnit::Framework::Interfaces::TNode::set_ChildNodes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "NodeList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_OuterXml
// Il2CppName: get_OuterXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_OuterXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_OuterXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Interfaces::TNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElement
// Il2CppName: AddElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::StringW)>(&NUnit::Framework::Interfaces::TNode::AddElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElement
// Il2CppName: AddElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::StringW, ::StringW)>(&NUnit::Framework::Interfaces::TNode::AddElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElementWithCDATA
// Il2CppName: AddElementWithCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::StringW, ::StringW)>(&NUnit::Framework::Interfaces::TNode::AddElementWithCDATA)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElementWithCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::StringW, ::StringW)>(&NUnit::Framework::Interfaces::TNode::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(System::Xml::XmlWriter*)>(&NUnit::Framework::Interfaces::TNode::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::EscapeInvalidXmlCharacters
// Il2CppName: EscapeInvalidXmlCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Interfaces::TNode::EscapeInvalidXmlCharacters)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "EscapeInvalidXmlCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::CharToUnicodeSequence
// Il2CppName: CharToUnicodeSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppChar)>(&NUnit::Framework::Interfaces::TNode::CharToUnicodeSequence)> {
  static const MethodInfo* get() {
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "CharToUnicodeSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{symbol});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::WriteCDataTo
// Il2CppName: WriteCDataTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(System::Xml::XmlWriter*)>(&NUnit::Framework::Interfaces::TNode::WriteCDataTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "WriteCDataTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
