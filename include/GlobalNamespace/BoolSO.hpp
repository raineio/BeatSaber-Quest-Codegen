// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObservableVariableSO`1
#include "GlobalNamespace/ObservableVariableSO_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BoolSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSO*, "", "BoolSO");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BoolSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BoolSO : public ::GlobalNamespace::ObservableVariableSO_1<bool> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1619E58
    // Implemented from: ObservableVariableSO`1
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BoolSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolSO*, creationType>()));
    }
  }; // BoolSO
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BoolSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
