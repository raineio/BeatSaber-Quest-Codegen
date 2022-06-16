// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactoryProviderBase`1<TContract>
  template<typename TContract>
  class IFactoryProviderBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProviderBase_1, "Zenject", "IFactoryProviderBase`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactoryProviderBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class IFactoryProviderBase_1 : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    public:
    // private System.Guid <FactoryId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    ::System::Guid FactoryId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private Zenject.DiContainer <Container>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Guid <FactoryId>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$FactoryId$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::dyn_$FactoryId$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<FactoryId>k__BackingField"))->offset;
      return *reinterpret_cast<::System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Zenject.DiContainer <Container>k__BackingField
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn_$Container$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::dyn_$Container$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Container>k__BackingField"))->offset;
      return *reinterpret_cast<::Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected System.Guid get_FactoryId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Guid get_FactoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::get_FactoryId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_FactoryId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Guid, false>(this, ___internal__method);
    }
    // private System.Void set_FactoryId(System.Guid value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_FactoryId(::System::Guid value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::set_FactoryId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_FactoryId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // private System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Container(::Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::set_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid factoryId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IFactoryProviderBase_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IFactoryProviderBase_1<TContract>*, creationType>(container, factoryId)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method, context);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<::System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, context, args, byref(injectAction), buffer);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactoryProviderBase_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IFactoryProviderBase_1<TContract>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.IFactoryProviderBase`1
  // Could not write size check! Type: Zenject.IFactoryProviderBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
