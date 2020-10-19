// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioType
  struct AudioType;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerAudioClip
  class DownloadHandlerAudioClip : public UnityEngine::Networking::DownloadHandler {
    public:
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerAudioClip obj, System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x1F7BD90
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::Il2CppString* url, UnityEngine::AudioType audioType);
    // private System.Void InternalCreateAudioClip(System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x1F7BDE8
    void InternalCreateAudioClip(::Il2CppString* url, UnityEngine::AudioType audioType);
    // public System.Void .ctor(System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x1F7BE48
    static DownloadHandlerAudioClip* New_ctor(::Il2CppString* url, UnityEngine::AudioType audioType);
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x1F7BF24
    UnityEngine::AudioClip* get_audioClip();
    // public System.Void set_streamAudio(System.Boolean value)
    // Offset: 0x1F7BF64
    void set_streamAudio(bool value);
    // static public UnityEngine.AudioClip GetContent(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0x1F7BFB4
    static UnityEngine::AudioClip* GetContent(UnityEngine::Networking::UnityWebRequest* www);
    // protected override System.Byte[] GetData()
    // Offset: 0x1F7BEB0
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
    // protected override System.String GetText()
    // Offset: 0x1F7BEB8
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.String DownloadHandler::GetText()
    ::Il2CppString* GetText();
  }; // UnityEngine.Networking.DownloadHandlerAudioClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
#pragma pack(pop)
