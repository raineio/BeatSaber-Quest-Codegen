// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: IVoipPCMSource
  class IVoipPCMSource;
  // Forward declaring type: VoipSampleRate
  struct VoipSampleRate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipAudioSourceHiLevel
  class VoipAudioSourceHiLevel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate
    class FilterReadDelegate;
    // private System.Int32 initialPlaybackDelayMS
    // Size: 0x4
    // Offset: 0x18
    int initialPlaybackDelayMS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: initialPlaybackDelayMS and: audioSource
    char __padding0[0x4] = {};
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // public System.Single peakAmplitude
    // Size: 0x4
    // Offset: 0x28
    float peakAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: peakAmplitude and: pcmSource
    char __padding2[0x4] = {};
    // protected Oculus.Platform.IVoipPCMSource pcmSource
    // Size: 0x8
    // Offset: 0x30
    Oculus::Platform::IVoipPCMSource* pcmSource;
    // Field size check
    static_assert(sizeof(Oculus::Platform::IVoipPCMSource*) == 0x8);
    // Creating value type constructor for type: VoipAudioSourceHiLevel
    VoipAudioSourceHiLevel(int initialPlaybackDelayMS_ = {}, UnityEngine::AudioSource* audioSource_ = {}, float peakAmplitude_ = {}, Oculus::Platform::IVoipPCMSource* pcmSource_ = {}) noexcept : initialPlaybackDelayMS{initialPlaybackDelayMS_}, audioSource{audioSource_}, peakAmplitude{peakAmplitude_}, pcmSource{pcmSource_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Int32 audioSystemPlaybackFrequency
    static int _get_audioSystemPlaybackFrequency();
    // Set static field: static private System.Int32 audioSystemPlaybackFrequency
    static void _set_audioSystemPlaybackFrequency(int value);
    // Get static field: static private System.Boolean verboseLogging
    static bool _get_verboseLogging();
    // Set static field: static private System.Boolean verboseLogging
    static void _set_verboseLogging(bool value);
    // public System.Void set_senderID(System.UInt64 value)
    // Offset: 0x23B2460
    void set_senderID(uint64_t value);
    // protected System.Void Stop()
    // Offset: 0x23B2524
    void Stop();
    // private Oculus.Platform.VoipSampleRate SampleRateToEnum(System.Int32 rate)
    // Offset: 0x23B2528
    Oculus::Platform::VoipSampleRate SampleRateToEnum(int rate);
    // protected System.Void Awake()
    // Offset: 0x23B2564
    void Awake();
    // private System.Void Start()
    // Offset: 0x23B280C
    void Start();
    // protected System.Void CreatePCMSource()
    // Offset: 0x23B2828
    void CreatePCMSource();
    // static protected System.Int32 MSToElements(System.Int32 ms)
    // Offset: 0x23B2890
    static int MSToElements(int ms);
    // private System.Void Update()
    // Offset: 0x23B2918
    void Update();
    // public System.Void .ctor()
    // Offset: 0x23B2BF0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipAudioSourceHiLevel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::VoipAudioSourceHiLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipAudioSourceHiLevel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x23B2BF8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Oculus.Platform.VoipAudioSourceHiLevel
  #pragma pack(pop)
  static check_size<sizeof(VoipAudioSourceHiLevel), 48 + sizeof(Oculus::Platform::IVoipPCMSource*)> __Oculus_Platform_VoipAudioSourceHiLevelSizeCheck;
  static_assert(sizeof(VoipAudioSourceHiLevel) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipAudioSourceHiLevel*, "Oculus.Platform", "VoipAudioSourceHiLevel");
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::set_senderID
// Il2CppName: set_senderID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)(uint64_t)>(&Oculus::Platform::VoipAudioSourceHiLevel::set_senderID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "set_senderID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::Stop)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum
// Il2CppName: SampleRateToEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::VoipSampleRate (Oculus::Platform::VoipAudioSourceHiLevel::*)(int)>(&Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "SampleRateToEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource
// Il2CppName: CreatePCMSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "CreatePCMSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::MSToElements
// Il2CppName: MSToElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Oculus::Platform::VoipAudioSourceHiLevel::MSToElements)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "MSToElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
