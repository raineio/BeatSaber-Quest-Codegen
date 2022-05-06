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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_CacheProperty
  struct HAPI_CacheProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CacheProperty, "HoudiniEngineUnity", "HAPI_CacheProperty");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_CacheProperty
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_CacheProperty/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_CacheProperty
    constexpr HAPI_CacheProperty(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CURRENT
    static constexpr const int HAPI_CACHEPROP_CURRENT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CURRENT
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_CURRENT();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CURRENT
    static void _set_HAPI_CACHEPROP_CURRENT(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MIN
    static constexpr const int HAPI_CACHEPROP_HAS_MIN = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MIN
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_HAS_MIN();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MIN
    static void _set_HAPI_CACHEPROP_HAS_MIN(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MIN
    static constexpr const int HAPI_CACHEPROP_MIN = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MIN
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_MIN();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MIN
    static void _set_HAPI_CACHEPROP_MIN(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MAX
    static constexpr const int HAPI_CACHEPROP_HAS_MAX = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MAX
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_HAS_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_HAS_MAX
    static void _set_HAPI_CACHEPROP_HAS_MAX(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MAX
    static constexpr const int HAPI_CACHEPROP_MAX = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MAX
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_MAX
    static void _set_HAPI_CACHEPROP_MAX(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CULL_LEVEL
    static constexpr const int HAPI_CACHEPROP_CULL_LEVEL = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CULL_LEVEL
    static ::HoudiniEngineUnity::HAPI_CacheProperty _get_HAPI_CACHEPROP_CULL_LEVEL();
    // Set static field: static public HoudiniEngineUnity.HAPI_CacheProperty HAPI_CACHEPROP_CULL_LEVEL
    static void _set_HAPI_CACHEPROP_CULL_LEVEL(::HoudiniEngineUnity::HAPI_CacheProperty value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_CacheProperty
  #pragma pack(pop)
  static check_size<sizeof(HAPI_CacheProperty), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_CachePropertySizeCheck;
  static_assert(sizeof(HAPI_CacheProperty) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
