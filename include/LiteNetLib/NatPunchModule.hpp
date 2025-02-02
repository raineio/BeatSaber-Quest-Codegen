// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: LiteNetLib.NatAddressType
#include "LiteNetLib/NatAddressType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetPacketProcessor
  class NetPacketProcessor;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetSocket
  class NetSocket;
  // Forward declaring type: INatPunchListener
  class INatPunchListener;
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatPunchModule
  class NatPunchModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NatPunchModule);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule*, "LiteNetLib", "NatPunchModule");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule
  // [TokenAttribute] Offset: FFFFFFFF
  class NatPunchModule : public ::Il2CppObject {
    public:
    // Nested type: ::LiteNetLib::NatPunchModule::RequestEventData
    struct RequestEventData;
    // Nested type: ::LiteNetLib::NatPunchModule::SuccessEventData
    struct SuccessEventData;
    // Nested type: ::LiteNetLib::NatPunchModule::NatIntroduceRequestPacket
    class NatIntroduceRequestPacket;
    // Nested type: ::LiteNetLib::NatPunchModule::NatIntroduceResponsePacket
    class NatIntroduceResponsePacket;
    // Nested type: ::LiteNetLib::NatPunchModule::NatPunchPacket
    class NatPunchPacket;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LiteNetLib.NatPunchModule/LiteNetLib.RequestEventData
    // [TokenAttribute] Offset: FFFFFFFF
    struct RequestEventData/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Net.IPEndPoint LocalEndPoint
      // Size: 0x8
      // Offset: 0x0
      ::System::Net::IPEndPoint* LocalEndPoint;
      // Field size check
      static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
      // public System.Net.IPEndPoint RemoteEndPoint
      // Size: 0x8
      // Offset: 0x8
      ::System::Net::IPEndPoint* RemoteEndPoint;
      // Field size check
      static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
      // public System.String Token
      // Size: 0x8
      // Offset: 0x10
      ::StringW Token;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: RequestEventData
      constexpr RequestEventData(::System::Net::IPEndPoint* LocalEndPoint_ = {}, ::System::Net::IPEndPoint* RemoteEndPoint_ = {}, ::StringW Token_ = {}) noexcept : LocalEndPoint{LocalEndPoint_}, RemoteEndPoint{RemoteEndPoint_}, Token{Token_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Net.IPEndPoint LocalEndPoint
      [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_LocalEndPoint();
      // Get instance field reference: public System.Net.IPEndPoint RemoteEndPoint
      [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_RemoteEndPoint();
      // Get instance field reference: public System.String Token
      [[deprecated("Use field access instead!")]] ::StringW& dyn_Token();
    }; // LiteNetLib.NatPunchModule/LiteNetLib.RequestEventData
    #pragma pack(pop)
    static check_size<sizeof(NatPunchModule::RequestEventData), 16 + sizeof(::StringW)> __LiteNetLib_NatPunchModule_RequestEventDataSizeCheck;
    static_assert(sizeof(NatPunchModule::RequestEventData) == 0x18);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LiteNetLib.NatPunchModule/LiteNetLib.SuccessEventData
    // [TokenAttribute] Offset: FFFFFFFF
    struct SuccessEventData/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Net.IPEndPoint TargetEndPoint
      // Size: 0x8
      // Offset: 0x0
      ::System::Net::IPEndPoint* TargetEndPoint;
      // Field size check
      static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
      // public LiteNetLib.NatAddressType Type
      // Size: 0x4
      // Offset: 0x8
      ::LiteNetLib::NatAddressType Type;
      // Field size check
      static_assert(sizeof(::LiteNetLib::NatAddressType) == 0x4);
      // Padding between fields: Type and: Token
      char __padding1[0x4] = {};
      // public System.String Token
      // Size: 0x8
      // Offset: 0x10
      ::StringW Token;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: SuccessEventData
      constexpr SuccessEventData(::System::Net::IPEndPoint* TargetEndPoint_ = {}, ::LiteNetLib::NatAddressType Type_ = {}, ::StringW Token_ = {}) noexcept : TargetEndPoint{TargetEndPoint_}, Type{Type_}, Token{Token_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Net.IPEndPoint TargetEndPoint
      [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_TargetEndPoint();
      // Get instance field reference: public LiteNetLib.NatAddressType Type
      [[deprecated("Use field access instead!")]] ::LiteNetLib::NatAddressType& dyn_Type();
      // Get instance field reference: public System.String Token
      [[deprecated("Use field access instead!")]] ::StringW& dyn_Token();
    }; // LiteNetLib.NatPunchModule/LiteNetLib.SuccessEventData
    #pragma pack(pop)
    static check_size<sizeof(NatPunchModule::SuccessEventData), 16 + sizeof(::StringW)> __LiteNetLib_NatPunchModule_SuccessEventDataSizeCheck;
    static_assert(sizeof(NatPunchModule::SuccessEventData) == 0x18);
    public:
    // private readonly LiteNetLib.NetSocket _socket
    // Size: 0x8
    // Offset: 0x10
    ::LiteNetLib::NetSocket* socket;
    // Field size check
    static_assert(sizeof(::LiteNetLib::NetSocket*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/LiteNetLib.RequestEventData> _requestEvents
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::RequestEventData>* requestEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::RequestEventData>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/LiteNetLib.SuccessEventData> _successEvents
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::SuccessEventData>* successEvents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::SuccessEventData>*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataReader _cacheReader
    // Size: 0x8
    // Offset: 0x28
    ::LiteNetLib::Utils::NetDataReader* cacheReader;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataReader*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _cacheWriter
    // Size: 0x8
    // Offset: 0x30
    ::LiteNetLib::Utils::NetDataWriter* cacheWriter;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetPacketProcessor _netPacketProcessor
    // Size: 0x8
    // Offset: 0x38
    ::LiteNetLib::Utils::NetPacketProcessor* netPacketProcessor;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetPacketProcessor*) == 0x8);
    // private LiteNetLib.INatPunchListener _natPunchListener
    // Size: 0x8
    // Offset: 0x40
    ::LiteNetLib::INatPunchListener* natPunchListener;
    // Field size check
    static_assert(sizeof(::LiteNetLib::INatPunchListener*) == 0x8);
    public:
    // static field const value: static public System.Int32 MaxTokenLength
    static constexpr const int MaxTokenLength = 256;
    // Get static field: static public System.Int32 MaxTokenLength
    static int _get_MaxTokenLength();
    // Set static field: static public System.Int32 MaxTokenLength
    static void _set_MaxTokenLength(int value);
    // Get instance field reference: private readonly LiteNetLib.NetSocket _socket
    [[deprecated("Use field access instead!")]] ::LiteNetLib::NetSocket*& dyn__socket();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/LiteNetLib.RequestEventData> _requestEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::RequestEventData>*& dyn__requestEvents();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/LiteNetLib.SuccessEventData> _successEvents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule::SuccessEventData>*& dyn__successEvents();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetDataReader _cacheReader
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataReader*& dyn__cacheReader();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetDataWriter _cacheWriter
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataWriter*& dyn__cacheWriter();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetPacketProcessor _netPacketProcessor
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetPacketProcessor*& dyn__netPacketProcessor();
    // Get instance field reference: private LiteNetLib.INatPunchListener _natPunchListener
    [[deprecated("Use field access instead!")]] ::LiteNetLib::INatPunchListener*& dyn__natPunchListener();
    // System.Void .ctor(LiteNetLib.NetSocket socket)
    // Offset: 0x2218DB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule* New_ctor(::LiteNetLib::NetSocket* socket) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NatPunchModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule*, creationType>(socket)));
    }
    // System.Void ProcessMessage(System.Net.IPEndPoint senderEndPoint, LiteNetLib.NetPacket packet)
    // Offset: 0x2218FD4
    void ProcessMessage(::System::Net::IPEndPoint* senderEndPoint, ::LiteNetLib::NetPacket* packet);
    // public System.Void Init(LiteNetLib.INatPunchListener listener)
    // Offset: 0x22190C8
    void Init(::LiteNetLib::INatPunchListener* listener);
    // private System.Void Send(T packet, System.Net.IPEndPoint target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Send(T packet, ::System::Net::IPEndPoint* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NatPunchModule::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, packet, target);
    }
    // public System.Void NatIntroduce(System.Net.IPEndPoint hostInternal, System.Net.IPEndPoint hostExternal, System.Net.IPEndPoint clientInternal, System.Net.IPEndPoint clientExternal, System.String additionalInfo)
    // Offset: 0x22190D0
    void NatIntroduce(::System::Net::IPEndPoint* hostInternal, ::System::Net::IPEndPoint* hostExternal, ::System::Net::IPEndPoint* clientInternal, ::System::Net::IPEndPoint* clientExternal, ::StringW additionalInfo);
    // public System.Void PollEvents()
    // Offset: 0x22191A0
    void PollEvents();
    // public System.Void SendNatIntroduceRequest(System.String host, System.Int32 port, System.String additionalInfo)
    // Offset: 0x22194E8
    void SendNatIntroduceRequest(::StringW host, int port, ::StringW additionalInfo);
    // public System.Void SendNatIntroduceRequest(System.Net.IPEndPoint masterServerEndPoint, System.String additionalInfo)
    // Offset: 0x2219620
    void SendNatIntroduceRequest(::System::Net::IPEndPoint* masterServerEndPoint, ::StringW additionalInfo);
    // private System.Void OnNatIntroductionRequest(LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceRequestPacket req, System.Net.IPEndPoint senderEndPoint)
    // Offset: 0x2219904
    void OnNatIntroductionRequest(::LiteNetLib::NatPunchModule::NatIntroduceRequestPacket* req, ::System::Net::IPEndPoint* senderEndPoint);
    // private System.Void OnNatIntroductionResponse(LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceResponsePacket req)
    // Offset: 0x22199F4
    void OnNatIntroductionResponse(::LiteNetLib::NatPunchModule::NatIntroduceResponsePacket* req);
    // private System.Void OnNatPunch(LiteNetLib.NatPunchModule/LiteNetLib.NatPunchPacket req, System.Net.IPEndPoint senderEndPoint)
    // Offset: 0x2219F0C
    void OnNatPunch(::LiteNetLib::NatPunchModule::NatPunchPacket* req, ::System::Net::IPEndPoint* senderEndPoint);
  }; // LiteNetLib.NatPunchModule
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule), 64 + sizeof(::LiteNetLib::INatPunchListener*)> __LiteNetLib_NatPunchModuleSizeCheck;
  static_assert(sizeof(NatPunchModule) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule::SuccessEventData, "LiteNetLib", "NatPunchModule/SuccessEventData");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule::RequestEventData, "LiteNetLib", "NatPunchModule/RequestEventData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::ProcessMessage
// Il2CppName: ProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacket*)>(&LiteNetLib::NatPunchModule::ProcessMessage)> {
  static const MethodInfo* get() {
    static auto* senderEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "ProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{senderEndPoint, packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::LiteNetLib::INatPunchListener*)>(&LiteNetLib::NatPunchModule::Init)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("LiteNetLib", "INatPunchListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::Send
// Il2CppName: Send
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduce
// Il2CppName: NatIntroduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&LiteNetLib::NatPunchModule::NatIntroduce)> {
  static const MethodInfo* get() {
    static auto* hostInternal = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* hostExternal = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* clientInternal = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* clientExternal = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* additionalInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "NatIntroduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostInternal, hostExternal, clientInternal, clientExternal, additionalInfo});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::PollEvents
// Il2CppName: PollEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)()>(&LiteNetLib::NatPunchModule::PollEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "PollEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::SendNatIntroduceRequest
// Il2CppName: SendNatIntroduceRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::StringW, int, ::StringW)>(&LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* additionalInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "SendNatIntroduceRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, additionalInfo});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::SendNatIntroduceRequest
// Il2CppName: SendNatIntroduceRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::StringW)>(&LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  static const MethodInfo* get() {
    static auto* masterServerEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* additionalInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "SendNatIntroduceRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{masterServerEndPoint, additionalInfo});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::OnNatIntroductionRequest
// Il2CppName: OnNatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*, ::System::Net::IPEndPoint*)>(&LiteNetLib::NatPunchModule::OnNatIntroductionRequest)> {
  static const MethodInfo* get() {
    static auto* req = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket")->byval_arg;
    static auto* senderEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "OnNatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{req, senderEndPoint});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::OnNatIntroductionResponse
// Il2CppName: OnNatIntroductionResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*)>(&LiteNetLib::NatPunchModule::OnNatIntroductionResponse)> {
  static const MethodInfo* get() {
    static auto* req = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatPunchModule/NatIntroduceResponsePacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "OnNatIntroductionResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{req});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::OnNatPunch
// Il2CppName: OnNatPunch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule::NatPunchPacket*, ::System::Net::IPEndPoint*)>(&LiteNetLib::NatPunchModule::OnNatPunch)> {
  static const MethodInfo* get() {
    static auto* req = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatPunchModule/NatPunchPacket")->byval_arg;
    static auto* senderEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule*), "OnNatPunch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{req, senderEndPoint});
  }
};
