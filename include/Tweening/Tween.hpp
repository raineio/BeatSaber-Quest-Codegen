// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.InterpolationType
#include "Tweening/InterpolationType.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Autogenerated type: Tweening.Tween
  class Tween : public ::Il2CppObject {
    public:
    // private System.Single <time>k__BackingField
    // Offset: 0x10
    float time;
    // private System.Single <duration>k__BackingField
    // Offset: 0x14
    float duration;
    // private System.Boolean <loop>k__BackingField
    // Offset: 0x18
    bool loop;
    // private System.Single <delay>k__BackingField
    // Offset: 0x1C
    float delay;
    // public System.Action onStart
    // Offset: 0x20
    System::Action* onStart;
    // public System.Action onCompleted
    // Offset: 0x28
    System::Action* onCompleted;
    // public System.Action onKilled
    // Offset: 0x30
    System::Action* onKilled;
    // private System.Boolean <isStarted>k__BackingField
    // Offset: 0x38
    bool isStarted;
    // private System.Boolean <isKilled>k__BackingField
    // Offset: 0x39
    bool isKilled;
    // private Tweening.InterpolationType <interpolationType>k__BackingField
    // Offset: 0x3C
    Tweening::InterpolationType interpolationType;
    // private Tweening.EaseType <easeType>k__BackingField
    // Offset: 0x40
    Tweening::EaseType easeType;
    // private UnityEngine.AnimationCurve <animationCurve>k__BackingField
    // Offset: 0x48
    UnityEngine::AnimationCurve* animationCurve;
    // public System.Single get_progress()
    // Offset: 0xFF47A4
    float get_progress();
    // public System.Single get_time()
    // Offset: 0xFF4840
    float get_time();
    // protected System.Void set_time(System.Single value)
    // Offset: 0xFF4848
    void set_time(float value);
    // public System.Single get_duration()
    // Offset: 0xFF4850
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0xFF4858
    void set_duration(float value);
    // public System.Boolean get_loop()
    // Offset: 0xFF4860
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0xFF4868
    void set_loop(bool value);
    // public System.Single get_delay()
    // Offset: 0xFF4874
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0xFF487C
    void set_delay(float value);
    // public System.Boolean get_isStarted()
    // Offset: 0xFF4884
    bool get_isStarted();
    // protected System.Void set_isStarted(System.Boolean value)
    // Offset: 0xFF488C
    void set_isStarted(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0xFF4898
    bool get_isActive();
    // public System.Boolean get_isComplete()
    // Offset: 0xFF48C8
    bool get_isComplete();
    // public System.Boolean get_isKilled()
    // Offset: 0xFF48E8
    bool get_isKilled();
    // private System.Void set_isKilled(System.Boolean value)
    // Offset: 0xFF48F0
    void set_isKilled(bool value);
    // public Tweening.InterpolationType get_interpolationType()
    // Offset: 0xFF48FC
    Tweening::InterpolationType get_interpolationType();
    // protected System.Void set_interpolationType(Tweening.InterpolationType value)
    // Offset: 0xFF4904
    void set_interpolationType(Tweening::InterpolationType value);
    // public Tweening.EaseType get_easeType()
    // Offset: 0xFF490C
    Tweening::EaseType get_easeType();
    // public System.Void set_easeType(Tweening.EaseType value)
    // Offset: 0xFF4914
    void set_easeType(Tweening::EaseType value);
    // public UnityEngine.AnimationCurve get_animationCurve()
    // Offset: 0xFF491C
    UnityEngine::AnimationCurve* get_animationCurve();
    // protected System.Void set_animationCurve(UnityEngine.AnimationCurve value)
    // Offset: 0xFF4924
    void set_animationCurve(UnityEngine::AnimationCurve* value);
    // public System.Void Kill()
    // Offset: 0xFF492C
    void Kill();
    // public System.Void Restart()
    // Offset: 0xFF4938
    void Restart();
    // public System.Void Update(System.Single deltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float deltaTime);
    // public System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFF
    void Sample(float t);
    // protected System.Single Interpolate(System.Single t)
    // Offset: 0xFF417C
    float Interpolate(float t);
    // protected System.Void .ctor()
    // Offset: 0xFF4944
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Tween* New_ctor();
  }; // Tweening.Tween
  check_size<sizeof(Tween), 72 + sizeof(void*) + 8 - (72 + sizeof(void*)) % 8> __Tweening_TweenSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::Tween*, "Tweening", "Tween");
#pragma pack(pop)