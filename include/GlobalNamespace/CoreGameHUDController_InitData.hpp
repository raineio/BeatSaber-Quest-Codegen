// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CoreGameHUDController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreGameHUDController::InitData*, "", "CoreGameHUDController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x13
  #pragma pack(push, 1)
  // Autogenerated type: CoreGameHUDController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class CoreGameHUDController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean hide
    // Size: 0x1
    // Offset: 0x10
    bool hide;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean showEnergyPanel
    // Size: 0x1
    // Offset: 0x11
    bool showEnergyPanel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean advancedHUD
    // Size: 0x1
    // Offset: 0x12
    bool advancedHUD;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Boolean hide
    [[deprecated("Use field access instead!")]] bool& dyn_hide();
    // Get instance field reference: public readonly System.Boolean showEnergyPanel
    [[deprecated("Use field access instead!")]] bool& dyn_showEnergyPanel();
    // Get instance field reference: public readonly System.Boolean advancedHUD
    [[deprecated("Use field access instead!")]] bool& dyn_advancedHUD();
    // public System.Void .ctor(System.Boolean hide, System.Boolean showEnergyPanel, System.Boolean advancedHUD)
    // Offset: 0x1426664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreGameHUDController::InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CoreGameHUDController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreGameHUDController::InitData*, creationType>(hide, showEnergyPanel, advancedHUD)));
    }
  }; // CoreGameHUDController/InitData
  #pragma pack(pop)
  static check_size<sizeof(CoreGameHUDController::InitData), 18 + sizeof(bool)> __GlobalNamespace_CoreGameHUDController_InitDataSizeCheck;
  static_assert(sizeof(CoreGameHUDController::InitData) == 0x13);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
