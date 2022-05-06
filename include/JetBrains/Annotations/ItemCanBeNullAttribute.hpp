// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: ItemCanBeNullAttribute
  class ItemCanBeNullAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::ItemCanBeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ItemCanBeNullAttribute*, "JetBrains.Annotations", "ItemCanBeNullAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ItemCanBeNullAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1086040
  class ItemCanBeNullAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AD8680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ItemCanBeNullAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::ItemCanBeNullAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ItemCanBeNullAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.ItemCanBeNullAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::ItemCanBeNullAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
