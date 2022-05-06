// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalBus
#include "Zenject/SignalBus.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclaration
  class SignalDeclaration;
  // Forward declaring type: SignalSubscription
  class SignalSubscription;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalBus::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBus::$$c*, "Zenject", "SignalBus/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalBus/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SignalBus::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.SignalBus/Zenject.<>c <>9
    static ::Zenject::SignalBus::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.SignalBus/Zenject.<>c <>9
    static void _set_$$9(::Zenject::SignalBus::$$c* value);
    // Get static field: static public System.Func`2<Zenject.SignalDeclaration,Zenject.BindingId> <>9__7_0
    static ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<Zenject.SignalDeclaration,Zenject.BindingId> <>9__7_0
    static void _set_$$9__7_0(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* value);
    // Get static field: static public System.Func`2<Zenject.SignalDeclaration,Zenject.SignalDeclaration> <>9__7_1
    static ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* _get_$$9__7_1();
    // Set static field: static public System.Func`2<Zenject.SignalDeclaration,Zenject.SignalDeclaration> <>9__7_1
    static void _set_$$9__7_1(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* value);
    // Get static field: static public System.Func`2<Zenject.SignalSubscription,System.String> <>9__12_0
    static ::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* _get_$$9__12_0();
    // Set static field: static public System.Func`2<Zenject.SignalSubscription,System.String> <>9__12_0
    static void _set_$$9__12_0(::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D1AF34
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D1AF98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalBus::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalBus::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalBus::$$c*, creationType>()));
    }
    // Zenject.BindingId <.ctor>b__7_0(Zenject.SignalDeclaration x)
    // Offset: 0x1D1AFA0
    ::Zenject::BindingId $_ctor$b__7_0(::Zenject::SignalDeclaration* x);
    // Zenject.SignalDeclaration <.ctor>b__7_1(Zenject.SignalDeclaration x)
    // Offset: 0x1D1AFB8
    ::Zenject::SignalDeclaration* $_ctor$b__7_1(::Zenject::SignalDeclaration* x);
    // System.String <LateDispose>b__12_0(Zenject.SignalSubscription x)
    // Offset: 0x1D1AFC0
    ::StringW $LateDispose$b__12_0(::Zenject::SignalSubscription* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D1AFF8
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D1B054
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalBus/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::SignalBus::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::$_ctor$b__7_0
// Il2CppName: <.ctor>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (Zenject::SignalBus::$$c::*)(::Zenject::SignalDeclaration*)>(&Zenject::SignalBus::$$c::$_ctor$b__7_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "SignalDeclaration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), "<.ctor>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::$_ctor$b__7_1
// Il2CppName: <.ctor>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDeclaration* (Zenject::SignalBus::$$c::*)(::Zenject::SignalDeclaration*)>(&Zenject::SignalBus::$$c::$_ctor$b__7_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "SignalDeclaration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), "<.ctor>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::$LateDispose$b__12_0
// Il2CppName: <LateDispose>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::SignalBus::$$c::*)(::Zenject::SignalSubscription*)>(&Zenject::SignalBus::$$c::$LateDispose$b__12_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "SignalSubscription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), "<LateDispose>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalBus::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalBus::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalBus::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalBus::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
