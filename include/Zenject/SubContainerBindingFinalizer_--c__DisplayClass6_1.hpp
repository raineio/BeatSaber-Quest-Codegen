// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerBindingFinalizer
#include "Zenject/SubContainerBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorCached
  class SubContainerCreatorCached;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBindingFinalizer/<>c__DisplayClass6_1
  // [CompilerGeneratedAttribute] Offset: DDE27C
  class SubContainerBindingFinalizer::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerCreatorCached containerCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerCreatorCached* containerCreator;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorCached*) == 0x8);
    // public Zenject.SubContainerBindingFinalizer/<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_1
    $$c__DisplayClass6_1(Zenject::SubContainerCreatorCached* containerCreator_ = {}, Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1_ = {}) noexcept : containerCreator{containerCreator_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Zenject.IProvider <FinalizeBindingSelf>b__1(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x16E972C
    Zenject::IProvider* $FinalizeBindingSelf$b__1(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0x16E94B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBindingFinalizer::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBindingFinalizer::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // Zenject.SubContainerBindingFinalizer/<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBindingFinalizer::$$c__DisplayClass6_1), 24 + sizeof(Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0*)> __Zenject_SubContainerBindingFinalizer_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(SubContainerBindingFinalizer::$$c__DisplayClass6_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_1");
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1::$FinalizeBindingSelf$b__1
// Il2CppName: <FinalizeBindingSelf>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1::$FinalizeBindingSelf$b__1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1*), "<FinalizeBindingSelf>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
