// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: BeatmapEventTransitionType
#include "GlobalNamespace/BeatmapEventTransitionType.hpp"
// Including type: EnvironmentColorType
#include "GlobalNamespace/EnvironmentColorType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightColorBeatmapEventData
  class LightColorBeatmapEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventData*, "", "LightColorBeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LightColorBeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightColorBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
    public:
    public:
    // public readonly System.Int32 groupId
    // Size: 0x4
    // Offset: 0x30
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x34
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly BeatmapEventTransitionType transitionType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::BeatmapEventTransitionType transitionType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventTransitionType) == 0x4);
    // private EnvironmentColorType <colorType>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::EnvironmentColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentColorType) == 0x4);
    // private System.Single <brightness>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    float brightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <strobeBeatFrequency>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    int strobeBeatFrequency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10AF7BC
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightColorBeatmapEventData> _defaults
    static ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightColorBeatmapEventData*>* _get__defaults();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightColorBeatmapEventData> _defaults
    static void _set__defaults(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightColorBeatmapEventData*>* value);
    // Get instance field reference: public readonly System.Int32 groupId
    [[deprecated("Use field access instead!")]] int& dyn_groupId();
    // Get instance field reference: public readonly System.Int32 elementId
    [[deprecated("Use field access instead!")]] int& dyn_elementId();
    // Get instance field reference: public readonly BeatmapEventTransitionType transitionType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapEventTransitionType& dyn_transitionType();
    // Get instance field reference: private EnvironmentColorType <colorType>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentColorType& dyn_$colorType$k__BackingField();
    // Get instance field reference: private System.Single <brightness>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$brightness$k__BackingField();
    // Get instance field reference: private System.Int32 <strobeBeatFrequency>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$strobeBeatFrequency$k__BackingField();
    // public EnvironmentColorType get_colorType()
    // Offset: 0x28278FC
    ::GlobalNamespace::EnvironmentColorType get_colorType();
    // private System.Void set_colorType(EnvironmentColorType value)
    // Offset: 0x2827904
    void set_colorType(::GlobalNamespace::EnvironmentColorType value);
    // public System.Single get_brightness()
    // Offset: 0x282790C
    float get_brightness();
    // private System.Void set_brightness(System.Single value)
    // Offset: 0x2827914
    void set_brightness(float value);
    // public System.Int32 get_strobeBeatFrequency()
    // Offset: 0x282791C
    int get_strobeBeatFrequency();
    // private System.Void set_strobeBeatFrequency(System.Int32 value)
    // Offset: 0x2827924
    void set_strobeBeatFrequency(int value);
    // public System.Void .ctor(System.Single time, System.Int32 groupId, System.Int32 elementId, BeatmapEventTransitionType transitionType, EnvironmentColorType colorType, System.Single brightness, System.Int32 strobeBeatFrequency)
    // Offset: 0x282792C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightColorBeatmapEventData* New_ctor(float time, int groupId, int elementId, ::GlobalNamespace::BeatmapEventTransitionType transitionType, ::GlobalNamespace::EnvironmentColorType colorType, float brightness, int strobeBeatFrequency) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightColorBeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightColorBeatmapEventData*, creationType>(time, groupId, elementId, transitionType, colorType, brightness, strobeBeatFrequency)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2827C10
    static void _cctor();
    // public System.Void CopyColorDataFrom(LightColorBeatmapEventData lightColorBeatmapEventData)
    // Offset: 0x2827A0C
    void CopyColorDataFrom(::GlobalNamespace::LightColorBeatmapEventData* lightColorBeatmapEventData);
    // public System.Void DisableStrobe()
    // Offset: 0x2827A38
    void DisableStrobe();
    // static public System.Int32 SubtypeIdentifier(System.Int32 groupId, System.Int32 elementId)
    // Offset: 0x2827A00
    static int SubtypeIdentifier(int groupId, int elementId);
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x2827A40
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // protected override BeatmapEventData GetDefault()
    // Offset: 0x2827AE4
    // Implemented from: BeatmapEventData
    // Base method: BeatmapEventData BeatmapEventData::GetDefault()
    ::GlobalNamespace::BeatmapEventData* GetDefault();
  }; // LightColorBeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(LightColorBeatmapEventData), 68 + sizeof(int)> __GlobalNamespace_LightColorBeatmapEventDataSizeCheck;
  static_assert(sizeof(LightColorBeatmapEventData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::get_colorType
// Il2CppName: get_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::get_colorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "get_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::set_colorType
// Il2CppName: set_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventData::*)(::GlobalNamespace::EnvironmentColorType)>(&GlobalNamespace::LightColorBeatmapEventData::set_colorType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "set_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::get_brightness
// Il2CppName: get_brightness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::get_brightness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "get_brightness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::set_brightness
// Il2CppName: set_brightness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventData::*)(float)>(&GlobalNamespace::LightColorBeatmapEventData::set_brightness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "set_brightness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::get_strobeBeatFrequency
// Il2CppName: get_strobeBeatFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::get_strobeBeatFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "get_strobeBeatFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::set_strobeBeatFrequency
// Il2CppName: set_strobeBeatFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventData::*)(int)>(&GlobalNamespace::LightColorBeatmapEventData::set_strobeBeatFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "set_strobeBeatFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LightColorBeatmapEventData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::CopyColorDataFrom
// Il2CppName: CopyColorDataFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventData::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&GlobalNamespace::LightColorBeatmapEventData::CopyColorDataFrom)> {
  static const MethodInfo* get() {
    static auto* lightColorBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "LightColorBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "CopyColorDataFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightColorBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::DisableStrobe
// Il2CppName: DisableStrobe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::DisableStrobe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "DisableStrobe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::SubtypeIdentifier
// Il2CppName: SubtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::LightColorBeatmapEventData::SubtypeIdentifier)> {
  static const MethodInfo* get() {
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* elementId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "SubtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupId, elementId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorBeatmapEventData::GetDefault
// Il2CppName: GetDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (GlobalNamespace::LightColorBeatmapEventData::*)()>(&GlobalNamespace::LightColorBeatmapEventData::GetDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorBeatmapEventData*), "GetDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
