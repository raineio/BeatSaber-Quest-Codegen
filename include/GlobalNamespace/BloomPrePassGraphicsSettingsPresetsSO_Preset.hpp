// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassGraphicsSettingsPresetsSO
#include "GlobalNamespace/BloomPrePassGraphicsSettingsPresetsSO.hpp"
// Including type: NamedPreset
#include "GlobalNamespace/NamedPreset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassEffectSO
  class BloomPrePassEffectSO;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::Preset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::Preset*, "", "BloomPrePassGraphicsSettingsPresetsSO/Preset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassGraphicsSettingsPresetsSO/Preset
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassGraphicsSettingsPresetsSO::Preset : public GlobalNamespace::NamedPreset {
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
    // public BloomPrePassEffectSO bloomPrePassEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // Get instance field reference: public BloomPrePassEffectSO bloomPrePassEffect
    GlobalNamespace::BloomPrePassEffectSO*& dyn_bloomPrePassEffect();
    // public System.Void .ctor()
    // Offset: 0x1180F8C
    // Implemented from: NamedPreset
    // Base method: System.Void NamedPreset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassGraphicsSettingsPresetsSO::Preset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::Preset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassGraphicsSettingsPresetsSO::Preset*, creationType>()));
    }
  }; // BloomPrePassGraphicsSettingsPresetsSO/Preset
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassGraphicsSettingsPresetsSO::Preset), 24 + sizeof(GlobalNamespace::BloomPrePassEffectSO*)> __GlobalNamespace_BloomPrePassGraphicsSettingsPresetsSO_PresetSizeCheck;
  static_assert(sizeof(BloomPrePassGraphicsSettingsPresetsSO::Preset) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::Preset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
