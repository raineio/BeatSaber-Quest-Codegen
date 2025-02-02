// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: BeatmapSaveDataVersion2_6_0AndEarlier
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
  // Forward declaring type: BeatmapSaveDataItem
  class BeatmapSaveDataItem;
}
// Completed forward declares
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData*, "BeatmapSaveDataVersion3", "BeatmapSaveData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData : public ::Il2CppObject {
    public:
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem
    class BeatmapSaveDataItem;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData
    class BasicEventData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData
    class ColorBoostEventData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData
    class BpmChangeEventData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::ExecutionTime
    struct ExecutionTime;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData
    class RotationEventData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords
    class BasicEventTypesWithKeywords;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::EnvironmentColorType
    struct EnvironmentColorType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType
    struct TransitionType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis
    struct Axis;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType
    struct EaseType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox
    class EventBox;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType
    struct IndexFilterRandomType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType
    struct IndexFilterLimitAlsoAffectsType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter
    class IndexFilter;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox
    class LightColorEventBox;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorBaseData
    class LightColorBaseData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox
    class LightRotationEventBox;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData
    class LightRotationBaseData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox
    class LightTranslationEventBox;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData
    class LightTranslationBaseData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup
    class EventBoxGroup;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1<T>
    template<typename T>
    class EventBoxGroup_1;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup
    class LightColorEventBoxGroup;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBoxGroup
    class LightRotationEventBoxGroup;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBoxGroup
    class LightTranslationEventBoxGroup;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType
    struct NoteColorType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData
    class ColorNoteData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData
    class BombNoteData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData
    class WaypointData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::SliderType
    struct SliderType;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData
    class BaseSliderData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData
    class SliderData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData
    class BurstSliderData;
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData
    class ObstacleData;
    public:
    // public System.String version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BpmChangeEventData> bpmEvents
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*>* bpmEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.RotationEventData> rotationEvents
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*>* rotationEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorNoteData> colorNotes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*>* colorNotes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BombNoteData> bombNotes
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*>* bombNotes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData> obstacles
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*>* obstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderData> sliders
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*>* sliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData> burstSliders
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*>* burstSliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData> waypoints
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*>* waypoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData> basicBeatmapEvents
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*>* basicBeatmapEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData> colorBoostBeatmapEvents
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*>* colorBoostBeatmapEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup> lightColorEventBoxGroups
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*>* lightColorEventBoxGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBoxGroup> lightRotationEventBoxGroups
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBoxGroup*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationEventBoxGroup> lightTranslationEventBoxGroups
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBoxGroup*>*) == 0x8);
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords basicEventTypesWithKeywords
    // Size: 0x8
    // Offset: 0x80
    ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords* basicEventTypesWithKeywords;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords*) == 0x8);
    // public System.Boolean useNormalEventsAsCompatibleEvents
    // Size: 0x1
    // Offset: 0x88
    bool useNormalEventsAsCompatibleEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "3.2.0";
    // Get static field: static private System.String kCurrentVersion
    static ::StringW _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10F6EB4
    // Get static field: static private readonly System.Version version2_6_0
    static ::System::Version* _get_version2_6_0();
    // Set static field: static private readonly System.Version version2_6_0
    static void _set_version2_6_0(::System::Version* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10F6EC4
    // Get static field: static private readonly System.Single[] _spawnRotations
    static ::ArrayW<float> _get__spawnRotations();
    // Set static field: static private readonly System.Single[] _spawnRotations
    static void _set__spawnRotations(::ArrayW<float> value);
    // Get instance field reference: public System.String version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_version();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BpmChangeEventData> bpmEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*>*& dyn_bpmEvents();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.RotationEventData> rotationEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*>*& dyn_rotationEvents();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorNoteData> colorNotes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*>*& dyn_colorNotes();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BombNoteData> bombNotes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*>*& dyn_bombNotes();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData> obstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*>*& dyn_obstacles();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderData> sliders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*>*& dyn_sliders();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData> burstSliders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*>*& dyn_burstSliders();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData> waypoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*>*& dyn_waypoints();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData> basicBeatmapEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*>*& dyn_basicBeatmapEvents();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData> colorBoostBeatmapEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*>*& dyn_colorBoostBeatmapEvents();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup> lightColorEventBoxGroups
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*>*& dyn_lightColorEventBoxGroups();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBoxGroup> lightRotationEventBoxGroups
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBoxGroup*>*& dyn_lightRotationEventBoxGroups();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationEventBoxGroup> lightTranslationEventBoxGroups
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBoxGroup*>*& dyn_lightTranslationEventBoxGroups();
    // Get instance field reference: public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords basicEventTypesWithKeywords
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords*& dyn_basicEventTypesWithKeywords();
    // Get instance field reference: public System.Boolean useNormalEventsAsCompatibleEvents
    [[deprecated("Use field access instead!")]] bool& dyn_useNormalEventsAsCompatibleEvents();
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BpmChangeEventData> bpmEvents, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.RotationEventData> rotationEvents, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorNoteData> colorNotes, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BombNoteData> bombNotes, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData> obstacles, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderData> sliders, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData> burstSliders, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData> waypoints, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData> basicBeatmapEvents, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData> colorBoostBeatmapEvents, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup> lightColorEventBoxGroups, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBoxGroup> lightRotationEventBoxGroups, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationEventBoxGroup> lightTranslationEventBoxGroups, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords basicEventTypesWithKeywords, System.Boolean useNormalEventsAsCompatibleEvents)
    // Offset: 0x26EDBD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData* New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*>* bpmEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*>* rotationEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*>* colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*>* bombNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*>* obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*>* sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*>* burstSliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*>* waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*>* basicBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*>* colorBoostBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*>* lightColorEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBoxGroup*>* lightRotationEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups, ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData*, creationType>(bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents, colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups, lightTranslationEventBoxGroups, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents)));
    }
    // static private System.Void .cctor()
    // Offset: 0x26EF658
    static void _cctor();
    // public System.String SerializeToJSONString()
    // Offset: 0x26EDCD0
    ::StringW SerializeToJSONString();
    // static public BeatmapSaveDataVersion3.BeatmapSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0x26EDCD8
    static ::BeatmapSaveDataVersion3::BeatmapSaveData* DeserializeFromJSONString(::StringW stringData);
    // static public BeatmapSaveDataVersion3.BeatmapSaveData ConvertBeatmapSaveData(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData beatmapSaveData)
    // Offset: 0x26EDEA8
    static ::BeatmapSaveDataVersion3::BeatmapSaveData* ConvertBeatmapSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData);
    // static private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType GetNoteColorType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType noteType)
    // Offset: 0x26EF210
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType noteType);
    // static private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType GetNoteColorType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ColorType colorType)
    // Offset: 0x26EF308
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ColorType colorType);
    // static private System.Int32 GetHeightForObstacleType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType obstacleType)
    // Offset: 0x26EF290
    static int GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType obstacleType);
    // static private System.Int32 GetLayerForObstacleType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType obstacleType)
    // Offset: 0x26EF280
    static int GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType obstacleType);
    // static private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderType GetSliderType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.SliderType sliderType)
    // Offset: 0x26EF64C
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::SliderType GetSliderType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SliderType sliderType);
    // static private System.Single SpawnRotationForEventValue(System.Int32 index)
    // Offset: 0x26EF43C
    static float SpawnRotationForEventValue(int index);
    // static private System.Boolean BeatmapSaveDataAreSorted(System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem> beatmapSaveData)
    // Offset: 0x26EEFE4
    static bool BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData);
  }; // BeatmapSaveDataVersion3.BeatmapSaveData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData), 136 + sizeof(bool)> __BeatmapSaveDataVersion3_BeatmapSaveDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData) == 0x89);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString
// Il2CppName: SerializeToJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BeatmapSaveDataVersion3::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "SerializeToJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString
// Il2CppName: DeserializeFromJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::StringW)>(&BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString)> {
  static const MethodInfo* get() {
    static auto* stringData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "DeserializeFromJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringData});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData
// Il2CppName: ConvertBeatmapSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(&BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "ConvertBeatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType
// Il2CppName: GetNoteColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType)>(&BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  static const MethodInfo* get() {
    static auto* noteType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "GetNoteColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteType});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType
// Il2CppName: GetNoteColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ColorType)>(&BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "GetNoteColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType
// Il2CppName: GetHeightForObstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType)>(&BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType)> {
  static const MethodInfo* get() {
    static auto* obstacleType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "GetHeightForObstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleType});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType
// Il2CppName: GetLayerForObstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType)>(&BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType)> {
  static const MethodInfo* get() {
    static auto* obstacleType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "GetLayerForObstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleType});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType
// Il2CppName: GetSliderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::SliderType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SliderType)>(&BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType)> {
  static const MethodInfo* get() {
    static auto* sliderType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SliderType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "GetSliderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderType});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue
// Il2CppName: SpawnRotationForEventValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "SpawnRotationForEventValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted
// Il2CppName: BeatmapSaveDataAreSorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*)>(&BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData*), "BeatmapSaveDataAreSorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData});
  }
};
