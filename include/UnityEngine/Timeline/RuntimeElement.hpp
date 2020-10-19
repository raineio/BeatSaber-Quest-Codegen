// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.IInterval
#include "UnityEngine/Timeline/IInterval.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.RuntimeElement
  class RuntimeElement : public ::Il2CppObject, public UnityEngine::Timeline::IInterval {
    public:
    // private System.Int32 <intervalBit>k__BackingField
    // Offset: 0x10
    int intervalBit;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return intervalBit;
    }
    // public System.Int32 get_intervalBit()
    // Offset: 0x13F9678
    int get_intervalBit();
    // public System.Void set_intervalBit(System.Int32 value)
    // Offset: 0x13F9680
    void set_intervalBit(int value);
    // public System.Void set_enable(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_enable(bool value);
    // public System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0xFFFFFFFF
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public System.Void Reset()
    // Offset: 0x13F9688
    void Reset();
    // public System.Int64 get_intervalStart()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Timeline.IInterval
    // Base method: System.Int64 IInterval::get_intervalStart()
    int64_t get_intervalStart();
    // public System.Int64 get_intervalEnd()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Timeline.IInterval
    // Base method: System.Int64 IInterval::get_intervalEnd()
    int64_t get_intervalEnd();
    // protected System.Void .ctor()
    // Offset: 0x13F6174
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RuntimeElement* New_ctor();
  }; // UnityEngine.Timeline.RuntimeElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeElement*, "UnityEngine.Timeline", "RuntimeElement");
#pragma pack(pop)
