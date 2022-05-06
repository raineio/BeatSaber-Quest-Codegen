// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
// Including type: Zenject.PoolableManager/Zenject.PoolableInfo
#include "Zenject/PoolableManager_PoolableInfo.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PoolableManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager::$$c*, "Zenject", "PoolableManager/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolableManager/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PoolableManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.PoolableManager/Zenject.<>c <>9
    static ::Zenject::PoolableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.PoolableManager/Zenject.<>c <>9
    static void _set_$$9(::Zenject::PoolableManager::$$c* value);
    // Get static field: static public System.Func`2<Zenject.PoolableManager/Zenject.PoolableInfo,System.Int32> <>9__2_1
    static ::System::Func_2<::Zenject::PoolableManager::PoolableInfo, int>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<Zenject.PoolableManager/Zenject.PoolableInfo,System.Int32> <>9__2_1
    static void _set_$$9__2_1(::System::Func_2<::Zenject::PoolableManager::PoolableInfo, int>* value);
    // Get static field: static public System.Func`2<Zenject.PoolableManager/Zenject.PoolableInfo,Zenject.IPoolable> <>9__2_2
    static ::System::Func_2<::Zenject::PoolableManager::PoolableInfo, ::Zenject::IPoolable*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<Zenject.PoolableManager/Zenject.PoolableInfo,Zenject.IPoolable> <>9__2_2
    static void _set_$$9__2_2(::System::Func_2<::Zenject::PoolableManager::PoolableInfo, ::Zenject::IPoolable*>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__3_1
    static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* _get_$$9__3_1();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__3_1
    static void _set_$$9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* value);
    // static private System.Void .cctor()
    // Offset: 0x1C1725C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1C172C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableManager::$$c*, creationType>()));
    }
    // System.Int32 <.ctor>b__2_1(Zenject.PoolableManager/Zenject.PoolableInfo x)
    // Offset: 0x1C172C8
    int $_ctor$b__2_1(::Zenject::PoolableManager::PoolableInfo x);
    // Zenject.IPoolable <.ctor>b__2_2(Zenject.PoolableManager/Zenject.PoolableInfo x)
    // Offset: 0x1C172D0
    ::Zenject::IPoolable* $_ctor$b__2_2(::Zenject::PoolableManager::PoolableInfo x);
    // System.Nullable`1<System.Int32> <CreatePoolableInfo>b__3_1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1C172D8
    ::System::Nullable_1<int> $CreatePoolableInfo$b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1C17348
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C173A4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.PoolableManager/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::PoolableManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::$_ctor$b__2_1
// Il2CppName: <.ctor>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::PoolableManager::$$c::*)(::Zenject::PoolableManager::PoolableInfo)>(&Zenject::PoolableManager::$$c::$_ctor$b__2_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "PoolableManager/PoolableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), "<.ctor>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::$_ctor$b__2_2
// Il2CppName: <.ctor>b__2_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IPoolable* (Zenject::PoolableManager::$$c::*)(::Zenject::PoolableManager::PoolableInfo)>(&Zenject::PoolableManager::$$c::$_ctor$b__2_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "PoolableManager/PoolableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), "<.ctor>b__2_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::$CreatePoolableInfo$b__3_1
// Il2CppName: <CreatePoolableInfo>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int> (Zenject::PoolableManager::$$c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::PoolableManager::$$c::$CreatePoolableInfo$b__3_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), "<CreatePoolableInfo>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::PoolableManager::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::PoolableManager::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::PoolableManager::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolableManager::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
