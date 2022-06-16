// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaType
#include "System/Xml/Schema/XmlSchemaType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleTypeContent
  class XmlSchemaSimpleTypeContent;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleType*, "System.Xml.Schema", "XmlSchemaSimpleType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSimpleType
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSimpleType : public ::System::Xml::Schema::XmlSchemaType {
    public:
    // Writing base type padding for base size: 0x3C to desired offset: 0x40
    char ___base_padding[0x4] = {};
    public:
    // private System.Xml.Schema.XmlSchemaSimpleTypeContent content
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Schema::XmlSchemaSimpleTypeContent* content;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleTypeContent*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Schema::XmlSchemaSimpleTypeContent*
    constexpr operator ::System::Xml::Schema::XmlSchemaSimpleTypeContent*() const noexcept {
      return content;
    }
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleTypeContent content
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSimpleTypeContent*& dyn_content();
    // public System.Xml.Schema.XmlSchemaSimpleTypeContent get_Content()
    // Offset: 0x2055128
    ::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content();
    // public System.Void set_Content(System.Xml.Schema.XmlSchemaSimpleTypeContent value)
    // Offset: 0x2055130
    void set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);
    // public System.Void .ctor()
    // Offset: 0x2055124
    // Implemented from: System.Xml.Schema.XmlSchemaType
    // Base method: System.Void XmlSchemaType::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSimpleType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSimpleType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSimpleType*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaSimpleType
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSimpleType), 64 + sizeof(::System::Xml::Schema::XmlSchemaSimpleTypeContent*)> __System_Xml_Schema_XmlSchemaSimpleTypeSizeCheck;
  static_assert(sizeof(XmlSchemaSimpleType) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleType::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleTypeContent* (System::Xml::Schema::XmlSchemaSimpleType::*)()>(&System::Xml::Schema::XmlSchemaSimpleType::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleType*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleType::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleType::*)(::System::Xml::Schema::XmlSchemaSimpleTypeContent*)>(&System::Xml::Schema::XmlSchemaSimpleType::set_Content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSimpleTypeContent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleType*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
