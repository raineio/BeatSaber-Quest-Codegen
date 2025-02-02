// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: NotifyCollectionChangedAction
  struct NotifyCollectionChangedAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedAction, "System.ComponentModel", "NotifyCollectionChangedAction");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.NotifyCollectionChangedAction
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F875C
  struct NotifyCollectionChangedAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NotifyCollectionChangedAction
    constexpr NotifyCollectionChangedAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.NotifyCollectionChangedAction Add
    static constexpr const int Add = 0;
    // Get static field: static public System.ComponentModel.NotifyCollectionChangedAction Add
    static ::System::ComponentModel::NotifyCollectionChangedAction _get_Add();
    // Set static field: static public System.ComponentModel.NotifyCollectionChangedAction Add
    static void _set_Add(::System::ComponentModel::NotifyCollectionChangedAction value);
    // static field const value: static public System.ComponentModel.NotifyCollectionChangedAction Remove
    static constexpr const int Remove = 1;
    // Get static field: static public System.ComponentModel.NotifyCollectionChangedAction Remove
    static ::System::ComponentModel::NotifyCollectionChangedAction _get_Remove();
    // Set static field: static public System.ComponentModel.NotifyCollectionChangedAction Remove
    static void _set_Remove(::System::ComponentModel::NotifyCollectionChangedAction value);
    // static field const value: static public System.ComponentModel.NotifyCollectionChangedAction Replace
    static constexpr const int Replace = 2;
    // Get static field: static public System.ComponentModel.NotifyCollectionChangedAction Replace
    static ::System::ComponentModel::NotifyCollectionChangedAction _get_Replace();
    // Set static field: static public System.ComponentModel.NotifyCollectionChangedAction Replace
    static void _set_Replace(::System::ComponentModel::NotifyCollectionChangedAction value);
    // static field const value: static public System.ComponentModel.NotifyCollectionChangedAction Move
    static constexpr const int Move = 3;
    // Get static field: static public System.ComponentModel.NotifyCollectionChangedAction Move
    static ::System::ComponentModel::NotifyCollectionChangedAction _get_Move();
    // Set static field: static public System.ComponentModel.NotifyCollectionChangedAction Move
    static void _set_Move(::System::ComponentModel::NotifyCollectionChangedAction value);
    // static field const value: static public System.ComponentModel.NotifyCollectionChangedAction Reset
    static constexpr const int Reset = 4;
    // Get static field: static public System.ComponentModel.NotifyCollectionChangedAction Reset
    static ::System::ComponentModel::NotifyCollectionChangedAction _get_Reset();
    // Set static field: static public System.ComponentModel.NotifyCollectionChangedAction Reset
    static void _set_Reset(::System::ComponentModel::NotifyCollectionChangedAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.NotifyCollectionChangedAction
  #pragma pack(pop)
  static check_size<sizeof(NotifyCollectionChangedAction), 0 + sizeof(int)> __System_ComponentModel_NotifyCollectionChangedActionSizeCheck;
  static_assert(sizeof(NotifyCollectionChangedAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
