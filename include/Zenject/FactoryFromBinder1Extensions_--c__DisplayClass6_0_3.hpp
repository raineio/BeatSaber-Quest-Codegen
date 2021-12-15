// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder1Extensions
#include "Zenject/FactoryFromBinder1Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class MemoryPool_3;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass6_0`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder1Extensions/Zenject.<>c__DisplayClass6_0`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TContract, typename TMemoryPool>
  class FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Guid poolId
    // Size: 0x10
    // Offset: 0x0
    System::Guid poolId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return poolId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid poolId
    System::Guid& dyn_poolId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3::dyn_poolId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "poolId"))->offset;
      return *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromPoolableMemoryPool$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3::<FromPoolableMemoryPool>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFF
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder1Extensions/Zenject.<>c__DisplayClass6_0`3
  // Could not write size check! Type: Zenject.FactoryFromBinder1Extensions/Zenject.<>c__DisplayClass6_0`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
