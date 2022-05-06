// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionLevelFailedController
#include "GlobalNamespace/MissionLevelFailedController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelFailedController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelFailedController::InitData*, "", "MissionLevelFailedController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelFailedController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelFailedController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x10
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return autoRestart;
    }
    // Get instance field reference: public readonly System.Boolean autoRestart
    [[deprecated("Use field access instead!")]] bool& dyn_autoRestart();
    // public System.Void .ctor(System.Boolean autoRestart)
    // Offset: 0x13017BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelFailedController::InitData* New_ctor(bool autoRestart) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelFailedController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelFailedController::InitData*, creationType>(autoRestart)));
    }
  }; // MissionLevelFailedController/InitData
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelFailedController::InitData), 16 + sizeof(bool)> __GlobalNamespace_MissionLevelFailedController_InitDataSizeCheck;
  static_assert(sizeof(MissionLevelFailedController::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
