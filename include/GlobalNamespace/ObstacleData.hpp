// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
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
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleData*, "", "ObstacleData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleData : public ::GlobalNamespace::BeatmapObjectData {
    public:
    public:
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer <lineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 <lineIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$lineIndex$k__BackingField();
    // Get instance field reference: private NoteLineLayer <lineLayer>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_$lineLayer$k__BackingField();
    // Get instance field reference: private System.Single <duration>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$duration$k__BackingField();
    // Get instance field reference: private System.Int32 <width>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$width$k__BackingField();
    // Get instance field reference: private System.Int32 <height>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$height$k__BackingField();
    // public System.Int32 get_lineIndex()
    // Offset: 0x286FA5C
    int get_lineIndex();
    // private System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x286FA64
    void set_lineIndex(int value);
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x286FA6C
    ::GlobalNamespace::NoteLineLayer get_lineLayer();
    // protected System.Void set_lineLayer(NoteLineLayer value)
    // Offset: 0x286FA74
    void set_lineLayer(::GlobalNamespace::NoteLineLayer value);
    // public System.Single get_duration()
    // Offset: 0x286FA7C
    float get_duration();
    // private System.Void set_duration(System.Single value)
    // Offset: 0x286FA84
    void set_duration(float value);
    // public System.Int32 get_width()
    // Offset: 0x286FA8C
    int get_width();
    // private System.Void set_width(System.Int32 value)
    // Offset: 0x286FA94
    void set_width(int value);
    // public System.Int32 get_height()
    // Offset: 0x286FA9C
    int get_height();
    // private System.Void set_height(System.Int32 value)
    // Offset: 0x286FAA4
    void set_height(int value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, System.Single duration, System.Int32 width, System.Int32 height)
    // Offset: 0x286FAAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleData* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float duration, int width, int height) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleData*, creationType>(time, lineIndex, lineLayer, duration, width, height)));
    }
    // public System.Void UpdateDuration(System.Single duration)
    // Offset: 0x286FB20
    void UpdateDuration(float duration);
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x286FB28
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // public override System.Void Mirror(System.Int32 lineCount)
    // Offset: 0x286FBC4
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::Mirror(System.Int32 lineCount)
    void Mirror(int lineCount);
  }; // ObstacleData
  #pragma pack(pop)
  static check_size<sizeof(ObstacleData), 48 + sizeof(int)> __GlobalNamespace_ObstacleDataSizeCheck;
  static_assert(sizeof(ObstacleData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_lineIndex
// Il2CppName: set_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(int)>(&GlobalNamespace::ObstacleData::set_lineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_lineLayer
// Il2CppName: set_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(::GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::ObstacleData::set_lineLayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(float)>(&GlobalNamespace::ObstacleData::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(int)>(&GlobalNamespace::ObstacleData::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(int)>(&GlobalNamespace::ObstacleData::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::UpdateDuration
// Il2CppName: UpdateDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(float)>(&GlobalNamespace::ObstacleData::UpdateDuration)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "UpdateDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(int)>(&GlobalNamespace::ObstacleData::Mirror)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
