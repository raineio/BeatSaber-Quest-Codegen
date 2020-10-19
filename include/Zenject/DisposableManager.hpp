// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposableManager
  class DisposableManager : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: Zenject::DisposableManager::DisposableInfo
    struct DisposableInfo;
    // Nested type: Zenject::DisposableManager::LateDisposableInfo
    class LateDisposableInfo;
    // Nested type: Zenject::DisposableManager::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::DisposableManager::$$c__DisplayClass4_1
    class $$c__DisplayClass4_1;
    // Nested type: Zenject::DisposableManager::$$c
    class $$c;
    // Nested type: Zenject::DisposableManager::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Autogenerated type: Zenject.DisposableManager/DisposableInfo
    struct DisposableInfo : public System::ValueType {
      public:
      // public System.IDisposable Disposable
      // Offset: 0x0
      System::IDisposable* Disposable;
      // public System.Int32 Priority
      // Offset: 0x8
      int Priority;
      // Creating value type constructor for type: DisposableInfo
      constexpr DisposableInfo(System::IDisposable* Disposable_ = {}, int Priority_ = {}) noexcept : Disposable{Disposable_}, Priority{Priority_} {}
      // public System.Void .ctor(System.IDisposable disposable, System.Int32 priority)
      // Offset: 0xC6A760
      // ABORTED: conflicts with another method.  DisposableInfo(System::IDisposable* disposable, int priority);
    }; // Zenject.DisposableManager/DisposableInfo
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/DisposableInfo> _disposables
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>* disposables;
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/LateDisposableInfo> _lateDisposables
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::DisposableManager::LateDisposableInfo*>* lateDisposables;
    // private System.Boolean _disposed
    // Offset: 0x20
    bool disposed;
    // private System.Boolean _lateDisposed
    // Offset: 0x21
    bool lateDisposed;
    // public System.Void .ctor(System.Collections.Generic.List`1<System.IDisposable> disposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities, System.Collections.Generic.List`1<Zenject.ILateDisposable> lateDisposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> latePriorities)
    // Offset: 0x121E474
    static DisposableManager* New_ctor(System::Collections::Generic::List_1<System::IDisposable*>* disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable*>* lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities);
    // public System.Void Add(System.IDisposable disposable)
    // Offset: 0x121EB30
    void Add(System::IDisposable* disposable);
    // public System.Void Add(System.IDisposable disposable, System.Int32 priority)
    // Offset: 0x121EB38
    void Add(System::IDisposable* disposable, int priority);
    // public System.Void AddLate(Zenject.ILateDisposable disposable)
    // Offset: 0x121EBC8
    void AddLate(Zenject::ILateDisposable* disposable);
    // public System.Void AddLate(Zenject.ILateDisposable disposable, System.Int32 priority)
    // Offset: 0x121EBD0
    void AddLate(Zenject::ILateDisposable* disposable, int priority);
    // public System.Void Remove(System.IDisposable disposable)
    // Offset: 0x121EC70
    void Remove(System::IDisposable* disposable);
    // public System.Void LateDispose()
    // Offset: 0x121ED78
    void LateDispose();
    // public System.Void Dispose()
    // Offset: 0x121F160
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Zenject.DisposableManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager*, "Zenject", "DisposableManager");
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
#pragma pack(pop)
