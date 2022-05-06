// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: AsyncStreamReader
  class AsyncStreamReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::AsyncStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::AsyncStreamReader*, "System.Diagnostics", "AsyncStreamReader");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.AsyncStreamReader
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncStreamReader : public ::Il2CppObject {
    public:
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Decoder decoder
    // Size: 0x8
    // Offset: 0x20
    ::System::Text::Decoder* decoder;
    // Field size check
    static_assert(sizeof(::System::Text::Decoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Boolean cancelOperation
    // Size: 0x1
    // Offset: 0x38
    bool cancelOperation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cancelOperation and: eofEvent
    char __padding5[0x7] = {};
    // private System.Threading.ManualResetEvent eofEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::ManualResetEvent* eofEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Object syncObject
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* syncObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: private System.Text.Encoding encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_encoding();
    // Get instance field reference: private System.Text.Decoder decoder
    [[deprecated("Use field access instead!")]] ::System::Text::Decoder*& dyn_decoder();
    // Get instance field reference: private System.Byte[] byteBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_byteBuffer();
    // Get instance field reference: private System.Char[] charBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_charBuffer();
    // Get instance field reference: private System.Boolean cancelOperation
    [[deprecated("Use field access instead!")]] bool& dyn_cancelOperation();
    // Get instance field reference: private System.Threading.ManualResetEvent eofEvent
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn_eofEvent();
    // Get instance field reference: private System.Object syncObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_syncObject();
    // public System.Void Close()
    // Offset: 0x1CE3664
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1CE3674
    void Dispose(bool disposing);
    // System.Void CancelOperation()
    // Offset: 0x1CE3754
    void CancelOperation();
  }; // System.Diagnostics.AsyncStreamReader
  #pragma pack(pop)
  static check_size<sizeof(AsyncStreamReader), 72 + sizeof(::Il2CppObject*)> __System_Diagnostics_AsyncStreamReaderSizeCheck;
  static_assert(sizeof(AsyncStreamReader) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)()>(&System::Diagnostics::AsyncStreamReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::AsyncStreamReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)(bool)>(&System::Diagnostics::AsyncStreamReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::AsyncStreamReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::CancelOperation
// Il2CppName: CancelOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)()>(&System::Diagnostics::AsyncStreamReader::CancelOperation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::AsyncStreamReader*), "CancelOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
