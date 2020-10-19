// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpAsyncResult
  class FtpAsyncResult;
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IWebProxy
  class IWebProxy;
  // Forward declaring type: FtpWebResponse
  class FtpWebResponse;
  // Skipping declaration: RequestState because it is already included!
  // Forward declaring type: FtpStatus
  class FtpStatus;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: StreamReader
  class StreamReader;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.FtpWebRequest
  class FtpWebRequest : public System::Net::WebRequest {
    public:
    // Nested type: System::Net::FtpWebRequest::RequestState
    struct RequestState;
    // Autogenerated type: System.Net.FtpWebRequest/RequestState
    struct RequestState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: RequestState
      constexpr RequestState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.FtpWebRequest/RequestState Before
      static constexpr const int Before = 0;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Before
      static System::Net::FtpWebRequest::RequestState _get_Before();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Before
      static void _set_Before(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Scheduled
      static constexpr const int Scheduled = 1;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Scheduled
      static System::Net::FtpWebRequest::RequestState _get_Scheduled();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Scheduled
      static void _set_Scheduled(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Connecting
      static constexpr const int Connecting = 2;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Connecting
      static System::Net::FtpWebRequest::RequestState _get_Connecting();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Connecting
      static void _set_Connecting(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Authenticating
      static constexpr const int Authenticating = 3;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Authenticating
      static System::Net::FtpWebRequest::RequestState _get_Authenticating();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Authenticating
      static void _set_Authenticating(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState OpeningData
      static constexpr const int OpeningData = 4;
      // Get static field: static public System.Net.FtpWebRequest/RequestState OpeningData
      static System::Net::FtpWebRequest::RequestState _get_OpeningData();
      // Set static field: static public System.Net.FtpWebRequest/RequestState OpeningData
      static void _set_OpeningData(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState TransferInProgress
      static constexpr const int TransferInProgress = 5;
      // Get static field: static public System.Net.FtpWebRequest/RequestState TransferInProgress
      static System::Net::FtpWebRequest::RequestState _get_TransferInProgress();
      // Set static field: static public System.Net.FtpWebRequest/RequestState TransferInProgress
      static void _set_TransferInProgress(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Finished
      static constexpr const int Finished = 6;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Finished
      static System::Net::FtpWebRequest::RequestState _get_Finished();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Finished
      static void _set_Finished(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Aborted
      static constexpr const int Aborted = 7;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Aborted
      static System::Net::FtpWebRequest::RequestState _get_Aborted();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Aborted
      static void _set_Aborted(System::Net::FtpWebRequest::RequestState value);
      // static field const value: static public System.Net.FtpWebRequest/RequestState Error
      static constexpr const int Error = 8;
      // Get static field: static public System.Net.FtpWebRequest/RequestState Error
      static System::Net::FtpWebRequest::RequestState _get_Error();
      // Set static field: static public System.Net.FtpWebRequest/RequestState Error
      static void _set_Error(System::Net::FtpWebRequest::RequestState value);
    }; // System.Net.FtpWebRequest/RequestState
    // private System.Uri requestUri
    // Offset: 0x20
    System::Uri* requestUri;
    // private System.String file_name
    // Offset: 0x28
    ::Il2CppString* file_name;
    // private System.Net.ServicePoint servicePoint
    // Offset: 0x30
    System::Net::ServicePoint* servicePoint;
    // private System.IO.Stream origDataStream
    // Offset: 0x38
    System::IO::Stream* origDataStream;
    // private System.IO.Stream dataStream
    // Offset: 0x40
    System::IO::Stream* dataStream;
    // private System.IO.Stream controlStream
    // Offset: 0x48
    System::IO::Stream* controlStream;
    // private System.IO.StreamReader controlReader
    // Offset: 0x50
    System::IO::StreamReader* controlReader;
    // private System.Net.NetworkCredential credentials
    // Offset: 0x58
    System::Net::NetworkCredential* credentials;
    // private System.Net.IPHostEntry hostEntry
    // Offset: 0x60
    System::Net::IPHostEntry* hostEntry;
    // private System.Net.IPEndPoint localEndPoint
    // Offset: 0x68
    System::Net::IPEndPoint* localEndPoint;
    // private System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x70
    System::Net::IPEndPoint* remoteEndPoint;
    // private System.Net.IWebProxy proxy
    // Offset: 0x78
    System::Net::IWebProxy* proxy;
    // private System.Int32 timeout
    // Offset: 0x80
    int timeout;
    // private System.Int32 rwTimeout
    // Offset: 0x84
    int rwTimeout;
    // private System.Int64 offset
    // Offset: 0x88
    int64_t offset;
    // private System.Boolean binary
    // Offset: 0x90
    bool binary;
    // private System.Boolean enableSsl
    // Offset: 0x91
    bool enableSsl;
    // private System.Boolean usePassive
    // Offset: 0x92
    bool usePassive;
    // private System.Boolean keepAlive
    // Offset: 0x93
    bool keepAlive;
    // private System.String method
    // Offset: 0x98
    ::Il2CppString* method;
    // private System.String renameTo
    // Offset: 0xA0
    ::Il2CppString* renameTo;
    // private System.Object locker
    // Offset: 0xA8
    ::Il2CppObject* locker;
    // private System.Net.FtpWebRequest/RequestState requestState
    // Offset: 0xB0
    System::Net::FtpWebRequest::RequestState requestState;
    // private System.Net.FtpAsyncResult asyncResult
    // Offset: 0xB8
    System::Net::FtpAsyncResult* asyncResult;
    // private System.Net.FtpWebResponse ftpResponse
    // Offset: 0xC0
    System::Net::FtpWebResponse* ftpResponse;
    // private System.IO.Stream requestStream
    // Offset: 0xC8
    System::IO::Stream* requestStream;
    // private System.String initial_path
    // Offset: 0xD0
    ::Il2CppString* initial_path;
    // private System.Text.Encoding dataEncoding
    // Offset: 0xD8
    System::Text::Encoding* dataEncoding;
    // Get static field: static private readonly System.String[] supportedCommands
    static ::Array<::Il2CppString*>* _get_supportedCommands();
    // Set static field: static private readonly System.String[] supportedCommands
    static void _set_supportedCommands(::Array<::Il2CppString*>* value);
    // System.Void .ctor(System.Uri uri)
    // Offset: 0x12C1448
    static FtpWebRequest* New_ctor(System::Uri* uri);
    // static private System.Exception GetMustImplement()
    // Offset: 0x12C15B4
    static System::Exception* GetMustImplement();
    // public System.Boolean get_EnableSsl()
    // Offset: 0x12C17F8
    bool get_EnableSsl();
    // public System.Int32 get_ReadWriteTimeout()
    // Offset: 0x12C1A28
    int get_ReadWriteTimeout();
    // public System.Net.ServicePoint get_ServicePoint()
    // Offset: 0x12C1A38
    System::Net::ServicePoint* get_ServicePoint();
    // private System.String get_DataType()
    // Offset: 0x12C1BAC
    ::Il2CppString* get_DataType();
    // private System.Net.FtpWebRequest/RequestState get_State()
    // Offset: 0x12C1C0C
    System::Net::FtpWebRequest::RequestState get_State();
    // private System.Void set_State(System.Net.FtpWebRequest/RequestState value)
    // Offset: 0x12C1CB0
    void set_State(System::Net::FtpWebRequest::RequestState value);
    // private System.Net.ServicePoint GetServicePoint()
    // Offset: 0x12C1A3C
    System::Net::ServicePoint* GetServicePoint();
    // private System.Void ResolveHost()
    // Offset: 0x12C2A70
    void ResolveHost();
    // private System.Void ProcessRequest()
    // Offset: 0x12C2B9C
    void ProcessRequest();
    // private System.Void SetType()
    // Offset: 0x12C3520
    void SetType();
    // private System.String GetRemoteFolderPath(System.Uri uri)
    // Offset: 0x12C3758
    ::Il2CppString* GetRemoteFolderPath(System::Uri* uri);
    // private System.Void CWDAndSetFileName(System.Uri uri)
    // Offset: 0x12C392C
    void CWDAndSetFileName(System::Uri* uri);
    // private System.Void ProcessMethod()
    // Offset: 0x12C2D8C
    void ProcessMethod();
    // private System.Void CloseControlConnection()
    // Offset: 0x12C4710
    void CloseControlConnection();
    // System.Void CloseDataConnection()
    // Offset: 0x12BFC34
    void CloseDataConnection();
    // private System.Void CloseConnection()
    // Offset: 0x12C4840
    void CloseConnection();
    // private System.Void ProcessSimpleMethod()
    // Offset: 0x12C415C
    void ProcessSimpleMethod();
    // private System.Void UploadData()
    // Offset: 0x12C40A8
    void UploadData();
    // private System.Void DownloadData()
    // Offset: 0x12C4000
    void DownloadData();
    // private System.Void CheckRequestStarted()
    // Offset: 0x12C1770
    void CheckRequestStarted();
    // private System.Void OpenControlConnection()
    // Offset: 0x12C3AD0
    void OpenControlConnection();
    // static private System.String GetInitialPath(System.Net.FtpStatus status)
    // Offset: 0x12C5114
    static ::Il2CppString* GetInitialPath(System::Net::FtpStatus* status);
    // private System.Net.Sockets.Socket SetupPassiveConnection(System.String statusDescription, System.Boolean ipv6)
    // Offset: 0x12C529C
    System::Net::Sockets::Socket* SetupPassiveConnection(::Il2CppString* statusDescription, bool ipv6);
    // private System.Int32 GetPortV4(System.String responseString)
    // Offset: 0x12C546C
    int GetPortV4(::Il2CppString* responseString);
    // private System.Int32 GetPortV6(System.String responseString)
    // Offset: 0x12C56A8
    int GetPortV6(::Il2CppString* responseString);
    // private System.String FormatAddress(System.Net.IPAddress address, System.Int32 Port)
    // Offset: 0x12C5878
    ::Il2CppString* FormatAddress(System::Net::IPAddress* address, int Port);
    // private System.String FormatAddressV6(System.Net.IPAddress address, System.Int32 port)
    // Offset: 0x12C59BC
    ::Il2CppString* FormatAddressV6(System::Net::IPAddress* address, int port);
    // private System.Exception CreateExceptionFromResponse(System.Net.FtpStatus status)
    // Offset: 0x12C3678
    System::Exception* CreateExceptionFromResponse(System::Net::FtpStatus* status);
    // System.Void SetTransferCompleted()
    // Offset: 0x12BFC80
    void SetTransferCompleted();
    // System.Void OperationCompleted()
    // Offset: 0x12C5AC8
    void OperationCompleted();
    // private System.Void SetCompleteWithError(System.Exception exc)
    // Offset: 0x12C323C
    void SetCompleteWithError(System::Exception* exc);
    // private System.Net.Sockets.Socket InitDataConnection()
    // Offset: 0x12C5AF8
    System::Net::Sockets::Socket* InitDataConnection();
    // private System.Void OpenDataConnection()
    // Offset: 0x12C4864
    void OpenDataConnection();
    // private System.Void Authenticate()
    // Offset: 0x12C4CC8
    void Authenticate();
    // private System.Net.FtpStatus SendCommand(System.String command, params System.String[] parameters)
    // Offset: 0x12C3668
    System::Net::FtpStatus* SendCommand(::Il2CppString* command, ::Array<::Il2CppString*>* parameters);
    // Creating initializer_list -> params proxy for: System.Net.FtpStatus SendCommand(System.String command, params System.String[] parameters)
    System::Net::FtpStatus* SendCommand(::Il2CppString* command, std::initializer_list<::Il2CppString*> parameters);
    // Creating TArgs -> initializer_list proxy for: System.Net.FtpStatus SendCommand(System.String command, params System.String[] parameters)
    template<class ...TParams>
    System::Net::FtpStatus* SendCommand(::Il2CppString* command, TParams&&... parameters) {
      return SendCommand(command, {parameters...});
    }
    // private System.Net.FtpStatus SendCommand(System.Boolean waitResponse, System.String command, params System.String[] parameters)
    // Offset: 0x12C1FD4
    System::Net::FtpStatus* SendCommand(bool waitResponse, ::Il2CppString* command, ::Array<::Il2CppString*>* parameters);
    // Creating initializer_list -> params proxy for: System.Net.FtpStatus SendCommand(System.Boolean waitResponse, System.String command, params System.String[] parameters)
    System::Net::FtpStatus* SendCommand(bool waitResponse, ::Il2CppString* command, std::initializer_list<::Il2CppString*> parameters);
    // Creating TArgs -> initializer_list proxy for: System.Net.FtpStatus SendCommand(System.Boolean waitResponse, System.String command, params System.String[] parameters)
    template<class ...TParams>
    System::Net::FtpStatus* SendCommand(bool waitResponse, ::Il2CppString* command, TParams&&... parameters) {
      return SendCommand(waitResponse, command, {parameters...});
    }
    // static System.Net.FtpStatus ServiceNotAvailable()
    // Offset: 0x12C6210
    static System::Net::FtpStatus* ServiceNotAvailable();
    // System.Net.FtpStatus GetResponseStatus()
    // Offset: 0x12C3294
    System::Net::FtpStatus* GetResponseStatus();
    // private System.Void InitiateSecureConnection(ref System.IO.Stream stream)
    // Offset: 0x12C6100
    void InitiateSecureConnection(System::IO::Stream*& stream);
    // System.Boolean ChangeToSSLSocket(ref System.IO.Stream stream)
    // Offset: 0x12C5F18
    bool ChangeToSSLSocket(System::IO::Stream*& stream);
    // private System.Boolean InFinalState()
    // Offset: 0x12C21BC
    bool InFinalState();
    // private System.Boolean InProgress()
    // Offset: 0x12C3258
    bool InProgress();
    // System.Void CheckIfAborted()
    // Offset: 0x12BFBA4
    void CheckIfAborted();
    // private System.Void CheckFinalState()
    // Offset: 0x12C1D60
    void CheckFinalState();
    // public override System.Void set_ConnectionGroupName(System.String value)
    // Offset: 0x12C1610
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ConnectionGroupName(System.String value)
    void set_ConnectionGroupName(::Il2CppString* value);
    // public override System.Int64 get_ContentLength()
    // Offset: 0x12C1674
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int64 WebRequest::get_ContentLength()
    int64_t get_ContentLength();
    // public override System.Void set_ContentLength(System.Int64 value)
    // Offset: 0x12C167C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ContentLength(System.Int64 value)
    void set_ContentLength(int64_t value);
    // public override System.Net.ICredentials get_Credentials()
    // Offset: 0x12C1680
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.ICredentials WebRequest::get_Credentials()
    System::Net::ICredentials* get_Credentials();
    // public override System.Void set_Credentials(System.Net.ICredentials value)
    // Offset: 0x12C1688
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Credentials(System.Net.ICredentials value)
    void set_Credentials(System::Net::ICredentials* value);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x12C1800
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebHeaderCollection WebRequest::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.String get_Method()
    // Offset: 0x12C1864
    // Implemented from: System.Net.WebRequest
    // Base method: System.String WebRequest::get_Method()
    ::Il2CppString* get_Method();
    // public override System.Void set_Method(System.String value)
    // Offset: 0x12C186C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Method(System.String value)
    void set_Method(::Il2CppString* value);
    // public override System.Void set_PreAuthenticate(System.Boolean value)
    // Offset: 0x12C1990
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_PreAuthenticate(System.Boolean value)
    void set_PreAuthenticate(bool value);
    // public override System.Net.IWebProxy get_Proxy()
    // Offset: 0x12C19F0
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.IWebProxy WebRequest::get_Proxy()
    System::Net::IWebProxy* get_Proxy();
    // public override System.Void set_Proxy(System.Net.IWebProxy value)
    // Offset: 0x12C19F8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Proxy(System.Net.IWebProxy value)
    void set_Proxy(System::Net::IWebProxy* value);
    // public override System.Uri get_RequestUri()
    // Offset: 0x12C1A30
    // Implemented from: System.Net.WebRequest
    // Base method: System.Uri WebRequest::get_RequestUri()
    System::Uri* get_RequestUri();
    // public override System.Boolean get_UseDefaultCredentials()
    // Offset: 0x12C1ADC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Boolean WebRequest::get_UseDefaultCredentials()
    bool get_UseDefaultCredentials();
    // public override System.Void set_UseDefaultCredentials(System.Boolean value)
    // Offset: 0x12C1B40
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_UseDefaultCredentials(System.Boolean value)
    void set_UseDefaultCredentials(bool value);
    // public override System.Int32 get_Timeout()
    // Offset: 0x12C1BA4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int32 WebRequest::get_Timeout()
    int get_Timeout();
    // public override System.Void Abort()
    // Offset: 0x12C1DE8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::Abort()
    void Abort();
    // public override System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0x12C220C
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetResponse(System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginGetResponse(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0x12C2458
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::EndGetResponse(System.IAsyncResult asyncResult)
    System::Net::WebResponse* EndGetResponse(System::IAsyncResult* asyncResult);
    // public override System.Net.WebResponse GetResponse()
    // Offset: 0x12C25CC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::GetResponse()
    System::Net::WebResponse* GetResponse();
    // public override System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0x12C2614
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginGetRequestStream(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0x12C2878
    // Implemented from: System.Net.WebRequest
    // Base method: System.IO.Stream WebRequest::EndGetRequestStream(System.IAsyncResult asyncResult)
    System::IO::Stream* EndGetRequestStream(System::IAsyncResult* asyncResult);
    // static private System.Void .cctor()
    // Offset: 0x12C62A0
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::.cctor()
    static void _cctor();
  }; // System.Net.FtpWebRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpWebRequest*, "System.Net", "FtpWebRequest");
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpWebRequest::RequestState, "System.Net", "FtpWebRequest/RequestState");
#pragma pack(pop)
