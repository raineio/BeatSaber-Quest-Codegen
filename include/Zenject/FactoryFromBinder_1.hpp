// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass3_0`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Skipping declaration: <>c__5`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Skipping declaration: ArgConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: FactorySubContainerBinder`1<TContract>
  template<typename TContract>
  class FactorySubContainerBinder_1;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryFromBinder`1<TContract>
  template<typename TContract>
  class FactoryFromBinder_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_1, "Zenject", "FactoryFromBinder`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class FactoryFromBinder_1 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1<TContract, TObj>
    template<typename TObj>
    class $$c__DisplayClass3_0_1;
    // Nested type: Zenject::FactoryFromBinder_1::$$c__DisplayClass4_0<TContract>
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::FactoryFromBinder_1::$$c__5_1<TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__5_1;
    // Nested type: Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0<TContract>
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::FactoryFromBinder_1::$$c<TContract>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass3_0`1
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TObj>
    class $$c__DisplayClass3_0_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass3_0`1";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Object subIdentifier
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppObject* subIdentifier;
      // Field size check
      static_assert(sizeof(::Il2CppObject*) == 0x8);
      // public System.Func`2<TObj,TContract> method
      // Size: 0x8
      // Offset: 0x0
      System::Func_2<TObj, TContract>* method;
      // Field size check
      static_assert(sizeof(System::Func_2<TObj, TContract>*) == 0x8);
      // public Zenject.InjectSources source
      // Size: 0x4
      // Offset: 0x0
      Zenject::InjectSources source;
      // Field size check
      static_assert(sizeof(Zenject::InjectSources) == 0x4);
      public:
      // Autogenerated instance field getter
      // Get instance field: public System.Object subIdentifier
      ::Il2CppObject*& dyn_subIdentifier() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1::dyn_subIdentifier");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "subIdentifier"))->offset;
        return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`2<TObj,TContract> method
      System::Func_2<TObj, TContract>*& dyn_method() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1::dyn_method");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "method"))->offset;
        return *reinterpret_cast<System::Func_2<TObj, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.InjectSources source
      Zenject::InjectSources& dyn_source() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1::dyn_source");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
        return *reinterpret_cast<Zenject::InjectSources*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <FromResolveGetter>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromResolveGetter$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1::<FromResolveGetter>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromResolveGetter>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_1<TContract>::$$c__DisplayClass3_0_1<TObj>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass3_0_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_1<TContract>::$$c__DisplayClass3_0_1<TObj>*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass3_0`1
    // Could not write size check! Type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass3_0`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Func`2<Zenject.DiContainer,TContract> method
      // Size: 0x8
      // Offset: 0x0
      System::Func_2<Zenject::DiContainer*, TContract>* method;
      // Field size check
      static_assert(sizeof(System::Func_2<Zenject::DiContainer*, TContract>*) == 0x8);
      public:
      // Creating conversion operator: operator System::Func_2<Zenject::DiContainer*, TContract>*
      constexpr operator System::Func_2<Zenject::DiContainer*, TContract>*() const noexcept {
        return method;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`2<Zenject.DiContainer,TContract> method
      System::Func_2<Zenject::DiContainer*, TContract>*& dyn_method() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass4_0::dyn_method");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "method"))->offset;
        return *reinterpret_cast<System::Func_2<Zenject::DiContainer*, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass4_0::<FromMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_1<TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_1<TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`1/Zenject.<>c__5`1
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TSubFactory>
    class $$c__5_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__5`1";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`1/Zenject.<>c__5`1<TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`1/Zenject.<>c__5`1<TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>>> <>9__5_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>* _get_$$9__5_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::_get_$$9__5_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>::get(), "<>9__5_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>>> <>9__5_0
      static void _set_$$9__5_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::_set_$$9__5_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>::get(), "<>9__5_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Void <FromFactory>b__5_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__5_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::<FromFactory>b__5_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromFactory>b__5_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__5_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_1<TContract>::$$c__5_1<TSubFactory>*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`1/Zenject.<>c__5`1
    // Could not write size check! Type: Zenject.FactoryFromBinder`1/Zenject.<>c__5`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass8_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass8_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactoryFromBinder`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactoryFromBinder_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactoryFromBinder_1<TContract>*) == 0x8);
      // public System.Boolean includeInactive
      // Size: 0x1
      // Offset: 0x0
      bool includeInactive;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Func`2<UnityEngine.GameObject,TContract> <>9__1
      // Size: 0x8
      // Offset: 0x0
      System::Func_2<UnityEngine::GameObject*, TContract>* $$9__1;
      // Field size check
      static_assert(sizeof(System::Func_2<UnityEngine::GameObject*, TContract>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactoryFromBinder`1<TContract> <>4__this
      Zenject::FactoryFromBinder_1<TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactoryFromBinder_1<TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean includeInactive
      bool& dyn_includeInactive() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::dyn_includeInactive");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "includeInactive"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`2<UnityEngine.GameObject,TContract> <>9__1
      System::Func_2<UnityEngine::GameObject*, TContract>*& dyn_$$9__1() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::dyn_$$9__1");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__1"))->offset;
        return *reinterpret_cast<System::Func_2<UnityEngine::GameObject*, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // TContract <FromComponentInHierarchy>b__0(Zenject.DiContainer _)
      // Offset: 0xFFFFFFFF
      TContract $FromComponentInHierarchy$b__0(Zenject::DiContainer* _) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::<FromComponentInHierarchy>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromComponentInHierarchy>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(_)})));
        return ::il2cpp_utils::RunMethodThrow<TContract, false>(this, ___internal__method, _);
      }
      // TContract <FromComponentInHierarchy>b__1(UnityEngine.GameObject x)
      // Offset: 0xFFFFFFFF
      TContract $FromComponentInHierarchy$b__1(UnityEngine::GameObject* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::<FromComponentInHierarchy>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromComponentInHierarchy>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        return ::il2cpp_utils::RunMethodThrow<TContract, false>(this, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_1<TContract>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_1<TContract>::$$c__DisplayClass8_0*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.FactoryFromBinder`1/Zenject.<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`1/Zenject.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`1/Zenject.<>c<TContract> <>9
      static typename Zenject::FactoryFromBinder_1<TContract>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_1<TContract>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`1/Zenject.<>c<TContract> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_1<TContract>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<TContract,System.Boolean> <>9__8_2
      static System::Func_2<TContract, bool>* _get_$$9__8_2() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::_get_$$9__8_2");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<TContract, bool>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c*>::get(), "<>9__8_2")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<TContract,System.Boolean> <>9__8_2
      static void _set_$$9__8_2(System::Func_2<TContract, bool>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::_set_$$9__8_2");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c*>::get(), "<>9__8_2", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_1<TContract>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Boolean <FromComponentInHierarchy>b__8_2(TContract x)
      // Offset: 0xFFFFFFFF
      bool $FromComponentInHierarchy$b__8_2(TContract x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::<FromComponentInHierarchy>b__8_2");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromComponentInHierarchy>b__8_2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_1<TContract>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_1<TContract>::$$c*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`1/Zenject.<>c
    // Could not write size check! Type: Zenject.FactoryFromBinder`1/Zenject.<>c is generic, or has no fields that are valid for size checks!
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder_1<TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder_1<TContract>*, creationType>(container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromResolveGetter(System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj>
    Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromResolveGetter(System.Object subIdentifier, System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj>
    Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::Il2CppObject* subIdentifier, System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subIdentifier), ::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___generic__method, subIdentifier, method);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromResolveGetter(System.Object subIdentifier, System.Func`2<TObj,TContract> method, Zenject.InjectSources source)
    // Offset: 0xFFFFFFFF
    template<class TObj>
    Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::Il2CppObject* subIdentifier, System::Func_2<TObj, TContract>* method, Zenject::InjectSources source) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subIdentifier), ::il2cpp_utils::ExtractType(method), ::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___generic__method, subIdentifier, method, source);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`2<Zenject.DiContainer,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_2<Zenject::DiContainer*, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal__method, method);
    }
    // public Zenject.ArgConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ArgConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_1<TContract>, std::remove_pointer_t<TSubFactory>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.FactorySubContainerBinder`1<TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_1<TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactorySubContainerBinder`1<TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subIdentifier)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_1<TContract>*, false>(this, ___internal__method, subIdentifier);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromComponentInHierarchy(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_1::FromComponentInHierarchy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromComponentInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal__method, includeInactive);
    }
  }; // Zenject.FactoryFromBinder`1
  // Could not write size check! Type: Zenject.FactoryFromBinder`1 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
