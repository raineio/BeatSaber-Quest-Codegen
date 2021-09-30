// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.StreamContent
  // [TokenAttribute] Offset: FFFFFFFF
  class StreamContent : public System::Net::Http::HttpContent {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.IO.Stream content
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* content;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private readonly System.Int32 bufferSize
    // Size: 0x4
    // Offset: 0x30
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferSize and: cancellationToken
    char __padding1[0x4] = {};
    // private readonly System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private readonly System.Int64 startPosition
    // Size: 0x8
    // Offset: 0x40
    int64_t startPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean contentCopied
    // Size: 0x1
    // Offset: 0x48
    bool contentCopied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.IO.Stream content
    System::IO::Stream*& dyn_content();
    // Get instance field reference: private readonly System.Int32 bufferSize
    int& dyn_bufferSize();
    // Get instance field reference: private readonly System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private readonly System.Int64 startPosition
    int64_t& dyn_startPosition();
    // Get instance field reference: private System.Boolean contentCopied
    bool& dyn_contentCopied();
    // public System.Void .ctor(System.IO.Stream content)
    // Offset: 0x175E850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content)));
    }
    // public System.Void .ctor(System.IO.Stream content, System.Int32 bufferSize)
    // Offset: 0x175E858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content, bufferSize)));
    }
    // System.Void .ctor(System.IO.Stream content, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x175B908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content, System::Threading::CancellationToken cancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content, cancellationToken)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x175E958
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Void HttpContent::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected internal override System.Threading.Tasks.Task SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0x175E9B4
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Threading.Tasks.Task HttpContent::SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    System::Threading::Tasks::Task* SerializeToStreamAsync(System::IO::Stream* stream, System::Net::TransportContext* context);
    // protected internal override System.Boolean TryComputeLength(out System.Int64 length)
    // Offset: 0x175EAB4
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Boolean HttpContent::TryComputeLength(out System.Int64 length)
    bool TryComputeLength(ByRef<int64_t> length);
  }; // System.Net.Http.StreamContent
  #pragma pack(pop)
  static check_size<sizeof(StreamContent), 72 + sizeof(bool)> __System_Net_Http_StreamContentSizeCheck;
  static_assert(sizeof(StreamContent) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::StreamContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::StreamContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::StreamContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::StreamContent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::StreamContent::*)(bool)>(&System::Net::Http::StreamContent::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::StreamContent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::StreamContent::SerializeToStreamAsync
// Il2CppName: SerializeToStreamAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Net::Http::StreamContent::*)(System::IO::Stream*, System::Net::TransportContext*)>(&System::Net::Http::StreamContent::SerializeToStreamAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "TransportContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::StreamContent*), "SerializeToStreamAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: System::Net::Http::StreamContent::TryComputeLength
// Il2CppName: TryComputeLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::StreamContent::*)(ByRef<int64_t>)>(&System::Net::Http::StreamContent::TryComputeLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::StreamContent*), "TryComputeLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
