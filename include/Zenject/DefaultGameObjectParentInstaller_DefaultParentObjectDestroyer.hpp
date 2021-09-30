// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DefaultGameObjectParentInstaller
#include "Zenject/DefaultGameObjectParentInstaller.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DefaultGameObjectParentInstaller/Zenject.DefaultParentObjectDestroyer
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::GameObject*
    constexpr operator UnityEngine::GameObject*() const noexcept {
      return gameObject;
    }
    // Get instance field reference: private readonly UnityEngine.GameObject _gameObject
    UnityEngine::GameObject*& dyn__gameObject();
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x14FC2DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer* New_ctor(UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*, creationType>(gameObject)));
    }
    // public System.Void Dispose()
    // Offset: 0x14FC308
    void Dispose();
  }; // Zenject.DefaultGameObjectParentInstaller/Zenject.DefaultParentObjectDestroyer
  #pragma pack(pop)
  static check_size<sizeof(DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer), 16 + sizeof(UnityEngine::GameObject*)> __Zenject_DefaultGameObjectParentInstaller_DefaultParentObjectDestroyerSizeCheck;
  static_assert(sizeof(DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*, "Zenject", "DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::*)()>(&Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
