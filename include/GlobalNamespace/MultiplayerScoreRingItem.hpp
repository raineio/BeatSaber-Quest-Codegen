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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerScoreRingItem
  class MultiplayerScoreRingItem : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerScoreRingItem::Pool
    class Pool;
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* nameText;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.Tween`1<UnityEngine.Color> _nameColorTween
    // Offset: 0x30
    Tweening::Tween_1<UnityEngine::Color>* nameColorTween;
    // private Tweening.Tween`1<UnityEngine.Color> _scoreColorTween
    // Offset: 0x38
    Tweening::Tween_1<UnityEngine::Color>* scoreColorTween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF7FD20
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF7FEFC
    void OnDestroy();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xF7FF94
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void AnimateColors(UnityEngine.Color nameColor, UnityEngine.Color scoreColor, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xF80010
    void AnimateColors(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType);
    // public System.Void SetName(System.String text)
    // Offset: 0xF80140
    void SetName(::Il2CppString* text);
    // public System.Void SetScore(System.String text)
    // Offset: 0xF8015C
    void SetScore(::Il2CppString* text);
    // private System.Void <Awake>b__6_0(UnityEngine.Color val)
    // Offset: 0xF80180
    void $Awake$b__6_0(UnityEngine::Color val);
    // private System.Void <Awake>b__6_1(UnityEngine.Color val)
    // Offset: 0xF801A4
    void $Awake$b__6_1(UnityEngine::Color val);
    // public System.Void .ctor()
    // Offset: 0xF80178
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerScoreRingItem* New_ctor();
  }; // MultiplayerScoreRingItem
  check_size<sizeof(MultiplayerScoreRingItem), 56 + sizeof(void*) + 8 - (56 + sizeof(void*)) % 8> __GlobalNamespace_MultiplayerScoreRingItemSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
#pragma pack(pop)