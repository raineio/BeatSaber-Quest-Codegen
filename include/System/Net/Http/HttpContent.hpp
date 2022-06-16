// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpContentHeaders
  class HttpContentHeaders;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: TransportContext
  class TransportContext;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: HttpContent
  class HttpContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpContent
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpContent : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::Net::Http::HttpContent::FixedMemoryStream
    class FixedMemoryStream;
    // Nested type: ::System::Net::Http::HttpContent::$LoadIntoBufferAsync$d__17
    struct $LoadIntoBufferAsync$d__17;
    // Nested type: ::System::Net::Http::HttpContent::$ReadAsStringAsync$d__20
    struct $ReadAsStringAsync$d__20;
    public:
    // private System.Net.Http.HttpContent/System.Net.Http.FixedMemoryStream buffer
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Http::HttpContent::FixedMemoryStream* buffer;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpContent::FixedMemoryStream*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x18
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: headers
    char __padding1[0x7] = {};
    // private System.Net.Http.Headers.HttpContentHeaders headers
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Http::Headers::HttpContentHeaders* headers;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::HttpContentHeaders*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Net.Http.HttpContent/System.Net.Http.FixedMemoryStream buffer
    [[deprecated("Use field access instead!")]] ::System::Net::Http::HttpContent::FixedMemoryStream*& dyn_buffer();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Net.Http.Headers.HttpContentHeaders headers
    [[deprecated("Use field access instead!")]] ::System::Net::Http::Headers::HttpContentHeaders*& dyn_headers();
    // public System.Net.Http.Headers.HttpContentHeaders get_Headers()
    // Offset: 0x1987424
    ::System::Net::Http::Headers::HttpContentHeaders* get_Headers();
    // System.Nullable`1<System.Int64> get_LoadedBufferLength()
    // Offset: 0x198BA7C
    ::System::Nullable_1<int64_t> get_LoadedBufferLength();
    // protected System.Void .ctor()
    // Offset: 0x1986FCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContent*, creationType>()));
    }
    // System.Void CopyTo(System.IO.Stream stream)
    // Offset: 0x199A370
    void CopyTo(::System::IO::Stream* stream);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream stream)
    // Offset: 0x199A288
    ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0x199A394
    ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);
    // static private System.Net.Http.HttpContent/System.Net.Http.FixedMemoryStream CreateFixedMemoryStream(System.Int64 maxBufferSize)
    // Offset: 0x199A458
    static ::System::Net::Http::HttpContent::FixedMemoryStream* CreateFixedMemoryStream(int64_t maxBufferSize);
    // public System.Void Dispose()
    // Offset: 0x199A4E8
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x199A4F8
    void Dispose(bool disposing);
    // public System.Threading.Tasks.Task LoadIntoBufferAsync()
    // Offset: 0x199A524
    ::System::Threading::Tasks::Task* LoadIntoBufferAsync();
    // public System.Threading.Tasks.Task LoadIntoBufferAsync(System.Int64 maxBufferSize)
    // Offset: 0x1998128
    ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t maxBufferSize);
    // public System.Threading.Tasks.Task`1<System.String> ReadAsStringAsync()
    // Offset: 0x1997AB8
    ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync();
    // static private System.Text.Encoding GetEncodingFromBuffer(System.Byte[] buffer, System.Int32 length, ref System.Int32 preambleLength)
    // Offset: 0x199A52C
    static ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t> buffer, int length, ByRef<int> preambleLength);
    // static private System.Int32 StartsWith(System.Byte[] array, System.Int32 length, System.Byte[] value)
    // Offset: 0x199A6BC
    static int StartsWith(::ArrayW<uint8_t> array, int length, ::ArrayW<uint8_t> value);
    // protected internal System.Threading.Tasks.Task SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);
    // protected internal System.Boolean TryComputeLength(out System.Int64 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryComputeLength(ByRef<int64_t> length);
  }; // System.Net.Http.HttpContent
  #pragma pack(pop)
  static check_size<sizeof(HttpContent), 32 + sizeof(::System::Net::Http::Headers::HttpContentHeaders*)> __System_Net_Http_HttpContentSizeCheck;
  static_assert(sizeof(HttpContent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpContent::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpContentHeaders* (System::Net::Http::HttpContent::*)()>(&System::Net::Http::HttpContent::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::get_LoadedBufferLength
// Il2CppName: get_LoadedBufferLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (System::Net::Http::HttpContent::*)()>(&System::Net::Http::HttpContent::get_LoadedBufferLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "get_LoadedBufferLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpContent::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::*)(::System::IO::Stream*)>(&System::Net::Http::HttpContent::CopyTo)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::CopyToAsync
// Il2CppName: CopyToAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::HttpContent::*)(::System::IO::Stream*)>(&System::Net::Http::HttpContent::CopyToAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::CopyToAsync
// Il2CppName: CopyToAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::HttpContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&System::Net::Http::HttpContent::CopyToAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "TransportContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::CreateFixedMemoryStream
// Il2CppName: CreateFixedMemoryStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent::FixedMemoryStream* (*)(int64_t)>(&System::Net::Http::HttpContent::CreateFixedMemoryStream)> {
  static const MethodInfo* get() {
    static auto* maxBufferSize = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "CreateFixedMemoryStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxBufferSize});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::*)()>(&System::Net::Http::HttpContent::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::*)(bool)>(&System::Net::Http::HttpContent::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::LoadIntoBufferAsync
// Il2CppName: LoadIntoBufferAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::HttpContent::*)()>(&System::Net::Http::HttpContent::LoadIntoBufferAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "LoadIntoBufferAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::LoadIntoBufferAsync
// Il2CppName: LoadIntoBufferAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::HttpContent::*)(int64_t)>(&System::Net::Http::HttpContent::LoadIntoBufferAsync)> {
  static const MethodInfo* get() {
    static auto* maxBufferSize = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "LoadIntoBufferAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxBufferSize});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::ReadAsStringAsync
// Il2CppName: ReadAsStringAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (System::Net::Http::HttpContent::*)()>(&System::Net::Http::HttpContent::ReadAsStringAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "ReadAsStringAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::GetEncodingFromBuffer
// Il2CppName: GetEncodingFromBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(::ArrayW<uint8_t>, int, ByRef<int>)>(&System::Net::Http::HttpContent::GetEncodingFromBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* preambleLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "GetEncodingFromBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, preambleLength});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::StartsWith
// Il2CppName: StartsWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&System::Net::Http::HttpContent::StartsWith)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "StartsWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, length, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::SerializeToStreamAsync
// Il2CppName: SerializeToStreamAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::HttpContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&System::Net::Http::HttpContent::SerializeToStreamAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "TransportContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "SerializeToStreamAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::TryComputeLength
// Il2CppName: TryComputeLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpContent::*)(ByRef<int64_t>)>(&System::Net::Http::HttpContent::TryComputeLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent*), "TryComputeLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
