// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FrameTiming
  struct FrameTiming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.FrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 108B1E4
  struct FrameTiming/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x108FBF0
    // public System.UInt64 cpuTimePresentCalled
    // Size: 0x8
    // Offset: 0x0
    uint64_t cpuTimePresentCalled;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [NativeNameAttribute] Offset: 0x108FC28
    // public System.Double cpuFrameTime
    // Size: 0x8
    // Offset: 0x8
    double cpuFrameTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // [NativeNameAttribute] Offset: 0x108FC60
    // public System.UInt64 cpuTimeFrameComplete
    // Size: 0x8
    // Offset: 0x10
    uint64_t cpuTimeFrameComplete;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [NativeNameAttribute] Offset: 0x108FC98
    // public System.Double gpuFrameTime
    // Size: 0x8
    // Offset: 0x18
    double gpuFrameTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // [NativeNameAttribute] Offset: 0x108FCD0
    // public System.Single heightScale
    // Size: 0x4
    // Offset: 0x20
    float heightScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x108FD08
    // public System.Single widthScale
    // Size: 0x4
    // Offset: 0x24
    float widthScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x108FD40
    // public System.UInt32 syncInterval
    // Size: 0x4
    // Offset: 0x28
    uint syncInterval;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: FrameTiming
    constexpr FrameTiming(uint64_t cpuTimePresentCalled_ = {}, double cpuFrameTime_ = {}, uint64_t cpuTimeFrameComplete_ = {}, double gpuFrameTime_ = {}, float heightScale_ = {}, float widthScale_ = {}, uint syncInterval_ = {}) noexcept : cpuTimePresentCalled{cpuTimePresentCalled_}, cpuFrameTime{cpuFrameTime_}, cpuTimeFrameComplete{cpuTimeFrameComplete_}, gpuFrameTime{gpuFrameTime_}, heightScale{heightScale_}, widthScale{widthScale_}, syncInterval{syncInterval_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 cpuTimePresentCalled
    [[deprecated("Use field access instead!")]] uint64_t& dyn_cpuTimePresentCalled();
    // Get instance field reference: public System.Double cpuFrameTime
    [[deprecated("Use field access instead!")]] double& dyn_cpuFrameTime();
    // Get instance field reference: public System.UInt64 cpuTimeFrameComplete
    [[deprecated("Use field access instead!")]] uint64_t& dyn_cpuTimeFrameComplete();
    // Get instance field reference: public System.Double gpuFrameTime
    [[deprecated("Use field access instead!")]] double& dyn_gpuFrameTime();
    // Get instance field reference: public System.Single heightScale
    [[deprecated("Use field access instead!")]] float& dyn_heightScale();
    // Get instance field reference: public System.Single widthScale
    [[deprecated("Use field access instead!")]] float& dyn_widthScale();
    // Get instance field reference: public System.UInt32 syncInterval
    [[deprecated("Use field access instead!")]] uint& dyn_syncInterval();
  }; // UnityEngine.FrameTiming
  #pragma pack(pop)
  static check_size<sizeof(FrameTiming), 40 + sizeof(uint)> __UnityEngine_FrameTimingSizeCheck;
  static_assert(sizeof(FrameTiming) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
