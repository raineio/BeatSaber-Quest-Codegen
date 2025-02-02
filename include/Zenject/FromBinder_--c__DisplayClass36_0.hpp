// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::FromBinder::$$c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinder::$$c__DisplayClass36_0*, "Zenject", "FromBinder/<>c__DisplayClass36_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass36_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass36_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*) == 0x8);
    // public Zenject.FromBinder <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::FromBinder* $$4__this;
    // Field size check
    static_assert(sizeof(::Zenject::FromBinder*) == 0x8);
    public:
    // Get instance field reference: public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& dyn_gameObjectGetter();
    // Get instance field reference: public Zenject.FromBinder <>4__this
    [[deprecated("Use field access instead!")]] ::Zenject::FromBinder*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x1EA13BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass36_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FromBinder::$$c__DisplayClass36_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass36_0*, creationType>()));
    }
    // Zenject.IProvider <FromNewComponentOn>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x1EA4940
    ::Zenject::IProvider* $FromNewComponentOn$b__0(::Zenject::DiContainer* container, ::System::Type* type);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1EA49F8
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1EA4A54
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass36_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass36_0), 24 + sizeof(::Zenject::FromBinder*)> __Zenject_FromBinder_$$c__DisplayClass36_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass36_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass36_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass36_0::$FromNewComponentOn$b__0
// Il2CppName: <FromNewComponentOn>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass36_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass36_0::$FromNewComponentOn$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass36_0*), "<FromNewComponentOn>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, type});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass36_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::FromBinder::$$c__DisplayClass36_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass36_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass36_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::FromBinder::$$c__DisplayClass36_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass36_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
