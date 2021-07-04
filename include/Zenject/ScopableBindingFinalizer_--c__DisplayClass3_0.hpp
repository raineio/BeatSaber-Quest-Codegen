// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopableBindingFinalizer
#include "Zenject/ScopableBindingFinalizer.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
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
  // Autogenerated type: Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: DDE22C
  class ScopableBindingFinalizer::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public Zenject.ScopableBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::ScopableBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::ScopableBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(Zenject::ScopableBindingFinalizer* $$4__this_ = {}, Zenject::DiContainer* container_ = {}) noexcept : $$4__this{$$4__this_}, container{container_} {}
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x16E6894
    Zenject::IProvider* $FinalizeBindingConcrete$b__0(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x16E6884
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScopableBindingFinalizer::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScopableBindingFinalizer::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ScopableBindingFinalizer::$$c__DisplayClass3_0), 24 + sizeof(Zenject::DiContainer*)> __Zenject_ScopableBindingFinalizer_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ScopableBindingFinalizer::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass3_0");
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0::$FinalizeBindingConcrete$b__0
// Il2CppName: <FinalizeBindingConcrete>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0::$FinalizeBindingConcrete$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0*), "<FinalizeBindingConcrete>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
