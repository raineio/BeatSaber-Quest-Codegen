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
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialSceneSetupData
  class TutorialSceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSceneSetupData*, "", "TutorialSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  class TutorialSceneSetupData : public ::GlobalNamespace::SceneSetupData {
    public:
    public:
    // public readonly ColorScheme colorScheme
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorScheme*) == 0x8);
    // public readonly PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    public:
    // Get instance field reference: public readonly ColorScheme colorScheme
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorScheme*& dyn_colorScheme();
    // Get instance field reference: public readonly PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // public System.Void .ctor(ColorScheme colorScheme, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x1491A64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSceneSetupData* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSceneSetupData*, creationType>(colorScheme, playerSpecificSettings)));
    }
  }; // TutorialSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSceneSetupData), 24 + sizeof(::GlobalNamespace::PlayerSpecificSettings*)> __GlobalNamespace_TutorialSceneSetupDataSizeCheck;
  static_assert(sizeof(TutorialSceneSetupData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
