// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
  // Forward declaring type: HttpListenerResponse
  class HttpListenerResponse;
  // Forward declaring type: HttpConnection
  class HttpConnection;
  // Forward declaring type: HttpListener
  class HttpListener;
  // Forward declaring type: AuthenticationSchemes
  struct AuthenticationSchemes;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpListenerContext
  class HttpListenerContext : public ::Il2CppObject {
    public:
    // private System.Net.HttpListenerRequest request
    // Offset: 0x10
    System::Net::HttpListenerRequest* request;
    // private System.Net.HttpListenerResponse response
    // Offset: 0x18
    System::Net::HttpListenerResponse* response;
    // private System.Security.Principal.IPrincipal user
    // Offset: 0x20
    System::Security::Principal::IPrincipal* user;
    // private System.Net.HttpConnection cnc
    // Offset: 0x28
    System::Net::HttpConnection* cnc;
    // private System.String error
    // Offset: 0x30
    ::Il2CppString* error;
    // private System.Int32 err_status
    // Offset: 0x38
    int err_status;
    // System.Net.HttpListener Listener
    // Offset: 0x40
    System::Net::HttpListener* Listener;
    // System.Void .ctor(System.Net.HttpConnection cnc)
    // Offset: 0x1234D20
    static HttpListenerContext* New_ctor(System::Net::HttpConnection* cnc);
    // System.Int32 get_ErrorStatus()
    // Offset: 0x123B11C
    int get_ErrorStatus();
    // System.Void set_ErrorStatus(System.Int32 value)
    // Offset: 0x123B124
    void set_ErrorStatus(int value);
    // System.String get_ErrorMessage()
    // Offset: 0x123B12C
    ::Il2CppString* get_ErrorMessage();
    // System.Void set_ErrorMessage(System.String value)
    // Offset: 0x123B134
    void set_ErrorMessage(::Il2CppString* value);
    // System.Boolean get_HaveError()
    // Offset: 0x123608C
    bool get_HaveError();
    // System.Net.HttpConnection get_Connection()
    // Offset: 0x123B13C
    System::Net::HttpConnection* get_Connection();
    // public System.Net.HttpListenerRequest get_Request()
    // Offset: 0x123B144
    System::Net::HttpListenerRequest* get_Request();
    // public System.Net.HttpListenerResponse get_Response()
    // Offset: 0x123B14C
    System::Net::HttpListenerResponse* get_Response();
    // System.Void ParseAuthentication(System.Net.AuthenticationSchemes expectedSchemes)
    // Offset: 0x123A99C
    void ParseAuthentication(System::Net::AuthenticationSchemes expectedSchemes);
    // System.Security.Principal.IPrincipal ParseBasicAuthentication(System.String authData)
    // Offset: 0x123B154
    System::Security::Principal::IPrincipal* ParseBasicAuthentication(::Il2CppString* authData);
  }; // System.Net.HttpListenerContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerContext*, "System.Net", "HttpListenerContext");
#pragma pack(pop)
