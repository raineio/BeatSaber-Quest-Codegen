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
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.NormalizationCheck
  // [TokenAttribute] Offset: FFFFFFFF
  struct NormalizationCheck/*, public System::Enum*/ {
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
    // Creating value type constructor for type: NormalizationCheck
    constexpr NormalizationCheck(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Text.NormalizationCheck Yes
    static constexpr const int Yes = 0;
    // Get static field: static public System.Text.NormalizationCheck Yes
    static System::Text::NormalizationCheck _get_Yes();
    // Set static field: static public System.Text.NormalizationCheck Yes
    static void _set_Yes(System::Text::NormalizationCheck value);
    // static field const value: static public System.Text.NormalizationCheck No
    static constexpr const int No = 1;
    // Get static field: static public System.Text.NormalizationCheck No
    static System::Text::NormalizationCheck _get_No();
    // Set static field: static public System.Text.NormalizationCheck No
    static void _set_No(System::Text::NormalizationCheck value);
    // static field const value: static public System.Text.NormalizationCheck Maybe
    static constexpr const int Maybe = 2;
    // Get static field: static public System.Text.NormalizationCheck Maybe
    static System::Text::NormalizationCheck _get_Maybe();
    // Set static field: static public System.Text.NormalizationCheck Maybe
    static void _set_Maybe(System::Text::NormalizationCheck value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Text.NormalizationCheck
  #pragma pack(pop)
  static check_size<sizeof(NormalizationCheck), 0 + sizeof(int)> __System_Text_NormalizationCheckSizeCheck;
  static_assert(sizeof(NormalizationCheck) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::NormalizationCheck, "System.Text", "NormalizationCheck");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
