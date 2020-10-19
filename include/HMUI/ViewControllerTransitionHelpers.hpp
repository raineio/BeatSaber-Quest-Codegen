// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers
  class ViewControllerTransitionHelpers : public ::Il2CppObject {
    public:
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3
    class $DoPresentTransition$d__3;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4
    class $DoDismissTransition$d__4;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoHorizontalTransition$d__5
    class $DoHorizontalTransition$d__5;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6
    class $DoVerticalTransition$d__6;
    // Nested type: HMUI::ViewControllerTransitionHelpers::$AnimationCoroutine$d__8
    class $AnimationCoroutine$d__8;
    // static field const value: static private System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 0.4;
    // Get static field: static private System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static private System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // static field const value: static private System.Single kHorizontalTransitionMoveOffset
    static constexpr const float kHorizontalTransitionMoveOffset = 2;
    // Get static field: static private System.Single kHorizontalTransitionMoveOffset
    static float _get_kHorizontalTransitionMoveOffset();
    // Set static field: static private System.Single kHorizontalTransitionMoveOffset
    static void _set_kHorizontalTransitionMoveOffset(float value);
    // static field const value: static private System.Single kVerticalTransitionMoveOffset
    static constexpr const float kVerticalTransitionMoveOffset = 0.5;
    // Get static field: static private System.Single kVerticalTransitionMoveOffset
    static float _get_kVerticalTransitionMoveOffset();
    // Set static field: static private System.Single kVerticalTransitionMoveOffset
    static void _set_kVerticalTransitionMoveOffset(float value);
    // static public System.Collections.IEnumerator DoPresentTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x1EE1314
    static System::Collections::IEnumerator* DoPresentTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static public System.Collections.IEnumerator DoDismissTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x1EE0EC0
    static System::Collections::IEnumerator* DoDismissTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoHorizontalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x1EE192C
    static System::Collections::IEnumerator* DoHorizontalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoVerticalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x1EE1A00
    static System::Collections::IEnumerator* DoVerticalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static public System.Void ImmediateTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController)
    // Offset: 0x1EE0F70
    static void ImmediateTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController);
    // static private System.Collections.IEnumerator AnimationCoroutine(System.Action`1<System.Single> transitionAnimation)
    // Offset: 0x1EE1AD4
    static System::Collections::IEnumerator* AnimationCoroutine(System::Action_1<float>* transitionAnimation);
    // public System.Void .ctor()
    // Offset: 0x1EE1B7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ViewControllerTransitionHelpers* New_ctor();
  }; // HMUI.ViewControllerTransitionHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
#pragma pack(pop)
