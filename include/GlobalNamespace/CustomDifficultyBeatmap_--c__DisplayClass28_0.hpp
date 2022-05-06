// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CustomDifficultyBeatmap
#include "GlobalNamespace/CustomDifficultyBeatmap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0*, "", "CustomDifficultyBeatmap/<>c__DisplayClass28_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CustomDifficultyBeatmap/<>c__DisplayClass28_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CustomDifficultyBeatmap::$$c__DisplayClass28_0 : public ::Il2CppObject {
    public:
    public:
    // public IReadonlyBeatmapData readonlyBeatmapData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IReadonlyBeatmapData* readonlyBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public CustomDifficultyBeatmap <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CustomDifficultyBeatmap* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CustomDifficultyBeatmap*) == 0x8);
    // public EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    public:
    // Get instance field reference: public IReadonlyBeatmapData readonlyBeatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn_readonlyBeatmapData();
    // Get instance field reference: public CustomDifficultyBeatmap <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CustomDifficultyBeatmap*& dyn_$$4__this();
    // Get instance field reference: public EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // public System.Void .ctor()
    // Offset: 0x1429AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDifficultyBeatmap::$$c__DisplayClass28_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDifficultyBeatmap::$$c__DisplayClass28_0*, creationType>()));
    }
    // System.Void <GetBeatmapDataAsync>b__0()
    // Offset: 0x1429AC8
    void $GetBeatmapDataAsync$b__0();
  }; // CustomDifficultyBeatmap/<>c__DisplayClass28_0
  #pragma pack(pop)
  static check_size<sizeof(CustomDifficultyBeatmap::$$c__DisplayClass28_0), 40 + sizeof(::GlobalNamespace::PlayerSpecificSettings*)> __GlobalNamespace_CustomDifficultyBeatmap_$$c__DisplayClass28_0SizeCheck;
  static_assert(sizeof(CustomDifficultyBeatmap::$$c__DisplayClass28_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0::$GetBeatmapDataAsync$b__0
// Il2CppName: <GetBeatmapDataAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0::$GetBeatmapDataAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0*), "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
