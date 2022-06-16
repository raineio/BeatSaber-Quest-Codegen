// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ArgConditionCopyNonLazyBinder
#include "Zenject/ArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConcreteIdArgConditionCopyNonLazyBinder
  class ConcreteIdArgConditionCopyNonLazyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ConcreteIdArgConditionCopyNonLazyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ArgConditionCopyNonLazyBinder {
    public:
    // public Zenject.ArgConditionCopyNonLazyBinder WithConcreteId(System.Object id)
    // Offset: 0x176BBF8
    ::Zenject::ArgConditionCopyNonLazyBinder* WithConcreteId(::Il2CppObject* id);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x176BBF0
    // Implemented from: Zenject.ArgConditionCopyNonLazyBinder
    // Base method: System.Void ArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId
// Il2CppName: WithConcreteId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ArgConditionCopyNonLazyBinder* (Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::Il2CppObject*)>(&Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteIdArgConditionCopyNonLazyBinder*), "WithConcreteId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
