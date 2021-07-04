// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager
  class DisposableManager : public ::Il2CppObject/*, public System::IDisposable*/ {
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
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Zenject.DisposableManager/DisposableInfo
    struct DisposableInfo/*, public System::ValueType*/ {
      public:
      // public System.IDisposable Disposable
      // Size: 0x8
      // Offset: 0x0
      System::IDisposable* Disposable;
      // Field size check
      static_assert(sizeof(System::IDisposable*) == 0x8);
      // public System.Int32 Priority
      // Size: 0x4
      // Offset: 0x8
      int Priority;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: DisposableInfo
      constexpr DisposableInfo(System::IDisposable* Disposable_ = {}, int Priority_ = {}) noexcept : Disposable{Disposable_}, Priority{Priority_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.IDisposable disposable, System.Int32 priority)
      // Offset: 0xEF937C
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  DisposableInfo(System::IDisposable* disposable, int priority)
    }; // Zenject.DisposableManager/DisposableInfo
    #pragma pack(pop)
    static check_size<sizeof(DisposableManager::DisposableInfo), 8 + sizeof(int)> __Zenject_DisposableManager_DisposableInfoSizeCheck;
    static_assert(sizeof(DisposableManager::DisposableInfo) == 0xC);
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/DisposableInfo> _disposables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>* disposables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/LateDisposableInfo> _lateDisposables
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::DisposableManager::LateDisposableInfo*>* lateDisposables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::DisposableManager::LateDisposableInfo*>*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x20
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _lateDisposed
    // Size: 0x1
    // Offset: 0x21
    bool lateDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DisposableManager
    DisposableManager(System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>* disposables_ = {}, System::Collections::Generic::List_1<Zenject::DisposableManager::LateDisposableInfo*>* lateDisposables_ = {}, bool disposed_ = {}, bool lateDisposed_ = {}) noexcept : disposables{disposables_}, lateDisposables{lateDisposables_}, disposed{disposed_}, lateDisposed{lateDisposed_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.IDisposable> disposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities, System.Collections.Generic.List`1<Zenject.ILateDisposable> lateDisposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> latePriorities)
    // Offset: 0x16333BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager* New_ctor(System::Collections::Generic::List_1<System::IDisposable*>* disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable*>* lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager*, creationType>(disposables, priorities, lateDisposables, latePriorities)));
    }
    // public System.Void Add(System.IDisposable disposable)
    // Offset: 0x16339B4
    void Add(System::IDisposable* disposable);
    // public System.Void Add(System.IDisposable disposable, System.Int32 priority)
    // Offset: 0x16339BC
    void Add(System::IDisposable* disposable, int priority);
    // public System.Void AddLate(Zenject.ILateDisposable disposable)
    // Offset: 0x1633A2C
    void AddLate(Zenject::ILateDisposable* disposable);
    // public System.Void AddLate(Zenject.ILateDisposable disposable, System.Int32 priority)
    // Offset: 0x1633A34
    void AddLate(Zenject::ILateDisposable* disposable, int priority);
    // public System.Void Remove(System.IDisposable disposable)
    // Offset: 0x1633AC8
    void Remove(System::IDisposable* disposable);
    // public System.Void LateDispose()
    // Offset: 0x1633BC4
    void LateDispose();
    // public System.Void Dispose()
    // Offset: 0x1633F98
    void Dispose();
  }; // Zenject.DisposableManager
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager), 33 + sizeof(bool)> __Zenject_DisposableManagerSizeCheck;
  static_assert(sizeof(DisposableManager) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager*, "Zenject", "DisposableManager");
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
// Writing MetadataGetter for method: Zenject::DisposableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DisposableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*)>(&Zenject::DisposableManager::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IDisposable*>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*, int)>(&Zenject::DisposableManager::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IDisposable*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable*)>(&Zenject::DisposableManager::AddLate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::ILateDisposable*>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable*, int)>(&Zenject::DisposableManager::AddLate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::ILateDisposable*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*)>(&Zenject::DisposableManager::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IDisposable*>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDispose
// Il2CppName: LateDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::LateDispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "LateDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
