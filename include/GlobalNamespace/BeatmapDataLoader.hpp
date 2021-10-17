// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: BeatmapEventType
  struct BeatmapEventType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataLoader
  class BeatmapDataLoader;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataLoader::BpmChangeData
    struct BpmChangeData;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c
    class $$c;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapDataLoader/BpmChangeData
    // [TokenAttribute] Offset: FFFFFFFF
    struct BpmChangeData/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public readonly System.Single bpmChangeStartTime
      // Size: 0x4
      // Offset: 0x0
      float bpmChangeStartTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Single bpmChangeStartBpmTime
      // Size: 0x4
      // Offset: 0x4
      float bpmChangeStartBpmTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Single bpm
      // Size: 0x4
      // Offset: 0x8
      float bpm;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: BpmChangeData
      constexpr BpmChangeData(float bpmChangeStartTime_ = {}, float bpmChangeStartBpmTime_ = {}, float bpm_ = {}) noexcept : bpmChangeStartTime{bpmChangeStartTime_}, bpmChangeStartBpmTime{bpmChangeStartBpmTime_}, bpm{bpm_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single bpmChangeStartTime
      float& dyn_bpmChangeStartTime();
      // Get instance field reference: public readonly System.Single bpmChangeStartBpmTime
      float& dyn_bpmChangeStartBpmTime();
      // Get instance field reference: public readonly System.Single bpm
      float& dyn_bpm();
      // public System.Void .ctor(System.Single bpmChangeStartTime, System.Single bpmChangeStartBpmTime, System.Single bpm)
      // Offset: 0x1245970
      // ABORTED: conflicts with another method.  BpmChangeData(float bpmChangeStartTime, float bpmChangeStartBpmTime, float bpm);
    }; // BeatmapDataLoader/BpmChangeData
    #pragma pack(pop)
    static check_size<sizeof(BeatmapDataLoader::BpmChangeData), 8 + sizeof(float)> __GlobalNamespace_BeatmapDataLoader_BpmChangeDataSizeCheck;
    static_assert(sizeof(BeatmapDataLoader::BpmChangeData) == 0xC);
    // private System.Single GetRealTimeFromBPMTime(System.Single bmpTime, System.Single bpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1244B80
    float GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBeatmapSaveData(System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> waypointsSaveData, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstaclesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/EventData> eventsSaveData, BeatmapSaveData/SpecialEventKeywordFiltersData environmentSpecialEventFilterData, System.Single startBpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1244BEC
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypointsSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* environmentSpecialEventFilterData, float startBpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBinary(System.Byte[] data, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1245CA4
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBinary(::ArrayW<uint8_t> data, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromJson(System.String json, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1245D1C
    GlobalNamespace::BeatmapData* GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod);
    // static private ColorType ColorTypeFromBeatmapSaveDataNoteType(BeatmapSaveData/NoteType noteType)
    // Offset: 0x1245C84
    static GlobalNamespace::ColorType ColorTypeFromBeatmapSaveDataNoteType(GlobalNamespace::BeatmapSaveData::NoteType noteType);
    // static private ColorType ColorTypeFromBeatmapSaveDataColorType(BeatmapSaveData/ColorType colorType)
    // Offset: 0x1245D94
    static GlobalNamespace::ColorType ColorTypeFromBeatmapSaveDataColorType(GlobalNamespace::BeatmapSaveData::ColorType colorType);
    // static private BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(BeatmapSaveData/BeatmapEventType beatmapEventType)
    // Offset: 0x124597C
    static GlobalNamespace::BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(GlobalNamespace::BeatmapSaveData::BeatmapEventType beatmapEventType);
    // private System.Single ProcessTime(System.Single bpmTime, System.Collections.Generic.List`1<BeatmapDataLoader/BpmChangeData> bpmChangesData, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1245B14
    float ProcessTime(float bpmTime, System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>* bpmChangesData, float shuffle, float shufflePeriod);
    // static BeatmapSaveData/ITime <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3(BeatmapSaveData/ITime[] data)
    // Offset: 0x1245980
    static GlobalNamespace::BeatmapSaveData::ITime* $GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3(::ArrayW<GlobalNamespace::BeatmapSaveData::ITime*> data);
    // public System.Void .ctor()
    // Offset: 0x1245DA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader*, creationType>()));
    }
  }; // BeatmapDataLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::BpmChangeData, "", "BeatmapDataLoader/BpmChangeData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetRealTimeFromBPMTime
// Il2CppName: GetRealTimeFromBPMTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapDataLoader::*)(float, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetRealTimeFromBPMTime)> {
  static const MethodInfo* get() {
    static auto* bmpTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetRealTimeFromBPMTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bmpTime, bpm, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData
// Il2CppName: GetBeatmapDataFromBeatmapSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData)> {
  static const MethodInfo* get() {
    static auto* notesSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteData")})->byval_arg;
    static auto* waypointsSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/WaypointData")})->byval_arg;
    static auto* obstaclesSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ObstacleData")})->byval_arg;
    static auto* eventsSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/EventData")})->byval_arg;
    static auto* environmentSpecialEventFilterData = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/SpecialEventKeywordFiltersData")->byval_arg;
    static auto* startBpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notesSaveData, waypointsSaveData, obstaclesSaveData, eventsSaveData, environmentSpecialEventFilterData, startBpm, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBinary
// Il2CppName: GetBeatmapDataFromBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(::ArrayW<uint8_t>, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBinary)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startBPM = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, startBPM, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromJson
// Il2CppName: GetBeatmapDataFromJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(::Il2CppString*, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromJson)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startBPM = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, startBPM, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataNoteType
// Il2CppName: ColorTypeFromBeatmapSaveDataNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::BeatmapSaveData::NoteType)>(&GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataNoteType)> {
  static const MethodInfo* get() {
    static auto* noteType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ColorTypeFromBeatmapSaveDataNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataColorType
// Il2CppName: ColorTypeFromBeatmapSaveDataColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::BeatmapSaveData::ColorType)>(&GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataColorType)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ColorTypeFromBeatmapSaveDataColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType
// Il2CppName: ConvertFromBeatmapSaveDataBeatmapEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventType (*)(GlobalNamespace::BeatmapSaveData::BeatmapEventType)>(&GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType)> {
  static const MethodInfo* get() {
    static auto* beatmapEventType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/BeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertFromBeatmapSaveDataBeatmapEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ProcessTime
// Il2CppName: ProcessTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapDataLoader::*)(float, System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>*, float, float)>(&GlobalNamespace::BeatmapDataLoader::ProcessTime)> {
  static const MethodInfo* get() {
    static auto* bpmTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bpmChangesData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataLoader/BpmChangeData")})->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ProcessTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpmTime, bpmChangesData, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::ITime* (*)(::ArrayW<GlobalNamespace::BeatmapSaveData::ITime*>)>(&GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ITime"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "<GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
