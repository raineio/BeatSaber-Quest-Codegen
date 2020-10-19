// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IAsyncResult because it is already included!
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebAsyncResult
  class WebAsyncResult : public System::Net::SimpleAsyncResult {
    public:
    // private System.Int32 nbytes
    // Offset: 0x4C
    int nbytes;
    // private System.IAsyncResult innerAsyncResult
    // Offset: 0x50
    System::IAsyncResult* innerAsyncResult;
    // private System.Net.HttpWebResponse response
    // Offset: 0x58
    System::Net::HttpWebResponse* response;
    // private System.IO.Stream writeStream
    // Offset: 0x60
    System::IO::Stream* writeStream;
    // private System.Byte[] buffer
    // Offset: 0x68
    ::Array<uint8_t>* buffer;
    // private System.Int32 offset
    // Offset: 0x70
    int offset;
    // private System.Int32 size
    // Offset: 0x74
    int size;
    // public System.Boolean EndCalled
    // Offset: 0x78
    bool EndCalled;
    // public System.Boolean AsyncWriteAll
    // Offset: 0x79
    bool AsyncWriteAll;
    // public System.Net.HttpWebRequest AsyncObject
    // Offset: 0x80
    System::Net::HttpWebRequest* AsyncObject;
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.AsyncCallback cb, System.Object state)
    // Offset: 0x118D0A0
    static WebAsyncResult* New_ctor(System::Net::HttpWebRequest* request, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x118D0DC
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state, ::Array<uint8_t>* buffer, int offset, int size);
    // System.Void Reset()
    // Offset: 0x118D128
    void Reset();
    // System.Void SetCompleted(System.Boolean synch, System.Int32 nbytes)
    // Offset: 0x118D170
    void SetCompleted(bool synch, int nbytes);
    // System.Void SetCompleted(System.Boolean synch, System.IO.Stream writeStream)
    // Offset: 0x118D180
    void SetCompleted(bool synch, System::IO::Stream* writeStream);
    // System.Void SetCompleted(System.Boolean synch, System.Net.HttpWebResponse response)
    // Offset: 0x118D1B8
    void SetCompleted(bool synch, System::Net::HttpWebResponse* response);
    // System.Void DoCallback()
    // Offset: 0x118D1F0
    void DoCallback();
    // System.Int32 get_NBytes()
    // Offset: 0x118D1F8
    int get_NBytes();
    // System.Void set_NBytes(System.Int32 value)
    // Offset: 0x118D200
    void set_NBytes(int value);
    // System.IAsyncResult get_InnerAsyncResult()
    // Offset: 0x118D208
    System::IAsyncResult* get_InnerAsyncResult();
    // System.Void set_InnerAsyncResult(System.IAsyncResult value)
    // Offset: 0x118D210
    void set_InnerAsyncResult(System::IAsyncResult* value);
    // System.IO.Stream get_WriteStream()
    // Offset: 0x118D218
    System::IO::Stream* get_WriteStream();
    // System.Net.HttpWebResponse get_Response()
    // Offset: 0x118D220
    System::Net::HttpWebResponse* get_Response();
    // System.Byte[] get_Buffer()
    // Offset: 0x118D228
    ::Array<uint8_t>* get_Buffer();
    // System.Int32 get_Offset()
    // Offset: 0x118D230
    int get_Offset();
    // System.Int32 get_Size()
    // Offset: 0x118D238
    int get_Size();
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x118D098
    // Implemented from: System.Net.SimpleAsyncResult
    // Base method: System.Void SimpleAsyncResult::.ctor(System.AsyncCallback cb, System.Object state)
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state);
  }; // System.Net.WebAsyncResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebAsyncResult*, "System.Net", "WebAsyncResult");
#pragma pack(pop)
