// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
// Including type: Zenject.IMemoryPool`2
#include "Zenject/IMemoryPool_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class MemoryPool_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPool_2, "Zenject", "MemoryPool`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPool`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class MemoryPool_2 : public ::Zenject::MemoryPoolBase_1<TValue>/*, public ::Zenject::IFactory_2<TParam1, TValue>, public ::Zenject::IMemoryPool_2<TParam1, TValue>*/ {
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory_2<TParam1, TValue>
    operator ::Zenject::IFactory_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_2<TParam1, TValue>*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IMemoryPool_2<TParam1, TValue>
    operator ::Zenject::IMemoryPool_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IMemoryPool_2<TParam1, TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Spawn(TParam1 param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, param);
    }
    // protected System.Void Reinitialize(TParam1 p1, TValue item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reinitialize(TParam1 p1, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, p1, item);
    }
    // private TValue Zenject.IFactory<TParam1,TValue>.Create(TParam1 p1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Zenject_IFactory$TParam1_TValue$_Create(TParam1 p1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::Zenject.IFactory<TParam1,TValue>.Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IFactory<TParam1,TValue>.Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, p1);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPool_2<TParam1, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPool_2<TParam1, TValue>*, creationType>()));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Object MemoryPoolBase_1::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_2<TParam1, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: Zenject.InjectTypeInfo MemoryPoolBase_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_2::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_2<TParam1, TValue>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.MemoryPool`2
  // Could not write size check! Type: Zenject.MemoryPool`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
