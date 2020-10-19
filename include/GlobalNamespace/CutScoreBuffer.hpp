// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CutScoreBuffer
  class CutScoreBuffer : public GlobalNamespace::HMAutoincrementedRequestId {
    public:
    // public System.Action`1<CutScoreBuffer> didFinishEvent
    // Offset: 0x18
    System::Action_1<GlobalNamespace::CutScoreBuffer*>* didFinishEvent;
    // private System.Int32 _afterCutScoreWithMultiplier
    // Offset: 0x20
    int afterCutScoreWithMultiplier;
    // private System.Int32 _beforeCutScoreWithMultiplier
    // Offset: 0x24
    int beforeCutScoreWithMultiplier;
    // private System.Int32 _cutDistanceScoreWithMultiplier
    // Offset: 0x28
    int cutDistanceScoreWithMultiplier;
    // private System.Int32 _multiplier
    // Offset: 0x2C
    int multiplier;
    // private NoteCutInfo _noteCutInfo
    // Offset: 0x30
    GlobalNamespace::NoteCutInfo* noteCutInfo;
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // public System.Int32 get_scoreWithMultiplier()
    // Offset: 0x2014570
    int get_scoreWithMultiplier();
    // public System.Int32 get_multiplier()
    // Offset: 0x2014584
    int get_multiplier();
    // public System.Void .ctor(NoteCutInfo noteCutInfo, System.Int32 multiplier)
    // Offset: 0x201458C
    static CutScoreBuffer* New_ctor(GlobalNamespace::NoteCutInfo* noteCutInfo, int multiplier);
    // private System.Void HandleSwingRatingCounterDidChangeEvent(ISaberSwingRatingCounter swingRatingCounter, System.Single rating)
    // Offset: 0x20147D8
    void HandleSwingRatingCounterDidChangeEvent(GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float rating);
    // private System.Void RefreshScores()
    // Offset: 0x201476C
    void RefreshScores();
    // private System.Void HandleSwingRatingCounterDidFinishEvent(ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x20147DC
    void HandleSwingRatingCounterDidFinishEvent(GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
  }; // CutScoreBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutScoreBuffer*, "", "CutScoreBuffer");
#pragma pack(pop)
