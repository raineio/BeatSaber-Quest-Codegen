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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ContextMenu
  class ContextMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ContextMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ContextMenu
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 108C9F8
  // [AttributeUsageAttribute] Offset: 108C9F8
  class ContextMenu : public ::System::Attribute {
    public:
    public:
    // public readonly System.String menuItem
    // Size: 0x8
    // Offset: 0x10
    ::StringW menuItem;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Boolean validate
    // Size: 0x1
    // Offset: 0x18
    bool validate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validate and: priority
    char __padding1[0x3] = {};
    // public readonly System.Int32 priority
    // Size: 0x4
    // Offset: 0x1C
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.String menuItem
    [[deprecated("Use field access instead!")]] ::StringW& dyn_menuItem();
    // Get instance field reference: public readonly System.Boolean validate
    [[deprecated("Use field access instead!")]] bool& dyn_validate();
    // Get instance field reference: public readonly System.Int32 priority
    [[deprecated("Use field access instead!")]] int& dyn_priority();
    // public System.Void .ctor(System.String itemName)
    // Offset: 0x20048F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::StringW itemName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName)));
    }
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction)
    // Offset: 0x200492C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::StringW itemName, bool isValidateFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName, isValidateFunction)));
    }
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction, System.Int32 priority)
    // Offset: 0x2004978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::StringW itemName, bool isValidateFunction, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName, isValidateFunction, priority)));
    }
  }; // UnityEngine.ContextMenu
  #pragma pack(pop)
  static check_size<sizeof(ContextMenu), 28 + sizeof(int)> __UnityEngine_ContextMenuSizeCheck;
  static_assert(sizeof(ContextMenu) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
