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
  // Forward declaring type: ObjectiveListItem
  class ObjectiveListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObjectiveListItemsList
  class ObjectiveListItemsList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItemsList*, "", "ObjectiveListItemsList");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ObjectiveListItemsList
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectiveListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x14B3B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectiveListItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectiveListItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectiveListItemsList*, creationType>()));
    }
  }; // ObjectiveListItemsList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveListItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
