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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrowsingMenusRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrowsingMenusRichPresenceData*, "", "BrowsingMenusRichPresenceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BrowsingMenusRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class BrowsingMenusRichPresenceData : public ::Il2CppObject/*, public ::GlobalNamespace::IRichPresenceData*/ {
    public:
    public:
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x10
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
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return localizedDescription;
    }
    // [LocalizationKeyAttribute] Offset: 0x111CBD8
    // static field const value: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static constexpr const char* kBrowsingMenusRichPresenceLocalizationKey = "BROWSING_MENUS_PRESENCE";
    // Get static field: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static ::StringW _get_kBrowsingMenusRichPresenceLocalizationKey();
    // Set static field: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static void _set_kBrowsingMenusRichPresenceLocalizationKey(::StringW value);
    // Get instance field reference: private System.String <localizedDescription>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$localizedDescription$k__BackingField();
    // public System.String get_apiName()
    // Offset: 0x1402550
    ::StringW get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0x1402598
    ::StringW get_localizedDescription();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0x14025A0
    void set_localizedDescription(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x14025A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrowsingMenusRichPresenceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrowsingMenusRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrowsingMenusRichPresenceData*, creationType>()));
    }
  }; // BrowsingMenusRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(BrowsingMenusRichPresenceData), 16 + sizeof(::StringW)> __GlobalNamespace_BrowsingMenusRichPresenceDataSizeCheck;
  static_assert(sizeof(BrowsingMenusRichPresenceData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(&GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrowsingMenusRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(&GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrowsingMenusRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrowsingMenusRichPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrowsingMenusRichPresenceData::*)(::StringW)>(&GlobalNamespace::BrowsingMenusRichPresenceData::set_localizedDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrowsingMenusRichPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrowsingMenusRichPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
