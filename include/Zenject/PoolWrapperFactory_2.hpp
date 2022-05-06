// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolWrapperFactory`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class PoolWrapperFactory_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_2, "Zenject", "PoolWrapperFactory`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolWrapperFactory`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class PoolWrapperFactory_2 : public ::Il2CppObject/*, public ::Zenject::IFactory_2<TParam1, TValue>*/ {
    public:
    public:
    // private readonly Zenject.IMemoryPool`2<TParam1,TValue> _pool
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::IMemoryPool_2<TParam1, TValue>* pool;
    // Field size check
    static_assert(sizeof(::Zenject::IMemoryPool_2<TParam1, TValue>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory_2<TParam1, TValue>
    operator ::Zenject::IFactory_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_2<TParam1, TValue>*>(this);
    }
    // Creating conversion operator: operator ::Zenject::IMemoryPool_2<TParam1, TValue>*
    constexpr operator ::Zenject::IMemoryPool_2<TParam1, TValue>*() const noexcept {
      return pool;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IMemoryPool`2<TParam1,TValue> _pool
    [[deprecated("Use field access instead!")]] ::Zenject::IMemoryPool_2<TParam1, TValue>*& dyn__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_2::dyn__pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_pool"))->offset;
      return *reinterpret_cast<::Zenject::IMemoryPool_2<TParam1, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.IMemoryPool`2<TParam1,TValue> pool)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolWrapperFactory_2<TParam1, TValue>* New_ctor(::Zenject::IMemoryPool_2<TParam1, TValue>* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolWrapperFactory_2<TParam1, TValue>*, creationType>(pool)));
    }
    // public TValue Create(TParam1 arg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Create(TParam1 arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_2::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, arg);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_2::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolWrapperFactory_2<TParam1, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_2::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolWrapperFactory_2<TParam1, TValue>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.PoolWrapperFactory`2
  // Could not write size check! Type: Zenject.PoolWrapperFactory`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
