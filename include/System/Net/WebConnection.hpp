// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: IWebConnectionState
  class IWebConnectionState;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
  // Forward declaring type: MonoChunkStream
  class MonoChunkStream;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MonoTlsStream
  class MonoTlsStream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebConnection
  class WebConnection : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebConnection::NtlmAuthState
    struct NtlmAuthState;
    // Nested type: System::Net::WebConnection::AbortHelper
    class AbortHelper;
    // Autogenerated type: System.Net.WebConnection/NtlmAuthState
    struct NtlmAuthState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: NtlmAuthState
      constexpr NtlmAuthState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.WebConnection/NtlmAuthState None
      static constexpr const int None = 0;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState None
      static System::Net::WebConnection::NtlmAuthState _get_None();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState None
      static void _set_None(System::Net::WebConnection::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnection/NtlmAuthState Challenge
      static constexpr const int Challenge = 1;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState Challenge
      static System::Net::WebConnection::NtlmAuthState _get_Challenge();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState Challenge
      static void _set_Challenge(System::Net::WebConnection::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnection/NtlmAuthState Response
      static constexpr const int Response = 2;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState Response
      static System::Net::WebConnection::NtlmAuthState _get_Response();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState Response
      static void _set_Response(System::Net::WebConnection::NtlmAuthState value);
    }; // System.Net.WebConnection/NtlmAuthState
    check_size<sizeof(WebConnection::NtlmAuthState), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __System_Net_WebConnection_NtlmAuthStateSizeCheck;
    // private System.Net.ServicePoint sPoint
    // Offset: 0x10
    System::Net::ServicePoint* sPoint;
    // private System.IO.Stream nstream
    // Offset: 0x18
    System::IO::Stream* nstream;
    // System.Net.Sockets.Socket socket
    // Offset: 0x20
    System::Net::Sockets::Socket* socket;
    // private System.Object socketLock
    // Offset: 0x28
    ::Il2CppObject* socketLock;
    // private System.Net.IWebConnectionState state
    // Offset: 0x30
    System::Net::IWebConnectionState* state;
    // private System.Net.WebExceptionStatus status
    // Offset: 0x38
    System::Net::WebExceptionStatus status;
    // private System.Boolean keepAlive
    // Offset: 0x3C
    bool keepAlive;
    // private System.Byte[] buffer
    // Offset: 0x40
    ::Array<uint8_t>* buffer;
    // private System.EventHandler abortHandler
    // Offset: 0x48
    System::EventHandler* abortHandler;
    // private System.Net.WebConnection/AbortHelper abortHelper
    // Offset: 0x50
    System::Net::WebConnection::AbortHelper* abortHelper;
    // System.Net.WebConnectionData Data
    // Offset: 0x58
    System::Net::WebConnectionData* Data;
    // private System.Boolean chunkedRead
    // Offset: 0x60
    bool chunkedRead;
    // private System.Net.MonoChunkStream chunkStream
    // Offset: 0x68
    System::Net::MonoChunkStream* chunkStream;
    // private System.Collections.Queue queue
    // Offset: 0x70
    System::Collections::Queue* queue;
    // private System.Boolean reused
    // Offset: 0x78
    bool reused;
    // private System.Int32 position
    // Offset: 0x7C
    int position;
    // private System.Net.HttpWebRequest priority_request
    // Offset: 0x80
    System::Net::HttpWebRequest* priority_request;
    // private System.Net.NetworkCredential ntlm_credentials
    // Offset: 0x88
    System::Net::NetworkCredential* ntlm_credentials;
    // private System.Boolean ntlm_authenticated
    // Offset: 0x90
    bool ntlm_authenticated;
    // private System.Boolean unsafe_sharing
    // Offset: 0x91
    bool unsafe_sharing;
    // private System.Net.WebConnection/NtlmAuthState connect_ntlm_auth_state
    // Offset: 0x94
    System::Net::WebConnection::NtlmAuthState connect_ntlm_auth_state;
    // private System.Net.HttpWebRequest connect_request
    // Offset: 0x98
    System::Net::HttpWebRequest* connect_request;
    // private System.Exception connect_exception
    // Offset: 0xA0
    System::Exception* connect_exception;
    // private Mono.Net.Security.MonoTlsStream tlsStream
    // Offset: 0xA8
    Mono::Net::Security::MonoTlsStream* tlsStream;
    // public System.Void .ctor(System.Net.IWebConnectionState wcs, System.Net.ServicePoint sPoint)
    // Offset: 0x12185D0
    static WebConnection* New_ctor(System::Net::IWebConnectionState* wcs, System::Net::ServicePoint* sPoint);
    // private System.Boolean CanReuse()
    // Offset: 0x1218804
    bool CanReuse();
    // private System.Void Connect(System.Net.HttpWebRequest request)
    // Offset: 0x1218838
    void Connect(System::Net::HttpWebRequest* request);
    // private System.Boolean CreateTunnel(System.Net.HttpWebRequest request, System.Uri connectUri, System.IO.Stream stream, out System.Byte[] buffer)
    // Offset: 0x1218F7C
    bool CreateTunnel(System::Net::HttpWebRequest* request, System::Uri* connectUri, System::IO::Stream* stream, ::Array<uint8_t>*& buffer);
    // private System.Net.WebHeaderCollection ReadHeaders(System.IO.Stream stream, out System.Byte[] retBuffer, out System.Int32 status)
    // Offset: 0x1219910
    System::Net::WebHeaderCollection* ReadHeaders(System::IO::Stream* stream, ::Array<uint8_t>*& retBuffer, int& status);
    // private System.Void FlushContents(System.IO.Stream stream, System.Int32 contentLength)
    // Offset: 0x121A0B8
    void FlushContents(System::IO::Stream* stream, int contentLength);
    // private System.Boolean CreateStream(System.Net.HttpWebRequest request)
    // Offset: 0x121A63C
    bool CreateStream(System::Net::HttpWebRequest* request);
    // private System.Void HandleError(System.Net.WebExceptionStatus st, System.Exception e, System.String where)
    // Offset: 0x1219DD8
    void HandleError(System::Net::WebExceptionStatus st, System::Exception* e, ::Il2CppString* where);
    // private System.Void ReadDone(System.IAsyncResult result)
    // Offset: 0x121AD00
    void ReadDone(System::IAsyncResult* result);
    // static private System.Boolean ExpectContent(System.Int32 statusCode, System.String method)
    // Offset: 0x121C170
    static bool ExpectContent(int statusCode, ::Il2CppString* method);
    // System.Void InitRead()
    // Offset: 0x121BCE0
    void InitRead();
    // static private System.Int32 GetResponse(System.Net.WebConnectionData data, System.Net.ServicePoint sPoint, System.Byte[] buffer, System.Int32 max)
    // Offset: 0x121B368
    static int GetResponse(System::Net::WebConnectionData* data, System::Net::ServicePoint* sPoint, ::Array<uint8_t>* buffer, int max);
    // private System.Void InitConnection(System.Net.HttpWebRequest request)
    // Offset: 0x121C5B8
    void InitConnection(System::Net::HttpWebRequest* request);
    // System.EventHandler SendRequest(System.Net.HttpWebRequest request)
    // Offset: 0x121CA78
    System::EventHandler* SendRequest(System::Net::HttpWebRequest* request);
    // private System.Void SendNext()
    // Offset: 0x121CD0C
    void SendNext();
    // System.Void NextRead()
    // Offset: 0x121CE5C
    void NextRead();
    // static private System.Boolean ReadLine(System.Byte[] buffer, ref System.Int32 start, System.Int32 max, ref System.String output)
    // Offset: 0x121A41C
    static bool ReadLine(::Array<uint8_t>* buffer, int& start, int max, ::Il2CppString*& output);
    // System.IAsyncResult BeginRead(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x121D284
    System::IAsyncResult* BeginRead(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // System.Int32 EndRead(System.Net.HttpWebRequest request, System.IAsyncResult result)
    // Offset: 0x121D604
    int EndRead(System::Net::HttpWebRequest* request, System::IAsyncResult* result);
    // private System.Int32 EnsureRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x121DC20
    int EnsureRead(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Boolean CompleteChunkedRead()
    // Offset: 0x1218EE0
    bool CompleteChunkedRead();
    // System.IAsyncResult BeginWrite(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x121DD68
    System::IAsyncResult* BeginWrite(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // System.Boolean EndWrite(System.Net.HttpWebRequest request, System.Boolean throwOnError, System.IAsyncResult result)
    // Offset: 0x121E154
    bool EndWrite(System::Net::HttpWebRequest* request, bool throwOnError, System::IAsyncResult* result);
    // System.Int32 Read(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x121E4B0
    int Read(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size);
    // System.Boolean Write(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, ref System.String err_msg)
    // Offset: 0x121E930
    bool Write(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, ::Il2CppString*& err_msg);
    // System.Void Close(System.Boolean sendNext)
    // Offset: 0x121A8B8
    void Close(bool sendNext);
    // private System.Void Abort(System.Object sender, System.EventArgs args)
    // Offset: 0x121EC4C
    void Abort(::Il2CppObject* sender, System::EventArgs* args);
    // System.Void ResetNtlm()
    // Offset: 0x121EC18
    void ResetNtlm();
    // System.Void set_PriorityRequest(System.Net.HttpWebRequest value)
    // Offset: 0x121F0B4
    void set_PriorityRequest(System::Net::HttpWebRequest* value);
    // System.Boolean get_NtlmAuthenticated()
    // Offset: 0x121F0BC
    bool get_NtlmAuthenticated();
    // System.Void set_NtlmAuthenticated(System.Boolean value)
    // Offset: 0x121F0C4
    void set_NtlmAuthenticated(bool value);
    // System.Net.NetworkCredential get_NtlmCredential()
    // Offset: 0x121F0D0
    System::Net::NetworkCredential* get_NtlmCredential();
    // System.Void set_NtlmCredential(System.Net.NetworkCredential value)
    // Offset: 0x121F0D8
    void set_NtlmCredential(System::Net::NetworkCredential* value);
    // System.Boolean get_UnsafeAuthenticatedConnectionSharing()
    // Offset: 0x121F0E0
    bool get_UnsafeAuthenticatedConnectionSharing();
    // System.Void set_UnsafeAuthenticatedConnectionSharing(System.Boolean value)
    // Offset: 0x121F0E8
    void set_UnsafeAuthenticatedConnectionSharing(bool value);
    // private System.Void <SendRequest>b__41_0(System.Object o)
    // Offset: 0x121F0F4
    void $SendRequest$b__41_0(::Il2CppObject* o);
  }; // System.Net.WebConnection
  check_size<sizeof(WebConnection), 168 + sizeof(void*) + 8 - (168 + sizeof(void*)) % 8> __System_Net_WebConnectionSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnection*, "System.Net", "WebConnection");
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnection::NtlmAuthState, "System.Net", "WebConnection/NtlmAuthState");
#pragma pack(pop)