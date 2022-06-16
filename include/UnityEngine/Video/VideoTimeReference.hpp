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
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoTimeReference
  struct VideoTimeReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeReference, "UnityEngine.Video", "VideoTimeReference");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoTimeReference
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10A1CDC
  struct VideoTimeReference/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoTimeReference
    constexpr VideoTimeReference(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityEngine.Video.VideoTimeReference Freerun
    static constexpr const int Freerun = 0;
    // Get static field: static public UnityEngine.Video.VideoTimeReference Freerun
    static ::UnityEngine::Video::VideoTimeReference _get_Freerun();
    // Set static field: static public UnityEngine.Video.VideoTimeReference Freerun
    static void _set_Freerun(::UnityEngine::Video::VideoTimeReference value);
    // static field const value: static public UnityEngine.Video.VideoTimeReference InternalTime
    static constexpr const int InternalTime = 1;
    // Get static field: static public UnityEngine.Video.VideoTimeReference InternalTime
    static ::UnityEngine::Video::VideoTimeReference _get_InternalTime();
    // Set static field: static public UnityEngine.Video.VideoTimeReference InternalTime
    static void _set_InternalTime(::UnityEngine::Video::VideoTimeReference value);
    // static field const value: static public UnityEngine.Video.VideoTimeReference ExternalTime
    static constexpr const int ExternalTime = 2;
    // Get static field: static public UnityEngine.Video.VideoTimeReference ExternalTime
    static ::UnityEngine::Video::VideoTimeReference _get_ExternalTime();
    // Set static field: static public UnityEngine.Video.VideoTimeReference ExternalTime
    static void _set_ExternalTime(::UnityEngine::Video::VideoTimeReference value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Video.VideoTimeReference
  #pragma pack(pop)
  static check_size<sizeof(VideoTimeReference), 0 + sizeof(int)> __UnityEngine_Video_VideoTimeReferenceSizeCheck;
  static_assert(sizeof(VideoTimeReference) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
