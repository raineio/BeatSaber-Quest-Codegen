// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerUnavailableReason
  struct MultiplayerUnavailableReason;
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Language
  struct Language;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerUnavailableReasonMethods
  class MultiplayerUnavailableReasonMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerUnavailableReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReasonMethods*, "", "MultiplayerUnavailableReasonMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerUnavailableReasonMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MultiplayerUnavailableReasonMethods : public ::Il2CppObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0x10D22FC
    // static field const value: static private System.String kMultiplayerUnavailableServerOffline
    static constexpr const char* kMultiplayerUnavailableServerOffline = "MULTIPLAYER_UNAVAILABLE_SERVER_OFFLINE";
    // Get static field: static private System.String kMultiplayerUnavailableServerOffline
    static ::StringW _get_kMultiplayerUnavailableServerOffline();
    // Set static field: static private System.String kMultiplayerUnavailableServerOffline
    static void _set_kMultiplayerUnavailableServerOffline(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10D230C
    // static field const value: static private System.String kMultiplayerUnavailableUpdateRequired
    static constexpr const char* kMultiplayerUnavailableUpdateRequired = "MULTIPLAYER_UNAVAILABLE_UPDATE_REQUIRED";
    // Get static field: static private System.String kMultiplayerUnavailableUpdateRequired
    static ::StringW _get_kMultiplayerUnavailableUpdateRequired();
    // Set static field: static private System.String kMultiplayerUnavailableUpdateRequired
    static void _set_kMultiplayerUnavailableUpdateRequired(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10D231C
    // static field const value: static private System.String kMultiplayerUnavailableMaintenanceMode
    static constexpr const char* kMultiplayerUnavailableMaintenanceMode = "MULTIPLAYER_UNAVAILABLE_MAINTENANCE_MODE";
    // Get static field: static private System.String kMultiplayerUnavailableMaintenanceMode
    static ::StringW _get_kMultiplayerUnavailableMaintenanceMode();
    // Set static field: static private System.String kMultiplayerUnavailableMaintenanceMode
    static void _set_kMultiplayerUnavailableMaintenanceMode(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10D232C
    // static field const value: static private System.String kMultiplayerUnavailableTryAgain
    static constexpr const char* kMultiplayerUnavailableTryAgain = "MULTIPLAYER_UNAVAILABLE_TRY_AGAIN";
    // Get static field: static private System.String kMultiplayerUnavailableTryAgain
    static ::StringW _get_kMultiplayerUnavailableTryAgain();
    // Set static field: static private System.String kMultiplayerUnavailableTryAgain
    static void _set_kMultiplayerUnavailableTryAgain(::StringW value);
    // static public System.String LocalizedKey(MultiplayerUnavailableReason multiplayerUnavailableReason)
    // Offset: 0x13997C8
    static ::StringW LocalizedKey(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);
    // static public System.String ErrorCode(MultiplayerUnavailableReason multiplayerUnavailableReason)
    // Offset: 0x1399830
    static ::StringW ErrorCode(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);
    // static public System.Boolean TryGetMultiplayerUnavailableReason(MultiplayerStatusData data, out MultiplayerUnavailableReason reason)
    // Offset: 0x139A8BC
    static bool TryGetMultiplayerUnavailableReason(::GlobalNamespace::MultiplayerStatusData* data, ByRef<::GlobalNamespace::MultiplayerUnavailableReason> reason);
    // static public System.String GetLocalizedMessage(MultiplayerStatusData data, Polyglot.Language language)
    // Offset: 0x139A9DC
    static ::StringW GetLocalizedMessage(::GlobalNamespace::MultiplayerStatusData* data, ::Polyglot::Language language);
    // static private System.Boolean VersionLessThan(System.String currentVersion, System.String minVersion)
    // Offset: 0x13A9C68
    static bool VersionLessThan(::StringW currentVersion, ::StringW minVersion);
  }; // MultiplayerUnavailableReasonMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey
// Il2CppName: LocalizedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(&GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey)> {
  static const MethodInfo* get() {
    static auto* multiplayerUnavailableReason = &::il2cpp_utils::GetClassFromName("", "MultiplayerUnavailableReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerUnavailableReasonMethods*), "LocalizedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerUnavailableReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode
// Il2CppName: ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(&GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode)> {
  static const MethodInfo* get() {
    static auto* multiplayerUnavailableReason = &::il2cpp_utils::GetClassFromName("", "MultiplayerUnavailableReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerUnavailableReasonMethods*), "ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerUnavailableReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason
// Il2CppName: TryGetMultiplayerUnavailableReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MultiplayerStatusData*, ByRef<::GlobalNamespace::MultiplayerUnavailableReason>)>(&GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "MultiplayerStatusData")->byval_arg;
    static auto* reason = &::il2cpp_utils::GetClassFromName("", "MultiplayerUnavailableReason")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerUnavailableReasonMethods*), "TryGetMultiplayerUnavailableReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, reason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage
// Il2CppName: GetLocalizedMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerStatusData*, ::Polyglot::Language)>(&GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "MultiplayerStatusData")->byval_arg;
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerUnavailableReasonMethods*), "GetLocalizedMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, language});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan
// Il2CppName: VersionLessThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan)> {
  static const MethodInfo* get() {
    static auto* currentVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerUnavailableReasonMethods*), "VersionLessThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentVersion, minVersion});
  }
};
