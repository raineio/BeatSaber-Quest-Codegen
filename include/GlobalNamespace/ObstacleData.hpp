// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleData : public GlobalNamespace::BeatmapObjectData {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private ObstacleType <obstacleType>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ObstacleType obstacleType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleType) == 0x4);
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private ObstacleType <obstacleType>k__BackingField
    GlobalNamespace::ObstacleType& dyn_$obstacleType$k__BackingField();
    // Get instance field reference: private System.Single <duration>k__BackingField
    float& dyn_$duration$k__BackingField();
    // Get instance field reference: private System.Int32 <width>k__BackingField
    int& dyn_$width$k__BackingField();
    // public ObstacleType get_obstacleType()
    // Offset: 0x2615074
    GlobalNamespace::ObstacleType get_obstacleType();
    // private System.Void set_obstacleType(ObstacleType value)
    // Offset: 0x261507C
    void set_obstacleType(GlobalNamespace::ObstacleType value);
    // public System.Single get_duration()
    // Offset: 0x2615084
    float get_duration();
    // private System.Void set_duration(System.Single value)
    // Offset: 0x261508C
    void set_duration(float value);
    // public System.Int32 get_width()
    // Offset: 0x2615094
    int get_width();
    // private System.Void set_width(System.Int32 value)
    // Offset: 0x261509C
    void set_width(int value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, ObstacleType obstacleType, System.Single duration, System.Int32 width)
    // Offset: 0x26150A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleData* New_ctor(float time, int lineIndex, GlobalNamespace::ObstacleType obstacleType, float duration, int width) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleData*, creationType>(time, lineIndex, obstacleType, duration, width)));
    }
    // public System.Void UpdateDuration(System.Single duration)
    // Offset: 0x26150FC
    void UpdateDuration(float duration);
    // public override BeatmapObjectType get_beatmapObjectType()
    // Offset: 0x261506C
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectType BeatmapObjectData::get_beatmapObjectType()
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public override BeatmapObjectData GetCopy()
    // Offset: 0x2615104
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectData BeatmapObjectData::GetCopy()
    GlobalNamespace::BeatmapObjectData* GetCopy();
    // public override System.Void Mirror(System.Int32 lineCount)
    // Offset: 0x2615184
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::Mirror(System.Int32 lineCount)
    void Mirror(int lineCount);
  }; // ObstacleData
  #pragma pack(pop)
  static check_size<sizeof(ObstacleData), 32 + sizeof(int)> __GlobalNamespace_ObstacleDataSizeCheck;
  static_assert(sizeof(ObstacleData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleData*, "", "ObstacleData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_obstacleType
// Il2CppName: get_obstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleType (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_obstacleType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_obstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::set_obstacleType
// Il2CppName: set_obstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleData::*)(GlobalNamespace::ObstacleType)>(&GlobalNamespace::ObstacleData::set_obstacleType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ObstacleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "set_obstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::get_beatmapObjectType
// Il2CppName: get_beatmapObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectType (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::get_beatmapObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleData*), "get_beatmapObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectData* (GlobalNamespace::ObstacleData::*)()>(&GlobalNamespace::ObstacleData::GetCopy)> {
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
