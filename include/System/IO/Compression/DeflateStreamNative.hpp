// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: CompressionMode
  struct CompressionMode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Autogenerated type: System.IO.Compression.DeflateStreamNative
  class DeflateStreamNative : public ::Il2CppObject {
    public:
    // Nested type: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite
    class UnmanagedReadOrWrite;
    // Nested type: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle
    class SafeDeflateStreamHandle;
    // private System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite feeder
    // Offset: 0x10
    System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder;
    // private System.IO.Stream base_stream
    // Offset: 0x18
    System::IO::Stream* base_stream;
    // private System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle z_stream
    // Offset: 0x20
    System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* z_stream;
    // private System.Runtime.InteropServices.GCHandle data
    // Offset: 0x28
    System::Runtime::InteropServices::GCHandle data;
    // private System.Boolean disposed
    // Offset: 0x2C
    bool disposed;
    // private System.Byte[] io_buffer
    // Offset: 0x30
    ::Array<uint8_t>* io_buffer;
    // static public System.IO.Compression.DeflateStreamNative Create(System.IO.Stream compressedStream, System.IO.Compression.CompressionMode mode, System.Boolean gzip)
    // Offset: 0x1488CFC
    static System::IO::Compression::DeflateStreamNative* Create(System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool gzip);
    // public System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1488EF4
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x14895D4
    void Flush();
    // public System.Int32 ReadZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x1489018
    int ReadZStream(System::IntPtr buffer, int length);
    // public System.Void WriteZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x14892AC
    void WriteZStream(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x148A9C0
    static int UnmanagedRead(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AEBC
    int UnmanagedRead(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x148AA8C
    static int UnmanagedWrite(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AFF4
    int UnmanagedWrite(System::IntPtr buffer, int length);
    // static private System.Void CheckResult(System.Int32 result, System.String where)
    // Offset: 0x148ACF0
    static void CheckResult(int result, ::Il2CppString* where);
    // static private System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle CreateZStream(System.IO.Compression.CompressionMode compress, System.Boolean gzip, System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite feeder, System.IntPtr data)
    // Offset: 0x148AB74
    static System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder, System::IntPtr data);
    // static private System.Int32 CloseZStream(System.IntPtr stream)
    // Offset: 0x148B1AC
    static int CloseZStream(System::IntPtr stream);
    // static private System.Int32 Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream)
    // Offset: 0x148AC80
    static int Flush(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream);
    // static private System.Int32 ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148ADBC
    static int ReadZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // static private System.Int32 WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AE3C
    static int WriteZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // private System.Void .ctor()
    // Offset: 0x148AB58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DeflateStreamNative* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x148AC14
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.IO.Compression.DeflateStreamNative
  check_size<sizeof(DeflateStreamNative), 48 + sizeof(void*) + 8 - (48 + sizeof(void*)) % 8> __System_IO_Compression_DeflateStreamNativeSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStreamNative*, "System.IO.Compression", "DeflateStreamNative");
#pragma pack(pop)