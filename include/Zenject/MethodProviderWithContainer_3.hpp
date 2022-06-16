// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Forward declaring type: MethodProviderWithContainer`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class MethodProviderWithContainer_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_3, "Zenject", "MethodProviderWithContainer`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MethodProviderWithContainer`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TValue>
  class MethodProviderWithContainer_3 : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    public:
    // private readonly System.Func`4<Zenject.DiContainer,TParam1,TParam2,TValue> _method
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>* method;
    // Field size check
    static_assert(sizeof(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating conversion operator: operator ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>*
    constexpr operator ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>*() const noexcept {
      return method;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`4<Zenject.DiContainer,TParam1,TParam2,TValue> _method
    [[deprecated("Use field access instead!")]] ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>*& dyn__method() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::dyn__method");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_method"))->offset;
      return *reinterpret_cast<::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Func`4<Zenject.DiContainer,TParam1,TParam2,TValue> method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodProviderWithContainer_3<TParam1, TParam2, TValue>* New_ctor(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TValue>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodProviderWithContainer_3<TParam1, TParam2, TValue>*, creationType>(method)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method, context);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MethodProviderWithContainer_3::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<::System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, context, args, byref(injectAction), buffer);
    }
  }; // Zenject.MethodProviderWithContainer`3
  // Could not write size check! Type: Zenject.MethodProviderWithContainer`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
