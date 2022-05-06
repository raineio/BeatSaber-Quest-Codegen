// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveDataItem.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/WaypointData");
// Type namespace: BeatmapSaveDataVersion2_6_0AndEarlier
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.WaypointData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::WaypointData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
    public:
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer _lineLayer
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // private OffsetDirection _offsetDirection
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::OffsetDirection offsetDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OffsetDirection) == 0x4);
    public:
    // Get instance field reference: private System.Single _time
    [[deprecated("Use field access instead!")]] float& dyn__time();
    // Get instance field reference: private System.Int32 _lineIndex
    [[deprecated("Use field access instead!")]] int& dyn__lineIndex();
    // Get instance field reference: private NoteLineLayer _lineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn__lineLayer();
    // Get instance field reference: private OffsetDirection _offsetDirection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OffsetDirection& dyn__offsetDirection();
    // public System.Int32 get_lineIndex()
    // Offset: 0x286BAD8
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x286BAE0
    ::GlobalNamespace::NoteLineLayer get_lineLayer();
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x286BAE8
    ::GlobalNamespace::OffsetDirection get_offsetDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, OffsetDirection offsetDirection)
    // Offset: 0x286BAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::WaypointData* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::WaypointData*, creationType>(time, lineIndex, lineLayer, offsetDirection)));
    }
    // public override System.Single get_time()
    // Offset: 0x286BAD0
    // Implemented from: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
    // Base method: System.Single BeatmapSaveDataItem::get_time()
    float get_time();
  }; // BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.WaypointData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::WaypointData), 28 + sizeof(::GlobalNamespace::OffsetDirection)> __BeatmapSaveDataVersion2_6_0AndEarlier_BeatmapSaveData_WaypointDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::WaypointData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_offsetDirection
// Il2CppName: get_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_offsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData*), "get_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::WaypointData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
