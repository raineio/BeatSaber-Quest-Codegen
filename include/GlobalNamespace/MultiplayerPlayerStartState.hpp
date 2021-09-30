// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayerStartState
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerPlayerStartState/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MultiplayerPlayerStartState
    constexpr MultiplayerPlayerStartState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerPlayerStartState InSync
    static constexpr const int InSync = 0;
    // Get static field: static public MultiplayerPlayerStartState InSync
    static GlobalNamespace::MultiplayerPlayerStartState _get_InSync();
    // Set static field: static public MultiplayerPlayerStartState InSync
    static void _set_InSync(GlobalNamespace::MultiplayerPlayerStartState value);
    // static field const value: static public MultiplayerPlayerStartState Late
    static constexpr const int Late = 1;
    // Get static field: static public MultiplayerPlayerStartState Late
    static GlobalNamespace::MultiplayerPlayerStartState _get_Late();
    // Set static field: static public MultiplayerPlayerStartState Late
    static void _set_Late(GlobalNamespace::MultiplayerPlayerStartState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MultiplayerPlayerStartState
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPlayerStartState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerPlayerStartStateSizeCheck;
  static_assert(sizeof(MultiplayerPlayerStartState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerStartState, "", "MultiplayerPlayerStartState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
