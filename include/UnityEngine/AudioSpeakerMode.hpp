// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSpeakerMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioSpeakerMode/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AudioSpeakerMode
    constexpr AudioSpeakerMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [ObsoleteAttribute] Offset: 0xE9F228
    // static field const value: static public UnityEngine.AudioSpeakerMode Raw
    static constexpr const int Raw = 0;
    // Get static field: static public UnityEngine.AudioSpeakerMode Raw
    static UnityEngine::AudioSpeakerMode _get_Raw();
    // Set static field: static public UnityEngine.AudioSpeakerMode Raw
    static void _set_Raw(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mono
    static constexpr const int Mono = 1;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mono
    static UnityEngine::AudioSpeakerMode _get_Mono();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mono
    static void _set_Mono(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public UnityEngine.AudioSpeakerMode Stereo
    static UnityEngine::AudioSpeakerMode _get_Stereo();
    // Set static field: static public UnityEngine.AudioSpeakerMode Stereo
    static void _set_Stereo(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Quad
    static constexpr const int Quad = 3;
    // Get static field: static public UnityEngine.AudioSpeakerMode Quad
    static UnityEngine::AudioSpeakerMode _get_Quad();
    // Set static field: static public UnityEngine.AudioSpeakerMode Quad
    static void _set_Quad(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Surround
    static constexpr const int Surround = 4;
    // Get static field: static public UnityEngine.AudioSpeakerMode Surround
    static UnityEngine::AudioSpeakerMode _get_Surround();
    // Set static field: static public UnityEngine.AudioSpeakerMode Surround
    static void _set_Surround(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mode5point1
    static constexpr const int Mode5point1 = 5;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mode5point1
    static UnityEngine::AudioSpeakerMode _get_Mode5point1();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mode5point1
    static void _set_Mode5point1(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mode7point1
    static constexpr const int Mode7point1 = 6;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mode7point1
    static UnityEngine::AudioSpeakerMode _get_Mode7point1();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mode7point1
    static void _set_Mode7point1(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Prologic
    static constexpr const int Prologic = 7;
    // Get static field: static public UnityEngine.AudioSpeakerMode Prologic
    static UnityEngine::AudioSpeakerMode _get_Prologic();
    // Set static field: static public UnityEngine.AudioSpeakerMode Prologic
    static void _set_Prologic(UnityEngine::AudioSpeakerMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.AudioSpeakerMode
  #pragma pack(pop)
  static check_size<sizeof(AudioSpeakerMode), 0 + sizeof(int)> __UnityEngine_AudioSpeakerModeSizeCheck;
  static_assert(sizeof(AudioSpeakerMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSpeakerMode, "UnityEngine", "AudioSpeakerMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
