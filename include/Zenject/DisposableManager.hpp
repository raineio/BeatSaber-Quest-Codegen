// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
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
  // Forward declaring type: DisposableManager
  class DisposableManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::DisposableManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager*, "Zenject", "DisposableManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Autogenerated type: Zenject.DisposableManager/Zenject.DisposableInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct DisposableInfo/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
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
      public:
      // Creating value type constructor for type: DisposableInfo
      constexpr DisposableInfo(System::IDisposable* Disposable_ = {}, int Priority_ = {}) noexcept : Disposable{Disposable_}, Priority{Priority_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public System.IDisposable Disposable
      System::IDisposable*& dyn_Disposable();
      // Get instance field reference: public System.Int32 Priority
      int& dyn_Priority();
      // public System.Void .ctor(System.IDisposable disposable, System.Int32 priority)
      // Offset: 0x1A9FD8C
      // ABORTED: conflicts with another method.  DisposableInfo(System::IDisposable* disposable, int priority);
    }; // Zenject.DisposableManager/Zenject.DisposableInfo
    #pragma pack(pop)
    static check_size<sizeof(DisposableManager::DisposableInfo), 8 + sizeof(int)> __Zenject_DisposableManager_DisposableInfoSizeCheck;
    static_assert(sizeof(DisposableManager::DisposableInfo) == 0xC);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/Zenject.DisposableInfo> _disposables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>* disposables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/Zenject.LateDisposableInfo> _lateDisposables
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
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/Zenject.DisposableInfo> _disposables
    System::Collections::Generic::List_1<Zenject::DisposableManager::DisposableInfo>*& dyn__disposables();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.DisposableManager/Zenject.LateDisposableInfo> _lateDisposables
    System::Collections::Generic::List_1<Zenject::DisposableManager::LateDisposableInfo*>*& dyn__lateDisposables();
    // Get instance field reference: private System.Boolean _disposed
    bool& dyn__disposed();
    // Get instance field reference: private System.Boolean _lateDisposed
    bool& dyn__lateDisposed();
    // public System.Void .ctor(System.Collections.Generic.List`1<System.IDisposable> disposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities, System.Collections.Generic.List`1<Zenject.ILateDisposable> lateDisposables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> latePriorities)
    // Offset: 0x1A9F7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager* New_ctor(System::Collections::Generic::List_1<System::IDisposable*>* disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable*>* lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager*, creationType>(disposables, priorities, lateDisposables, latePriorities)));
    }
    // public System.Void Add(System.IDisposable disposable)
    // Offset: 0x1A9FDDC
    void Add(System::IDisposable* disposable);
    // public System.Void Add(System.IDisposable disposable, System.Int32 priority)
    // Offset: 0x1A9FDE4
    void Add(System::IDisposable* disposable, int priority);
    // public System.Void AddLate(Zenject.ILateDisposable disposable)
    // Offset: 0x1A9FE54
    void AddLate(Zenject::ILateDisposable* disposable);
    // public System.Void AddLate(Zenject.ILateDisposable disposable, System.Int32 priority)
    // Offset: 0x1A9FE5C
    void AddLate(Zenject::ILateDisposable* disposable, int priority);
    // public System.Void Remove(System.IDisposable disposable)
    // Offset: 0x1A9FEF0
    void Remove(System::IDisposable* disposable);
    // public System.Void LateDispose()
    // Offset: 0x1A9FFEC
    void LateDispose();
    // public System.Void Dispose()
    // Offset: 0x1AA03C0
    void Dispose();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1AA0770
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1AA0924
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DisposableManager
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager), 33 + sizeof(bool)> __Zenject_DisposableManagerSizeCheck;
  static_assert(sizeof(DisposableManager) == 0x22);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DisposableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*)>(&Zenject::DisposableManager::Add)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*, int)>(&Zenject::DisposableManager::Add)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable*)>(&Zenject::DisposableManager::AddLate)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("Zenject", "ILateDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable*, int)>(&Zenject::DisposableManager::AddLate)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("Zenject", "ILateDisposable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable*)>(&Zenject::DisposableManager::Remove)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDispose
// Il2CppName: LateDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::LateDispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "LateDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DisposableManager::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::DisposableManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
