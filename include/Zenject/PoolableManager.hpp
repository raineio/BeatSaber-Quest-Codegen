// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolableManager
  class PoolableManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PoolableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager*, "Zenject", "PoolableManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolableManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PoolableManager : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::PoolableManager::PoolableInfo
    struct PoolableInfo;
    // Nested type: ::Zenject::PoolableManager::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::Zenject::PoolableManager::$$c
    class $$c;
    // Nested type: ::Zenject::PoolableManager::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    public:
    // private readonly System.Collections.Generic.List`1<Zenject.IPoolable> _poolables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*) == 0x8);
    // private System.Boolean _isSpawned
    // Size: 0x1
    // Offset: 0x18
    bool isSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.IPoolable> _poolables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*& dyn__poolables();
    // Get instance field reference: private System.Boolean _isSpawned
    [[deprecated("Use field access instead!")]] bool& dyn__isSpawned();
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IPoolable> poolables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1CC1718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* priorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableManager*, creationType>(poolables, priorities)));
    }
    // private Zenject.PoolableManager/Zenject.PoolableInfo CreatePoolableInfo(Zenject.IPoolable poolable, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1CC1974
    ::Zenject::PoolableManager::PoolableInfo CreatePoolableInfo(::Zenject::IPoolable* poolable, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* priorities);
    // public System.Void TriggerOnSpawned()
    // Offset: 0x1CC1B48
    void TriggerOnSpawned();
    // public System.Void TriggerOnDespawned()
    // Offset: 0x1CC1C60
    void TriggerOnDespawned();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CC1D6C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CC1E84
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.PoolableManager
  #pragma pack(pop)
  static check_size<sizeof(PoolableManager), 24 + sizeof(bool)> __Zenject_PoolableManagerSizeCheck;
  static_assert(sizeof(PoolableManager) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PoolableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PoolableManager::CreatePoolableInfo
// Il2CppName: CreatePoolableInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::PoolableManager::PoolableInfo (Zenject::PoolableManager::*)(::Zenject::IPoolable*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*)>(&Zenject::PoolableManager::CreatePoolableInfo)> {
  static const MethodInfo* get() {
    static auto* poolable = &::il2cpp_utils::GetClassFromName("Zenject", "IPoolable")->byval_arg;
    static auto* priorities = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager*), "CreatePoolableInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poolable, priorities});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::TriggerOnSpawned
// Il2CppName: TriggerOnSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableManager::*)()>(&Zenject::PoolableManager::TriggerOnSpawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager*), "TriggerOnSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::TriggerOnDespawned
// Il2CppName: TriggerOnDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableManager::*)()>(&Zenject::PoolableManager::TriggerOnDespawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager*), "TriggerOnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::PoolableManager::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::PoolableManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
