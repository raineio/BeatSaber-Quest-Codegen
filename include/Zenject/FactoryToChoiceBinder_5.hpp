// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder`5
#include "Zenject/FactoryFromBinder_5.hpp"
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
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryToChoiceBinder`5<TParam1, TParam2, TParam3, TParam4, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryToChoiceBinder_5;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_5, "Zenject", "FactoryToChoiceBinder`5");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryToChoiceBinder`5
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryToChoiceBinder_5 : public Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract> {
    public:
    // public Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_5::ToSelf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_5::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`5
    // Base method: System.Void FactoryFromBinder_5::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`5
  // Could not write size check! Type: Zenject.FactoryToChoiceBinder`5 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
