// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IFactory_2;
  // Forward declaring type: FactorySubContainerBinder`2<TParam1, TContract>
  template<typename TParam1, typename TContract>
  class FactorySubContainerBinder_2;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryFromBinder`2<TParam1, TContract>
  template<typename TParam1, typename TContract>
  class FactoryFromBinder_2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_2, "Zenject", "FactoryFromBinder`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TContract>
  class FactoryFromBinder_2 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0<TParam1, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_2::$$c__2_1<TParam1, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`2/Zenject.<>c__DisplayClass1_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass1_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_2<TParam1, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass1_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public System.Func`3<Zenject.DiContainer,TParam1,TContract> method
      // Size: 0x8
      // Offset: 0x0
      System::Func_3<Zenject::DiContainer*, TParam1, TContract>* method;
      // Field size check
      static_assert(sizeof(System::Func_3<Zenject::DiContainer*, TParam1, TContract>*) == 0x8);
      public:
      // Creating conversion operator: operator System::Func_3<Zenject::DiContainer*, TParam1, TContract>*
      constexpr operator System::Func_3<Zenject::DiContainer*, TParam1, TContract>*() const noexcept {
        return method;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`3<Zenject.DiContainer,TParam1,TContract> method
      System::Func_3<Zenject::DiContainer*, TParam1, TContract>*& dyn_method() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0::dyn_method");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "method"))->offset;
        return *reinterpret_cast<System::Func_3<Zenject::DiContainer*, TParam1, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0::<FromMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__DisplayClass1_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFF
      static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__DisplayClass1_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_2<TParam1, TContract>::$$c__DisplayClass1_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__DisplayClass1_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_2<TParam1, TContract>::$$c__DisplayClass1_0*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`2/Zenject.<>c__DisplayClass1_0
    // Could not write size check! Type: Zenject.FactoryFromBinder`2/Zenject.<>c__DisplayClass1_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`2/Zenject.<>c__2`1
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TSubFactory>
    class $$c__2_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_2<TParam1, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__2`1";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`2/Zenject.<>c__2`1<TParam1,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`2/Zenject.<>c__2`1<TParam1,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`2<TParam1,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>*>* _get_$$9__2_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::_get_$$9__2_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`2<TParam1,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::_set_$$9__2_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`2<TParam1,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::<FromFactory>b__2_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromFactory>b__2_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, x);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFF
      static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::$$c__2_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_2<TParam1, TContract>::$$c__2_1<TSubFactory>*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`2/Zenject.<>c__2`1
    // Could not write size check! Type: Zenject.FactoryFromBinder`2/Zenject.<>c__2`1 is generic, or has no fields that are valid for size checks!
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder_2<TParam1, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder_2<TParam1, TContract>*, creationType>(container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`3<Zenject.DiContainer,TParam1,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_3<Zenject::DiContainer*, TParam1, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::FromMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal__method, method);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_2<TParam1, TContract>, std::remove_pointer_t<TSubFactory>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::FromFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.FactorySubContainerBinder`2<TParam1,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_2<TParam1, TContract>* FromSubContainerResolve() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_2<TParam1, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactorySubContainerBinder`2<TParam1,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_2<TParam1, TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_2::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subIdentifier)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_2<TParam1, TContract>*, false>(this, ___internal__method, subIdentifier);
    }
  }; // Zenject.FactoryFromBinder`2
  // Could not write size check! Type: Zenject.FactoryFromBinder`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
