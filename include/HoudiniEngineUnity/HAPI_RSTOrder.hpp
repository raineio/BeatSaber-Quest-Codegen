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
  // Forward declaring type: HAPI_RSTOrder
  struct HAPI_RSTOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_RSTOrder, "HoudiniEngineUnity", "HAPI_RSTOrder");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_RSTOrder
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_RSTOrder/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_RSTOrder
    constexpr HAPI_RSTOrder(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TRS
    static constexpr const int HAPI_TRS = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TRS
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_TRS();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TRS
    static void _set_HAPI_TRS(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TSR
    static constexpr const int HAPI_TSR = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TSR
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_TSR();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_TSR
    static void _set_HAPI_TSR(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RTS
    static constexpr const int HAPI_RTS = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RTS
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_RTS();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RTS
    static void _set_HAPI_RTS(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RST
    static constexpr const int HAPI_RST = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RST
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_RST();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RST
    static void _set_HAPI_RST(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_STR
    static constexpr const int HAPI_STR = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_STR
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_STR();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_STR
    static void _set_HAPI_STR(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_SRT
    static constexpr const int HAPI_SRT = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_SRT
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_SRT();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_SRT
    static void _set_HAPI_SRT(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RSTORDER_DEFAULT
    static constexpr const int HAPI_RSTORDER_DEFAULT = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RSTORDER_DEFAULT
    static ::HoudiniEngineUnity::HAPI_RSTOrder _get_HAPI_RSTORDER_DEFAULT();
    // Set static field: static public HoudiniEngineUnity.HAPI_RSTOrder HAPI_RSTORDER_DEFAULT
    static void _set_HAPI_RSTORDER_DEFAULT(::HoudiniEngineUnity::HAPI_RSTOrder value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_RSTOrder
  #pragma pack(pop)
  static check_size<sizeof(HAPI_RSTOrder), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_RSTOrderSizeCheck;
  static_assert(sizeof(HAPI_RSTOrder) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
