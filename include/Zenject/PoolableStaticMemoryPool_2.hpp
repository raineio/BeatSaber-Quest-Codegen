// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.StaticMemoryPool`2
#include "Zenject/StaticMemoryPool_2.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolableStaticMemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class PoolableStaticMemoryPool_2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_2, "Zenject", "PoolableStaticMemoryPool`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class PoolableStaticMemoryPool_2 : public Zenject::StaticMemoryPool_2<TParam1, TValue> {
    public:
    // static private System.Void OnSpawned(TParam1 p1, TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TParam1 p1, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_2::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_2<TParam1, TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, p1, value);
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_2::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_2<TParam1, TValue>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableStaticMemoryPool_2<TParam1, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableStaticMemoryPool_2<TParam1, TValue>*, creationType>()));
    }
  }; // Zenject.PoolableStaticMemoryPool`2
  // Could not write size check! Type: Zenject.PoolableStaticMemoryPool`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
