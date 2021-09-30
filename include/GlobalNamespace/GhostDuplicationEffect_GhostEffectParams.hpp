// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GhostDuplicationEffect
#include "GlobalNamespace/GhostDuplicationEffect.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x45
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GhostDuplicationEffect/GhostEffectParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct GhostDuplicationEffect::GhostEffectParams/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Single startAlpha
    // Size: 0x4
    // Offset: 0x0
    float startAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 startPosition
    // Size: 0xC
    // Offset: 0x4
    UnityEngine::Vector3 startPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single startSize
    // Size: 0x4
    // Offset: 0x10
    float startSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endAlpha
    // Size: 0x4
    // Offset: 0x14
    float endAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 endPosition
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 endPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single endSize
    // Size: 0x4
    // Offset: 0x24
    float endSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x2C
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Tweening.EaseType easeType
    // Size: 0x4
    // Offset: 0x30
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: distanceCurve
    char __padding8[0x4] = {};
    // public UnityEngine.AnimationCurve distanceCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* distanceCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single peakDistance
    // Size: 0x4
    // Offset: 0x40
    float peakDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean lastPhase
    // Size: 0x1
    // Offset: 0x44
    bool lastPhase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: GhostEffectParams
    constexpr GhostEffectParams(float startAlpha_ = {}, UnityEngine::Vector3 startPosition_ = {}, float startSize_ = {}, float endAlpha_ = {}, UnityEngine::Vector3 endPosition_ = {}, float endSize_ = {}, float duration_ = {}, float delay_ = {}, Tweening::EaseType easeType_ = {}, UnityEngine::AnimationCurve* distanceCurve_ = {}, float peakDistance_ = {}, bool lastPhase_ = {}) noexcept : startAlpha{startAlpha_}, startPosition{startPosition_}, startSize{startSize_}, endAlpha{endAlpha_}, endPosition{endPosition_}, endSize{endSize_}, duration{duration_}, delay{delay_}, easeType{easeType_}, distanceCurve{distanceCurve_}, peakDistance{peakDistance_}, lastPhase{lastPhase_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single startAlpha
    float& dyn_startAlpha();
    // Get instance field reference: public UnityEngine.Vector3 startPosition
    UnityEngine::Vector3& dyn_startPosition();
    // Get instance field reference: public System.Single startSize
    float& dyn_startSize();
    // Get instance field reference: public System.Single endAlpha
    float& dyn_endAlpha();
    // Get instance field reference: public UnityEngine.Vector3 endPosition
    UnityEngine::Vector3& dyn_endPosition();
    // Get instance field reference: public System.Single endSize
    float& dyn_endSize();
    // Get instance field reference: public System.Single duration
    float& dyn_duration();
    // Get instance field reference: public System.Single delay
    float& dyn_delay();
    // Get instance field reference: public Tweening.EaseType easeType
    Tweening::EaseType& dyn_easeType();
    // Get instance field reference: public UnityEngine.AnimationCurve distanceCurve
    UnityEngine::AnimationCurve*& dyn_distanceCurve();
    // Get instance field reference: public System.Single peakDistance
    float& dyn_peakDistance();
    // Get instance field reference: public System.Boolean lastPhase
    bool& dyn_lastPhase();
  }; // GhostDuplicationEffect/GhostEffectParams
  #pragma pack(pop)
  static check_size<sizeof(GhostDuplicationEffect::GhostEffectParams), 68 + sizeof(bool)> __GlobalNamespace_GhostDuplicationEffect_GhostEffectParamsSizeCheck;
  static_assert(sizeof(GhostDuplicationEffect::GhostEffectParams) == 0x45);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams, "", "GhostDuplicationEffect/GhostEffectParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
