// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DroneHover
#include "GlobalNamespace/DroneHover.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DroneHover::SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroneHover::SineLayer*, "", "DroneHover/SineLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DroneHover/SineLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class DroneHover::SineLayer : public ::Il2CppObject {
    public:
    public:
    // public System.Single multiplier
    // Size: 0x4
    // Offset: 0x10
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x14
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single multiplier
    [[deprecated("Use field access instead!")]] float& dyn_multiplier();
    // Get instance field reference: public System.Single offset
    [[deprecated("Use field access instead!")]] float& dyn_offset();
    // public System.Void .ctor()
    // Offset: 0x14314AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DroneHover::SineLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DroneHover::SineLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DroneHover::SineLayer*, creationType>()));
    }
  }; // DroneHover/SineLayer
  #pragma pack(pop)
  static check_size<sizeof(DroneHover::SineLayer), 20 + sizeof(float)> __GlobalNamespace_DroneHover_SineLayerSizeCheck;
  static_assert(sizeof(DroneHover::SineLayer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::SineLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
