// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/BeatmapEventType
#include "GlobalNamespace/BeatmapSaveData_BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSaveData/SpecialEventsForKeyword
  class BeatmapSaveData::SpecialEventsForKeyword : public ::Il2CppObject {
    public:
    // private System.String _keyword
    // Offset: 0x10
    ::Il2CppString* keyword;
    // private System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> _specialEvents
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* specialEvents;
    // public System.String get_keyword()
    // Offset: 0x1A2D678
    ::Il2CppString* get_keyword();
    // public System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> get_specialEvents()
    // Offset: 0x1A2D680
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* get_specialEvents();
    // public System.Void .ctor(System.String keyword, System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> specialEvents)
    // Offset: 0x1A2D688
    static BeatmapSaveData::SpecialEventsForKeyword* New_ctor(::Il2CppString* keyword, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* specialEvents);
  }; // BeatmapSaveData/SpecialEventsForKeyword
  check_size<sizeof(BeatmapSaveData::SpecialEventsForKeyword), 24 + sizeof(void*) + 8 - (24 + sizeof(void*)) % 8> __GlobalNamespace_BeatmapSaveData_SpecialEventsForKeywordSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*, "", "BeatmapSaveData/SpecialEventsForKeyword");
#pragma pack(pop)