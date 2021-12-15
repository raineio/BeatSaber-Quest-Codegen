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
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::PositionOffset, "RootMotion.FinalIK", "IKSolverVR/PositionOffset");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset
  // [TokenAttribute] Offset: FFFFFFFF
  struct IKSolverVR::PositionOffset/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PositionOffset
    constexpr PositionOffset(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Pelvis
    static constexpr const int Pelvis = 0;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Pelvis
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_Pelvis();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Pelvis
    static void _set_Pelvis(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Chest
    static constexpr const int Chest = 1;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Chest
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_Chest();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Chest
    static void _set_Chest(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Head
    static constexpr const int Head = 2;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Head
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_Head();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset Head
    static void _set_Head(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHand
    static constexpr const int LeftHand = 3;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHand
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_LeftHand();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHand
    static void _set_LeftHand(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHand
    static constexpr const int RightHand = 4;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHand
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_RightHand();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHand
    static void _set_RightHand(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftFoot
    static constexpr const int LeftFoot = 5;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftFoot
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_LeftFoot();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftFoot
    static void _set_LeftFoot(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightFoot
    static constexpr const int RightFoot = 6;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightFoot
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_RightFoot();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightFoot
    static void _set_RightFoot(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHeel
    static constexpr const int LeftHeel = 7;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHeel
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_LeftHeel();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset LeftHeel
    static void _set_LeftHeel(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHeel
    static constexpr const int RightHeel = 8;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHeel
    static RootMotion::FinalIK::IKSolverVR::PositionOffset _get_RightHeel();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset RightHeel
    static void _set_RightHeel(RootMotion::FinalIK::IKSolverVR::PositionOffset value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::PositionOffset), 0 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_PositionOffsetSizeCheck;
  static_assert(sizeof(IKSolverVR::PositionOffset) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
