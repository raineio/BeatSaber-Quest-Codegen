// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConcreteBinderNonGeneric
#include "Zenject/ConcreteBinderNonGeneric.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConcreteIdBinderNonGeneric
  // [NoReflectionBakingAttribute] Offset: DDC584
  class ConcreteIdBinderNonGeneric : public Zenject::ConcreteBinderNonGeneric {
    public:
    // Creating value type constructor for type: ConcreteIdBinderNonGeneric
    ConcreteIdBinderNonGeneric() noexcept {}
    // public Zenject.ConcreteBinderNonGeneric WithId(System.Object identifier)
    // Offset: 0x138CA20
    Zenject::ConcreteBinderNonGeneric* WithId(::Il2CppObject* identifier);
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0x138C9F8
    // Implemented from: Zenject.ConcreteBinderNonGeneric
    // Base method: System.Void ConcreteBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteIdBinderNonGeneric* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteIdBinderNonGeneric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteIdBinderNonGeneric*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.ConcreteIdBinderNonGeneric
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteIdBinderNonGeneric*, "Zenject", "ConcreteIdBinderNonGeneric");
// Writing MetadataGetter for method: Zenject::ConcreteIdBinderNonGeneric::WithId
// Il2CppName: WithId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConcreteBinderNonGeneric* (Zenject::ConcreteIdBinderNonGeneric::*)(::Il2CppObject*)>(&Zenject::ConcreteIdBinderNonGeneric::WithId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteIdBinderNonGeneric*), "WithId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteIdBinderNonGeneric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
