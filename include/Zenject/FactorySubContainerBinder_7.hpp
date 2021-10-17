// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactorySubContainerBinderWithParams`1
#include "Zenject/FactorySubContainerBinderWithParams_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`7<T1, T2, T3, T4, T5, T6, T7>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class Action_7;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactorySubContainerBinder`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class FactorySubContainerBinder_7;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinder_7, "Zenject", "FactorySubContainerBinder`7");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinder`7
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class FactorySubContainerBinder_7 : public Zenject::FactorySubContainerBinderWithParams_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    class $$c__DisplayClass4_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass1_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass1_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass1_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*) == 0x8);
      // public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;
      // Field size check
      static_assert(sizeof(Zenject::SubContainerCreatorBindInfo*) == 0x8);
      // public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      // Size: 0x8
      // Offset: 0x0
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod;
      // Field size check
      static_assert(sizeof(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      Zenject::SubContainerCreatorBindInfo*& dyn_subcontainerBindInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0::dyn_subcontainerBindInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "subcontainerBindInfo"))->offset;
        return *reinterpret_cast<Zenject::SubContainerCreatorBindInfo**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0::<ByMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass1_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass1_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass1_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass1_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass1_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass2_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass2_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      // Size: 0x8
      // Offset: 0x0
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod;
      // Field size check
      static_assert(sizeof(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewGameObjectMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewGameObjectMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0::<ByNewGameObjectMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewGameObjectMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass2_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass2_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass3_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass3_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass3_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      // Size: 0x8
      // Offset: 0x0
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod;
      // Field size check
      static_assert(sizeof(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.Object prefab
      UnityEngine::Object*& dyn_prefab() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::dyn_prefab");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prefab"))->offset;
        return *reinterpret_cast<UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewPrefabMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewPrefabMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::<ByNewPrefabMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass3_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass3_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass3_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass3_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass3_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      // Size: 0x8
      // Offset: 0x0
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod;
      // Field size check
      static_assert(sizeof(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> <>4__this
      Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.String resourcePath
      ::Il2CppString*& dyn_resourcePath() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::dyn_resourcePath");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resourcePath"))->offset;
        return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod
      System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& dyn_installerMethod() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::dyn_installerMethod");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerMethod"))->offset;
        return *reinterpret_cast<System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewPrefabResourceMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::<ByNewPrefabResourceMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabResourceMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinder`7/Zenject.<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod)
    // Offset: 0xFFFFFFFF
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::ByMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::ByNewGameObjectMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewGameObjectMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(UnityEngine::Object* prefab, System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::ByNewPrefabMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab), ::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, prefab, installerMethod);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::Il2CppString* resourcePath, System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::ByNewPrefabResourceMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResourceMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath), ::il2cpp_utils::ExtractType(installerMethod)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, resourcePath, installerMethod);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactorySubContainerBinderWithParams`1
    // Base method: System.Void FactorySubContainerBinderWithParams_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Base method: System.Void FactorySubContainerBinderBase_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinder_7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
  }; // Zenject.FactorySubContainerBinder`7
  // Could not write size check! Type: Zenject.FactorySubContainerBinder`7 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
