// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.RequestStream
  class RequestStream : public System::IO::Stream {
    public:
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 offset
    // Size: 0x4
    // Offset: 0x30
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x34
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 remaining_body
    // Size: 0x8
    // Offset: 0x38
    int64_t remaining_body;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x40
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: stream
    char __padding4[0x7] = {};
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x48
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: RequestStream
    RequestStream(::Array<uint8_t>* buffer_ = {}, int offset_ = {}, int length_ = {}, int64_t remaining_body_ = {}, bool disposed_ = {}, System::IO::Stream* stream_ = {}) noexcept : buffer{buffer_}, offset{offset_}, length{length_}, remaining_body{remaining_body_}, disposed{disposed_}, stream{stream_} {}
    // System.Void .ctor(System.IO.Stream stream, System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x1492D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestStream* New_ctor(System::IO::Stream* stream, ::Array<uint8_t>* buffer, int offset, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::RequestStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestStream*, creationType>(stream, buffer, offset, length)));
    }
    // System.Void .ctor(System.IO.Stream stream, System.Byte[] buffer, System.Int32 offset, System.Int32 length, System.Int64 contentlength)
    // Offset: 0x1492D50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestStream* New_ctor(System::IO::Stream* stream, ::Array<uint8_t>* buffer, int offset, int length, int64_t contentlength) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::RequestStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestStream*, creationType>(stream, buffer, offset, length, contentlength)));
    }
    // private System.Int32 FillFromBuffer(System.Byte[] buffer, System.Int32 off, System.Int32 count)
    // Offset: 0x1492F40
    int FillFromBuffer(::Array<uint8_t>* buffer, int off, int count);
    // public override System.Boolean get_CanRead()
    // Offset: 0x1492DF8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1492E00
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1492E08
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x1492E10
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1492E70
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1492ED0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Close()
    // Offset: 0x1492F30
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1492F3C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x14931C4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    // Offset: 0x1493324
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* cback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ares)
    // Offset: 0x1493548
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult ares)
    int EndRead(System::IAsyncResult* ares);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x14937EC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x149384C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x14938AC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    // Offset: 0x149390C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* cback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult async_result)
    // Offset: 0x149396C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult async_result)
    void EndWrite(System::IAsyncResult* async_result);
  }; // System.Net.RequestStream
  #pragma pack(pop)
  static check_size<sizeof(RequestStream), 72 + sizeof(System::IO::Stream*)> __System_Net_RequestStreamSizeCheck;
  static_assert(sizeof(RequestStream) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::RequestStream*, "System.Net", "RequestStream");
// Writing MetadataGetter for method: System::Net::RequestStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::RequestStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::RequestStream::FillFromBuffer
// Il2CppName: FillFromBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::RequestStream::*)(::Array<uint8_t>*, int, int)>(&System::Net::RequestStream::FillFromBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "FillFromBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::RequestStream::*)()>(&System::Net::RequestStream::get_CanRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::RequestStream::*)()>(&System::Net::RequestStream::get_CanSeek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::RequestStream::*)()>(&System::Net::RequestStream::get_CanWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::RequestStream::*)()>(&System::Net::RequestStream::get_Length)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::RequestStream::*)()>(&System::Net::RequestStream::get_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)(int64_t)>(&System::Net::RequestStream::set_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)()>(&System::Net::RequestStream::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)()>(&System::Net::RequestStream::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::RequestStream::*)(::Array<uint8_t>*&, int, int)>(&System::Net::RequestStream::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::RequestStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::RequestStream::BeginRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::RequestStream::*)(System::IAsyncResult*)>(&System::Net::RequestStream::EndRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::RequestStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Net::RequestStream::Seek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SeekOrigin>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)(int64_t)>(&System::Net::RequestStream::SetLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)(::Array<uint8_t>*, int, int)>(&System::Net::RequestStream::Write)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::RequestStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::RequestStream::BeginWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::RequestStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::RequestStream::*)(System::IAsyncResult*)>(&System::Net::RequestStream::EndWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::RequestStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
