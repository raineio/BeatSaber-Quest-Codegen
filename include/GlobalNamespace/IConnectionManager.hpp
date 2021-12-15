// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnection
  class IConnection;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IConnectionManager
  class IConnectionManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectionManager*, "", "IConnectionManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IConnectionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IConnectionManager/*, public System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0xFFFFFFFF
    bool get_isConnecting();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0xFFFFFFFF
    bool get_isDisconnecting();
    // public System.Int32 get_connectionCount()
    // Offset: 0xFFFFFFFF
    int get_connectionCount();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner();
    // public System.Boolean get_isDisposed()
    // Offset: 0xFFFFFFFF
    bool get_isDisposed();
    // public System.Void add_onConnectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_onConnectedEvent(System::Action* value);
    // public System.Void remove_onConnectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectedEvent(System::Action* value);
    // public System.Void add_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void remove_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void add_onConnectionDisconnectedEvent(System.Action`2<IConnection,DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_onConnectionDisconnectedEvent(System.Action`2<IConnection,DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void remove_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void add_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0xFFFFFFFF
    void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.Void remove_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0xFFFFFFFF
    void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0xFFFFFFFF
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod, IConnection excludingConnection)
    // Offset: 0xFFFFFFFF
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection* excludingConnection);
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
    // public System.Boolean Init(IConnectionInitParams`1<T> initParams)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool Init(GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
      static_assert(std::is_base_of_v<GlobalNamespace::IConnectionManager, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IConnectionManager::Init");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initParams)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, initParams);
    }
    // public System.Void Disconnect(DisconnectedReason disconnectedReason)
    // Offset: 0xFFFFFFFF
    void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public IConnection GetConnection(System.Int32 index)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnection* GetConnection(int index);
  }; // IConnectionManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_isConnecting
// Il2CppName: get_isConnecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_isConnecting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_isConnecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_isDisconnecting
// Il2CppName: get_isDisconnecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_isDisconnecting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_isDisconnecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_connectionCount
// Il2CppName: get_connectionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_connectionCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_connectionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::get_isDisposed
// Il2CppName: get_isDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::get_isDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "get_isDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onConnectedEvent
// Il2CppName: add_onConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action*)>(&GlobalNamespace::IConnectionManager::add_onConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onConnectedEvent
// Il2CppName: remove_onConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action*)>(&GlobalNamespace::IConnectionManager::remove_onConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onDisconnectedEvent
// Il2CppName: add_onDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::IConnectionManager::add_onDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onDisconnectedEvent
// Il2CppName: remove_onDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::IConnectionManager::remove_onDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onConnectionFailedEvent
// Il2CppName: add_onConnectionFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>*)>(&GlobalNamespace::IConnectionManager::add_onConnectionFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onConnectionFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onConnectionFailedEvent
// Il2CppName: remove_onConnectionFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>*)>(&GlobalNamespace::IConnectionManager::remove_onConnectionFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onConnectionFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onConnectionConnectedEvent
// Il2CppName: add_onConnectionConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection*>*)>(&GlobalNamespace::IConnectionManager::add_onConnectionConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onConnectionConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onConnectionConnectedEvent
// Il2CppName: remove_onConnectionConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection*>*)>(&GlobalNamespace::IConnectionManager::remove_onConnectionConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onConnectionConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onConnectionDisconnectedEvent
// Il2CppName: add_onConnectionDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::IConnectionManager::add_onConnectionDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onConnectionDisconnectedEvent
// Il2CppName: remove_onConnectionDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::IConnectionManager::remove_onConnectionDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onLatencyUpdatedEvent
// Il2CppName: add_onLatencyUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection*, float>*)>(&GlobalNamespace::IConnectionManager::add_onLatencyUpdatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onLatencyUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onLatencyUpdatedEvent
// Il2CppName: remove_onLatencyUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection*, float>*)>(&GlobalNamespace::IConnectionManager::remove_onLatencyUpdatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onLatencyUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::add_onReceivedDataEvent
// Il2CppName: add_onReceivedDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>*)>(&GlobalNamespace::IConnectionManager::add_onReceivedDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader"), ::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "add_onReceivedDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::remove_onReceivedDataEvent
// Il2CppName: remove_onReceivedDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>*)>(&GlobalNamespace::IConnectionManager::remove_onReceivedDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnection"), ::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader"), ::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "remove_onReceivedDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::SendToAll
// Il2CppName: SendToAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(LiteNetLib::Utils::NetDataWriter*, LiteNetLib::DeliveryMethod)>(&GlobalNamespace::IConnectionManager::SendToAll)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* deliveryMethod = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "SendToAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, deliveryMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::SendToAll
// Il2CppName: SendToAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(LiteNetLib::Utils::NetDataWriter*, LiteNetLib::DeliveryMethod, GlobalNamespace::IConnection*)>(&GlobalNamespace::IConnectionManager::SendToAll)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* deliveryMethod = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")->byval_arg;
    static auto* excludingConnection = &::il2cpp_utils::GetClassFromName("", "IConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "SendToAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, deliveryMethod, excludingConnection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)()>(&GlobalNamespace::IConnectionManager::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::Init
// Il2CppName: Init
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::IConnectionManager::Disconnect)> {
  static const MethodInfo* get() {
    static auto* disconnectedReason = &::il2cpp_utils::GetClassFromName("", "DisconnectedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnectedReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionManager::GetConnection
// Il2CppName: GetConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnection* (GlobalNamespace::IConnectionManager::*)(int)>(&GlobalNamespace::IConnectionManager::GetConnection)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionManager*), "GetConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
