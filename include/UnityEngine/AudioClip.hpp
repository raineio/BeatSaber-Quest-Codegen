// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioDataLoadState
  struct AudioDataLoadState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioClip
  class AudioClip : public UnityEngine::Object {
    public:
    // Nested type: UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    // private UnityEngine.AudioClip/PCMReaderCallback m_PCMReaderCallback
    // Offset: 0x18
    UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // private UnityEngine.AudioClip/PCMSetPositionCallback m_PCMSetPositionCallback
    // Offset: 0x20
    UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.Boolean GetData(UnityEngine.AudioClip clip, out System.Single[] data, System.Int32 numSamples, System.Int32 samplesOffset)
    // Offset: 0x1F59A84
    static bool GetData(UnityEngine::AudioClip* clip, ::Array<float>*& data, int numSamples, int samplesOffset);
    // static private System.Boolean SetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numsamples, System.Int32 samplesOffset)
    // Offset: 0x1F59AEC
    static bool SetData(UnityEngine::AudioClip* clip, ::Array<float>* data, int numsamples, int samplesOffset);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x1F59B54
    static UnityEngine::AudioClip* Construct_Internal();
    // private System.String GetName()
    // Offset: 0x1F59B88
    ::Il2CppString* GetName();
    // private System.Void CreateUserSound(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x1F59BC8
    void CreateUserSound(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // public System.Single get_length()
    // Offset: 0x1F58934
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x1F59C48
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x1F59C88
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x1F59CC8
    int get_frequency();
    // public System.Boolean LoadAudioData()
    // Offset: 0x1F59D08
    bool LoadAudioData();
    // public UnityEngine.AudioDataLoadState get_loadState()
    // Offset: 0x1F59D48
    UnityEngine::AudioDataLoadState get_loadState();
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x1F59D88
    bool GetData(::Array<float>* data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x1F59F14
    bool SetData(::Array<float>* data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x1F5A12C
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x1F5A13C
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream, UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x1F5A2F8
    void add_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x1F5A440
    void remove_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x1F5A39C
    void add_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x1F5A4E4
    void remove_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x1F5A588
    void InvokePCMReaderCallback_Internal(::Array<float>* data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x1F5A950
    void InvokePCMSetPositionCallback_Internal(int position);
    // private System.Void .ctor()
    // Offset: 0x1F599FC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioClip* New_ctor();
  }; // UnityEngine.AudioClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
#pragma pack(pop)
