// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSaveData
  class BeatmapSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapSaveData::BeatmapObjectType
    struct BeatmapObjectType;
    // Nested type: GlobalNamespace::BeatmapSaveData::NoteType
    struct NoteType;
    // Nested type: GlobalNamespace::BeatmapSaveData::BeatmapEventType
    struct BeatmapEventType;
    // Nested type: GlobalNamespace::BeatmapSaveData::ITime
    class ITime;
    // Nested type: GlobalNamespace::BeatmapSaveData::EventData
    class EventData;
    // Nested type: GlobalNamespace::BeatmapSaveData::NoteData
    class NoteData;
    // Nested type: GlobalNamespace::BeatmapSaveData::ObstacleData
    class ObstacleData;
    // private System.String _version
    // Offset: 0x10
    ::Il2CppString* version;
    // private System.Collections.Generic.List`1<BeatmapSaveData/EventData> _events
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* events;
    // private System.Collections.Generic.List`1<BeatmapSaveData/NoteData> _notes
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notes;
    // private System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> _obstacles
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstacles;
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.1.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // public System.String get_version()
    // Offset: 0x1FABECC
    ::Il2CppString* get_version();
    // public System.Collections.Generic.List`1<BeatmapSaveData/EventData> get_events()
    // Offset: 0x1FABED4
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* get_events();
    // public System.Collections.Generic.List`1<BeatmapSaveData/NoteData> get_notes()
    // Offset: 0x1FABEDC
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* get_notes();
    // public System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> get_obstacles()
    // Offset: 0x1FABEE4
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* get_obstacles();
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapSaveData/EventData> events, System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notes, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstacles)
    // Offset: 0x1FABEEC
    static BeatmapSaveData* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* events, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notes, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstacles);
    // public System.Byte[] SerializeToBinary()
    // Offset: 0x1FABF98
    ::Array<uint8_t>* SerializeToBinary();
    // static public BeatmapSaveData DeserializeFromFromBinary(System.Byte[] data)
    // Offset: 0x1FAC128
    static GlobalNamespace::BeatmapSaveData* DeserializeFromFromBinary(::Array<uint8_t>* data);
    // public System.String SerializeToJSONString()
    // Offset: 0x1FAC2C8
    ::Il2CppString* SerializeToJSONString();
    // static public BeatmapSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0x1FAC2D0
    static GlobalNamespace::BeatmapSaveData* DeserializeFromJSONString(::Il2CppString* stringData);
  }; // BeatmapSaveData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData*, "", "BeatmapSaveData");
#pragma pack(pop)
