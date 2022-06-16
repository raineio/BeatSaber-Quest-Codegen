// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverVR::RotationOffset, "RootMotion.FinalIK", "IKSolverVR/RotationOffset");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset
  // [TokenAttribute] Offset: FFFFFFFF
  struct IKSolverVR::RotationOffset/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RotationOffset
    constexpr RotationOffset(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Pelvis
    static constexpr const int Pelvis = 0;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Pelvis
    static ::RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Pelvis();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Pelvis
    static void _set_Pelvis(::RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Chest
    static constexpr const int Chest = 1;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Chest
    static ::RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Chest();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Chest
    static void _set_Chest(::RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Head
    static constexpr const int Head = 2;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Head
    static ::RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Head();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset Head
    static void _set_Head(::RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.RotationOffset
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::RotationOffset), 0 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_RotationOffsetSizeCheck;
  static_assert(sizeof(IKSolverVR::RotationOffset) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
