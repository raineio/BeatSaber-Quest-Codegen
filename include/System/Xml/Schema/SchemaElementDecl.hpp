// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SchemaDeclBase
#include "System/Xml/Schema/SchemaDeclBase.hpp"
// Including type: System.Xml.IDtdAttributeListInfo
#include "System/Xml/IDtdAttributeListInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: IDtdDefaultAttributeInfo
  class IDtdDefaultAttributeInfo;
  // Forward declaring type: IDtdAttributeInfo
  class IDtdAttributeInfo;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
  // Forward declaring type: ContentValidator
  class ContentValidator;
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaElementDecl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaElementDecl*, "System.Xml.Schema", "SchemaElementDecl");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaElementDecl
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaElementDecl : public ::System::Xml::Schema::SchemaDeclBase/*, public ::System::Xml::IDtdAttributeListInfo*/ {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> attdefs
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attdefs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo> defaultAttdefs
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* defaultAttdefs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*) == 0x8);
    // private System.Boolean isIdDeclared
    // Size: 0x1
    // Offset: 0x70
    bool isIdDeclared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasNonCDataAttribute
    // Size: 0x1
    // Offset: 0x71
    bool hasNonCDataAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasRequiredAttribute
    // Size: 0x1
    // Offset: 0x72
    bool hasRequiredAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isNotationDeclared
    // Size: 0x1
    // Offset: 0x73
    bool isNotationDeclared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNotationDeclared and: prohibitedAttributes
    char __padding5[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName> prohibitedAttributes
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* prohibitedAttributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*) == 0x8);
    // private System.Xml.Schema.ContentValidator contentValidator
    // Size: 0x8
    // Offset: 0x80
    ::System::Xml::Schema::ContentValidator* contentValidator;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ContentValidator*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    // Size: 0x8
    // Offset: 0x88
    ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IDtdAttributeListInfo
    operator ::System::Xml::IDtdAttributeListInfo() noexcept {
      return *reinterpret_cast<::System::Xml::IDtdAttributeListInfo*>(this);
    }
    // Creating interface conversion operator: i_IDtdAttributeListInfo
    inline ::System::Xml::IDtdAttributeListInfo* i_IDtdAttributeListInfo() noexcept {
      return reinterpret_cast<::System::Xml::IDtdAttributeListInfo*>(this);
    }
    // Get static field: static readonly System.Xml.Schema.SchemaElementDecl Empty
    static ::System::Xml::Schema::SchemaElementDecl* _get_Empty();
    // Set static field: static readonly System.Xml.Schema.SchemaElementDecl Empty
    static void _set_Empty(::System::Xml::Schema::SchemaElementDecl* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> attdefs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*& dyn_attdefs();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo> defaultAttdefs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*& dyn_defaultAttdefs();
    // Get instance field reference: private System.Boolean isIdDeclared
    [[deprecated("Use field access instead!")]] bool& dyn_isIdDeclared();
    // Get instance field reference: private System.Boolean hasNonCDataAttribute
    [[deprecated("Use field access instead!")]] bool& dyn_hasNonCDataAttribute();
    // Get instance field reference: private System.Boolean hasRequiredAttribute
    [[deprecated("Use field access instead!")]] bool& dyn_hasRequiredAttribute();
    // Get instance field reference: private System.Boolean isNotationDeclared
    [[deprecated("Use field access instead!")]] bool& dyn_isNotationDeclared();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName> prohibitedAttributes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*& dyn_prohibitedAttributes();
    // Get instance field reference: private System.Xml.Schema.ContentValidator contentValidator
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::ContentValidator*& dyn_contentValidator();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnyAttribute anyAttribute
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaAnyAttribute*& dyn_anyAttribute();
    // private System.Boolean System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes()
    // Offset: 0x1C569A8
    bool System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes();
    // System.Boolean get_IsIdDeclared()
    // Offset: 0x1C56A68
    bool get_IsIdDeclared();
    // System.Void set_IsIdDeclared(System.Boolean value)
    // Offset: 0x1C56A70
    void set_IsIdDeclared(bool value);
    // System.Boolean get_HasNonCDataAttribute()
    // Offset: 0x1C56A7C
    bool get_HasNonCDataAttribute();
    // System.Void set_HasNonCDataAttribute(System.Boolean value)
    // Offset: 0x1C56A84
    void set_HasNonCDataAttribute(bool value);
    // System.Boolean get_IsNotationDeclared()
    // Offset: 0x1C56A90
    bool get_IsNotationDeclared();
    // System.Void set_IsNotationDeclared(System.Boolean value)
    // Offset: 0x1C56A98
    void set_IsNotationDeclared(bool value);
    // System.Xml.Schema.ContentValidator get_ContentValidator()
    // Offset: 0x1C56AA4
    ::System::Xml::Schema::ContentValidator* get_ContentValidator();
    // System.Void set_ContentValidator(System.Xml.Schema.ContentValidator value)
    // Offset: 0x1C56AAC
    void set_ContentValidator(::System::Xml::Schema::ContentValidator* value);
    // System.Void set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute value)
    // Offset: 0x1C56AB4
    void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);
    // System.Collections.Generic.IList`1<System.Xml.IDtdDefaultAttributeInfo> get_DefaultAttDefs()
    // Offset: 0x1C56C34
    ::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* get_DefaultAttDefs();
    // System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> get_AttDefs()
    // Offset: 0x1C56C3C
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* get_AttDefs();
    // System.Void .ctor(System.Xml.Schema.XmlSchemaDatatype dtype)
    // Offset: 0x1C56748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaElementDecl* New_ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaElementDecl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaElementDecl*, creationType>(dtype)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C56C44
    static void _cctor();
    // static System.Xml.Schema.SchemaElementDecl CreateAnyTypeElementDecl()
    // Offset: 0x1C568CC
    static ::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl();
    // private System.Xml.IDtdAttributeInfo System.Xml.IDtdAttributeListInfo.LookupAttribute(System.String prefix, System.String localName)
    // Offset: 0x1C569B0
    ::System::Xml::IDtdAttributeInfo* System_Xml_IDtdAttributeListInfo_LookupAttribute(::StringW prefix, ::StringW localName);
    // private System.Collections.Generic.IEnumerable`1<System.Xml.IDtdDefaultAttributeInfo> System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes()
    // Offset: 0x1C56A60
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes();
    // System.Void AddAttDef(System.Xml.Schema.SchemaAttDef attdef)
    // Offset: 0x1C56ABC
    void AddAttDef(::System::Xml::Schema::SchemaAttDef* attdef);
    // System.Xml.Schema.SchemaAttDef GetAttDef(System.Xml.XmlQualifiedName qname)
    // Offset: 0x1C56BB4
    ::System::Xml::Schema::SchemaAttDef* GetAttDef(::System::Xml::XmlQualifiedName* qname);
    // System.Void .ctor()
    // Offset: 0x1C566B4
    // Implemented from: System.Xml.Schema.SchemaDeclBase
    // Base method: System.Void SchemaDeclBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaElementDecl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaElementDecl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaElementDecl*, creationType>()));
    }
    // System.Void .ctor(System.Xml.XmlQualifiedName name, System.String prefix)
    // Offset: 0x1C56820
    // Implemented from: System.Xml.Schema.SchemaDeclBase
    // Base method: System.Void SchemaDeclBase::.ctor(System.Xml.XmlQualifiedName name, System.String prefix)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaElementDecl* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaElementDecl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaElementDecl*, creationType>(name, prefix)));
    }
  }; // System.Xml.Schema.SchemaElementDecl
  #pragma pack(pop)
  static check_size<sizeof(SchemaElementDecl), 136 + sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*)> __System_Xml_Schema_SchemaElementDeclSizeCheck;
  static_assert(sizeof(SchemaElementDecl) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes
// Il2CppName: System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_IsIdDeclared
// Il2CppName: get_IsIdDeclared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_IsIdDeclared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_IsIdDeclared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::set_IsIdDeclared
// Il2CppName: set_IsIdDeclared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(bool)>(&System::Xml::Schema::SchemaElementDecl::set_IsIdDeclared)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "set_IsIdDeclared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_HasNonCDataAttribute
// Il2CppName: get_HasNonCDataAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_HasNonCDataAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_HasNonCDataAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::set_HasNonCDataAttribute
// Il2CppName: set_HasNonCDataAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(bool)>(&System::Xml::Schema::SchemaElementDecl::set_HasNonCDataAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "set_HasNonCDataAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_IsNotationDeclared
// Il2CppName: get_IsNotationDeclared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_IsNotationDeclared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_IsNotationDeclared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::set_IsNotationDeclared
// Il2CppName: set_IsNotationDeclared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(bool)>(&System::Xml::Schema::SchemaElementDecl::set_IsNotationDeclared)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "set_IsNotationDeclared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_ContentValidator
// Il2CppName: get_ContentValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::ContentValidator* (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_ContentValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_ContentValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::set_ContentValidator
// Il2CppName: set_ContentValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::ContentValidator*)>(&System::Xml::Schema::SchemaElementDecl::set_ContentValidator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ContentValidator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "set_ContentValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::set_AnyAttribute
// Il2CppName: set_AnyAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::SchemaElementDecl::set_AnyAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "set_AnyAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_DefaultAttDefs
// Il2CppName: get_DefaultAttDefs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_DefaultAttDefs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_DefaultAttDefs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::get_AttDefs
// Il2CppName: get_AttDefs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::get_AttDefs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "get_AttDefs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::SchemaElementDecl::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::CreateAnyTypeElementDecl
// Il2CppName: CreateAnyTypeElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaElementDecl* (*)()>(&System::Xml::Schema::SchemaElementDecl::CreateAnyTypeElementDecl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "CreateAnyTypeElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupAttribute
// Il2CppName: System.Xml.IDtdAttributeListInfo.LookupAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdAttributeInfo* (System::Xml::Schema::SchemaElementDecl::*)(::StringW, ::StringW)>(&System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "System.Xml.IDtdAttributeListInfo.LookupAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes
// Il2CppName: System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* (System::Xml::Schema::SchemaElementDecl::*)()>(&System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::AddAttDef
// Il2CppName: AddAttDef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::SchemaAttDef*)>(&System::Xml::Schema::SchemaElementDecl::AddAttDef)> {
  static const MethodInfo* get() {
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "AddAttDef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attdef});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::GetAttDef
// Il2CppName: GetAttDef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaAttDef* (System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SchemaElementDecl::GetAttDef)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaElementDecl*), "GetAttDef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SchemaElementDecl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
