// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionSelectTypesBinder
#include "Zenject/ConventionSelectTypesBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: <>c
  class $$c;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::ConventionSelectTypesBinder::$$c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionSelectTypesBinder::$$c*, "Zenject", "ConventionSelectTypesBinder/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionSelectTypesBinder/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionSelectTypesBinder::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.ConventionSelectTypesBinder/Zenject.<>c <>9
    static Zenject::ConventionSelectTypesBinder::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ConventionSelectTypesBinder/Zenject.<>c <>9
    static void _set_$$9(Zenject::ConventionSelectTypesBinder::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__4_0
    static System::Func_2<System::Type*, bool>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__4_0
    static void _set_$$9__4_0(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__5_0
    static System::Func_2<System::Type*, bool>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__6_0
    static System::Func_2<System::Type*, bool>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__7_0
    static System::Func_2<System::Type*, bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x14FFD10
    static void _cctor();
    // System.Boolean <AllClasses>b__4_0(System.Type t)
    // Offset: 0x14FFD7C
    bool $AllClasses$b__4_0(System::Type* t);
    // System.Boolean <AllNonAbstractClasses>b__5_0(System.Type t)
    // Offset: 0x14FFD98
    bool $AllNonAbstractClasses$b__5_0(System::Type* t);
    // System.Boolean <AllAbstractClasses>b__6_0(System.Type t)
    // Offset: 0x14FFDE8
    bool $AllAbstractClasses$b__6_0(System::Type* t);
    // System.Boolean <AllInterfaces>b__7_0(System.Type t)
    // Offset: 0x14FFE34
    bool $AllInterfaces$b__7_0(System::Type* t);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x14FFE50
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x14FFEAC
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x14FFD74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionSelectTypesBinder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionSelectTypesBinder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionSelectTypesBinder::$$c*, creationType>()));
    }
  }; // Zenject.ConventionSelectTypesBinder/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ConventionSelectTypesBinder::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::$AllClasses$b__4_0
// Il2CppName: <AllClasses>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionSelectTypesBinder::$$c::*)(System::Type*)>(&Zenject::ConventionSelectTypesBinder::$$c::$AllClasses$b__4_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "<AllClasses>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::$AllNonAbstractClasses$b__5_0
// Il2CppName: <AllNonAbstractClasses>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionSelectTypesBinder::$$c::*)(System::Type*)>(&Zenject::ConventionSelectTypesBinder::$$c::$AllNonAbstractClasses$b__5_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "<AllNonAbstractClasses>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::$AllAbstractClasses$b__6_0
// Il2CppName: <AllAbstractClasses>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionSelectTypesBinder::$$c::*)(System::Type*)>(&Zenject::ConventionSelectTypesBinder::$$c::$AllAbstractClasses$b__6_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "<AllAbstractClasses>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::$AllInterfaces$b__7_0
// Il2CppName: <AllInterfaces>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionSelectTypesBinder::$$c::*)(System::Type*)>(&Zenject::ConventionSelectTypesBinder::$$c::$AllInterfaces$b__7_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "<AllInterfaces>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConventionSelectTypesBinder::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::ConventionSelectTypesBinder::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
