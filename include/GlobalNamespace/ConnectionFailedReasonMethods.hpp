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
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConnectionFailedReasonMethods
  class ConnectionFailedReasonMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConnectionFailedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedReasonMethods*, "", "ConnectionFailedReasonMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConnectionFailedReasonMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ConnectionFailedReasonMethods : public ::Il2CppObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0x111B6E8
    // static field const value: static private System.String kConnectionFailedUnknown
    static constexpr const char* kConnectionFailedUnknown = "SERVER_CONNECTION_FAILED_TRY_AGAIN";
    // Get static field: static private System.String kConnectionFailedUnknown
    static ::StringW _get_kConnectionFailedUnknown();
    // Set static field: static private System.String kConnectionFailedUnknown
    static void _set_kConnectionFailedUnknown(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B6F8
    // static field const value: static private System.String kConnectionFailedConnectionCanceled
    static constexpr const char* kConnectionFailedConnectionCanceled = "SERVER_CONNECTION_FAILED_TRY_AGAIN";
    // Get static field: static private System.String kConnectionFailedConnectionCanceled
    static ::StringW _get_kConnectionFailedConnectionCanceled();
    // Set static field: static private System.String kConnectionFailedConnectionCanceled
    static void _set_kConnectionFailedConnectionCanceled(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B708
    // static field const value: static private System.String kConnectionFailedServerUnreachable
    static constexpr const char* kConnectionFailedServerUnreachable = "SERVER_CONNECTION_FAILED_TRY_AGAIN";
    // Get static field: static private System.String kConnectionFailedServerUnreachable
    static ::StringW _get_kConnectionFailedServerUnreachable();
    // Set static field: static private System.String kConnectionFailedServerUnreachable
    static void _set_kConnectionFailedServerUnreachable(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B718
    // static field const value: static private System.String kConnectionFailedServerDoesNotExist
    static constexpr const char* kConnectionFailedServerDoesNotExist = "CONNECTION_FAILED_SERVER_DOES_NOT_EXIST";
    // Get static field: static private System.String kConnectionFailedServerDoesNotExist
    static ::StringW _get_kConnectionFailedServerDoesNotExist();
    // Set static field: static private System.String kConnectionFailedServerDoesNotExist
    static void _set_kConnectionFailedServerDoesNotExist(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B728
    // static field const value: static private System.String kConnectionFailedServerAtCapacity
    static constexpr const char* kConnectionFailedServerAtCapacity = "CONNECTION_FAILED_SERVER_AT_CAPACITY";
    // Get static field: static private System.String kConnectionFailedServerAtCapacity
    static ::StringW _get_kConnectionFailedServerAtCapacity();
    // Set static field: static private System.String kConnectionFailedServerAtCapacity
    static void _set_kConnectionFailedServerAtCapacity(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B738
    // static field const value: static private System.String kConnectionFailedVersionMismatch
    static constexpr const char* kConnectionFailedVersionMismatch = "CONNECTION_FAILED_VERSION_MISMATCH";
    // Get static field: static private System.String kConnectionFailedVersionMismatch
    static ::StringW _get_kConnectionFailedVersionMismatch();
    // Set static field: static private System.String kConnectionFailedVersionMismatch
    static void _set_kConnectionFailedVersionMismatch(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B748
    // static field const value: static private System.String kConnectionFailedInvalidPassword
    static constexpr const char* kConnectionFailedInvalidPassword = "CONNECTION_FAILED_INVALID_PASSWORD";
    // Get static field: static private System.String kConnectionFailedInvalidPassword
    static ::StringW _get_kConnectionFailedInvalidPassword();
    // Set static field: static private System.String kConnectionFailedInvalidPassword
    static void _set_kConnectionFailedInvalidPassword(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B758
    // static field const value: static private System.String kConnectionFailedMasterServerUnreachable
    static constexpr const char* kConnectionFailedMasterServerUnreachable = "SERVER_CONNECTION_FAILED_TRY_AGAIN";
    // Get static field: static private System.String kConnectionFailedMasterServerUnreachable
    static ::StringW _get_kConnectionFailedMasterServerUnreachable();
    // Set static field: static private System.String kConnectionFailedMasterServerUnreachable
    static void _set_kConnectionFailedMasterServerUnreachable(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B768
    // static field const value: static private System.String kConnectionFailedMasterServerNotAuthenticated
    static constexpr const char* kConnectionFailedMasterServerNotAuthenticated = "SERVER_CONNECTION_FAILED_TRY_AGAIN";
    // Get static field: static private System.String kConnectionFailedMasterServerNotAuthenticated
    static ::StringW _get_kConnectionFailedMasterServerNotAuthenticated();
    // Set static field: static private System.String kConnectionFailedMasterServerNotAuthenticated
    static void _set_kConnectionFailedMasterServerNotAuthenticated(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B778
    // static field const value: static private System.String kConnectionFailedNetworkNotConnected
    static constexpr const char* kConnectionFailedNetworkNotConnected = "CONNECTION_FAILED_NETWORK_NOT_CONNECTED";
    // Get static field: static private System.String kConnectionFailedNetworkNotConnected
    static ::StringW _get_kConnectionFailedNetworkNotConnected();
    // Set static field: static private System.String kConnectionFailedNetworkNotConnected
    static void _set_kConnectionFailedNetworkNotConnected(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B788
    // static field const value: static private System.String kConnectionFailedMasterServerCertificateValidationFailed
    static constexpr const char* kConnectionFailedMasterServerCertificateValidationFailed = "CONNECTION_FAILED_NETWORK_NOT_CONNECTED";
    // Get static field: static private System.String kConnectionFailedMasterServerCertificateValidationFailed
    static ::StringW _get_kConnectionFailedMasterServerCertificateValidationFailed();
    // Set static field: static private System.String kConnectionFailedMasterServerCertificateValidationFailed
    static void _set_kConnectionFailedMasterServerCertificateValidationFailed(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B798
    // static field const value: static private System.String kConnectionFailedServerIsTerminating
    static constexpr const char* kConnectionFailedServerIsTerminating = "CONNECTION_FAILED_SERVER_DOES_NOT_EXIST";
    // Get static field: static private System.String kConnectionFailedServerIsTerminating
    static ::StringW _get_kConnectionFailedServerIsTerminating();
    // Set static field: static private System.String kConnectionFailedServerIsTerminating
    static void _set_kConnectionFailedServerIsTerminating(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B7A8
    // static field const value: static private System.String kConnectionFailedTimeout
    static constexpr const char* kConnectionFailedTimeout = "CONNECTION_FAILED_TIMEOUT";
    // Get static field: static private System.String kConnectionFailedTimeout
    static ::StringW _get_kConnectionFailedTimeout();
    // Set static field: static private System.String kConnectionFailedTimeout
    static void _set_kConnectionFailedTimeout(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x111B7B8
    // static field const value: static private System.String kConnectionFailedFailedToFindMatch
    static constexpr const char* kConnectionFailedFailedToFindMatch = "CONNECTION_FAILED_FAILED_TO_FIND_MATCH";
    // Get static field: static private System.String kConnectionFailedFailedToFindMatch
    static ::StringW _get_kConnectionFailedFailedToFindMatch();
    // Set static field: static private System.String kConnectionFailedFailedToFindMatch
    static void _set_kConnectionFailedFailedToFindMatch(::StringW value);
    // static public System.String LocalizedKey(ConnectionFailedReason connectionFailedReason)
    // Offset: 0x143D8C8
    static ::StringW LocalizedKey(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);
    // static public System.String ErrorCode(ConnectionFailedReason connectionFailedReason)
    // Offset: 0x143D930
    static ::StringW ErrorCode(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);
  }; // ConnectionFailedReasonMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey
// Il2CppName: LocalizedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey)> {
  static const MethodInfo* get() {
    static auto* connectionFailedReason = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectionFailedReasonMethods*), "LocalizedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectionFailedReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode
// Il2CppName: ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode)> {
  static const MethodInfo* get() {
    static auto* connectionFailedReason = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectionFailedReasonMethods*), "ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectionFailedReason});
  }
};
