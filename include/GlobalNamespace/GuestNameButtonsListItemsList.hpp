// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.UIItemsList`1
#include "HMUI/UIItemsList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GuestNameButtonsListItem
  class GuestNameButtonsListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GuestNameButtonsListItemsList
  class GuestNameButtonsListItemsList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItemsList*, "", "GuestNameButtonsListItemsList");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GuestNameButtonsListItemsList
  // [TokenAttribute] Offset: FFFFFFFF
  class GuestNameButtonsListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::GuestNameButtonsListItem*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13A9F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuestNameButtonsListItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GuestNameButtonsListItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuestNameButtonsListItemsList*, creationType>()));
    }
  }; // GuestNameButtonsListItemsList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
