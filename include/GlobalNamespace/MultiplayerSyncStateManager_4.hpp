// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerSessionManager/MessageType
#include "GlobalNamespace/MultiplayerSessionManager_MessageType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: IStateTable`2<TType, TState>
  template<typename TType, typename TState>
  class IStateTable_2;
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: RemoteMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class RemoteMultiplayerSyncState_3;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Skipping declaration: IConvertible because it is already included!
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerSyncStateManager`4
  template<typename TStateTable, typename TType, typename TState, typename TSerializable>
  class MultiplayerSyncStateManager_4 : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerSyncStateManager_4::$$c<TStateTable, TType, TState, TSerializable>
    class $$c;
    // Autogenerated type: MultiplayerSyncStateManager`4/<>c
    class $$c : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>*;
      static constexpr std::string_view NESTED_NAME = "$$c";
      // Autogenerated static field getter
      // Get static field: static public readonly MultiplayerSyncStateManager`4/<>c<TStateTable,TType,TState,TSerializable> <>9
      static typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* _get_$$9() {
        static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly MultiplayerSyncStateManager`4/<>c<TStateTable,TType,TState,TSerializable> <>9
      static void _set_$$9(typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* value) {
        static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__33_0
      static System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* _get_$$9__33_0() {
        static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9__33_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9__33_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__33_0
      static void _set_$$9__33_0(System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* value) {
        static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9__33_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9__33_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // System.Int32 <HandlePlayerConnected>b__33_0(RemoteMultiplayerSyncState`3<TStateTable,TType,TState> s)
      // Offset: 0xFFFFFFFF
      int $HandlePlayerConnected$b__33_0(GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("<HandlePlayerConnected>b__33_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "<HandlePlayerConnected>b__33_0", {}, ::il2cpp_utils::ExtractTypes(s))));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, s);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>()));
      }
    }; // MultiplayerSyncStateManager`4/<>c
    // Could not write size check! Type: MultiplayerSyncStateManager`4/<>c is generic!
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x0
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private LocalMultiplayerSyncState`3<TStateTable,TType,TState> _localState
    // Offset: 0x0
    GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _connectedPlayerStates
    // Offset: 0x0
    System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* connectedPlayerStates;
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _disconnectedPlayerStates
    // Offset: 0x0
    System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* disconnectedPlayerStates;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected IMultiplayerSessionManager get_multiplayerSessionManager()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_multiplayerSessionManager");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IMultiplayerSessionManager*>(), "get_multiplayerSessionManager", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal__method);
    }
    // public LocalMultiplayerSyncState`3<TStateTable,TType,TState> get_localState()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_localState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), "get_localState", {}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_connectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_connectedPlayerCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_connectedPlayerCount", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_disconnectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_disconnectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_disconnectedPlayerCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_disconnectedPlayerCount", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_syncTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_syncTime", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_unreliableUpdateFrequency()
    // Offset: 0xFFFFFFFF
    float get_unreliableUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_unreliableUpdateFrequency");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_unreliableUpdateFrequency", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_reliableUpdateFrequency()
    // Offset: 0xFFFFFFFF
    float get_reliableUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_reliableUpdateFrequency");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_reliableUpdateFrequency", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Int32 get_localBufferSize()
    // Offset: 0xFFFFFFFF
    int get_localBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_localBufferSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_localBufferSize", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // protected System.Int32 get_remoteBufferSize()
    // Offset: 0xFFFFFFFF
    int get_remoteBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_remoteBufferSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_remoteBufferSize", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // protected IPacketPool`1<TSerializable> get_serializablePool()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_serializablePool");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IPacketPool_1<TSerializable>*>(), "get_serializablePool", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IPacketPool_1<TSerializable>*, false>(this, ___internal__method);
    }
    // protected MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("get_messageType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSessionManager_MessageType>(), "get_messageType", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal__method);
    }
    // protected System.Void Start()
    // Offset: 0xFFFFFFFF
    void Start() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("Start");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void LateUpdate()
    // Offset: 0xFFFFFFFF
    void LateUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("LateUpdate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LateUpdate", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("OnDestroy");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected TState Interpolate(TState a, System.Single timeA, TState b, System.Single timeB, System.Single time)
    // Offset: 0xFFFFFFFF
    TState Interpolate(TState a, float timeA, TState b, float timeB, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("Interpolate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TState>(), "Interpolate", {}, ::il2cpp_utils::ExtractTypes(a, timeA, b, timeB, time)));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, a, timeA, b, timeB, time);
    }
    // protected TState Smooth(TState a, TState b, System.Single smoooth)
    // Offset: 0xFFFFFFFF
    TState Smooth(TState a, TState b, float smoooth) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("Smooth");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TState>(), "Smooth", {}, ::il2cpp_utils::ExtractTypes(a, b, smoooth)));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, a, b, smoooth);
    }
    // public System.Void ClearBufferedStates()
    // Offset: 0xFFFFFFFF
    void ClearBufferedStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("ClearBufferedStates");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ClearBufferedStates", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void TryCreateLocalState()
    // Offset: 0xFFFFFFFF
    void TryCreateLocalState() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("TryCreateLocalState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TryCreateLocalState", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandlePlayerConnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandlePlayerConnected(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("HandlePlayerConnected");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerConnected", {}, ::il2cpp_utils::ExtractTypes(player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("HandlePlayerDisconnected");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerDisconnected", {}, ::il2cpp_utils::ExtractTypes(player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandleSyncPacket(TSerializable packet, IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandleSyncPacket(TSerializable packet, GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("HandleSyncPacket");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSyncPacket", {}, ::il2cpp_utils::ExtractTypes(packet, player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("GetSyncState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), "GetSyncState", {}, ::il2cpp_utils::ExtractTypes(i))));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("GetSyncStateForPlayer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), "GetSyncStateForPlayer", {}, ::il2cpp_utils::ExtractTypes(player))));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetDisconnectedSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetDisconnectedSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext("GetDisconnectedSyncState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), "GetDisconnectedSyncState", {}, ::il2cpp_utils::ExtractTypes(i))));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSyncStateManager_4").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>*>()));
    }
  }; // MultiplayerSyncStateManager`4
  // Could not write size check! Type: MultiplayerSyncStateManager`4 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MultiplayerSyncStateManager_4, "", "MultiplayerSyncStateManager`4");
#pragma pack(pop)