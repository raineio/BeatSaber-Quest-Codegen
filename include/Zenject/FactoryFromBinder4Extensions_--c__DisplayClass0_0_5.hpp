// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder4Extensions
#include "Zenject/FactoryFromBinder4Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder4Extensions/Zenject.<>c__DisplayClass0_0`5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    System::Guid factoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid factoryId
    System::Guid& dyn_factoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5::dyn_factoryId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factoryId"))->offset;
      return *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5<TParam1, TParam2, TParam3, TParam4, TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder4Extensions/Zenject.<>c__DisplayClass0_0`5
  // Could not write size check! Type: Zenject.FactoryFromBinder4Extensions/Zenject.<>c__DisplayClass0_0`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5, "Zenject", "FactoryFromBinder4Extensions/<>c__DisplayClass0_0`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
