// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Forward declaring type: Initialization
  struct Initialization;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.Initialization
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: EB5DF4
  // [MovedFromAttribute] Offset: EB5DF4
  struct Initialization/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::PlayerLoop::Initialization::PlayerUpdateTime
    struct PlayerUpdateTime;
    // Nested type: UnityEngine::PlayerLoop::Initialization::DirectorSampleTime
    struct DirectorSampleTime;
    // Nested type: UnityEngine::PlayerLoop::Initialization::AsyncUploadTimeSlicedUpdate
    struct AsyncUploadTimeSlicedUpdate;
    // Nested type: UnityEngine::PlayerLoop::Initialization::SynchronizeState
    struct SynchronizeState;
    // Nested type: UnityEngine::PlayerLoop::Initialization::SynchronizeInputs
    struct SynchronizeInputs;
    // Nested type: UnityEngine::PlayerLoop::Initialization::XREarlyUpdate
    struct XREarlyUpdate;
    // Creating value type constructor for type: Initialization
    constexpr Initialization() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.Initialization
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
