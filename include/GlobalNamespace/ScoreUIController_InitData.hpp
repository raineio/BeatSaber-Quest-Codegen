// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScoreUIController
#include "GlobalNamespace/ScoreUIController.hpp"
// Including type: ScoreUIController/ScoreDisplayType
#include "GlobalNamespace/ScoreUIController_ScoreDisplayType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ScoreUIController::InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController::InitData*, "", "ScoreUIController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: ScoreUIController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreUIController::InitData : public ::Il2CppObject {
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
    // public readonly ScoreUIController/ScoreDisplayType scoreDisplayType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreUIController::ScoreDisplayType) == 0x4);
    public:
    // Creating conversion operator: operator GlobalNamespace::ScoreUIController::ScoreDisplayType
    constexpr operator GlobalNamespace::ScoreUIController::ScoreDisplayType() const noexcept {
      return scoreDisplayType;
    }
    // Get instance field reference: public readonly ScoreUIController/ScoreDisplayType scoreDisplayType
    GlobalNamespace::ScoreUIController::ScoreDisplayType& dyn_scoreDisplayType();
    // public System.Void .ctor(ScoreUIController/ScoreDisplayType scoreDisplayType)
    // Offset: 0x1232CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreUIController::InitData* New_ctor(GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreUIController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreUIController::InitData*, creationType>(scoreDisplayType)));
    }
  }; // ScoreUIController/InitData
  #pragma pack(pop)
  static check_size<sizeof(ScoreUIController::InitData), 16 + sizeof(GlobalNamespace::ScoreUIController::ScoreDisplayType)> __GlobalNamespace_ScoreUIController_InitDataSizeCheck;
  static_assert(sizeof(ScoreUIController::InitData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
