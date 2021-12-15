// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PatternFightSceneSetupData
  class PatternFightSceneSetupData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PatternFightSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSceneSetupData*, "", "PatternFightSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  class PatternFightSceneSetupData : public GlobalNamespace::SceneSetupData {
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
    // public readonly PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // public readonly ColorScheme colorScheme
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    public:
    // Get instance field reference: public readonly PlayerSpecificSettings playerSpecificSettings
    GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: public readonly ColorScheme colorScheme
    GlobalNamespace::ColorScheme*& dyn_colorScheme();
    // public System.Void .ctor(PlayerSpecificSettings playerSpecificSettings, ColorScheme colorScheme)
    // Offset: 0x114AAE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSceneSetupData* New_ctor(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::ColorScheme* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSceneSetupData*, creationType>(playerSpecificSettings, colorScheme)));
    }
  }; // PatternFightSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(PatternFightSceneSetupData), 24 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_PatternFightSceneSetupDataSizeCheck;
  static_assert(sizeof(PatternFightSceneSetupData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
