// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::HttpContent::FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent::FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpContent/System.Net.Http.FixedMemoryStream
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpContent::FixedMemoryStream : public ::System::IO::MemoryStream {
    public:
    public:
    // private readonly System.Int64 maxSize
    // Size: 0x8
    // Offset: 0x50
    int64_t maxSize;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int64 maxSize
    [[deprecated("Use field access instead!")]] int64_t& dyn_maxSize();
    // public System.Void .ctor(System.Int64 maxSize)
    // Offset: 0x1A00450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContent::FixedMemoryStream* New_ctor(int64_t maxSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpContent::FixedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContent::FixedMemoryStream*, creationType>(maxSize)));
    }
    // private System.Void CheckOverflow(System.Int32 count)
    // Offset: 0x1A00CEC
    void CheckOverflow(int count);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x1A00E3C
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1A00E70
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
  }; // System.Net.Http.HttpContent/System.Net.Http.FixedMemoryStream
  #pragma pack(pop)
  static check_size<sizeof(HttpContent::FixedMemoryStream), 80 + sizeof(int64_t)> __System_Net_Http_HttpContent_FixedMemoryStreamSizeCheck;
  static_assert(sizeof(HttpContent::FixedMemoryStream) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::CheckOverflow
// Il2CppName: CheckOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::FixedMemoryStream::*)(int)>(&System::Net::Http::HttpContent::FixedMemoryStream::CheckOverflow)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent::FixedMemoryStream*), "CheckOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::FixedMemoryStream::*)(uint8_t)>(&System::Net::Http::HttpContent::FixedMemoryStream::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent::FixedMemoryStream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::FixedMemoryStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Http::HttpContent::FixedMemoryStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent::FixedMemoryStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
