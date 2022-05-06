// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate*, "LiteNetLib", "EventBasedNetListener/OnNetworkLatencyUpdate");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/LiteNetLib.OnNetworkLatencyUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class EventBasedNetListener::OnNetworkLatencyUpdate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21ADDF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnNetworkLatencyUpdate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnNetworkLatencyUpdate*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, System.Int32 latency)
    // Offset: 0x21AD104
    void Invoke(::LiteNetLib::NetPeer* peer, int latency);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, System.Int32 latency, System.AsyncCallback callback, System.Object object)
    // Offset: 0x21ADE08
    ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, int latency, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x21ADEA4
    void EndInvoke(::System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/LiteNetLib.OnNetworkLatencyUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int)>(&LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::Invoke)> {
  static const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* latency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, latency});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* latency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, latency, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::*)(::System::IAsyncResult*)>(&LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
