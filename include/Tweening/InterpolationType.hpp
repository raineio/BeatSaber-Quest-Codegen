// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Tweening
namespace Tweening {
  // Autogenerated type: Tweening.InterpolationType
  struct InterpolationType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: InterpolationType
    constexpr InterpolationType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Tweening.InterpolationType Easing
    static constexpr const int Easing = 0;
    // Get static field: static public Tweening.InterpolationType Easing
    static Tweening::InterpolationType _get_Easing();
    // Set static field: static public Tweening.InterpolationType Easing
    static void _set_Easing(Tweening::InterpolationType value);
    // static field const value: static public Tweening.InterpolationType AnimationCurve
    static constexpr const int AnimationCurve = 1;
    // Get static field: static public Tweening.InterpolationType AnimationCurve
    static Tweening::InterpolationType _get_AnimationCurve();
    // Set static field: static public Tweening.InterpolationType AnimationCurve
    static void _set_AnimationCurve(Tweening::InterpolationType value);
  }; // Tweening.InterpolationType
  check_size<sizeof(InterpolationType), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __Tweening_InterpolationTypeSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::InterpolationType, "Tweening", "InterpolationType");
#pragma pack(pop)