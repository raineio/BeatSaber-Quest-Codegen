// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayingTutorialPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayingTutorialPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return localizedDescription;
    }
    // [LocalizationKeyAttribute] Offset: 0xF0409C
    // static field const value: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static constexpr const char* kPlayingCampaignRichPresenceLocalizationKey = "PLAYING_TUTORIAL_PRESENCE";
    // Get static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static ::Il2CppString* _get_kPlayingCampaignRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static void _set_kPlayingCampaignRichPresenceLocalizationKey(::Il2CppString* value);
    // Get instance field reference: private System.String <localizedDescription>k__BackingField
    ::Il2CppString*& dyn_$localizedDescription$k__BackingField();
    // public System.String get_apiName()
    // Offset: 0x12BCCDC
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0x12BCD24
    ::Il2CppString* get_localizedDescription();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0x12BCD2C
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x12BCD34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingTutorialPresenceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingTutorialPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingTutorialPresenceData*, creationType>()));
    }
  }; // PlayingTutorialPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingTutorialPresenceData), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayingTutorialPresenceDataSizeCheck;
  static_assert(sizeof(PlayingTutorialPresenceData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingTutorialPresenceData*, "", "PlayingTutorialPresenceData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayingTutorialPresenceData::*)()>(&GlobalNamespace::PlayingTutorialPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayingTutorialPresenceData::*)()>(&GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayingTutorialPresenceData::*)(::Il2CppString*)>(&GlobalNamespace::PlayingTutorialPresenceData::set_localizedDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
