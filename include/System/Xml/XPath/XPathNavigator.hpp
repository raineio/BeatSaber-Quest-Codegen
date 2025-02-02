// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XPath.XPathItem
#include "System/Xml/XPath/XPathItem.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNavigatorKeyComparer
  class XPathNavigatorKeyComparer;
  // Forward declaring type: XPathNodeType
  struct XPathNodeType;
  // Forward declaring type: XPathNamespaceScope
  struct XPathNamespaceScope;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNavigator
  class XPathNavigator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XPath::XPathNavigator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNavigator*, "System.Xml.XPath", "XPathNavigator");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathNavigator
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 1080AA4
  class XPathNavigator : public ::System::Xml::XPath::XPathItem/*, public ::System::Xml::IXmlNamespaceResolver, public ::System::ICloneable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Xml::IXmlNamespaceResolver
    operator ::System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<::System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating interface conversion operator: i_IXmlNamespaceResolver
    inline ::System::Xml::IXmlNamespaceResolver* i_IXmlNamespaceResolver() noexcept {
      return reinterpret_cast<::System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get static field: static readonly System.Xml.XPath.XPathNavigatorKeyComparer comparer
    static ::System::Xml::XPath::XPathNavigatorKeyComparer* _get_comparer();
    // Set static field: static readonly System.Xml.XPath.XPathNavigatorKeyComparer comparer
    static void _set_comparer(::System::Xml::XPath::XPathNavigatorKeyComparer* value);
    // Get static field: static readonly System.Char[] NodeTypeLetter
    static ::ArrayW<::Il2CppChar> _get_NodeTypeLetter();
    // Set static field: static readonly System.Char[] NodeTypeLetter
    static void _set_NodeTypeLetter(::ArrayW<::Il2CppChar> value);
    // Get static field: static readonly System.Char[] UniqueIdTbl
    static ::ArrayW<::Il2CppChar> _get_UniqueIdTbl();
    // Set static field: static readonly System.Char[] UniqueIdTbl
    static void _set_UniqueIdTbl(::ArrayW<::Il2CppChar> value);
    // Get static field: static readonly System.Int32[] ContentKindMasks
    static ::ArrayW<int> _get_ContentKindMasks();
    // Set static field: static readonly System.Int32[] ContentKindMasks
    static void _set_ContentKindMasks(::ArrayW<int> value);
    // public System.Xml.XmlNameTable get_NameTable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlNameTable* get_NameTable();
    // public System.Xml.XPath.XPathNodeType get_NodeType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XPath::XPathNodeType get_NodeType();
    // public System.String get_LocalName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_LocalName();
    // public System.String get_NamespaceURI()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_NamespaceURI();
    // public System.String get_Prefix()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Prefix();
    // public System.Object get_UnderlyingObject()
    // Offset: 0x1C57010
    ::Il2CppObject* get_UnderlyingObject();
    // public System.Xml.Schema.IXmlSchemaInfo get_SchemaInfo()
    // Offset: 0x1C570BC
    ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
    // static private System.Void .cctor()
    // Offset: 0x1C57124
    static void _cctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1C56C9C
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0x1C56CAC
    ::StringW LookupNamespace(::StringW prefix);
    // public System.String LookupPrefix(System.String namespaceURI)
    // Offset: 0x1C56E34
    ::StringW LookupPrefix(::StringW namespaceURI);
    // public System.Xml.XPath.XPathNavigator Clone()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XPath::XPathNavigator* Clone();
    // public System.Boolean MoveToNamespace(System.String name)
    // Offset: 0x1C57018
    bool MoveToNamespace(::StringW name);
    // public System.Boolean MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope namespaceScope)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);
    // public System.Boolean MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope namespaceScope)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);
    // public System.Boolean MoveToParent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToParent();
    // public System.Boolean IsSamePosition(System.Xml.XPath.XPathNavigator other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);
    // static System.Boolean IsText(System.Xml.XPath.XPathNodeType type)
    // Offset: 0x1C5710C
    static bool IsText(::System::Xml::XPath::XPathNodeType type);
    // public override System.Xml.Schema.XmlSchemaType get_XmlType()
    // Offset: 0x1C55414
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Xml.Schema.XmlSchemaType XPathItem::get_XmlType()
    ::System::Xml::Schema::XmlSchemaType* get_XmlType();
    // public override System.Object get_TypedValue()
    // Offset: 0x1C555BC
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Object XPathItem::get_TypedValue()
    ::Il2CppObject* get_TypedValue();
    // public override System.Type get_ValueType()
    // Offset: 0x1C558C0
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Type XPathItem::get_ValueType()
    ::System::Type* get_ValueType();
    // public override System.Boolean get_ValueAsBoolean()
    // Offset: 0x1C55AE4
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Boolean XPathItem::get_ValueAsBoolean()
    bool get_ValueAsBoolean();
    // public override System.DateTime get_ValueAsDateTime()
    // Offset: 0x1C55DCC
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.DateTime XPathItem::get_ValueAsDateTime()
    ::System::DateTime get_ValueAsDateTime();
    // public override System.Double get_ValueAsDouble()
    // Offset: 0x1C560BC
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Double XPathItem::get_ValueAsDouble()
    double get_ValueAsDouble();
    // public override System.Int32 get_ValueAsInt()
    // Offset: 0x1C563AC
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Int32 XPathItem::get_ValueAsInt()
    int get_ValueAsInt();
    // public override System.Int64 get_ValueAsLong()
    // Offset: 0x1C5669C
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Int64 XPathItem::get_ValueAsLong()
    int64_t get_ValueAsLong();
    // protected System.Void .ctor()
    // Offset: 0x1C5711C
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Void XPathItem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathNavigator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XPath::XPathNavigator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathNavigator*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1C55408
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Object ValueAs(System.Type returnType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x1C5698C
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.Object XPathItem::ValueAs(System.Type returnType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.XPath.XPathNavigator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNodeType (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_UnderlyingObject
// Il2CppName: get_UnderlyingObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_UnderlyingObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_UnderlyingObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_SchemaInfo
// Il2CppName: get_SchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_SchemaInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_SchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XPath::XPathNavigator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)(::StringW)>(&System::Xml::XPath::XPathNavigator::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)(::StringW)>(&System::Xml::XPath::XPathNavigator::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceURI});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNavigator* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::MoveToNamespace
// Il2CppName: MoveToNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)(::StringW)>(&System::Xml::XPath::XPathNavigator::MoveToNamespace)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "MoveToNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::MoveToFirstNamespace
// Il2CppName: MoveToFirstNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(&System::Xml::XPath::XPathNavigator::MoveToFirstNamespace)> {
  static const MethodInfo* get() {
    static auto* namespaceScope = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "MoveToFirstNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceScope});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::MoveToNextNamespace
// Il2CppName: MoveToNextNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(&System::Xml::XPath::XPathNavigator::MoveToNextNamespace)> {
  static const MethodInfo* get() {
    static auto* namespaceScope = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "MoveToNextNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceScope});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::MoveToParent
// Il2CppName: MoveToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::MoveToParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "MoveToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::IsSamePosition
// Il2CppName: IsSamePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)(::System::Xml::XPath::XPathNavigator*)>(&System::Xml::XPath::XPathNavigator::IsSamePosition)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNavigator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "IsSamePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::IsText
// Il2CppName: IsText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::XPath::XPathNodeType)>(&System::Xml::XPath::XPathNavigator::IsText)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "IsText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_XmlType
// Il2CppName: get_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_XmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_TypedValue
// Il2CppName: get_TypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_TypedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_TypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueAsBoolean
// Il2CppName: get_ValueAsBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueAsBoolean)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueAsBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueAsDateTime
// Il2CppName: get_ValueAsDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueAsDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueAsDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueAsDouble
// Il2CppName: get_ValueAsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueAsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueAsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueAsInt
// Il2CppName: get_ValueAsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueAsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueAsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::get_ValueAsLong
// Il2CppName: get_ValueAsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::get_ValueAsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "get_ValueAsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathNavigator::*)()>(&System::Xml::XPath::XPathNavigator::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigator::ValueAs
// Il2CppName: ValueAs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathNavigator::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::XPath::XPathNavigator::ValueAs)> {
  static const MethodInfo* get() {
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigator*), "ValueAs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnType, nsResolver});
  }
};
