// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: TransportContext
  class TransportContext;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: ByteArrayContent
  class ByteArrayContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::ByteArrayContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::ByteArrayContent*, "System.Net.Http", "ByteArrayContent");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.ByteArrayContent
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteArrayContent : public ::System::Net::Http::HttpContent {
    public:
    public:
    // private readonly System.Byte[] content
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> content;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Int32 offset
    // Size: 0x4
    // Offset: 0x30
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 count
    // Size: 0x4
    // Offset: 0x34
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Byte[] content
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_content();
    // Get instance field reference: private readonly System.Int32 offset
    [[deprecated("Use field access instead!")]] int& dyn_offset();
    // Get instance field reference: private readonly System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // public System.Void .ctor(System.Byte[] content)
    // Offset: 0x1986F28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteArrayContent* New_ctor(::ArrayW<uint8_t> content) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::ByteArrayContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteArrayContent*, creationType>(content)));
    }
    // protected internal override System.Threading.Tasks.Task SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0x1986FD4
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Threading.Tasks.Task HttpContent::SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);
    // protected internal override System.Boolean TryComputeLength(out System.Int64 length)
    // Offset: 0x1986FFC
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Boolean HttpContent::TryComputeLength(out System.Int64 length)
    bool TryComputeLength(ByRef<int64_t> length);
  }; // System.Net.Http.ByteArrayContent
  #pragma pack(pop)
  static check_size<sizeof(ByteArrayContent), 52 + sizeof(int)> __System_Net_Http_ByteArrayContentSizeCheck;
  static_assert(sizeof(ByteArrayContent) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::ByteArrayContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::ByteArrayContent::SerializeToStreamAsync
// Il2CppName: SerializeToStreamAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::Http::ByteArrayContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&System::Net::Http::ByteArrayContent::SerializeToStreamAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "TransportContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::ByteArrayContent*), "SerializeToStreamAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: System::Net::Http::ByteArrayContent::TryComputeLength
// Il2CppName: TryComputeLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::ByteArrayContent::*)(ByRef<int64_t>)>(&System::Net::Http::ByteArrayContent::TryComputeLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::ByteArrayContent*), "TryComputeLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
