// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebRequest
  class FtpWebRequest;
  // Forward declaring type: FtpStatus
  class FtpStatus;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.FtpWebResponse
  class FtpWebResponse : public System::Net::WebResponse {
    public:
    // private System.IO.Stream stream
    // Offset: 0x18
    System::IO::Stream* stream;
    // private System.Uri uri
    // Offset: 0x20
    System::Uri* uri;
    // private System.Net.FtpStatusCode statusCode
    // Offset: 0x28
    System::Net::FtpStatusCode statusCode;
    // private System.DateTime lastModified
    // Offset: 0x30
    System::DateTime lastModified;
    // private System.String bannerMessage
    // Offset: 0x38
    ::Il2CppString* bannerMessage;
    // private System.String welcomeMessage
    // Offset: 0x40
    ::Il2CppString* welcomeMessage;
    // private System.String exitMessage
    // Offset: 0x48
    ::Il2CppString* exitMessage;
    // private System.String statusDescription
    // Offset: 0x50
    ::Il2CppString* statusDescription;
    // private System.String method
    // Offset: 0x58
    ::Il2CppString* method;
    // private System.Boolean disposed
    // Offset: 0x60
    bool disposed;
    // private System.Net.FtpWebRequest request
    // Offset: 0x68
    System::Net::FtpWebRequest* request;
    // System.Int64 contentLength
    // Offset: 0x70
    int64_t contentLength;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Boolean keepAlive)
    // Offset: 0x1232124
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, bool keepAlive);
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x1232240
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, System::Net::FtpStatusCode statusCode, ::Il2CppString* statusDescription);
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatus status)
    // Offset: 0x1232380
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, System::Net::FtpStatus* status);
    // System.Void set_LastModified(System.DateTime value)
    // Offset: 0x1232404
    void set_LastModified(System::DateTime value);
    // System.Void set_BannerMessage(System.String value)
    // Offset: 0x123240C
    void set_BannerMessage(::Il2CppString* value);
    // System.Void set_WelcomeMessage(System.String value)
    // Offset: 0x1232414
    void set_WelcomeMessage(::Il2CppString* value);
    // System.Void set_StatusCode(System.Net.FtpStatusCode value)
    // Offset: 0x123241C
    void set_StatusCode(System::Net::FtpStatusCode value);
    // System.Void set_Stream(System.IO.Stream value)
    // Offset: 0x1232668
    void set_Stream(System::IO::Stream* value);
    // System.Void UpdateStatus(System.Net.FtpStatus status)
    // Offset: 0x1232670
    void UpdateStatus(System::Net::FtpStatus* status);
    // private System.Void CheckDisposed()
    // Offset: 0x12325BC
    void CheckDisposed();
    // System.Boolean IsFinal()
    // Offset: 0x123269C
    bool IsFinal();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x12323A0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x12323FC
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // public override System.Void Close()
    // Offset: 0x1232424
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x1232500
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
  }; // System.Net.FtpWebResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpWebResponse*, "System.Net", "FtpWebResponse");
#pragma pack(pop)
