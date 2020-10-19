// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ToggleGroup
#include "UnityEngine/UI/ToggleGroup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ToggleGroup/<>c
  class ToggleGroup::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UI.ToggleGroup/<>c <>9
    static UnityEngine::UI::ToggleGroup::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.ToggleGroup/<>c <>9
    static void _set_$$9(UnityEngine::UI::ToggleGroup::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static System::Predicate_1<UnityEngine::UI::Toggle*>* _get_$$9__12_0();
    // Set static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static void _set_$$9__12_0(System::Predicate_1<UnityEngine::UI::Toggle*>* value);
    // Get static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static System::Func_2<UnityEngine::UI::Toggle*, bool>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static void _set_$$9__13_0(System::Func_2<UnityEngine::UI::Toggle*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1F31E40
    static void _cctor();
    // System.Boolean <AnyTogglesOn>b__12_0(UnityEngine.UI.Toggle x)
    // Offset: 0x1F31EB0
    bool $AnyTogglesOn$b__12_0(UnityEngine::UI::Toggle* x);
    // System.Boolean <ActiveToggles>b__13_0(UnityEngine.UI.Toggle x)
    // Offset: 0x1F31EC8
    bool $ActiveToggles$b__13_0(UnityEngine::UI::Toggle* x);
    // public System.Void .ctor()
    // Offset: 0x1F31EA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ToggleGroup::$$c* New_ctor();
  }; // UnityEngine.UI.ToggleGroup/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup::$$c*, "UnityEngine.UI", "ToggleGroup/<>c");
#pragma pack(pop)
