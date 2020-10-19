// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.Net.EndPointManager
  class EndPointManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable ip_to_endpoints
    static System::Collections::Hashtable* _get_ip_to_endpoints();
    // Set static field: static private System.Collections.Hashtable ip_to_endpoints
    static void _set_ip_to_endpoints(System::Collections::Hashtable* value);
    // static public System.Void AddListener(System.Net.HttpListener listener)
    // Offset: 0x12BA9C0
    static void AddListener(System::Net::HttpListener* listener);
    // static public System.Void AddPrefix(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x12BB294
    static void AddPrefix(::Il2CppString* prefix, System::Net::HttpListener* listener);
    // static private System.Void AddPrefixInternal(System.String p, System.Net.HttpListener listener)
    // Offset: 0x12BB030
    static void AddPrefixInternal(::Il2CppString* p, System::Net::HttpListener* listener);
    // static private System.Net.EndPointListener GetEPListener(System.String host, System.Int32 port, System.Net.HttpListener listener, System.Boolean secure)
    // Offset: 0x12BB3A8
    static System::Net::EndPointListener* GetEPListener(::Il2CppString* host, int port, System::Net::HttpListener* listener, bool secure);
    // static public System.Void RemoveEndPoint(System.Net.EndPointListener epl, System.Net.IPEndPoint ep)
    // Offset: 0x12B9F3C
    static void RemoveEndPoint(System::Net::EndPointListener* epl, System::Net::IPEndPoint* ep);
    // static public System.Void RemoveListener(System.Net.HttpListener listener)
    // Offset: 0x12BB788
    static void RemoveListener(System::Net::HttpListener* listener);
    // static public System.Void RemovePrefix(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x12BB180
    static void RemovePrefix(::Il2CppString* prefix, System::Net::HttpListener* listener);
    // static private System.Void RemovePrefixInternal(System.String prefix, System.Net.HttpListener listener)
    // Offset: 0x12BBA74
    static void RemovePrefixInternal(::Il2CppString* prefix, System::Net::HttpListener* listener);
    // static private System.Void .cctor()
    // Offset: 0x12BBB94
    static void _cctor();
  }; // System.Net.EndPointManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPointManager*, "System.Net", "EndPointManager");
#pragma pack(pop)
