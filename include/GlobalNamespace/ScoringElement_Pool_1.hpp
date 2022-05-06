// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScoringElement
#include "GlobalNamespace/ScoringElement.hpp"
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ScoringElement::Pool_1, "", "ScoringElement/Pool`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ScoringElement/Pool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ScoringElement::Pool_1 : public ::Zenject::MemoryPool_1<T> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoringElement::Pool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoringElement::Pool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoringElement::Pool_1<T>*, creationType>()));
    }
    // protected override System.Void Reinitialize(T scoringElement)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::Reinitialize(T scoringElement)
    void Reinitialize(T scoringElement) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoringElement::Pool_1::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(scoringElement)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, scoringElement);
    }
  }; // ScoringElement/Pool`1
  // Could not write size check! Type: ScoringElement/Pool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
