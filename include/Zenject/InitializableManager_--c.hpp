// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
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
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InitializableManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager::$$c*, "Zenject", "InitializableManager/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InitializableManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.InitializableManager/Zenject.<>c <>9
    static ::Zenject::InitializableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.InitializableManager/Zenject.<>c <>9
    static void _set_$$9(::Zenject::InitializableManager::$$c* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__2_1
    static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, int>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__2_1
    static void _set_$$9__2_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, int>* value);
    // Get static field: static public System.Func`2<Zenject.InitializableManager/Zenject.InitializableInfo,System.Int32> <>9__5_0
    static ::System::Func_2<::Zenject::InitializableManager::InitializableInfo*, int>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<Zenject.InitializableManager/Zenject.InitializableInfo,System.Int32> <>9__5_0
    static void _set_$$9__5_0(::System::Func_2<::Zenject::InitializableManager::InitializableInfo*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1E1E0F8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1E1E15C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InitializableManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager::$$c*, creationType>()));
    }
    // System.Int32 <.ctor>b__2_1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1E1E164
    int $_ctor$b__2_1(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // System.Int32 <Initialize>b__5_0(Zenject.InitializableManager/Zenject.InitializableInfo x)
    // Offset: 0x1E1E17C
    int $Initialize$b__5_0(::Zenject::InitializableManager::InitializableInfo* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1E1E194
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1E1E1F0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.InitializableManager/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::InitializableManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::$_ctor$b__2_1
// Il2CppName: <.ctor>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::InitializableManager::$$c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::InitializableManager::$$c::$_ctor$b__2_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c*), "<.ctor>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::$Initialize$b__5_0
// Il2CppName: <Initialize>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::InitializableManager::$$c::*)(::Zenject::InitializableManager::InitializableInfo*)>(&Zenject::InitializableManager::$$c::$Initialize$b__5_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "InitializableManager/InitializableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c*), "<Initialize>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::InitializableManager::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::InitializableManager::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
