// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventData*, "", "BeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly BeatmapEventType type
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapEventType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x14
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapEventData <nextSameTypeEvent>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapEventData* nextSameTypeEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventData*) == 0x8);
    // public readonly System.Int32 value
    // Size: 0x4
    // Offset: 0x20
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single floatValue
    // Size: 0x4
    // Offset: 0x24
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly BeatmapEventType type
    GlobalNamespace::BeatmapEventType& dyn_type();
    // Get instance field reference: public readonly System.Single time
    float& dyn_time();
    // Get instance field reference: private BeatmapEventData <nextSameTypeEvent>k__BackingField
    GlobalNamespace::BeatmapEventData*& dyn_$nextSameTypeEvent$k__BackingField();
    // Get instance field reference: public readonly System.Int32 value
    int& dyn_value();
    // Get instance field reference: public readonly System.Single floatValue
    float& dyn_floatValue();
    // public BeatmapEventData get_nextSameTypeEvent()
    // Offset: 0x26BD090
    GlobalNamespace::BeatmapEventData* get_nextSameTypeEvent();
    // public System.Void set_nextSameTypeEvent(BeatmapEventData value)
    // Offset: 0x26BD098
    void set_nextSameTypeEvent(GlobalNamespace::BeatmapEventData* value);
    // public System.Void .ctor(System.Single time, BeatmapEventType type, System.Int32 value, System.Single floatValue)
    // Offset: 0x26BD0A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventData* New_ctor(float time, GlobalNamespace::BeatmapEventType type, int value, float floatValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventData*, creationType>(time, type, value, floatValue)));
    }
  }; // BeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventData), 36 + sizeof(float)> __GlobalNamespace_BeatmapEventDataSizeCheck;
  static_assert(sizeof(BeatmapEventData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventData::get_nextSameTypeEvent
// Il2CppName: get_nextSameTypeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventData* (GlobalNamespace::BeatmapEventData::*)()>(&GlobalNamespace::BeatmapEventData::get_nextSameTypeEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventData*), "get_nextSameTypeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventData::set_nextSameTypeEvent
// Il2CppName: set_nextSameTypeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventData::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapEventData::set_nextSameTypeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventData*), "set_nextSameTypeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
