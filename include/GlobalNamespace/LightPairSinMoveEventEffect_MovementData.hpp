// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightPairSinMoveEventEffect
#include "GlobalNamespace/LightPairSinMoveEventEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LightPairSinMoveEventEffect::MovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairSinMoveEventEffect::MovementData*, "", "LightPairSinMoveEventEffect/MovementData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LightPairSinMoveEventEffect/MovementData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightPairSinMoveEventEffect::MovementData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: speed
    char __padding0[0x3] = {};
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x14
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 startPosition
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 startPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: startPosition and: transform
    char __padding2[0x4] = {};
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single startMovementValue
    // Size: 0x4
    // Offset: 0x30
    float startMovementValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single movementValue
    // Size: 0x4
    // Offset: 0x34
    float movementValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single side
    // Size: 0x4
    // Offset: 0x38
    float side;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean enabled
    bool& dyn_enabled();
    // Get instance field reference: public System.Single speed
    float& dyn_speed();
    // Get instance field reference: public UnityEngine.Vector3 startPosition
    UnityEngine::Vector3& dyn_startPosition();
    // Get instance field reference: public UnityEngine.Transform transform
    UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public System.Single startMovementValue
    float& dyn_startMovementValue();
    // Get instance field reference: public System.Single movementValue
    float& dyn_movementValue();
    // Get instance field reference: public System.Single side
    float& dyn_side();
    // public System.Void .ctor()
    // Offset: 0x13018F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightPairSinMoveEventEffect::MovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightPairSinMoveEventEffect::MovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightPairSinMoveEventEffect::MovementData*, creationType>()));
    }
  }; // LightPairSinMoveEventEffect/MovementData
  #pragma pack(pop)
  static check_size<sizeof(LightPairSinMoveEventEffect::MovementData), 56 + sizeof(float)> __GlobalNamespace_LightPairSinMoveEventEffect_MovementDataSizeCheck;
  static_assert(sizeof(LightPairSinMoveEventEffect::MovementData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::MovementData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
