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
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPathStatus
  struct NavMeshPathStatus;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshPathStatus, "UnityEngine.AI", "NavMeshPathStatus");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AI.NavMeshPathStatus
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: F1159C
  struct NavMeshPathStatus/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NavMeshPathStatus
    constexpr NavMeshPathStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AI.NavMeshPathStatus PathComplete
    static constexpr const int PathComplete = 0;
    // Get static field: static public UnityEngine.AI.NavMeshPathStatus PathComplete
    static UnityEngine::AI::NavMeshPathStatus _get_PathComplete();
    // Set static field: static public UnityEngine.AI.NavMeshPathStatus PathComplete
    static void _set_PathComplete(UnityEngine::AI::NavMeshPathStatus value);
    // static field const value: static public UnityEngine.AI.NavMeshPathStatus PathPartial
    static constexpr const int PathPartial = 1;
    // Get static field: static public UnityEngine.AI.NavMeshPathStatus PathPartial
    static UnityEngine::AI::NavMeshPathStatus _get_PathPartial();
    // Set static field: static public UnityEngine.AI.NavMeshPathStatus PathPartial
    static void _set_PathPartial(UnityEngine::AI::NavMeshPathStatus value);
    // static field const value: static public UnityEngine.AI.NavMeshPathStatus PathInvalid
    static constexpr const int PathInvalid = 2;
    // Get static field: static public UnityEngine.AI.NavMeshPathStatus PathInvalid
    static UnityEngine::AI::NavMeshPathStatus _get_PathInvalid();
    // Set static field: static public UnityEngine.AI.NavMeshPathStatus PathInvalid
    static void _set_PathInvalid(UnityEngine::AI::NavMeshPathStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.AI.NavMeshPathStatus
  #pragma pack(pop)
  static check_size<sizeof(NavMeshPathStatus), 0 + sizeof(int)> __UnityEngine_AI_NavMeshPathStatusSizeCheck;
  static_assert(sizeof(NavMeshPathStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
