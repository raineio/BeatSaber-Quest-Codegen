// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: LeaseSink
  class LeaseSink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseSink*, "System.Runtime.Remoting.Lifetime", "LeaseSink");
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.LeaseSink
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaseSink : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Messaging::IMessageSink* nextSink;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink
    operator ::System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating interface conversion operator: i_IMessageSink
    inline ::System::Runtime::Remoting::Messaging::IMessageSink* i_IMessageSink() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink*
    constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() const noexcept {
      return nextSink;
    }
    // Get instance field reference: private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn__nextSink();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0x1C6E5B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaseSink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Lifetime::LeaseSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaseSink*, creationType>(nextSink)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1C71B84
    ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1C71EF0
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // private System.Void RenewLease(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1C71C4C
    void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* msg);
  }; // System.Runtime.Remoting.Lifetime.LeaseSink
  #pragma pack(pop)
  static check_size<sizeof(LeaseSink), 16 + sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*)> __System_Runtime_Remoting_Lifetime_LeaseSinkSizeCheck;
  static_assert(sizeof(LeaseSink) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseSink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseSink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseSink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease
// Il2CppName: RenewLease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseSink*), "RenewLease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
