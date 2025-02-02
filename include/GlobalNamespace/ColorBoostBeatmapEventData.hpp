// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorBoostBeatmapEventData
  class ColorBoostBeatmapEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorBoostBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorBoostBeatmapEventData*, "", "ColorBoostBeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: ColorBoostBeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorBoostBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
    public:
    public:
    // public readonly System.Boolean boostColorsAreOn
    // Size: 0x1
    // Offset: 0x30
    bool boostColorsAreOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return boostColorsAreOn;
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10F6B54
    // Get static field: static private readonly ColorBoostBeatmapEventData _defaultCopy
    static ::GlobalNamespace::ColorBoostBeatmapEventData* _get__defaultCopy();
    // Set static field: static private readonly ColorBoostBeatmapEventData _defaultCopy
    static void _set__defaultCopy(::GlobalNamespace::ColorBoostBeatmapEventData* value);
    // Get instance field reference: public readonly System.Boolean boostColorsAreOn
    [[deprecated("Use field access instead!")]] bool& dyn_boostColorsAreOn();
    // public System.Void .ctor(System.Single time, System.Boolean boostColorsAreOn)
    // Offset: 0x26F0614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorBoostBeatmapEventData* New_ctor(float time, bool boostColorsAreOn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorBoostBeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorBoostBeatmapEventData*, creationType>(time, boostColorsAreOn)));
    }
    // static private System.Void .cctor()
    // Offset: 0x26F075C
    static void _cctor();
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x26F0668
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // protected override BeatmapEventData GetDefault()
    // Offset: 0x26F06F4
    // Implemented from: BeatmapEventData
    // Base method: BeatmapEventData BeatmapEventData::GetDefault()
    ::GlobalNamespace::BeatmapEventData* GetDefault();
  }; // ColorBoostBeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(ColorBoostBeatmapEventData), 48 + sizeof(bool)> __GlobalNamespace_ColorBoostBeatmapEventDataSizeCheck;
  static_assert(sizeof(ColorBoostBeatmapEventData) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorBoostBeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorBoostBeatmapEventData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ColorBoostBeatmapEventData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorBoostBeatmapEventData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorBoostBeatmapEventData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::ColorBoostBeatmapEventData::*)()>(&GlobalNamespace::ColorBoostBeatmapEventData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorBoostBeatmapEventData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorBoostBeatmapEventData::GetDefault
// Il2CppName: GetDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (GlobalNamespace::ColorBoostBeatmapEventData::*)()>(&GlobalNamespace::ColorBoostBeatmapEventData::GetDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorBoostBeatmapEventData*), "GetDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
