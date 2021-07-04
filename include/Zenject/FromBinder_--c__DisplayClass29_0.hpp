// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass29_0
  // [CompilerGeneratedAttribute] Offset: DDDE2C
  class FromBinder::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass29_0
    $$c__DisplayClass29_0(UnityEngine::GameObject* gameObject_ = {}) noexcept : gameObject{gameObject_} {}
    // Creating conversion operator: operator UnityEngine::GameObject*
    constexpr operator UnityEngine::GameObject*() const noexcept {
      return gameObject;
    }
    // Zenject.IProvider <FromComponentsOn>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x163A5C0
    Zenject::IProvider* $FromComponentsOn$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x16376FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass29_0), 16 + sizeof(UnityEngine::GameObject*)> __Zenject_FromBinder_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass29_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass29_0*, "Zenject", "FromBinder/<>c__DisplayClass29_0");
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass29_0::$FromComponentsOn$b__0
// Il2CppName: <FromComponentsOn>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass29_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass29_0::$FromComponentsOn$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass29_0*), "<FromComponentsOn>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
