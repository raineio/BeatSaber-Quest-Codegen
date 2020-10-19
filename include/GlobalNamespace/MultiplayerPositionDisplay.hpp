// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerPositionDisplay
  class MultiplayerPositionDisplay : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshPro _text
    // Offset: 0x18
    TMPro::TextMeshPro* text;
    // private UnityEngine.Color _normalColor
    // Offset: 0x20
    UnityEngine::Color normalColor;
    // private UnityEngine.Color _leadingColor
    // Offset: 0x30
    UnityEngine::Color leadingColor;
    // private UnityEngine.Color _failedColor
    // Offset: 0x40
    UnityEngine::Color failedColor;
    // private System.Single _fadeInDuration
    // Offset: 0x50
    float fadeInDuration;
    // private System.Single _crossFadeDuration
    // Offset: 0x54
    float crossFadeDuration;
    // private System.Single _fadeOutDuration
    // Offset: 0x58
    float fadeOutDuration;
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Offset: 0x60
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // private readonly IConnectedPlayer _connectedPlayer
    // Offset: 0x68
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // private System.Boolean _wasFirst
    // Offset: 0x70
    bool wasFirst;
    // private System.Boolean _isFailed
    // Offset: 0x71
    bool isFailed;
    // private System.Boolean _updatingColor
    // Offset: 0x72
    bool updatingColor;
    // private UnityEngine.Color _startColor
    // Offset: 0x74
    UnityEngine::Color startColor;
    // private UnityEngine.Color _targetColor
    // Offset: 0x84
    UnityEngine::Color targetColor;
    // private System.Single _colorAnimationStartTime
    // Offset: 0x94
    float colorAnimationStartTime;
    // private System.Single _colorAnimationStartDuration
    // Offset: 0x98
    float colorAnimationStartDuration;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1FD5EF8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1FD60C8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1FD62DC
    void Update();
    // private System.Void UpdateColors()
    // Offset: 0x1FD6338
    void UpdateColors();
    // private System.Void UpdatePosition()
    // Offset: 0x1FD63D8
    void UpdatePosition();
    // private System.Void HandlePlayerFailed()
    // Offset: 0x1FD6550
    void HandlePlayerFailed();
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer obj)
    // Offset: 0x1FD6640
    void HandleFirstPlayerDidChange(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* obj);
    // private System.Void ChangeColor(UnityEngine.Color toColor, System.Single duration)
    // Offset: 0x1FD6254
    void ChangeColor(UnityEngine::Color toColor, float duration);
    // public System.Void .ctor()
    // Offset: 0x1FD66F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerPositionDisplay* New_ctor();
  }; // MultiplayerPositionDisplay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPositionDisplay*, "", "MultiplayerPositionDisplay");
#pragma pack(pop)
