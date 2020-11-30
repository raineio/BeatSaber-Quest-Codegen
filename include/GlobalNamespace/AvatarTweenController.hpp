// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarTweenController
  class AvatarTweenController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0
    class $$c__DisplayClass52_0;
    // Nested type: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53
    class $AppearAnimation$d__53;
    // Nested type: GlobalNamespace::AvatarTweenController::$DisappearAnimation$d__58
    class $DisappearAnimation$d__58;
    // private UnityEngine.Transform _avatarTransform
    // Offset: 0x18
    UnityEngine::Transform* avatarTransform;
    // private UnityEngine.Transform _headParent
    // Offset: 0x20
    UnityEngine::Transform* headParent;
    // private UnityEngine.Transform _leftHandTransform
    // Offset: 0x28
    UnityEngine::Transform* leftHandTransform;
    // private UnityEngine.Transform _rightHandTransform
    // Offset: 0x30
    UnityEngine::Transform* rightHandTransform;
    // private UnityEngine.Transform _bodyTransform
    // Offset: 0x38
    UnityEngine::Transform* bodyTransform;
    // private UnityEngine.Transform _headInnerTransform
    // Offset: 0x40
    UnityEngine::Transform* headInnerTransform;
    // private UnityEngine.Transform _leftHandInnerTransform
    // Offset: 0x48
    UnityEngine::Transform* leftHandInnerTransform;
    // private UnityEngine.Transform _rightHandInnerTransform
    // Offset: 0x50
    UnityEngine::Transform* rightHandInnerTransform;
    // private UnityEngine.Transform _bodyInnerTransform
    // Offset: 0x58
    UnityEngine::Transform* bodyInnerTransform;
    // private System.Single _popDuration
    // Offset: 0x60
    float popDuration;
    // private Tweening.EaseType _popEaseType
    // Offset: 0x64
    Tweening::EaseType popEaseType;
    // private System.Single _headPopAmount
    // Offset: 0x68
    float headPopAmount;
    // private System.Single _handsPopAmount
    // Offset: 0x6C
    float handsPopAmount;
    // private System.Single _clothesPopAmount
    // Offset: 0x70
    float clothesPopAmount;
    // private System.Single _allPopAmount
    // Offset: 0x74
    float allPopAmount;
    // private System.Single _appearDuration
    // Offset: 0x78
    float appearDuration;
    // private System.Single _appearSpacing
    // Offset: 0x7C
    float appearSpacing;
    // private System.Single _appearHeight
    // Offset: 0x80
    float appearHeight;
    // private UnityEngine.Vector3 _squashFactor
    // Offset: 0x84
    UnityEngine::Vector3 squashFactor;
    // private System.Single _disappearDuration
    // Offset: 0x90
    float disappearDuration;
    // private System.Single _disappearHeight
    // Offset: 0x94
    float disappearHeight;
    // private UnityEngine.Vector3 _disappearSquash
    // Offset: 0x98
    UnityEngine::Vector3 disappearSquash;
    // private Tweening.EaseType _disappearScaleEase
    // Offset: 0xA4
    Tweening::EaseType disappearScaleEase;
    // private Tweening.EaseType _disappearPositionEase
    // Offset: 0xA8
    Tweening::EaseType disappearPositionEase;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0xB0
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.Tween`1<System.Single> _popHeadTween
    // Offset: 0xB8
    Tweening::Tween_1<float>* popHeadTween;
    // private Tweening.Tween`1<System.Single> _popLeftHandTween
    // Offset: 0xC0
    Tweening::Tween_1<float>* popLeftHandTween;
    // private Tweening.Tween`1<System.Single> _popRightHandTween
    // Offset: 0xC8
    Tweening::Tween_1<float>* popRightHandTween;
    // private Tweening.Tween`1<System.Single> _popClothesTween
    // Offset: 0xD0
    Tweening::Tween_1<float>* popClothesTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearHeadPositionTween
    // Offset: 0xD8
    Tweening::Tween_1<UnityEngine::Vector3>* appearHeadPositionTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearHeadScaleTween
    // Offset: 0xE0
    Tweening::Tween_1<UnityEngine::Vector3>* appearHeadScaleTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearBodyPositionTween
    // Offset: 0xE8
    Tweening::Tween_1<UnityEngine::Vector3>* appearBodyPositionTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearBodyScaleTween
    // Offset: 0xF0
    Tweening::Tween_1<UnityEngine::Vector3>* appearBodyScaleTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearRightHandPositionTween
    // Offset: 0xF8
    Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandPositionTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearRightHandScaleTween
    // Offset: 0x100
    Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandScaleTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearLeftHandPositionTween
    // Offset: 0x108
    Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandPositionTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearLeftHandScaleTween
    // Offset: 0x110
    Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandScaleTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _disappearScaleTween
    // Offset: 0x118
    Tweening::Tween_1<UnityEngine::Vector3>* disappearScaleTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _disappearPositionTween
    // Offset: 0x120
    Tweening::Tween_1<UnityEngine::Vector3>* disappearPositionTween;
    // private UnityEngine.Vector3 _avatarLocalPosition
    // Offset: 0x128
    UnityEngine::Vector3 avatarLocalPosition;
    // private UnityEngine.Vector3 _avatarLocalScale
    // Offset: 0x134
    UnityEngine::Vector3 avatarLocalScale;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1A46E24
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1A46E7C
    void OnDisable();
    // public System.Void PresentAvatar()
    // Offset: 0x1A46F24
    void PresentAvatar();
    // public System.Void HideAvatar()
    // Offset: 0x1A46FD4
    void HideAvatar();
    // public System.Void PopAll()
    // Offset: 0x1A47084
    void PopAll();
    // public System.Void PopHead()
    // Offset: 0x1A47294
    void PopHead();
    // public System.Void PopHands()
    // Offset: 0x1A4729C
    void PopHands();
    // public System.Void PopClothes()
    // Offset: 0x1A472A4
    void PopClothes();
    // private System.Void PopHead(System.Single popAmount)
    // Offset: 0x1A470BC
    void PopHead(float popAmount);
    // private System.Void PopHands(System.Single popAmount)
    // Offset: 0x1A471BC
    void PopHands(float popAmount);
    // private System.Void PopClothes(System.Single popAmount)
    // Offset: 0x1A4713C
    void PopClothes(float popAmount);
    // private Tweening.Tween`1<System.Single> CreatePopTween(UnityEngine.Transform partTransform, System.Single popAmount)
    // Offset: 0x1A472AC
    Tweening::Tween_1<float>* CreatePopTween(UnityEngine::Transform* partTransform, float popAmount);
    // private System.Collections.IEnumerator AppearAnimation()
    // Offset: 0x1A46F58
    System::Collections::IEnumerator* AppearAnimation();
    // private System.Void AppearBody()
    // Offset: 0x1A473FC
    void AppearBody();
    // private System.Void AppearHead()
    // Offset: 0x1A47708
    void AppearHead();
    // private System.Void AppearLeftHand()
    // Offset: 0x1A47A14
    void AppearLeftHand();
    // private System.Void AppearRightHand()
    // Offset: 0x1A47D28
    void AppearRightHand();
    // private System.Collections.IEnumerator DisappearAnimation()
    // Offset: 0x1A47008
    System::Collections::IEnumerator* DisappearAnimation();
    // private System.Void StopAll()
    // Offset: 0x1A46E80
    void StopAll();
    // private System.Void <AppearBody>b__54_0(UnityEngine.Vector3 val)
    // Offset: 0x1A4814C
    void $AppearBody$b__54_0(UnityEngine::Vector3 val);
    // private System.Void <AppearBody>b__54_1(UnityEngine.Vector3 val)
    // Offset: 0x1A48168
    void $AppearBody$b__54_1(UnityEngine::Vector3 val);
    // private System.Void <AppearHead>b__55_0(UnityEngine.Vector3 val)
    // Offset: 0x1A48184
    void $AppearHead$b__55_0(UnityEngine::Vector3 val);
    // private System.Void <AppearHead>b__55_1(UnityEngine.Vector3 val)
    // Offset: 0x1A481A0
    void $AppearHead$b__55_1(UnityEngine::Vector3 val);
    // private System.Void <AppearLeftHand>b__56_0(UnityEngine.Vector3 val)
    // Offset: 0x1A481BC
    void $AppearLeftHand$b__56_0(UnityEngine::Vector3 val);
    // private System.Void <AppearLeftHand>b__56_1(UnityEngine.Vector3 val)
    // Offset: 0x1A481D8
    void $AppearLeftHand$b__56_1(UnityEngine::Vector3 val);
    // private System.Void <AppearRightHand>b__57_0(UnityEngine.Vector3 val)
    // Offset: 0x1A481F4
    void $AppearRightHand$b__57_0(UnityEngine::Vector3 val);
    // private System.Void <AppearRightHand>b__57_1(UnityEngine.Vector3 val)
    // Offset: 0x1A48210
    void $AppearRightHand$b__57_1(UnityEngine::Vector3 val);
    // private System.Void <DisappearAnimation>b__58_0(UnityEngine.Vector3 val)
    // Offset: 0x1A4822C
    void $DisappearAnimation$b__58_0(UnityEngine::Vector3 val);
    // private System.Void <DisappearAnimation>b__58_1(UnityEngine.Vector3 val)
    // Offset: 0x1A48248
    void $DisappearAnimation$b__58_1(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0x1A48068
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AvatarTweenController* New_ctor();
  }; // AvatarTweenController
  check_size<sizeof(AvatarTweenController), 308 + sizeof(UnityEngine::Vector3) + 8 - (308 + sizeof(UnityEngine::Vector3)) % 8> __GlobalNamespace_AvatarTweenControllerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarTweenController*, "", "AvatarTweenController");
#pragma pack(pop)