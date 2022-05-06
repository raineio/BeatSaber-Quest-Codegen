// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaGroupBase
#include "System/Xml/Schema/XmlSchemaGroupBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSequence
  class XmlSchemaSequence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSequence);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSequence*, "System.Xml.Schema", "XmlSchemaSequence");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSequence
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // private System.Xml.Schema.XmlSchemaObjectCollection items
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Schema::XmlSchemaObjectCollection* items;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Schema::XmlSchemaObjectCollection*
    constexpr operator ::System::Xml::Schema::XmlSchemaObjectCollection*() const noexcept {
      return items;
    }
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection items
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_items();
    // public override System.Xml.Schema.XmlSchemaObjectCollection get_Items()
    // Offset: 0x205B26C
    // Implemented from: System.Xml.Schema.XmlSchemaGroupBase
    // Base method: System.Xml.Schema.XmlSchemaObjectCollection XmlSchemaGroupBase::get_Items()
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
    // public System.Void .ctor()
    // Offset: 0x205A030
    // Implemented from: System.Xml.Schema.XmlSchemaGroupBase
    // Base method: System.Void XmlSchemaGroupBase::.ctor()
    // Base method: System.Void XmlSchemaParticle::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSequence* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSequence*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaSequence
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSequence), 56 + sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*)> __System_Xml_Schema_XmlSchemaSequenceSizeCheck;
  static_assert(sizeof(XmlSchemaSequence) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSequence::get_Items
// Il2CppName: get_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaSequence::*)()>(&System::Xml::Schema::XmlSchemaSequence::get_Items)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSequence*), "get_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
