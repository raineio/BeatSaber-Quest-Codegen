// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, "", "MainEffectGraphicsSettingsPresetsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MainEffectGraphicsSettingsPresetsSO : public ::GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset
    class Preset;
    public:
    // private MainEffectGraphicsSettingsPresetsSO/Preset[] _presets
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*> presets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MainEffectGraphicsSettingsPresetsSO/Preset[] _presets
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>& dyn__presets();
    // public MainEffectGraphicsSettingsPresetsSO/Preset[] get_presets()
    // Offset: 0x1344710
    ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*> get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0x1344718
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::ArrayW<::GlobalNamespace::NamedPreset*> get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0x1344720
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectGraphicsSettingsPresetsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectGraphicsSettingsPresetsSO*, creationType>()));
    }
  }; // MainEffectGraphicsSettingsPresetsSO
  #pragma pack(pop)
  static check_size<sizeof(MainEffectGraphicsSettingsPresetsSO), 24 + sizeof(::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>)> __GlobalNamespace_MainEffectGraphicsSettingsPresetsSOSizeCheck;
  static_assert(sizeof(MainEffectGraphicsSettingsPresetsSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets
// Il2CppName: get_presets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*> (GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(&GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*), "get_presets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets
// Il2CppName: get_namedPresets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(&GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*), "get_namedPresets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
