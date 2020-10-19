// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UnifiedNetworkPlayerModel/<GetOtherPlayers>d__92
  class UnifiedNetworkPlayerModel::$GetOtherPlayers$d__92 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private INetworkPlayer <>2__current
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public UnifiedNetworkPlayerModel <>4__this
    // Offset: 0x28
    GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // private System.Collections.Generic.List`1/Enumerator<UnifiedNetworkPlayerModel/UnifiedNetworkServer> <>7__wrap1
    // Offset: 0x30
    typename System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*>::Enumerator $$7__wrap1;
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> <>7__wrap2
    // Offset: 0x48
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* $$7__wrap2;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x21E4A10
    static UnifiedNetworkPlayerModel::$GetOtherPlayers$d__92* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0x21E4A9C
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x21E4AF4
    void $$m__Finally2();
    // private System.Void <>m__Finally3()
    // Offset: 0x21E4BB4
    void $$m__Finally3();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x21E4A48
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x21E4C74
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x21E51AC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x21E51B4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x21E5214
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x21E521C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x21E52D0
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnifiedNetworkPlayerModel/<GetOtherPlayers>d__92
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$GetOtherPlayers$d__92*, "", "UnifiedNetworkPlayerModel/<GetOtherPlayers>d__92");
#pragma pack(pop)
