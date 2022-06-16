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
  // Forward declaring type: CommentHandling
  struct CommentHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::CommentHandling, "Newtonsoft.Json.Linq", "CommentHandling");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.CommentHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  struct CommentHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CommentHandling
    constexpr CommentHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.Linq.CommentHandling Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public Newtonsoft.Json.Linq.CommentHandling Ignore
    static ::Newtonsoft::Json::Linq::CommentHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.Linq.CommentHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::Linq::CommentHandling value);
    // static field const value: static public Newtonsoft.Json.Linq.CommentHandling Load
    static constexpr const int Load = 1;
    // Get static field: static public Newtonsoft.Json.Linq.CommentHandling Load
    static ::Newtonsoft::Json::Linq::CommentHandling _get_Load();
    // Set static field: static public Newtonsoft.Json.Linq.CommentHandling Load
    static void _set_Load(::Newtonsoft::Json::Linq::CommentHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Linq.CommentHandling
  #pragma pack(pop)
  static check_size<sizeof(CommentHandling), 0 + sizeof(int)> __Newtonsoft_Json_Linq_CommentHandlingSizeCheck;
  static_assert(sizeof(CommentHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
