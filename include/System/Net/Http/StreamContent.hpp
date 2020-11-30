// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: TransportContext
  class TransportContext;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Autogenerated type: System.Net.Http.StreamContent
  class StreamContent : public System::Net::Http::HttpContent {
    public:
    // private readonly System.IO.Stream content
    // Offset: 0x28
    System::IO::Stream* content;
    // private readonly System.Int32 bufferSize
    // Offset: 0x30
    int bufferSize;
    // private readonly System.Threading.CancellationToken cancellationToken
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // private readonly System.Int64 startPosition
    // Offset: 0x40
    int64_t startPosition;
    // private System.Boolean contentCopied
    // Offset: 0x48
    bool contentCopied;
    // public System.Void .ctor(System.IO.Stream content)
    // Offset: 0x1210D78
    static StreamContent* New_ctor(System::IO::Stream* content);
    // public System.Void .ctor(System.IO.Stream content, System.Int32 bufferSize)
    // Offset: 0x1210D80
    static StreamContent* New_ctor(System::IO::Stream* content, int bufferSize);
    // System.Void .ctor(System.IO.Stream content, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x120DBFC
    static StreamContent* New_ctor(System::IO::Stream* content, System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1210E90
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Void HttpContent::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected internal override System.Threading.Tasks.Task SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0x1210EEC
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Threading.Tasks.Task HttpContent::SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    System::Threading::Tasks::Task* SerializeToStreamAsync(System::IO::Stream* stream, System::Net::TransportContext* context);
    // protected internal override System.Boolean TryComputeLength(out System.Int64 length)
    // Offset: 0x1210FEC
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Boolean HttpContent::TryComputeLength(out System.Int64 length)
    bool TryComputeLength(int64_t& length);
  }; // System.Net.Http.StreamContent
  check_size<sizeof(StreamContent), 72 + sizeof(bool) + 8 - (72 + sizeof(bool)) % 8> __System_Net_Http_StreamContentSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
#pragma pack(pop)