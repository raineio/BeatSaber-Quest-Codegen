// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileMode
  struct FileMode;
  // Skipping declaration: FileAccess because it is already included!
  // Forward declaring type: FileShare
  struct FileShare;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.FileWebStream
  class FileWebStream : public System::IO::FileStream, public System::Net::ICloseEx {
    public:
    // private System.Net.FileWebRequest m_request
    // Offset: 0x70
    System::Net::FileWebRequest* m_request;
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing)
    // Offset: 0x12BD704
    static FileWebStream* New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing);
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing, System.Int32 length, System.Boolean async)
    // Offset: 0x12BE354
    static FileWebStream* New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing, int length, bool async);
    // private System.Void CheckError()
    // Offset: 0x12BECA4
    void CheckError();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x12BEAE0
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0x12BEB60
    // Implemented from: System.Net.ICloseEx
    // Base method: System.Void ICloseEx::CloseEx(System.Net.CloseExState closeState)
    void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x12BEBA0
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x12BED50
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x12BEE54
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ar)
    // Offset: 0x12BEF70
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::EndRead(System.IAsyncResult ar)
    int EndRead(System::IAsyncResult* ar);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x12BF054
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult ar)
    // Offset: 0x12BF170
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::EndWrite(System.IAsyncResult ar)
    void EndWrite(System::IAsyncResult* ar);
  }; // System.Net.FileWebStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebStream*, "System.Net", "FileWebStream");
#pragma pack(pop)
