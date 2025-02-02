// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.IXmlSchemaInfo
#include "System/Xml/Schema/IXmlSchemaInfo.hpp"
// Including type: System.Xml.Schema.XmlSchemaValidity
#include "System/Xml/Schema/XmlSchemaValidity.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentType
#include "System/Xml/Schema/XmlSchemaContentType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaElement
  class XmlSchemaElement;
  // Forward declaring type: XmlSchemaAttribute
  class XmlSchemaAttribute;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaInfo
  class XmlSchemaInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInfo*, "System.Xml.Schema", "XmlSchemaInfo");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaInfo : public ::Il2CppObject/*, public ::System::Xml::Schema::IXmlSchemaInfo*/ {
    public:
    public:
    // private System.Boolean isDefault
    // Size: 0x1
    // Offset: 0x10
    bool isDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isNil
    // Size: 0x1
    // Offset: 0x11
    bool isNil;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNil and: schemaElement
    char __padding1[0x6] = {};
    // private System.Xml.Schema.XmlSchemaElement schemaElement
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaElement* schemaElement;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaElement*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAttribute schemaAttribute
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAttribute*) == 0x8);
    // private System.Xml.Schema.XmlSchemaType schemaType
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlSchemaType* schemaType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaSimpleType memberType
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::XmlSchemaSimpleType* memberType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaValidity validity
    // Size: 0x4
    // Offset: 0x38
    ::System::Xml::Schema::XmlSchemaValidity validity;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaValidity) == 0x4);
    // private System.Xml.Schema.XmlSchemaContentType contentType
    // Size: 0x4
    // Offset: 0x3C
    ::System::Xml::Schema::XmlSchemaContentType contentType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentType) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Xml::Schema::IXmlSchemaInfo
    operator ::System::Xml::Schema::IXmlSchemaInfo() noexcept {
      return *reinterpret_cast<::System::Xml::Schema::IXmlSchemaInfo*>(this);
    }
    // Creating interface conversion operator: i_IXmlSchemaInfo
    inline ::System::Xml::Schema::IXmlSchemaInfo* i_IXmlSchemaInfo() noexcept {
      return reinterpret_cast<::System::Xml::Schema::IXmlSchemaInfo*>(this);
    }
    // Get instance field reference: private System.Boolean isDefault
    [[deprecated("Use field access instead!")]] bool& dyn_isDefault();
    // Get instance field reference: private System.Boolean isNil
    [[deprecated("Use field access instead!")]] bool& dyn_isNil();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaElement schemaElement
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaElement*& dyn_schemaElement();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAttribute schemaAttribute
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaAttribute*& dyn_schemaAttribute();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaType schemaType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaType*& dyn_schemaType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType memberType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSimpleType*& dyn_memberType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaValidity validity
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaValidity& dyn_validity();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentType contentType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContentType& dyn_contentType();
    // public System.Xml.Schema.XmlSchemaValidity get_Validity()
    // Offset: 0x20FF498
    ::System::Xml::Schema::XmlSchemaValidity get_Validity();
    // public System.Boolean get_IsDefault()
    // Offset: 0x20FF4A0
    bool get_IsDefault();
    // public System.Boolean get_IsNil()
    // Offset: 0x20FF4A8
    bool get_IsNil();
    // public System.Xml.Schema.XmlSchemaSimpleType get_MemberType()
    // Offset: 0x20FF4B0
    ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
    // public System.Xml.Schema.XmlSchemaType get_SchemaType()
    // Offset: 0x20FF4B8
    ::System::Xml::Schema::XmlSchemaType* get_SchemaType();
    // public System.Xml.Schema.XmlSchemaElement get_SchemaElement()
    // Offset: 0x20FF4C0
    ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
    // public System.Xml.Schema.XmlSchemaAttribute get_SchemaAttribute()
    // Offset: 0x20FF4C8
    ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
    // public System.Void .ctor()
    // Offset: 0x20FF40C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaInfo*, creationType>()));
    }
    // System.Void .ctor(System.Xml.Schema.XmlSchemaValidity validity)
    // Offset: 0x20FF45C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaInfo* New_ctor(::System::Xml::Schema::XmlSchemaValidity validity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaInfo*, creationType>(validity)));
    }
    // System.Void Clear()
    // Offset: 0x20FF444
    void Clear();
  }; // System.Xml.Schema.XmlSchemaInfo
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaInfo), 60 + sizeof(::System::Xml::Schema::XmlSchemaContentType)> __System_Xml_Schema_XmlSchemaInfoSizeCheck;
  static_assert(sizeof(XmlSchemaInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_Validity
// Il2CppName: get_Validity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaValidity (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_Validity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_Validity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_IsNil
// Il2CppName: get_IsNil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_IsNil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_IsNil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_SchemaType
// Il2CppName: get_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_SchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_SchemaElement
// Il2CppName: get_SchemaElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_SchemaElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_SchemaElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::get_SchemaAttribute
// Il2CppName: get_SchemaAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::get_SchemaAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "get_SchemaAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaInfo::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaInfo::*)()>(&System::Xml::Schema::XmlSchemaInfo::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaInfo*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
