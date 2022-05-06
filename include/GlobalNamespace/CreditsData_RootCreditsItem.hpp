// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsData::RootCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData::RootCreditsItem*, "", "CreditsData/RootCreditsItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/RootCreditsItem
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsData::RootCreditsItem : public ::Il2CppObject {
    public:
    public:
    // public CreditsData/Text title
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::CreditsData::Text* title;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CreditsData::Text*) == 0x8);
    // public CreditsData/Text text
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CreditsData::Text* text;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CreditsData::Text*) == 0x8);
    // public System.Int32 rowCountOverride
    // Size: 0x4
    // Offset: 0x20
    int rowCountOverride;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: rowCountOverride and: creditsItems
    char __padding2[0x4] = {};
    // public CreditsData/ChildCreditsItem[] creditsItems
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::CreditsData::ChildCreditsItem*> creditsItems;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CreditsData::ChildCreditsItem*>) == 0x8);
    public:
    // Get instance field reference: public CreditsData/Text title
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CreditsData::Text*& dyn_title();
    // Get instance field reference: public CreditsData/Text text
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CreditsData::Text*& dyn_text();
    // Get instance field reference: public System.Int32 rowCountOverride
    [[deprecated("Use field access instead!")]] int& dyn_rowCountOverride();
    // Get instance field reference: public CreditsData/ChildCreditsItem[] creditsItems
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CreditsData::ChildCreditsItem*>& dyn_creditsItems();
    // public System.Void .ctor()
    // Offset: 0x1427FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData::RootCreditsItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsData::RootCreditsItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData::RootCreditsItem*, creationType>()));
    }
    // public System.Boolean HasTitle()
    // Offset: 0x1427F7C
    bool HasTitle();
    // public System.Boolean HasText()
    // Offset: 0x1427F8C
    bool HasText();
    // public System.Boolean HasRowItems()
    // Offset: 0x1427F9C
    bool HasRowItems();
  }; // CreditsData/RootCreditsItem
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::RootCreditsItem), 40 + sizeof(::ArrayW<::GlobalNamespace::CreditsData::ChildCreditsItem*>)> __GlobalNamespace_CreditsData_RootCreditsItemSizeCheck;
  static_assert(sizeof(CreditsData::RootCreditsItem) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasTitle
// Il2CppName: HasTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasText
// Il2CppName: HasText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasRowItems
// Il2CppName: HasRowItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasRowItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasRowItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
