// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PoolableMemoryPoolProviderBase`1
#include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class MemoryPool_2;
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolableMemoryPoolProvider`2<TContract, TMemoryPool>
  template<typename TContract, typename TMemoryPool>
  class PoolableMemoryPoolProvider_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPoolProvider_2, "Zenject", "PoolableMemoryPoolProvider`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPoolProvider`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract, typename TMemoryPool>
  class PoolableMemoryPoolProvider_2 : public ::Zenject::PoolableMemoryPoolProviderBase_1<TContract>/*, public ::Zenject::IValidatable*/ {
    public:
    public:
    // private TMemoryPool _pool
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TMemoryPool pool;
    public:
    // Creating interface conversion operator: operator ::Zenject::IValidatable
    operator ::Zenject::IValidatable() noexcept {
      return *reinterpret_cast<::Zenject::IValidatable*>(this);
    }
    // Creating interface conversion operator: i_IValidatable
    inline ::Zenject::IValidatable* i_IValidatable() noexcept {
      return reinterpret_cast<::Zenject::IValidatable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private TMemoryPool _pool
    [[deprecated("Use field access instead!")]] TMemoryPool& dyn__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableMemoryPoolProvider_2::dyn__pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_pool"))->offset;
      return *reinterpret_cast<TMemoryPool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableMemoryPoolProvider_2::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid poolId)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPoolProvider_2<TContract, TMemoryPool>* New_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableMemoryPoolProvider_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*, creationType>(container, poolId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableMemoryPoolProvider_2::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<::System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, context, args, byref(injectAction), buffer);
    }
  }; // Zenject.PoolableMemoryPoolProvider`2
  // Could not write size check! Type: Zenject.PoolableMemoryPoolProvider`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
