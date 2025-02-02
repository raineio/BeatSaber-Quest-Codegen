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
  // Forward declaring type: XmlSchemaParticle
  class XmlSchemaParticle;
  // Forward declaring type: XmlSchemaAnyAttribute
  class XmlSchemaAnyAttribute;
  // Forward declaring type: ContentValidator
  class ContentValidator;
  // Forward declaring type: XmlSchemaContentProcessing
  struct XmlSchemaContentProcessing;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaComplexType
  class XmlSchemaComplexType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexType*, "System.Xml.Schema", "XmlSchemaComplexType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaComplexType
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaDerivationMethod block
    // Size: 0x4
    // Offset: 0x3C
    ::System::Xml::Schema::XmlSchemaDerivationMethod block;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // private System.Xml.Schema.XmlSchemaParticle contentTypeParticle
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaParticle*) == 0x8);
    // private System.Xml.Schema.XmlSchemaAnyAttribute attributeWildcard
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaAnyAttribute*) == 0x8);
    // private System.Byte pvFlags
    // Size: 0x1
    // Offset: 0x50
    uint8_t pvFlags;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get static field: static private System.Xml.Schema.XmlSchemaComplexType anyTypeLax
    static ::System::Xml::Schema::XmlSchemaComplexType* _get_anyTypeLax();
    // Set static field: static private System.Xml.Schema.XmlSchemaComplexType anyTypeLax
    static void _set_anyTypeLax(::System::Xml::Schema::XmlSchemaComplexType* value);
    // Get static field: static private System.Xml.Schema.XmlSchemaComplexType anyTypeSkip
    static ::System::Xml::Schema::XmlSchemaComplexType* _get_anyTypeSkip();
    // Set static field: static private System.Xml.Schema.XmlSchemaComplexType anyTypeSkip
    static void _set_anyTypeSkip(::System::Xml::Schema::XmlSchemaComplexType* value);
    // Get static field: static private System.Xml.Schema.XmlSchemaComplexType untypedAnyType
    static ::System::Xml::Schema::XmlSchemaComplexType* _get_untypedAnyType();
    // Set static field: static private System.Xml.Schema.XmlSchemaComplexType untypedAnyType
    static void _set_untypedAnyType(::System::Xml::Schema::XmlSchemaComplexType* value);
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod block
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_block();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaParticle contentTypeParticle
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaParticle*& dyn_contentTypeParticle();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaAnyAttribute attributeWildcard
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaAnyAttribute*& dyn_attributeWildcard();
    // Get instance field reference: private System.Byte pvFlags
    [[deprecated("Use field access instead!")]] uint8_t& dyn_pvFlags();
    // static System.Xml.Schema.XmlSchemaComplexType get_AnyType()
    // Offset: 0x20FE5E0
    static ::System::Xml::Schema::XmlSchemaComplexType* get_AnyType();
    // static System.Xml.Schema.ContentValidator get_AnyTypeContentValidator()
    // Offset: 0x20FE100
    static ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator();
    // public System.Xml.Schema.XmlSchemaParticle get_ContentTypeParticle()
    // Offset: 0x20FE664
    ::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle();
    // static private System.Void .cctor()
    // Offset: 0x20FDBC8
    static void _cctor();
    // static private System.Xml.Schema.XmlSchemaComplexType CreateAnyType(System.Xml.Schema.XmlSchemaContentProcessing processContents)
    // Offset: 0x20FDD84
    static ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing processContents);
    // System.Void SetContentTypeParticle(System.Xml.Schema.XmlSchemaParticle value)
    // Offset: 0x20FE66C
    void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* value);
    // System.Void SetAttributeWildcard(System.Xml.Schema.XmlSchemaAnyAttribute value)
    // Offset: 0x20FE674
    void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);
    // public override System.Void set_IsMixed(System.Boolean value)
    // Offset: 0x20FE648
    // Implemented from: System.Xml.Schema.XmlSchemaType
    // Base method: System.Void XmlSchemaType::set_IsMixed(System.Boolean value)
    void set_IsMixed(bool value);
    // public System.Void .ctor()
    // Offset: 0x20FE010
    // Implemented from: System.Xml.Schema.XmlSchemaType
    // Base method: System.Void XmlSchemaType::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaComplexType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaComplexType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaComplexType*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaComplexType
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaComplexType), 80 + sizeof(uint8_t)> __System_Xml_Schema_XmlSchemaComplexTypeSizeCheck;
  static_assert(sizeof(XmlSchemaComplexType) == 0x51);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::get_AnyType
// Il2CppName: get_AnyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)()>(&System::Xml::Schema::XmlSchemaComplexType::get_AnyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "get_AnyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::get_AnyTypeContentValidator
// Il2CppName: get_AnyTypeContentValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::ContentValidator* (*)()>(&System::Xml::Schema::XmlSchemaComplexType::get_AnyTypeContentValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "get_AnyTypeContentValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::get_ContentTypeParticle
// Il2CppName: get_ContentTypeParticle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (System::Xml::Schema::XmlSchemaComplexType::*)()>(&System::Xml::Schema::XmlSchemaComplexType::get_ContentTypeParticle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "get_ContentTypeParticle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::XmlSchemaComplexType::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::CreateAnyType
// Il2CppName: CreateAnyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(&System::Xml::Schema::XmlSchemaComplexType::CreateAnyType)> {
  static const MethodInfo* get() {
    static auto* processContents = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContentProcessing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "CreateAnyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processContents});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::SetContentTypeParticle
// Il2CppName: SetContentTypeParticle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexType::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&System::Xml::Schema::XmlSchemaComplexType::SetContentTypeParticle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaParticle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "SetContentTypeParticle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::SetAttributeWildcard
// Il2CppName: SetAttributeWildcard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexType::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&System::Xml::Schema::XmlSchemaComplexType::SetAttributeWildcard)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaAnyAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "SetAttributeWildcard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::set_IsMixed
// Il2CppName: set_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaComplexType::*)(bool)>(&System::Xml::Schema::XmlSchemaComplexType::set_IsMixed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaComplexType*), "set_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaComplexType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
