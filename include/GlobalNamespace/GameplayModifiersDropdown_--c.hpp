// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersDropdown
#include "GlobalNamespace/GameplayModifiersDropdown.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiersDropdown/<>c
  class GameplayModifiersDropdown::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static GlobalNamespace::GameplayModifiersDropdown::$$c* _get_$$9();
    // Set static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static void _set_$$9(GlobalNamespace::GameplayModifiersDropdown::$$c* value);
    // Get static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static System::Func_2<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x20080C4
    static void _cctor();
    // System.String <Start>b__8_0(System.Tuple`2<GameplayModifierMask,System.String> x)
    // Offset: 0x2008134
    ::Il2CppString* $Start$b__8_0(System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>* x);
    // public System.Void .ctor()
    // Offset: 0x200812C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameplayModifiersDropdown::$$c* New_ctor();
  }; // GameplayModifiersDropdown/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersDropdown::$$c*, "", "GameplayModifiersDropdown/<>c");
#pragma pack(pop)
