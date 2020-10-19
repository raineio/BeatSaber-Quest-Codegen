// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Skipping declaration: EaseType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Autogenerated type: Tweening.FloatTween
  class FloatTween : public Tweening::Tween_1<float> {
    public:
    // public System.Void .ctor(System.Single fromValue, System.Single toValue, System.Action`1<System.Single> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x1FA2888
    static FloatTween* New_ctor(float fromValue, float toValue, System::Action_1<float>* onUpdate, float duration, Tweening::EaseType easeType, float delay);
    // public System.Void .ctor(System.Single fromValue, System.Single toValue, System.Action`1<System.Single> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x1FA2920
    static FloatTween* New_ctor(float fromValue, float toValue, System::Action_1<float>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay);
    // public System.Single GetValue(System.Single t)
    // Offset: 0x1FA29B8
    float GetValue(float t);
  }; // Tweening.FloatTween
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::FloatTween*, "Tweening", "FloatTween");
#pragma pack(pop)
