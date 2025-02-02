// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HapticFeedbackController
#include "GlobalNamespace/HapticFeedbackController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackController::RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackController::RumbleData*, "", "HapticFeedbackController/RumbleData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HapticFeedbackController/RumbleData
  // [TokenAttribute] Offset: FFFFFFFF
  class HapticFeedbackController::RumbleData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean active
    // Size: 0x1
    // Offset: 0x10
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean continuous
    // Size: 0x1
    // Offset: 0x11
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: continuous and: strength
    char __padding1[0x2] = {};
    // public System.Single strength
    // Size: 0x4
    // Offset: 0x14
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endTime
    // Size: 0x4
    // Offset: 0x18
    float endTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single frequency
    // Size: 0x4
    // Offset: 0x1C
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean active
    [[deprecated("Use field access instead!")]] bool& dyn_active();
    // Get instance field reference: public System.Boolean continuous
    [[deprecated("Use field access instead!")]] bool& dyn_continuous();
    // Get instance field reference: public System.Single strength
    [[deprecated("Use field access instead!")]] float& dyn_strength();
    // Get instance field reference: public System.Single endTime
    [[deprecated("Use field access instead!")]] float& dyn_endTime();
    // Get instance field reference: public System.Single frequency
    [[deprecated("Use field access instead!")]] float& dyn_frequency();
    // public System.Void .ctor()
    // Offset: 0x1627FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticFeedbackController::RumbleData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HapticFeedbackController::RumbleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticFeedbackController::RumbleData*, creationType>()));
    }
  }; // HapticFeedbackController/RumbleData
  #pragma pack(pop)
  static check_size<sizeof(HapticFeedbackController::RumbleData), 28 + sizeof(float)> __GlobalNamespace_HapticFeedbackController_RumbleDataSizeCheck;
  static_assert(sizeof(HapticFeedbackController::RumbleData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::RumbleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
