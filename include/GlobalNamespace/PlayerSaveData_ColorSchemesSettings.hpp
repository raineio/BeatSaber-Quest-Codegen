// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlayerSaveData::ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::ColorSchemesSettings*, "", "PlayerSaveData/ColorSchemesSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/ColorSchemesSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::ColorSchemesSettings : public ::Il2CppObject {
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
    // public System.Boolean overrideDefaultColors
    // Size: 0x1
    // Offset: 0x10
    bool overrideDefaultColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideDefaultColors and: selectedColorSchemeId
    char __padding0[0x7] = {};
    // public System.String selectedColorSchemeId
    // Size: 0x8
    // Offset: 0x18
    ::StringW selectedColorSchemeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean overrideDefaultColors
    bool& dyn_overrideDefaultColors();
    // Get instance field reference: public System.String selectedColorSchemeId
    ::StringW& dyn_selectedColorSchemeId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>*& dyn_colorSchemes();
    // public System.Void .ctor(System.Boolean overrideDefaultColors, System.String selectedColorSchemeId, System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes)
    // Offset: 0x11AA918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::ColorSchemesSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::ColorSchemesSettings*, creationType>(overrideDefaultColors, selectedColorSchemeId, colorSchemes)));
    }
  }; // PlayerSaveData/ColorSchemesSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::ColorSchemesSettings), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>*)> __GlobalNamespace_PlayerSaveData_ColorSchemesSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::ColorSchemesSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::ColorSchemesSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
