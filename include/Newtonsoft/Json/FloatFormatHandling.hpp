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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: FloatFormatHandling
  struct FloatFormatHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::FloatFormatHandling, "Newtonsoft.Json", "FloatFormatHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.FloatFormatHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F87EC
  struct FloatFormatHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FloatFormatHandling
    constexpr FloatFormatHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.FloatFormatHandling String
    static constexpr const int String = 0;
    // Get static field: static public Newtonsoft.Json.FloatFormatHandling String
    static ::Newtonsoft::Json::FloatFormatHandling _get_String();
    // Set static field: static public Newtonsoft.Json.FloatFormatHandling String
    static void _set_String(::Newtonsoft::Json::FloatFormatHandling value);
    // static field const value: static public Newtonsoft.Json.FloatFormatHandling Symbol
    static constexpr const int Symbol = 1;
    // Get static field: static public Newtonsoft.Json.FloatFormatHandling Symbol
    static ::Newtonsoft::Json::FloatFormatHandling _get_Symbol();
    // Set static field: static public Newtonsoft.Json.FloatFormatHandling Symbol
    static void _set_Symbol(::Newtonsoft::Json::FloatFormatHandling value);
    // static field const value: static public Newtonsoft.Json.FloatFormatHandling DefaultValue
    static constexpr const int DefaultValue = 2;
    // Get static field: static public Newtonsoft.Json.FloatFormatHandling DefaultValue
    static ::Newtonsoft::Json::FloatFormatHandling _get_DefaultValue();
    // Set static field: static public Newtonsoft.Json.FloatFormatHandling DefaultValue
    static void _set_DefaultValue(::Newtonsoft::Json::FloatFormatHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.FloatFormatHandling
  #pragma pack(pop)
  static check_size<sizeof(FloatFormatHandling), 0 + sizeof(int)> __Newtonsoft_Json_FloatFormatHandlingSizeCheck;
  static_assert(sizeof(FloatFormatHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
