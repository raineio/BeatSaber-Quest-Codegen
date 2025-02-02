// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PoolCleanupChecker
#include "Zenject/PoolCleanupChecker.hpp"
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
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PoolCleanupChecker::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolCleanupChecker::$$c*, "Zenject", "PoolCleanupChecker/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolCleanupChecker/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PoolCleanupChecker::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.PoolCleanupChecker/Zenject.<>c <>9
    static ::Zenject::PoolCleanupChecker::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.PoolCleanupChecker/Zenject.<>c <>9
    static void _set_$$9(::Zenject::PoolCleanupChecker::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__2_0
    static ::System::Func_2<::System::Type*, bool>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__2_0
    static void _set_$$9__2_0(::System::Func_2<::System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1CC1408
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1CC146C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolCleanupChecker::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolCleanupChecker::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolCleanupChecker::$$c*, creationType>()));
    }
    // System.Boolean <.ctor>b__2_0(System.Type x)
    // Offset: 0x1CC1474
    bool $_ctor$b__2_0(::System::Type* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CC14E4
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CC1540
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.PoolCleanupChecker/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PoolCleanupChecker::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::PoolCleanupChecker::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolCleanupChecker::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PoolCleanupChecker::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PoolCleanupChecker::$$c::$_ctor$b__2_0
// Il2CppName: <.ctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::PoolCleanupChecker::$$c::*)(::System::Type*)>(&Zenject::PoolCleanupChecker::$$c::$_ctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolCleanupChecker::$$c*), "<.ctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::PoolCleanupChecker::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::PoolCleanupChecker::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolCleanupChecker::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::PoolCleanupChecker::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::PoolCleanupChecker::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PoolCleanupChecker::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
