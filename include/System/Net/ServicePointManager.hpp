// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.SecurityProtocolType
#include "System/Net/SecurityProtocolType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICertificatePolicy
  class ICertificatePolicy;
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: HybridDictionary
  class HybridDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ServicePointManager
  class ServicePointManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::ServicePointManager);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePointManager*, "System.Net", "ServicePointManager");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePointManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePointManager : public ::Il2CppObject {
    public:
    // Nested type: System::Net::ServicePointManager::SPKey
    class SPKey;
    // Get static field: static private System.Collections.Specialized.HybridDictionary servicePoints
    static System::Collections::Specialized::HybridDictionary* _get_servicePoints();
    // Set static field: static private System.Collections.Specialized.HybridDictionary servicePoints
    static void _set_servicePoints(System::Collections::Specialized::HybridDictionary* value);
    // Get static field: static private System.Net.ICertificatePolicy policy
    static System::Net::ICertificatePolicy* _get_policy();
    // Set static field: static private System.Net.ICertificatePolicy policy
    static void _set_policy(System::Net::ICertificatePolicy* value);
    // Get static field: static private System.Int32 defaultConnectionLimit
    static int _get_defaultConnectionLimit();
    // Set static field: static private System.Int32 defaultConnectionLimit
    static void _set_defaultConnectionLimit(int value);
    // Get static field: static private System.Int32 maxServicePointIdleTime
    static int _get_maxServicePointIdleTime();
    // Set static field: static private System.Int32 maxServicePointIdleTime
    static void _set_maxServicePointIdleTime(int value);
    // Get static field: static private System.Int32 maxServicePoints
    static int _get_maxServicePoints();
    // Set static field: static private System.Int32 maxServicePoints
    static void _set_maxServicePoints(int value);
    // Get static field: static private System.Int32 dnsRefreshTimeout
    static int _get_dnsRefreshTimeout();
    // Set static field: static private System.Int32 dnsRefreshTimeout
    static void _set_dnsRefreshTimeout(int value);
    // Get static field: static private System.Boolean _checkCRL
    static bool _get__checkCRL();
    // Set static field: static private System.Boolean _checkCRL
    static void _set__checkCRL(bool value);
    // Get static field: static private System.Net.SecurityProtocolType _securityProtocol
    static System::Net::SecurityProtocolType _get__securityProtocol();
    // Set static field: static private System.Net.SecurityProtocolType _securityProtocol
    static void _set__securityProtocol(System::Net::SecurityProtocolType value);
    // Get static field: static private System.Boolean expectContinue
    static bool _get_expectContinue();
    // Set static field: static private System.Boolean expectContinue
    static void _set_expectContinue(bool value);
    // Get static field: static private System.Boolean useNagle
    static bool _get_useNagle();
    // Set static field: static private System.Boolean useNagle
    static void _set_useNagle(bool value);
    // Get static field: static private System.Net.ServerCertValidationCallback server_cert_cb
    static System::Net::ServerCertValidationCallback* _get_server_cert_cb();
    // Set static field: static private System.Net.ServerCertValidationCallback server_cert_cb
    static void _set_server_cert_cb(System::Net::ServerCertValidationCallback* value);
    // Get static field: static private System.Boolean tcp_keepalive
    static bool _get_tcp_keepalive();
    // Set static field: static private System.Boolean tcp_keepalive
    static void _set_tcp_keepalive(bool value);
    // Get static field: static private System.Int32 tcp_keepalive_time
    static int _get_tcp_keepalive_time();
    // Set static field: static private System.Int32 tcp_keepalive_time
    static void _set_tcp_keepalive_time(int value);
    // Get static field: static private System.Int32 tcp_keepalive_interval
    static int _get_tcp_keepalive_interval();
    // Set static field: static private System.Int32 tcp_keepalive_interval
    static void _set_tcp_keepalive_interval(int value);
    // static public System.Boolean get_CheckCertificateRevocationList()
    // Offset: 0x16B04FC
    static bool get_CheckCertificateRevocationList();
    // static public System.Int32 get_DnsRefreshTimeout()
    // Offset: 0x16B0564
    static int get_DnsRefreshTimeout();
    // static public System.Net.SecurityProtocolType get_SecurityProtocol()
    // Offset: 0x16B05CC
    static System::Net::SecurityProtocolType get_SecurityProtocol();
    // static System.Net.ServerCertValidationCallback get_ServerCertValidationCallback()
    // Offset: 0x16B0634
    static System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();
    // static private System.Void .cctor()
    // Offset: 0x16B03D0
    static void _cctor();
    // static System.Net.ICertificatePolicy GetLegacyCertificatePolicy()
    // Offset: 0x16B0494
    static System::Net::ICertificatePolicy* GetLegacyCertificatePolicy();
    // static public System.Net.ServicePoint FindServicePoint(System.Uri address, System.Net.IWebProxy proxy)
    // Offset: 0x16B069C
    static System::Net::ServicePoint* FindServicePoint(System::Uri* address, System::Net::IWebProxy* proxy);
    // static System.Void CloseConnectionGroup(System.String connectionGroupName)
    // Offset: 0x16B0CF0
    static void CloseConnectionGroup(::Il2CppString* connectionGroupName);
  }; // System.Net.ServicePointManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointManager::get_CheckCertificateRevocationList
// Il2CppName: get_CheckCertificateRevocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::ServicePointManager::get_CheckCertificateRevocationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "get_CheckCertificateRevocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::get_DnsRefreshTimeout
// Il2CppName: get_DnsRefreshTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Net::ServicePointManager::get_DnsRefreshTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "get_DnsRefreshTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::get_SecurityProtocol
// Il2CppName: get_SecurityProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SecurityProtocolType (*)()>(&System::Net::ServicePointManager::get_SecurityProtocol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "get_SecurityProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::get_ServerCertValidationCallback
// Il2CppName: get_ServerCertValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServerCertValidationCallback* (*)()>(&System::Net::ServicePointManager::get_ServerCertValidationCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "get_ServerCertValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::ServicePointManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::GetLegacyCertificatePolicy
// Il2CppName: GetLegacyCertificatePolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICertificatePolicy* (*)()>(&System::Net::ServicePointManager::GetLegacyCertificatePolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "GetLegacyCertificatePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::FindServicePoint
// Il2CppName: FindServicePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint* (*)(System::Uri*, System::Net::IWebProxy*)>(&System::Net::ServicePointManager::FindServicePoint)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxy = &::il2cpp_utils::GetClassFromName("System.Net", "IWebProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "FindServicePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, proxy});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::CloseConnectionGroup
// Il2CppName: CloseConnectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Net::ServicePointManager::CloseConnectionGroup)> {
  static const MethodInfo* get() {
    static auto* connectionGroupName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager*), "CloseConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectionGroupName});
  }
};
