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
  // Forward declaring type: HAPI_StatusType
  struct HAPI_StatusType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_StatusType, "HoudiniEngineUnity", "HAPI_StatusType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_StatusType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_StatusType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_StatusType
    constexpr HAPI_StatusType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_CALL_RESULT
    static constexpr const int HAPI_STATUS_CALL_RESULT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_CALL_RESULT
    static ::HoudiniEngineUnity::HAPI_StatusType _get_HAPI_STATUS_CALL_RESULT();
    // Set static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_CALL_RESULT
    static void _set_HAPI_STATUS_CALL_RESULT(::HoudiniEngineUnity::HAPI_StatusType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_RESULT
    static constexpr const int HAPI_STATUS_COOK_RESULT = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_RESULT
    static ::HoudiniEngineUnity::HAPI_StatusType _get_HAPI_STATUS_COOK_RESULT();
    // Set static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_RESULT
    static void _set_HAPI_STATUS_COOK_RESULT(::HoudiniEngineUnity::HAPI_StatusType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_STATE
    static constexpr const int HAPI_STATUS_COOK_STATE = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_STATE
    static ::HoudiniEngineUnity::HAPI_StatusType _get_HAPI_STATUS_COOK_STATE();
    // Set static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_COOK_STATE
    static void _set_HAPI_STATUS_COOK_STATE(::HoudiniEngineUnity::HAPI_StatusType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_MAX
    static constexpr const int HAPI_STATUS_MAX = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_MAX
    static ::HoudiniEngineUnity::HAPI_StatusType _get_HAPI_STATUS_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_StatusType HAPI_STATUS_MAX
    static void _set_HAPI_STATUS_MAX(::HoudiniEngineUnity::HAPI_StatusType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_StatusType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_StatusType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_StatusTypeSizeCheck;
  static_assert(sizeof(HAPI_StatusType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
