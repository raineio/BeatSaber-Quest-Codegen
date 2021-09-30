// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: FireworkItemController/FireworkItemParticleSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworkItemController::FireworkItemParticleSystem : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // public System.Boolean _isSubemitter
    // Size: 0x1
    // Offset: 0x18
    bool isSubemitter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _useMainColor
    // Size: 0x1
    // Offset: 0x19
    bool useMainColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DrawIfAttribute] Offset: 0xF15E90
    // public System.Boolean _useOwnGradient
    // Size: 0x1
    // Offset: 0x1A
    bool useOwnGradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useOwnGradient and: particleColorGradient
    char __padding3[0x5] = {};
    // [DrawIfAttribute] Offset: 0xF15F24
    // public UnityEngine.Gradient _particleColorGradient
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Gradient* particleColorGradient;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // public System.Boolean _randomizeSpeed
    // Size: 0x1
    // Offset: 0x28
    bool randomizeSpeed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.ParticleSystem _particleSystem
    UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: public System.Boolean _isSubemitter
    bool& dyn__isSubemitter();
    // Get instance field reference: public System.Boolean _useMainColor
    bool& dyn__useMainColor();
    // Get instance field reference: public System.Boolean _useOwnGradient
    bool& dyn__useOwnGradient();
    // Get instance field reference: public UnityEngine.Gradient _particleColorGradient
    UnityEngine::Gradient*& dyn__particleColorGradient();
    // Get instance field reference: public System.Boolean _randomizeSpeed
    bool& dyn__randomizeSpeed();
    // public System.Void .ctor()
    // Offset: 0x11B7ACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworkItemController::FireworkItemParticleSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworkItemController::FireworkItemParticleSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworkItemController::FireworkItemParticleSystem*, creationType>()));
    }
  }; // FireworkItemController/FireworkItemParticleSystem
  #pragma pack(pop)
  static check_size<sizeof(FireworkItemController::FireworkItemParticleSystem), 40 + sizeof(bool)> __GlobalNamespace_FireworkItemController_FireworkItemParticleSystemSizeCheck;
  static_assert(sizeof(FireworkItemController::FireworkItemParticleSystem) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*, "", "FireworkItemController/FireworkItemParticleSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::FireworkItemParticleSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
