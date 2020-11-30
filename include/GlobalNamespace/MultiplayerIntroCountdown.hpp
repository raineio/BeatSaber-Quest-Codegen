// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroCountdownTextController
  class MultiplayerIntroCountdownTextController;
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerIntroCountdown
  class MultiplayerIntroCountdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerIntroCountdown::$CountdownRoutine$d__23
    class $CountdownRoutine$d__23;
    // Nested type: GlobalNamespace::MultiplayerIntroCountdown::$PlayDelayed$d__24
    class $PlayDelayed$d__24;
    // Nested type: GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    // Nested type: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25
    class $PhaseRoutine$d__25;
    // private System.Single _textAppearDuration
    // Offset: 0x18
    float textAppearDuration;
    // private System.Single _textDisappearDuration
    // Offset: 0x1C
    float textDisappearDuration;
    // private System.Single _goDisappearDuration
    // Offset: 0x20
    float goDisappearDuration;
    // private System.Single _partsDistance
    // Offset: 0x24
    float partsDistance;
    // private UnityEngine.Vector3 _startLocalPosition
    // Offset: 0x28
    UnityEngine::Vector3 startLocalPosition;
    // private UnityEngine.Vector3 _targetLocalPosition
    // Offset: 0x34
    UnityEngine::Vector3 targetLocalPosition;
    // private UnityEngine.AudioClip _readyClip
    // Offset: 0x40
    UnityEngine::AudioClip* readyClip;
    // private UnityEngine.AudioClip _setClip
    // Offset: 0x48
    UnityEngine::AudioClip* setClip;
    // private UnityEngine.AudioClip _goClip
    // Offset: 0x50
    UnityEngine::AudioClip* goClip;
    // private UnityEngine.AudioClip _buildUpClip
    // Offset: 0x58
    UnityEngine::AudioClip* buildUpClip;
    // private MultiplayerIntroCountdownTextController _textController0
    // Offset: 0x60
    GlobalNamespace::MultiplayerIntroCountdownTextController* textController0;
    // private MultiplayerIntroCountdownTextController _textController1
    // Offset: 0x68
    GlobalNamespace::MultiplayerIntroCountdownTextController* textController1;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x70
    UnityEngine::AudioSource* audioSource;
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Offset: 0x78
    GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x80
    Tweening::TweeningManager* tweeningManager;
    // private MultiplayerIntroCountdownTextController _currentTextController
    // Offset: 0x88
    GlobalNamespace::MultiplayerIntroCountdownTextController* currentTextController;
    // private System.Single _fontSize
    // Offset: 0x90
    float fontSize;
    // private System.Single _alpha
    // Offset: 0x94
    float alpha;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_textAppearDuration()
    // Offset: 0xFB3D14
    float get_textAppearDuration();
    // protected System.Void Awake()
    // Offset: 0xFB3D1C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xFB3E44
    void OnDestroy();
    // public System.Void StartCountdown(System.Single seconds, System.Single delay, System.Single durationMultiplier)
    // Offset: 0xFB3C28
    void StartCountdown(float seconds, float delay, float durationMultiplier);
    // private System.Collections.IEnumerator CountdownRoutine(System.Single seconds, System.Single delay, System.Single durationMultiplier)
    // Offset: 0xFB3EDC
    System::Collections::IEnumerator* CountdownRoutine(float seconds, float delay, float durationMultiplier);
    // private System.Collections.IEnumerator PlayDelayed(UnityEngine.AudioClip audioClip, System.Single delay)
    // Offset: 0xFB3FA8
    System::Collections::IEnumerator* PlayDelayed(UnityEngine::AudioClip* audioClip, float delay);
    // private System.Collections.IEnumerator PhaseRoutine(System.String text, System.Single appearDuration, System.Single disappearDuration)
    // Offset: 0xFB407C
    System::Collections::IEnumerator* PhaseRoutine(::Il2CppString* text, float appearDuration, float disappearDuration);
    // public System.Void .ctor()
    // Offset: 0xFB4154
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerIntroCountdown* New_ctor();
  }; // MultiplayerIntroCountdown
  check_size<sizeof(MultiplayerIntroCountdown), 148 + sizeof(float) + 8 - (148 + sizeof(float)) % 8> __GlobalNamespace_MultiplayerIntroCountdownSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdown*, "", "MultiplayerIntroCountdown");
#pragma pack(pop)