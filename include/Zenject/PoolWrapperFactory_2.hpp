// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IMemoryPool_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolWrapperFactory`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class PoolWrapperFactory_2 : public ::Il2CppObject/*, public Zenject::IFactory_2<TParam1, TValue>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly Zenject.IMemoryPool`2<TParam1,TValue> _pool
    // Size: 0x8
    // Offset: 0x0
    Zenject::IMemoryPool_2<TParam1, TValue>* pool;
    // Field size check
    static_assert(sizeof(Zenject::IMemoryPool_2<TParam1, TValue>*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IFactory_2<TParam1, TValue>
    operator Zenject::IFactory_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_2<TParam1, TValue>*>(this);
    }
    // Creating conversion operator: operator Zenject::IMemoryPool_2<TParam1, TValue>*
    constexpr operator Zenject::IMemoryPool_2<TParam1, TValue>*() const noexcept {
      return pool;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IMemoryPool`2<TParam1,TValue> _pool
    Zenject::IMemoryPool_2<TParam1, TValue>*& dyn__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolWrapperFactory_2::dyn__pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_pool"))->offset;
      return *reinterpret_cast<Zenject::IMemoryPool_2<TParam1, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.IMemoryPool`2<TParam1,TValue> pool)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolWrapperFactory_2<TParam1, TValue>* New_ctor(Zenject::IMemoryPool_2<TParam1, TValue>* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolWrapperFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolWrapperFactory_2<TParam1, TValue>*, creationType>(pool)));
    }
    // public TValue Create(TParam1 arg)
    // Offset: 0xFFFFFFFF
    TValue Create(TParam1 arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolWrapperFactory_2::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(___instance_arg, ___internal__method, arg);
    }
  }; // Zenject.PoolWrapperFactory`2
  // Could not write size check! Type: Zenject.PoolWrapperFactory`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolWrapperFactory_2, "Zenject", "PoolWrapperFactory`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
