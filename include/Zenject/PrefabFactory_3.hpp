// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PrefabFactory`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename P1, typename P2, typename T>
  class PrefabFactory_3 : public ::Il2CppObject/*, public Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [InjectAttribute] Offset: 0xEC3A5C
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>
    operator Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(___instance_arg, ___internal__method);
    }
    // public T Create(UnityEngine.Object prefab, P1 param, P2 param2)
    // Offset: 0xFFFFFFFF
    T Create(UnityEngine::Object* prefab, P1 param, P2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab), ::il2cpp_utils::ExtractType(param), ::il2cpp_utils::ExtractType(param2)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, prefab, param, param2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabFactory_3<P1, P2, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabFactory_3<P1, P2, T>*, creationType>()));
    }
  }; // Zenject.PrefabFactory`3
  // Could not write size check! Type: Zenject.PrefabFactory`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
