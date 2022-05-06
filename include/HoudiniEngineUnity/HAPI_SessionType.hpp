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
  // Forward declaring type: HAPI_SessionType
  struct HAPI_SessionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionType, "HoudiniEngineUnity", "HAPI_SessionType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_SessionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_SessionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_SessionType
    constexpr HAPI_SessionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_INPROCESS
    static constexpr const int HAPI_SESSION_INPROCESS = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_INPROCESS
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_INPROCESS();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_INPROCESS
    static void _set_HAPI_SESSION_INPROCESS(::HoudiniEngineUnity::HAPI_SessionType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_THRIFT
    static constexpr const int HAPI_SESSION_THRIFT = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_THRIFT
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_THRIFT();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_THRIFT
    static void _set_HAPI_SESSION_THRIFT(::HoudiniEngineUnity::HAPI_SessionType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM1
    static constexpr const int HAPI_SESSION_CUSTOM1 = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM1
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_CUSTOM1();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM1
    static void _set_HAPI_SESSION_CUSTOM1(::HoudiniEngineUnity::HAPI_SessionType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM2
    static constexpr const int HAPI_SESSION_CUSTOM2 = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM2
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_CUSTOM2();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM2
    static void _set_HAPI_SESSION_CUSTOM2(::HoudiniEngineUnity::HAPI_SessionType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM3
    static constexpr const int HAPI_SESSION_CUSTOM3 = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM3
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_CUSTOM3();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_CUSTOM3
    static void _set_HAPI_SESSION_CUSTOM3(::HoudiniEngineUnity::HAPI_SessionType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_MAX
    static constexpr const int HAPI_SESSION_MAX = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_MAX
    static ::HoudiniEngineUnity::HAPI_SessionType _get_HAPI_SESSION_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_SessionType HAPI_SESSION_MAX
    static void _set_HAPI_SESSION_MAX(::HoudiniEngineUnity::HAPI_SessionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_SessionType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_SessionType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_SessionTypeSizeCheck;
  static_assert(sizeof(HAPI_SessionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
