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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EOverlayDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct EOverlayDirection/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EOverlayDirection
    constexpr EOverlayDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EOverlayDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public Valve.VR.EOverlayDirection Up
    static Valve::VR::EOverlayDirection _get_Up();
    // Set static field: static public Valve.VR.EOverlayDirection Up
    static void _set_Up(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public Valve.VR.EOverlayDirection Down
    static Valve::VR::EOverlayDirection _get_Down();
    // Set static field: static public Valve.VR.EOverlayDirection Down
    static void _set_Down(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public Valve.VR.EOverlayDirection Left
    static Valve::VR::EOverlayDirection _get_Left();
    // Set static field: static public Valve.VR.EOverlayDirection Left
    static void _set_Left(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public Valve.VR.EOverlayDirection Right
    static Valve::VR::EOverlayDirection _get_Right();
    // Set static field: static public Valve.VR.EOverlayDirection Right
    static void _set_Right(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Count
    static constexpr const int Count = 4;
    // Get static field: static public Valve.VR.EOverlayDirection Count
    static Valve::VR::EOverlayDirection _get_Count();
    // Set static field: static public Valve.VR.EOverlayDirection Count
    static void _set_Count(Valve::VR::EOverlayDirection value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EOverlayDirection
  #pragma pack(pop)
  static check_size<sizeof(EOverlayDirection), 0 + sizeof(int)> __Valve_VR_EOverlayDirectionSizeCheck;
  static_assert(sizeof(EOverlayDirection) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EOverlayDirection, "Valve.VR", "EOverlayDirection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
