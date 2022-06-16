// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
#include "BGNet/Core/Messages/UnconnectedMessageHandler_RequestWaiter.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SmallBufferPool
  class SmallBufferPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedMultipartMessage
  class IUnconnectedMultipartMessage;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/MultipartMessageWaiter");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MultipartMessageWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class UnconnectedMessageHandler::MultipartMessageWaiter : public ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiter {
    public:
    public:
    // private readonly SmallBufferPool _bufferPool
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SmallBufferPool* bufferPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SmallBufferPool*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x20
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: length and: ranges
    char __padding2[0x4] = {};
    // [TupleElementNamesAttribute] Offset: 0x10B8F18
    // private readonly System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Int32>> _ranges
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int, int>>* ranges;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<int, int>>*) == 0x8);
    // private System.Boolean _isComplete
    // Size: 0x1
    // Offset: 0x30
    bool isComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x31
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly SmallBufferPool _bufferPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SmallBufferPool*& dyn__bufferPool();
    // Get instance field reference: private System.Byte[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Int32>> _ranges
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<int, int>>*& dyn__ranges();
    // Get instance field reference: private System.Boolean _isComplete
    [[deprecated("Use field access instead!")]] bool& dyn__isComplete();
    // Get instance field reference: private System.Boolean _isDisposed
    [[deprecated("Use field access instead!")]] bool& dyn__isDisposed();
    // public System.Boolean get_isWaiting()
    // Offset: 0x1551F20
    bool get_isWaiting();
    // public System.Byte[] get_data()
    // Offset: 0x1551F40
    ::ArrayW<uint8_t> get_data();
    // public System.Int32 get_length()
    // Offset: 0x1551F48
    int get_length();
    // public System.Void .ctor(SmallBufferPool bufferPool)
    // Offset: 0x1551798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::MultipartMessageWaiter* New_ctor(::GlobalNamespace::SmallBufferPool* bufferPool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::MultipartMessageWaiter*, creationType>(bufferPool)));
    }
    // public System.Void Append(BGNet.Core.Messages.IUnconnectedMultipartMessage packet)
    // Offset: 0x1551868
    void Append(::BGNet::Core::Messages::IUnconnectedMultipartMessage* packet);
    // public override System.Void Dispose()
    // Offset: 0x1551824
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MultipartMessageWaiter
  #pragma pack(pop)
  static check_size<sizeof(UnconnectedMessageHandler::MultipartMessageWaiter), 49 + sizeof(bool)> __BGNet_Core_Messages_UnconnectedMessageHandler_MultipartMessageWaiterSizeCheck;
  static_assert(sizeof(UnconnectedMessageHandler::MultipartMessageWaiter) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::*)(::BGNet::Core::Messages::IUnconnectedMultipartMessage*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::Append)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMultipartMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::MultipartMessageWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
