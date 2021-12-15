// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryToChoiceBinder`6
#include "Zenject/FactoryToChoiceBinder_6.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
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
  // Forward declaring type: FactoryArgumentsToChoiceBinder`6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryArgumentsToChoiceBinder_6;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_6, "Zenject", "FactoryArgumentsToChoiceBinder`6");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryArgumentsToChoiceBinder`6
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryArgumentsToChoiceBinder_6 : public Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract> {
    public:
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(T param)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(T param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2)
    // Offset: 0xFFFFFFFF
    template<class TFactoryParam1, class TFactoryParam2>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param1, param2);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3)
    // Offset: 0xFFFFFFFF
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param1, param2, param3);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4)
    // Offset: 0xFFFFFFFF
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param1, param2, param3, param4);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5)
    // Offset: 0xFFFFFFFF
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4, class TFactoryParam5>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param1, param2, param3, param4, param5);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6)
    // Offset: 0xFFFFFFFF
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4, class TFactoryParam5, class TFactoryParam6>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___generic__method, param1, param2, param3, param4, param5, param6);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(System.Object[] args)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArguments", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal__method, args);
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArgumentsExplicit(System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArgs) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::WithFactoryArgumentsExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithFactoryArgumentsExplicit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(extraArgs)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal__method, extraArgs);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryToChoiceBinder`6
    // Base method: System.Void FactoryToChoiceBinder_6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder_6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryArgumentsToChoiceBinder_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryArgumentsToChoiceBinder`6
  // Could not write size check! Type: Zenject.FactoryArgumentsToChoiceBinder`6 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
