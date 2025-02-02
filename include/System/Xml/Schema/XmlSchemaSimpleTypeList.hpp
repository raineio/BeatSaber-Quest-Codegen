// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaSimpleTypeContent
#include "System/Xml/Schema/XmlSchemaSimpleTypeContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleTypeList
  class XmlSchemaSimpleTypeList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeList*, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSimpleTypeList
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSimpleTypeList : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
    public:
    public:
    // private System.Xml.XmlQualifiedName itemTypeName
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlQualifiedName* itemTypeName;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.Schema.XmlSchemaSimpleType itemType
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaSimpleType* itemType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaSimpleType baseItemType
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaSimpleType* baseItemType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleType*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlQualifiedName itemTypeName
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_itemTypeName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType itemType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSimpleType*& dyn_itemType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType baseItemType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSimpleType*& dyn_baseItemType();
    // public System.Void set_ItemType(System.Xml.Schema.XmlSchemaSimpleType value)
    // Offset: 0x20FF974
    void set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType* value);
    // public System.Xml.Schema.XmlSchemaSimpleType get_BaseItemType()
    // Offset: 0x20FF97C
    ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType();
    // public System.Void set_BaseItemType(System.Xml.Schema.XmlSchemaSimpleType value)
    // Offset: 0x20FF984
    void set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType* value);
    // public System.Void .ctor()
    // Offset: 0x20FF98C
    // Implemented from: System.Xml.Schema.XmlSchemaSimpleTypeContent
    // Base method: System.Void XmlSchemaSimpleTypeContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSimpleTypeList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSimpleTypeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSimpleTypeList*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaSimpleTypeList
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSimpleTypeList), 32 + sizeof(::System::Xml::Schema::XmlSchemaSimpleType*)> __System_Xml_Schema_XmlSchemaSimpleTypeListSizeCheck;
  static_assert(sizeof(XmlSchemaSimpleTypeList) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeList::set_ItemType
// Il2CppName: set_ItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleTypeList::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&System::Xml::Schema::XmlSchemaSimpleTypeList::set_ItemType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeList*), "set_ItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeList::get_BaseItemType
// Il2CppName: get_BaseItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::Schema::XmlSchemaSimpleTypeList::*)()>(&System::Xml::Schema::XmlSchemaSimpleTypeList::get_BaseItemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeList*), "get_BaseItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeList::set_BaseItemType
// Il2CppName: set_BaseItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleTypeList::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&System::Xml::Schema::XmlSchemaSimpleTypeList::set_BaseItemType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeList*), "set_BaseItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
