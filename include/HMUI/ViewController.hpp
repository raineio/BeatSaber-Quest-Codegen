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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ContainerViewController
  class ContainerViewController;
  // Forward declaring type: Screen
  class Screen;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ViewController
  class ViewController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ViewController::DidActivateDelegate
    class DidActivateDelegate;
    // Nested type: HMUI::ViewController::DidDeactivateDelegate
    class DidDeactivateDelegate;
    // Nested type: HMUI::ViewController::AnimationType
    struct AnimationType;
    // Nested type: HMUI::ViewController::AnimationDirection
    struct AnimationDirection;
    // Nested type: HMUI::ViewController::$PresentViewControllerCoroutine$d__58
    class $PresentViewControllerCoroutine$d__58;
    // Nested type: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60
    class $ReplaceViewControllerCoroutine$d__60;
    // Nested type: HMUI::ViewController::$DismissViewControllerCoroutine$d__62
    class $DismissViewControllerCoroutine$d__62;
    // private HMUI.ViewController/DidActivateDelegate didActivateEvent
    // Offset: 0x18
    HMUI::ViewController::DidActivateDelegate* didActivateEvent;
    // private HMUI.ViewController/DidDeactivateDelegate didDeactivateEvent
    // Offset: 0x20
    HMUI::ViewController::DidDeactivateDelegate* didDeactivateEvent;
    // private HMUI.ButtonBinder <buttonBinder>k__BackingField
    // Offset: 0x28
    HMUI::ButtonBinder* buttonBinder;
    // private HMUI.ContainerViewController _containerViewController
    // Offset: 0x30
    HMUI::ContainerViewController* containerViewController;
    // private HMUI.ViewController _parentViewController
    // Offset: 0x38
    HMUI::ViewController* parentViewController;
    // private HMUI.ViewController _childViewController
    // Offset: 0x40
    HMUI::ViewController* childViewController;
    // private HMUI.Screen _screen
    // Offset: 0x48
    HMUI::Screen* screen;
    // private UnityEngine.RectTransform _rectTransform
    // Offset: 0x50
    UnityEngine::RectTransform* rectTransform;
    // private UnityEngine.CanvasGroup _canvasGroup
    // Offset: 0x58
    UnityEngine::CanvasGroup* canvasGroup;
    // private System.Boolean _wasActivatedBefore
    // Offset: 0x60
    bool wasActivatedBefore;
    // private System.Boolean _isActivated
    // Offset: 0x61
    bool isActivated;
    // private System.Boolean _isInTransition
    // Offset: 0x62
    bool isInTransition;
    // private UnityEngine.EventSystems.BaseRaycaster _graphicRaycaster
    // Offset: 0x68
    UnityEngine::EventSystems::BaseRaycaster* graphicRaycaster;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 0.4;
    // Get static field: static public System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static public System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // static field const value: static private System.Single kTransitionMoveOffset
    static constexpr const float kTransitionMoveOffset = 2;
    // Get static field: static private System.Single kTransitionMoveOffset
    static float _get_kTransitionMoveOffset();
    // Set static field: static private System.Single kTransitionMoveOffset
    static void _set_kTransitionMoveOffset(float value);
    // public HMUI.ContainerViewController get_containerViewController()
    // Offset: 0x1EDF7FC
    HMUI::ContainerViewController* get_containerViewController();
    // public HMUI.Screen get_screen()
    // Offset: 0x1EDF804
    HMUI::Screen* get_screen();
    // public HMUI.ViewController get_parentViewController()
    // Offset: 0x1EDF80C
    HMUI::ViewController* get_parentViewController();
    // public HMUI.ViewController get_childViewController()
    // Offset: 0x1EDF814
    HMUI::ViewController* get_childViewController();
    // public System.Boolean get_isInViewControllerHierarchy()
    // Offset: 0x1EDF81C
    bool get_isInViewControllerHierarchy();
    // public System.Boolean get_isActivated()
    // Offset: 0x1EDF88C
    bool get_isActivated();
    // public System.Boolean get_wasActivatedBefore()
    // Offset: 0x1EDF894
    bool get_wasActivatedBefore();
    // public System.Boolean get_isInTransition()
    // Offset: 0x1EDF89C
    bool get_isInTransition();
    // public System.Void set_isInTransition(System.Boolean value)
    // Offset: 0x1EDF8A4
    void set_isInTransition(bool value);
    // public System.Boolean get_enableUserInteractions()
    // Offset: 0x1EDF8B0
    bool get_enableUserInteractions();
    // public System.Void set_enableUserInteractions(System.Boolean value)
    // Offset: 0x1EDF97C
    void set_enableUserInteractions(bool value);
    // public System.Void add_didActivateEvent(HMUI.ViewController/DidActivateDelegate value)
    // Offset: 0x1EDF9AC
    void add_didActivateEvent(HMUI::ViewController::DidActivateDelegate* value);
    // public System.Void remove_didActivateEvent(HMUI.ViewController/DidActivateDelegate value)
    // Offset: 0x1EDFA50
    void remove_didActivateEvent(HMUI::ViewController::DidActivateDelegate* value);
    // public System.Void add_didDeactivateEvent(HMUI.ViewController/DidDeactivateDelegate value)
    // Offset: 0x1EDFAF4
    void add_didDeactivateEvent(HMUI::ViewController::DidDeactivateDelegate* value);
    // public System.Void remove_didDeactivateEvent(HMUI.ViewController/DidDeactivateDelegate value)
    // Offset: 0x1EDFB98
    void remove_didDeactivateEvent(HMUI::ViewController::DidDeactivateDelegate* value);
    // protected HMUI.ButtonBinder get_buttonBinder()
    // Offset: 0x1EDFC3C
    HMUI::ButtonBinder* get_buttonBinder();
    // private System.Void set_buttonBinder(HMUI.ButtonBinder value)
    // Offset: 0x1EDFC44
    void set_buttonBinder(HMUI::ButtonBinder* value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1EDFC4C
    UnityEngine::RectTransform* get_rectTransform();
    // public UnityEngine.CanvasGroup get_canvasGroup()
    // Offset: 0x1EDFCF8
    UnityEngine::CanvasGroup* get_canvasGroup();
    // private UnityEngine.EventSystems.BaseRaycaster get_graphicRaycaster()
    // Offset: 0x1EDF8D0
    UnityEngine::EventSystems::BaseRaycaster* get_graphicRaycaster();
    // protected System.Void OnDestroy()
    // Offset: 0x1EDFDA4
    void OnDestroy();
    // protected System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1EDFDFC
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1EDFE00
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void __Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    // Offset: 0x1EDFE04
    void __Init(HMUI::Screen* screen, HMUI::ViewController* parentViewController, HMUI::ContainerViewController* containerViewController);
    // public System.Void __ResetViewController()
    // Offset: 0x1EDFF58
    void __ResetViewController();
    // public System.Void __PresentViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1EE0068
    void __PresentViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // private System.Collections.IEnumerator PresentViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1EE0098
    System::Collections::IEnumerator* PresentViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // public System.Void __ReplaceViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x1EE018C
    void __ReplaceViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // private System.Collections.IEnumerator ReplaceViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x1EE01B8
    System::Collections::IEnumerator* ReplaceViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // public System.Void __DismissViewController(System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1EE02A4
    void __DismissViewController(System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // private System.Collections.IEnumerator DismissViewControllerCoroutine(System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1EE02D4
    System::Collections::IEnumerator* DismissViewControllerCoroutine(System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // public System.Void __Activate(System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1EE03B4
    void __Activate(bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void __Deactivate(System.Boolean removedFromHierarchy, System.Boolean deactivateGameObject, System.Boolean screenSystemDisabling)
    // Offset: 0x1EE0738
    void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);
    // public System.Void DeactivateGameObject()
    // Offset: 0x1EE0A84
    void DeactivateGameObject();
    // public System.Boolean IsViewControllerInHierarchy(HMUI.ViewController viewController)
    // Offset: 0x1EE0AE0
    bool IsViewControllerInHierarchy(HMUI::ViewController* viewController);
    // static public System.Void Log(System.String message)
    // Offset: 0x1EE0C68
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x1EE0CD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ViewController* New_ctor();
  }; // HMUI.ViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController*, "HMUI", "ViewController");
#pragma pack(pop)
