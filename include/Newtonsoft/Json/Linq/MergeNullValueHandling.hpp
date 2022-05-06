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
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: MergeNullValueHandling
  struct MergeNullValueHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeNullValueHandling, "Newtonsoft.Json.Linq", "MergeNullValueHandling");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.MergeNullValueHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MergeNullValueHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MergeNullValueHandling
    constexpr MergeNullValueHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Linq.MergeNullValueHandling Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public Newtonsoft.Json.Linq.MergeNullValueHandling Ignore
    static ::Newtonsoft::Json::Linq::MergeNullValueHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.Linq.MergeNullValueHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::Linq::MergeNullValueHandling value);
    // static field const value: static public Newtonsoft.Json.Linq.MergeNullValueHandling Merge
    static constexpr const int Merge = 1;
    // Get static field: static public Newtonsoft.Json.Linq.MergeNullValueHandling Merge
    static ::Newtonsoft::Json::Linq::MergeNullValueHandling _get_Merge();
    // Set static field: static public Newtonsoft.Json.Linq.MergeNullValueHandling Merge
    static void _set_Merge(::Newtonsoft::Json::Linq::MergeNullValueHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Linq.MergeNullValueHandling
  #pragma pack(pop)
  static check_size<sizeof(MergeNullValueHandling), 0 + sizeof(int)> __Newtonsoft_Json_Linq_MergeNullValueHandlingSizeCheck;
  static_assert(sizeof(MergeNullValueHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
