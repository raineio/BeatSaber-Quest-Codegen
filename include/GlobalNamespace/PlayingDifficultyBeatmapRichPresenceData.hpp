// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayingDifficultyBeatmapRichPresenceData
  class PlayingDifficultyBeatmapRichPresenceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayingDifficultyBeatmapRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayingDifficultyBeatmapRichPresenceData : public ::Il2CppObject/*, public ::GlobalNamespace::IRichPresenceData*/ {
    public:
    public:
    // private System.String <apiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW apiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW localizedDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRichPresenceData
    operator ::GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRichPresenceData*>(this);
    }
    // Creating interface conversion operator: i_IRichPresenceData
    inline ::GlobalNamespace::IRichPresenceData* i_IRichPresenceData() noexcept {
      return reinterpret_cast<::GlobalNamespace::IRichPresenceData*>(this);
    }
    // Get instance field reference: private System.String <apiName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$apiName$k__BackingField();
    // Get instance field reference: private System.String <localizedDescription>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$localizedDescription$k__BackingField();
    // public System.String get_apiName()
    // Offset: 0x1423194
    ::StringW get_apiName();
    // private System.Void set_apiName(System.String value)
    // Offset: 0x142319C
    void set_apiName(::StringW value);
    // public System.String get_localizedDescription()
    // Offset: 0x14231A4
    ::StringW get_localizedDescription();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0x14231AC
    void set_localizedDescription(::StringW value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x14231B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingDifficultyBeatmapRichPresenceData* New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingDifficultyBeatmapRichPresenceData*, creationType>(difficultyBeatmap)));
    }
    // static public System.String GetDestinationLocalizedString(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x14231F8
    static ::StringW GetDestinationLocalizedString(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // PlayingDifficultyBeatmapRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingDifficultyBeatmapRichPresenceData), 24 + sizeof(::StringW)> __GlobalNamespace_PlayingDifficultyBeatmapRichPresenceDataSizeCheck;
  static_assert(sizeof(PlayingDifficultyBeatmapRichPresenceData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)()>(&GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::set_apiName
// Il2CppName: set_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)(::StringW)>(&GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::set_apiName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*), "set_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)()>(&GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)(::StringW)>(&GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::set_localizedDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::GetDestinationLocalizedString
// Il2CppName: GetDestinationLocalizedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::GetDestinationLocalizedString)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*), "GetDestinationLocalizedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
