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
  // Forward declaring type: IInitializable
  class IInitializable;
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
  // Forward declaring type: InitializableManager
  class InitializableManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InitializableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager*, "Zenject", "InitializableManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializableManager : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::InitializableManager::InitializableInfo
    class InitializableInfo;
    // Nested type: ::Zenject::InitializableManager::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::Zenject::InitializableManager::$$c
    class $$c;
    public:
    // private System.Collections.Generic.List`1<Zenject.InitializableManager/Zenject.InitializableInfo> _initializables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Zenject::InitializableManager::InitializableInfo*>* initializables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::InitializableManager::InitializableInfo*>*) == 0x8);
    // private System.Boolean _hasInitialized
    // Size: 0x1
    // Offset: 0x18
    bool hasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.InitializableManager/Zenject.InitializableInfo> _initializables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::InitializableManager::InitializableInfo*>*& dyn__initializables();
    // Get instance field reference: private System.Boolean _hasInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__hasInitialized();
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IInitializable> initializables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1EAD33C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>* initializables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* priorities) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InitializableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager*, creationType>(initializables, priorities)));
    }
    // public System.Void Add(Zenject.IInitializable initializable)
    // Offset: 0x1EAD628
    void Add(::Zenject::IInitializable* initializable);
    // public System.Void Add(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0x1EAD630
    void Add(::Zenject::IInitializable* initializable, int priority);
    // public System.Void Initialize()
    // Offset: 0x1EAD6D8
    void Initialize();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1EADA94
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1EADBAC
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.InitializableManager
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager), 24 + sizeof(bool)> __Zenject_InitializableManagerSizeCheck;
  static_assert(sizeof(InitializableManager) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InitializableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InitializableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InitializableManager::*)(::Zenject::IInitializable*)>(&Zenject::InitializableManager::Add)> {
  static const MethodInfo* get() {
    static auto* initializable = &::il2cpp_utils::GetClassFromName("Zenject", "IInitializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initializable});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InitializableManager::*)(::Zenject::IInitializable*, int)>(&Zenject::InitializableManager::Add)> {
  static const MethodInfo* get() {
    static auto* initializable = &::il2cpp_utils::GetClassFromName("Zenject", "IInitializable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initializable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InitializableManager::*)()>(&Zenject::InitializableManager::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::InitializableManager::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::InitializableManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
