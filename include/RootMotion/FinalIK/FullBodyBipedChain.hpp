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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedChain
  struct FullBodyBipedChain;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FullBodyBipedChain, "RootMotion.FinalIK", "FullBodyBipedChain");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FullBodyBipedChain
  // [TokenAttribute] Offset: FFFFFFFF
  struct FullBodyBipedChain/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FullBodyBipedChain
    constexpr FullBodyBipedChain(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedChain LeftArm
    static constexpr const int LeftArm = 0;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedChain LeftArm
    static RootMotion::FinalIK::FullBodyBipedChain _get_LeftArm();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedChain LeftArm
    static void _set_LeftArm(RootMotion::FinalIK::FullBodyBipedChain value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedChain RightArm
    static constexpr const int RightArm = 1;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedChain RightArm
    static RootMotion::FinalIK::FullBodyBipedChain _get_RightArm();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedChain RightArm
    static void _set_RightArm(RootMotion::FinalIK::FullBodyBipedChain value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedChain LeftLeg
    static constexpr const int LeftLeg = 2;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedChain LeftLeg
    static RootMotion::FinalIK::FullBodyBipedChain _get_LeftLeg();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedChain LeftLeg
    static void _set_LeftLeg(RootMotion::FinalIK::FullBodyBipedChain value);
    // static field const value: static public RootMotion.FinalIK.FullBodyBipedChain RightLeg
    static constexpr const int RightLeg = 3;
    // Get static field: static public RootMotion.FinalIK.FullBodyBipedChain RightLeg
    static RootMotion::FinalIK::FullBodyBipedChain _get_RightLeg();
    // Set static field: static public RootMotion.FinalIK.FullBodyBipedChain RightLeg
    static void _set_RightLeg(RootMotion::FinalIK::FullBodyBipedChain value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // RootMotion.FinalIK.FullBodyBipedChain
  #pragma pack(pop)
  static check_size<sizeof(FullBodyBipedChain), 0 + sizeof(int)> __RootMotion_FinalIK_FullBodyBipedChainSizeCheck;
  static_assert(sizeof(FullBodyBipedChain) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
