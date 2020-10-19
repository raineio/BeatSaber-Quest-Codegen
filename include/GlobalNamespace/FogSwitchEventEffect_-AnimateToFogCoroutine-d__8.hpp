// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FogSwitchEventEffect
#include "GlobalNamespace/FogSwitchEventEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FogSwitchEventEffect/<AnimateToFogCoroutine>d__8
  class FogSwitchEventEffect::$AnimateToFogCoroutine$d__8 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public FogSwitchEventEffect <>4__this
    // Offset: 0x20
    GlobalNamespace::FogSwitchEventEffect* $$4__this;
    // public System.Single value
    // Offset: 0x28
    float value;
    // public System.Single duration
    // Offset: 0x2C
    float duration;
    // private System.Single <startTransition>5__2
    // Offset: 0x30
    float $startTransition$5__2;
    // private System.Single <endTransition>5__3
    // Offset: 0x34
    float $endTransition$5__3;
    // private System.Single <elapsedTime>5__4
    // Offset: 0x38
    float $elapsedTime$5__4;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2026778
    static FogSwitchEventEffect::$AnimateToFogCoroutine$d__8* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x20267AC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x20267B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x20268F4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x20268FC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x202695C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // FogSwitchEventEffect/<AnimateToFogCoroutine>d__8
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FogSwitchEventEffect::$AnimateToFogCoroutine$d__8*, "", "FogSwitchEventEffect/<AnimateToFogCoroutine>d__8");
#pragma pack(pop)
