// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactorySubContainerBinderWithParams`1
#include "Zenject/FactorySubContainerBinderWithParams_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass3_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactorySubContainerBinder`3<TParam1, TParam2, TContract>
  template<typename TParam1, typename TParam2, typename TContract>
  class FactorySubContainerBinder_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_3, "Zenject", "FactorySubContainerBinder`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinder`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TContract>
  class FactorySubContainerBinder_3 : public ::Zenject::FactorySubContainerBinderWithParams_1<TContract> {
    public:
    // Nested type: ::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: ::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass2_0;
    // Nested type: ::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass3_0;
    // Nested type: ::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0<TParam1, TParam2, TContract>
    class $$c__DisplayClass4_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass1_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass1_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_3<TParam1, TParam2, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass1_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*) == 0x8);
      // public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;
      // Field size check
      static_assert(sizeof(::Zenject::SubContainerCreatorBindInfo*) == 0x8);
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Size: 0x8
      // Offset: 0x0
      ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Field size check
      static_assert(sizeof(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      [[deprecated("Use field access instead!")]] ::Zenject::SubContainerCreatorBindInfo*& dyn_subcontainerBindInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::dyn_subcontainerBindInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "subcontainerBindInfo"))->offset;
        return *reinterpret_cast<::Zenject::SubContainerCreatorBindInfo**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      [[deprecated("Use field access instead!")]] ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0*, creationType>()));
      }
      // Zenject.IProvider <ByMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Zenject::IProvider* $ByMethod$b__0(::Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::<ByMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass1_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass1_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass1_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass1_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass2_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_3<TParam1, TParam2, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass2_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Size: 0x8
      // Offset: 0x0
      ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Field size check
      static_assert(sizeof(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<::Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      [[deprecated("Use field access instead!")]] ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0*, creationType>()));
      }
      // Zenject.IProvider <ByNewGameObjectMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Zenject::IProvider* $ByNewGameObjectMethod$b__0(::Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::<ByNewGameObjectMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewGameObjectMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass2_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass2_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass2_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass3_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass3_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_3<TParam1, TParam2, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass3_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(::UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Size: 0x8
      // Offset: 0x0
      ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Field size check
      static_assert(sizeof(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.Object prefab
      [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn_prefab() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::dyn_prefab");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prefab"))->offset;
        return *reinterpret_cast<::UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<::Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      [[deprecated("Use field access instead!")]] ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0*, creationType>()));
      }
      // Zenject.IProvider <ByNewPrefabMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Zenject::IProvider* $ByNewPrefabMethod$b__0(::Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::<ByNewPrefabMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass3_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass3_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass3_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass3_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_3<TParam1, TParam2, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::StringW resourcePath;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      // Size: 0x8
      // Offset: 0x0
      ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod;
      // Field size check
      static_assert(sizeof(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`3<TParam1,TParam2,TContract> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.String resourcePath
      [[deprecated("Use field access instead!")]] ::StringW& dyn_resourcePath() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::dyn_resourcePath");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resourcePath"))->offset;
        return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<::Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod
      [[deprecated("Use field access instead!")]] ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
      // Zenject.IProvider <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Zenject::IProvider* $ByNewPrefabResourceMethod$b__0(::Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::<ByNewPrefabResourceMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabResourceMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::$$c__DisplayClass4_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_3<TParam1, TParam2, TContract>::$$c__DisplayClass4_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`3/Zenject.<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::ByMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::ByNewGameObjectMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewGameObjectMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::ByNewPrefabMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab), ::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, prefab, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installerMethod)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::ByNewPrefabResourceMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResourceMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath), ::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, resourcePath, installerMethod);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.FactorySubContainerBinderWithParams`1
    // Base method: System.Void FactorySubContainerBinderWithParams_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Base method: System.Void FactorySubContainerBinderBase_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinder_3<TParam1, TParam2, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactorySubContainerBinder_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinder_3<TParam1, TParam2, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
  }; // Zenject.FactorySubContainerBinder`3
  // Could not write size check! Type: Zenject.FactorySubContainerBinder`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
