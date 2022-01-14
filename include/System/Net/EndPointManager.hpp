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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
  // Forward declaring type: EndPointListener
  class EndPointListener;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: EndPointManager
  class EndPointManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::EndPointManager);
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPointManager*, "System.Net", "EndPointManager");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EndPointManager
  // [TokenAttribute] Offset: FFFFFFFF
  class EndPointManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable ip_to_endpoints
    static System::Collections::Hashtable* _get_ip_to_endpoints();
    // Set static field: static private System.Collections.Hashtable ip_to_endpoints
    static void _set_ip_to_endpoints(System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x15F1868
    static void _cctor();
    // static public System.Void AddListener(System.Net.HttpListener listener)
    // Offset: 0x15F06F4
    static void AddListener(System::Net::HttpListener* listener);
    // static public System.Void AddPrefix(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x15F0F98
    static void AddPrefix(::StringW prefix, System::Net::HttpListener* listener);
    // static private System.Void AddPrefixInternal(System.String p, System.Net.HttpListener listener)
    // Offset: 0x15F0D44
    static void AddPrefixInternal(::StringW p, System::Net::HttpListener* listener);
    // static private System.Net.EndPointListener GetEPListener(System.String host, System.Int32 port, System.Net.HttpListener listener, System.Boolean secure)
    // Offset: 0x15F109C
    static System::Net::EndPointListener* GetEPListener(::StringW host, int port, System::Net::HttpListener* listener, bool secure);
    // static public System.Void RemoveEndPoint(System.Net.EndPointListener epl, System.Net.IPEndPoint ep)
    // Offset: 0x15EFCC8
    static void RemoveEndPoint(System::Net::EndPointListener* epl, System::Net::IPEndPoint* ep);
    // static public System.Void RemoveListener(System.Net.HttpListener listener)
    // Offset: 0x15F147C
    static void RemoveListener(System::Net::HttpListener* listener);
    // static public System.Void RemovePrefix(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x15F0E94
    static void RemovePrefix(::StringW prefix, System::Net::HttpListener* listener);
    // static private System.Void RemovePrefixInternal(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x15F1748
    static void RemovePrefixInternal(::StringW prefix, System::Net::HttpListener* listener);
  }; // System.Net.EndPointManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::EndPointManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::EndPointManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::AddListener
// Il2CppName: AddListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::HttpListener*)>(&System::Net::EndPointManager::AddListener)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::AddPrefix
// Il2CppName: AddPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Net::HttpListener*)>(&System::Net::EndPointManager::AddPrefix)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "AddPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::AddPrefixInternal
// Il2CppName: AddPrefixInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Net::HttpListener*)>(&System::Net::EndPointManager::AddPrefixInternal)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "AddPrefixInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::GetEPListener
// Il2CppName: GetEPListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPointListener* (*)(::StringW, int, System::Net::HttpListener*, bool)>(&System::Net::EndPointManager::GetEPListener)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    static auto* secure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "GetEPListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, listener, secure});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::RemoveEndPoint
// Il2CppName: RemoveEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::EndPointListener*, System::Net::IPEndPoint*)>(&System::Net::EndPointManager::RemoveEndPoint)> {
  static const MethodInfo* get() {
    static auto* epl = &::il2cpp_utils::GetClassFromName("System.Net", "EndPointListener")->byval_arg;
    static auto* ep = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "RemoveEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{epl, ep});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::RemoveListener
// Il2CppName: RemoveListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::HttpListener*)>(&System::Net::EndPointManager::RemoveListener)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::RemovePrefix
// Il2CppName: RemovePrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Net::HttpListener*)>(&System::Net::EndPointManager::RemovePrefix)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "RemovePrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointManager::RemovePrefixInternal
// Il2CppName: RemovePrefixInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Net::HttpListener*)>(&System::Net::EndPointManager::RemovePrefixInternal)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointManager*), "RemovePrefixInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, listener});
  }
};
