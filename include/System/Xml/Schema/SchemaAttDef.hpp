// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SchemaDeclBase
#include "System/Xml/Schema/SchemaDeclBase.hpp"
// Including type: System.Xml.IDtdDefaultAttributeInfo
#include "System/Xml/IDtdDefaultAttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
  // Forward declaring type: IValidationEventHandling
  class IValidationEventHandling;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: Reserve because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaAttDef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaAttDef*, "System.Xml.Schema", "SchemaAttDef");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaAttDef
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase/*, public ::System::Xml::IDtdDefaultAttributeInfo*/ {
    public:
    // Nested type: ::System::Xml::Schema::SchemaAttDef::Reserve
    struct Reserve;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve
    // [TokenAttribute] Offset: FFFFFFFF
    struct Reserve/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Reserve
      constexpr Reserve(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve None
      static constexpr const int None = 0;
      // Get static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve None
      static ::System::Xml::Schema::SchemaAttDef::Reserve _get_None();
      // Set static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve None
      static void _set_None(::System::Xml::Schema::SchemaAttDef::Reserve value);
      // static field const value: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlSpace
      static constexpr const int XmlSpace = 1;
      // Get static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlSpace
      static ::System::Xml::Schema::SchemaAttDef::Reserve _get_XmlSpace();
      // Set static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlSpace
      static void _set_XmlSpace(::System::Xml::Schema::SchemaAttDef::Reserve value);
      // static field const value: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlLang
      static constexpr const int XmlLang = 2;
      // Get static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlLang
      static ::System::Xml::Schema::SchemaAttDef::Reserve _get_XmlLang();
      // Set static field: static public System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve XmlLang
      static void _set_XmlLang(::System::Xml::Schema::SchemaAttDef::Reserve value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve
    #pragma pack(pop)
    static check_size<sizeof(SchemaAttDef::Reserve), 0 + sizeof(int)> __System_Xml_Schema_SchemaAttDef_ReserveSizeCheck;
    static_assert(sizeof(SchemaAttDef::Reserve) == 0x4);
    public:
    // private System.String defExpanded
    // Size: 0x8
    // Offset: 0x60
    ::StringW defExpanded;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 lineNum
    // Size: 0x4
    // Offset: 0x68
    int lineNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePos
    // Size: 0x4
    // Offset: 0x6C
    int linePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 valueLineNum
    // Size: 0x4
    // Offset: 0x70
    int valueLineNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 valueLinePos
    // Size: 0x4
    // Offset: 0x74
    int valueLinePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve reserved
    // Size: 0x4
    // Offset: 0x78
    ::System::Xml::Schema::SchemaAttDef::Reserve reserved;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaAttDef::Reserve) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IDtdDefaultAttributeInfo
    operator ::System::Xml::IDtdDefaultAttributeInfo() noexcept {
      return *reinterpret_cast<::System::Xml::IDtdDefaultAttributeInfo*>(this);
    }
    // Creating interface conversion operator: i_IDtdDefaultAttributeInfo
    inline ::System::Xml::IDtdDefaultAttributeInfo* i_IDtdDefaultAttributeInfo() noexcept {
      return reinterpret_cast<::System::Xml::IDtdDefaultAttributeInfo*>(this);
    }
    // Get static field: static public readonly System.Xml.Schema.SchemaAttDef Empty
    static ::System::Xml::Schema::SchemaAttDef* _get_Empty();
    // Set static field: static public readonly System.Xml.Schema.SchemaAttDef Empty
    static void _set_Empty(::System::Xml::Schema::SchemaAttDef* value);
    // Get instance field reference: private System.String defExpanded
    [[deprecated("Use field access instead!")]] ::StringW& dyn_defExpanded();
    // Get instance field reference: private System.Int32 lineNum
    [[deprecated("Use field access instead!")]] int& dyn_lineNum();
    // Get instance field reference: private System.Int32 linePos
    [[deprecated("Use field access instead!")]] int& dyn_linePos();
    // Get instance field reference: private System.Int32 valueLineNum
    [[deprecated("Use field access instead!")]] int& dyn_valueLineNum();
    // Get instance field reference: private System.Int32 valueLinePos
    [[deprecated("Use field access instead!")]] int& dyn_valueLinePos();
    // Get instance field reference: private System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve reserved
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaAttDef::Reserve& dyn_reserved();
    // private System.String System.Xml.IDtdAttributeInfo.get_Prefix()
    // Offset: 0x1C56098
    ::StringW System_Xml_IDtdAttributeInfo_get_Prefix();
    // private System.String System.Xml.IDtdAttributeInfo.get_LocalName()
    // Offset: 0x1C56150
    ::StringW System_Xml_IDtdAttributeInfo_get_LocalName();
    // private System.Int32 System.Xml.IDtdAttributeInfo.get_LineNumber()
    // Offset: 0x1C5616C
    int System_Xml_IDtdAttributeInfo_get_LineNumber();
    // private System.Int32 System.Xml.IDtdAttributeInfo.get_LinePosition()
    // Offset: 0x1C56174
    int System_Xml_IDtdAttributeInfo_get_LinePosition();
    // private System.Boolean System.Xml.IDtdAttributeInfo.get_IsNonCDataType()
    // Offset: 0x1C5617C
    bool System_Xml_IDtdAttributeInfo_get_IsNonCDataType();
    // private System.Boolean System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal()
    // Offset: 0x1C561CC
    bool System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal();
    // private System.Boolean System.Xml.IDtdAttributeInfo.get_IsXmlAttribute()
    // Offset: 0x1C561D4
    bool System_Xml_IDtdAttributeInfo_get_IsXmlAttribute();
    // private System.String System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded()
    // Offset: 0x1C561E4
    ::StringW System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded();
    // private System.Object System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped()
    // Offset: 0x1C56240
    ::Il2CppObject* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped();
    // private System.Int32 System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber()
    // Offset: 0x1C56248
    int System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber();
    // private System.Int32 System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition()
    // Offset: 0x1C56250
    int System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition();
    // System.Int32 get_LinePosition()
    // Offset: 0x1C56258
    int get_LinePosition();
    // System.Void set_LinePosition(System.Int32 value)
    // Offset: 0x1C56260
    void set_LinePosition(int value);
    // System.Int32 get_LineNumber()
    // Offset: 0x1C56268
    int get_LineNumber();
    // System.Void set_LineNumber(System.Int32 value)
    // Offset: 0x1C56270
    void set_LineNumber(int value);
    // System.Int32 get_ValueLinePosition()
    // Offset: 0x1C56278
    int get_ValueLinePosition();
    // System.Void set_ValueLinePosition(System.Int32 value)
    // Offset: 0x1C56280
    void set_ValueLinePosition(int value);
    // System.Int32 get_ValueLineNumber()
    // Offset: 0x1C56288
    int get_ValueLineNumber();
    // System.Void set_ValueLineNumber(System.Int32 value)
    // Offset: 0x1C56290
    void set_ValueLineNumber(int value);
    // System.String get_DefaultValueExpanded()
    // Offset: 0x1C50134
    ::StringW get_DefaultValueExpanded();
    // System.Void set_DefaultValueExpanded(System.String value)
    // Offset: 0x1C56298
    void set_DefaultValueExpanded(::StringW value);
    // System.Xml.XmlTokenizedType get_TokenizedType()
    // Offset: 0x1C561AC
    ::System::Xml::XmlTokenizedType get_TokenizedType();
    // System.Void set_TokenizedType(System.Xml.XmlTokenizedType value)
    // Offset: 0x1C562A0
    void set_TokenizedType(::System::Xml::XmlTokenizedType value);
    // System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve get_Reserved()
    // Offset: 0x1C562CC
    ::System::Xml::Schema::SchemaAttDef::Reserve get_Reserved();
    // System.Void set_Reserved(System.Xml.Schema.SchemaAttDef/System.Xml.Schema.Reserve value)
    // Offset: 0x1C562D4
    void set_Reserved(::System::Xml::Schema::SchemaAttDef::Reserve value);
    // static private System.Void .cctor()
    // Offset: 0x1C56504
    static void _cctor();
    // System.Void CheckXmlSpace(System.Xml.IValidationEventHandling validationEventHandling)
    // Offset: 0x1C562DC
    void CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling);
    // public System.Void .ctor(System.Xml.XmlQualifiedName name, System.String prefix)
    // Offset: 0x1C55F80
    // Implemented from: System.Xml.Schema.SchemaDeclBase
    // Base method: System.Void SchemaDeclBase::.ctor(System.Xml.XmlQualifiedName name, System.String prefix)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaAttDef* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaAttDef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaAttDef*, creationType>(name, prefix)));
    }
    // private System.Void .ctor()
    // Offset: 0x1C5601C
    // Implemented from: System.Xml.Schema.SchemaDeclBase
    // Base method: System.Void SchemaDeclBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaAttDef* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaAttDef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaAttDef*, creationType>()));
    }
  }; // System.Xml.Schema.SchemaAttDef
  #pragma pack(pop)
  static check_size<sizeof(SchemaAttDef), 120 + sizeof(::System::Xml::Schema::SchemaAttDef::Reserve)> __System_Xml_Schema_SchemaAttDefSizeCheck;
  static_assert(sizeof(SchemaAttDef) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaAttDef::Reserve, "System.Xml.Schema", "SchemaAttDef/Reserve");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix
// Il2CppName: System.Xml.IDtdAttributeInfo.get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName
// Il2CppName: System.Xml.IDtdAttributeInfo.get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber
// Il2CppName: System.Xml.IDtdAttributeInfo.get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition
// Il2CppName: System.Xml.IDtdAttributeInfo.get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType
// Il2CppName: System.Xml.IDtdAttributeInfo.get_IsNonCDataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_IsNonCDataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal
// Il2CppName: System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute
// Il2CppName: System.Xml.IDtdAttributeInfo.get_IsXmlAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded
// Il2CppName: System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped
// Il2CppName: System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber
// Il2CppName: System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition
// Il2CppName: System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_LinePosition
// Il2CppName: set_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int)>(&System::Xml::Schema::SchemaAttDef::set_LinePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_LineNumber
// Il2CppName: set_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int)>(&System::Xml::Schema::SchemaAttDef::set_LineNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_ValueLinePosition
// Il2CppName: get_ValueLinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_ValueLinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_ValueLinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_ValueLinePosition
// Il2CppName: set_ValueLinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int)>(&System::Xml::Schema::SchemaAttDef::set_ValueLinePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_ValueLinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_ValueLineNumber
// Il2CppName: get_ValueLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_ValueLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_ValueLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_ValueLineNumber
// Il2CppName: set_ValueLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int)>(&System::Xml::Schema::SchemaAttDef::set_ValueLineNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_ValueLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded
// Il2CppName: get_DefaultValueExpanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_DefaultValueExpanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded
// Il2CppName: set_DefaultValueExpanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(::StringW)>(&System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_DefaultValueExpanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_TokenizedType
// Il2CppName: get_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_TokenizedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_TokenizedType
// Il2CppName: set_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(::System::Xml::XmlTokenizedType)>(&System::Xml::Schema::SchemaAttDef::set_TokenizedType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTokenizedType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::get_Reserved
// Il2CppName: get_Reserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaAttDef::Reserve (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_Reserved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "get_Reserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::set_Reserved
// Il2CppName: set_Reserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(::System::Xml::Schema::SchemaAttDef::Reserve)>(&System::Xml::Schema::SchemaAttDef::set_Reserved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef/Reserve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "set_Reserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::SchemaAttDef::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::CheckXmlSpace
// Il2CppName: CheckXmlSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(::System::Xml::IValidationEventHandling*)>(&System::Xml::Schema::SchemaAttDef::CheckXmlSpace)> {
  static const MethodInfo* get() {
    static auto* validationEventHandling = &::il2cpp_utils::GetClassFromName("System.Xml", "IValidationEventHandling")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaAttDef*), "CheckXmlSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validationEventHandling});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SchemaAttDef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
