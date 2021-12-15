// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
// Including type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache_ItemType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::XmlWellFormedWriter::AttributeValueCache::Item);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/Item");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.Item
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWellFormedWriter::AttributeValueCache::Item : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType type
    // Size: 0x4
    // Offset: 0x10
    System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType type;
    // Field size check
    static_assert(sizeof(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType) == 0x4);
    // Padding between fields: type and: data
    char __padding0[0x4] = {};
    // System.Object data
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType type
    System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType& dyn_type();
    // Get instance field reference: System.Object data
    ::Il2CppObject*& dyn_data();
    // System.Void Set(System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType type, System.Object data)
    // Offset: 0x26A2DB8
    void Set(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType type, ::Il2CppObject* data);
    // System.Void .ctor()
    // Offset: 0x26A2DB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::AttributeValueCache::Item* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWellFormedWriter::AttributeValueCache::Item::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::AttributeValueCache::Item*, creationType>()));
    }
  }; // System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.Item
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache::Item), 24 + sizeof(::Il2CppObject*)> __System_Xml_XmlWellFormedWriter_AttributeValueCache_ItemSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache::Item) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::Item::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::Item::*)(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType, ::Il2CppObject*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::Item::Set)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::Item::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
