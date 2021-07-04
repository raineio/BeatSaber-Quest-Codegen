// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/RootCreditsItem
  class CreditsData::RootCreditsItem : public ::Il2CppObject {
    public:
    // public CreditsData/Text title
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::CreditsData::Text* title;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsData::Text*) == 0x8);
    // public CreditsData/Text text
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CreditsData::Text* text;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsData::Text*) == 0x8);
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
    ::Array<GlobalNamespace::CreditsData::ChildCreditsItem*>* creditsItems;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CreditsData::ChildCreditsItem*>*) == 0x8);
    // Creating value type constructor for type: RootCreditsItem
    RootCreditsItem(GlobalNamespace::CreditsData::Text* title_ = {}, GlobalNamespace::CreditsData::Text* text_ = {}, int rowCountOverride_ = {}, ::Array<GlobalNamespace::CreditsData::ChildCreditsItem*>* creditsItems_ = {}) noexcept : title{title_}, text{text_}, rowCountOverride{rowCountOverride_}, creditsItems{creditsItems_} {}
    // public System.Boolean HasTitle()
    // Offset: 0x1197DC8
    bool HasTitle();
    // public System.Boolean HasText()
    // Offset: 0x1197DD8
    bool HasText();
    // public System.Boolean HasRowItems()
    // Offset: 0x1197DE8
    bool HasRowItems();
    // public System.Void .ctor()
    // Offset: 0x1197E08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData::RootCreditsItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsData::RootCreditsItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData::RootCreditsItem*, creationType>()));
    }
  }; // CreditsData/RootCreditsItem
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::RootCreditsItem), 40 + sizeof(::Array<GlobalNamespace::CreditsData::ChildCreditsItem*>*)> __GlobalNamespace_CreditsData_RootCreditsItemSizeCheck;
  static_assert(sizeof(CreditsData::RootCreditsItem) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsData::RootCreditsItem*, "", "CreditsData/RootCreditsItem");
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasTitle
// Il2CppName: HasTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasTitle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasText
// Il2CppName: HasText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::HasRowItems
// Il2CppName: HasRowItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::RootCreditsItem::*)()>(&GlobalNamespace::CreditsData::RootCreditsItem::HasRowItems)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::RootCreditsItem*), "HasRowItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::RootCreditsItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
