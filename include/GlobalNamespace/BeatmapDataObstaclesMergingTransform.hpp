// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataObstaclesMergingTransform
  class BeatmapDataObstaclesMergingTransform;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapDataObstaclesMergingTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesMergingTransform*, "", "BeatmapDataObstaclesMergingTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataObstaclesMergingTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataObstaclesMergingTransform : public ::Il2CppObject {
    public:
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x12D12E8
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static private System.Boolean CanBeMerged(ObstacleData firstObstacle, ObstacleData secondObstacle)
    // Offset: 0x12D1EF0
    static bool CanBeMerged(GlobalNamespace::ObstacleData* firstObstacle, GlobalNamespace::ObstacleData* secondObstacle);
    // static private System.Void RemoveLastObstaclesByRotationEvents(ObstacleData[] lastObstacleInLine, BeatmapObjectData beatmapObjectData, System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> events, ref System.Int32 eventIndex, ref System.Boolean obstaclesCanBeMerged)
    // Offset: 0x12D1AC4
    static void RemoveLastObstaclesByRotationEvents(::ArrayW<GlobalNamespace::ObstacleData*> lastObstacleInLine, GlobalNamespace::BeatmapObjectData* beatmapObjectData, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* events, ByRef<int> eventIndex, ByRef<bool> obstaclesCanBeMerged);
    // static private System.Void RemoveObstaclesInRange(ObstacleData[] obstacleInLine, System.Int32 startLine, System.Int32 endLine)
    // Offset: 0x12D1F60
    static void RemoveObstaclesInRange(::ArrayW<GlobalNamespace::ObstacleData*> obstacleInLine, int startLine, int endLine);
  }; // BeatmapDataObstaclesMergingTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData* (*)(GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged
// Il2CppName: CanBeMerged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::ObstacleData*, GlobalNamespace::ObstacleData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged)> {
  static const MethodInfo* get() {
    static auto* firstObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* secondObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CanBeMerged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstObstacle, secondObstacle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveLastObstaclesByRotationEvents
// Il2CppName: RemoveLastObstaclesByRotationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<GlobalNamespace::ObstacleData*>, GlobalNamespace::BeatmapObjectData*, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>*, ByRef<int>, ByRef<bool>)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveLastObstaclesByRotationEvents)> {
  static const MethodInfo* get() {
    static auto* lastObstacleInLine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ObstacleData"), 1)->byval_arg;
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    static auto* events = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    static auto* eventIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* obstaclesCanBeMerged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "RemoveLastObstaclesByRotationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastObstacleInLine, beatmapObjectData, events, eventIndex, obstaclesCanBeMerged});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveObstaclesInRange
// Il2CppName: RemoveObstaclesInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<GlobalNamespace::ObstacleData*>, int, int)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::RemoveObstaclesInRange)> {
  static const MethodInfo* get() {
    static auto* obstacleInLine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ObstacleData"), 1)->byval_arg;
    static auto* startLine = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* endLine = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "RemoveObstaclesInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleInLine, startLine, endLine});
  }
};
