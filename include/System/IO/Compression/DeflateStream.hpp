// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Compression.CompressionMode
#include "System/IO/Compression/CompressionMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateStreamNative
  class DeflateStreamNative;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStream
  class DeflateStream : public System::IO::Stream {
    public:
    // Nested type: System::IO::Compression::DeflateStream::ReadMethod
    class ReadMethod;
    // Nested type: System::IO::Compression::DeflateStream::WriteMethod
    class WriteMethod;
    // private System.IO.Stream base_stream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* base_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.IO.Compression.CompressionMode mode
    // Size: 0x4
    // Offset: 0x30
    System::IO::Compression::CompressionMode mode;
    // Field size check
    static_assert(sizeof(System::IO::Compression::CompressionMode) == 0x4);
    // private System.Boolean leaveOpen
    // Size: 0x1
    // Offset: 0x34
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x35
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: native
    char __padding3[0x2] = {};
    // private System.IO.Compression.DeflateStreamNative native
    // Size: 0x8
    // Offset: 0x38
    System::IO::Compression::DeflateStreamNative* native;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStreamNative*) == 0x8);
    // Creating value type constructor for type: DeflateStream
    DeflateStream(System::IO::Stream* base_stream_ = {}, System::IO::Compression::CompressionMode mode_ = {}, bool leaveOpen_ = {}, bool disposed_ = {}, System::IO::Compression::DeflateStreamNative* native_ = {}) noexcept : base_stream{base_stream_}, mode{mode_}, leaveOpen{leaveOpen_}, disposed{disposed_}, native{native_} {}
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode)
    // Offset: 0x186EB38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode)));
    }
    // System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen, System.Int32 windowsBits)
    // Offset: 0x186EC98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen, int windowsBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode, leaveOpen, windowsBits)));
    }
    // System.Void .ctor(System.IO.Stream compressedStream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen, System.Boolean gzip)
    // Offset: 0x186EB44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(compressedStream, mode, leaveOpen, gzip)));
    }
    // private System.Int32 ReadInternal(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x186EF18
    int ReadInternal(::Array<uint8_t>* array, int offset, int count);
    // private System.Void WriteInternal(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x186F1B0
    void WriteInternal(::Array<uint8_t>* array, int offset, int count);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x186EDC4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x186EFD4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* array, int offset, int count);
    // public override System.Void Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x186F25C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* array, int offset, int count);
    // public override System.Void Flush()
    // Offset: 0x186F440
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.IAsyncResult BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x186F56C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.IAsyncResult BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x186F864
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x186FB5C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x186FCA4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x186FDD0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x186FE30
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Boolean get_CanRead()
    // Offset: 0x186FE90
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x186FEC8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x186FED0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x186FF0C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x186FF6C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x186FFCC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
  }; // System.IO.Compression.DeflateStream
  #pragma pack(pop)
  static check_size<sizeof(DeflateStream), 56 + sizeof(System::IO::Compression::DeflateStreamNative*)> __System_IO_Compression_DeflateStreamSizeCheck;
  static_assert(sizeof(DeflateStream) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStream*, "System.IO.Compression", "DeflateStream");
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadInternal
// Il2CppName: ReadInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int)>(&System::IO::Compression::DeflateStream::ReadInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "ReadInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::WriteInternal
// Il2CppName: WriteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int)>(&System::IO::Compression::DeflateStream::WriteInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "WriteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(bool)>(&System::IO::Compression::DeflateStream::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int)>(&System::IO::Compression::DeflateStream::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int)>(&System::IO::Compression::DeflateStream::Write)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStream::BeginRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Compression::DeflateStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStream::BeginWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(System::IAsyncResult*)>(&System::IO::Compression::DeflateStream::EndRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(System::IAsyncResult*)>(&System::IO::Compression::DeflateStream::EndWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::Compression::DeflateStream::Seek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SeekOrigin>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(int64_t)>(&System::IO::Compression::DeflateStream::SetLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanSeek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_Length)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(int64_t)>(&System::IO::Compression::DeflateStream::set_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
