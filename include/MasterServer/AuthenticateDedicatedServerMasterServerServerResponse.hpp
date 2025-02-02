// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerServerToClientMessage
#include "MasterServer/IDedicatedServerMasterServerServerToClientMessage.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAuthenticateResponse
#include "BGNet/Core/Messages/IUnconnectedAuthenticateResponse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: AuthenticateDedicatedServerMasterServerServerResponse
  class AuthenticateDedicatedServerMasterServerServerResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*, "MasterServer", "AuthenticateDedicatedServerMasterServerServerResponse");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateDedicatedServerMasterServerServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateDedicatedServerMasterServerServerResponse : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::MasterServer::IDedicatedServerMasterServerServerToClientMessage, public ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*/ {
    public:
    // Nested type: ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Success
      static ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Success
      static void _set_Success(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Failed
      static ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result Failed
      static void _set_Failed(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result UnknownError
      static ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(AuthenticateDedicatedServerMasterServerServerResponse::Result), 0 + sizeof(int)> __MasterServer_AuthenticateDedicatedServerMasterServerServerResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateDedicatedServerMasterServerServerResponse::Result) == 0x4);
    public:
    // public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result result;
    // Field size check
    static_assert(sizeof(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result) == 0x4);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage
    operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerServerToClientMessage
    inline ::MasterServer::IDedicatedServerMasterServerServerToClientMessage* i_IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse
    operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedAuthenticateResponse
    inline ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse* i_IUnconnectedAuthenticateResponse() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>(this);
    }
    // Creating conversion operator: operator ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result
    constexpr operator ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result() const noexcept {
      return result;
    }
    // Get instance field reference: public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result result
    [[deprecated("Use field access instead!")]] ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result& dyn_result();
    // static public PacketPool`1<MasterServer.AuthenticateDedicatedServerMasterServerServerResponse> get_pool()
    // Offset: 0x16CA5A8
    static ::GlobalNamespace::PacketPool_1<::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*>* get_pool();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x16CA688
    bool get_isAuthenticated();
    // public MasterServer.AuthenticateDedicatedServerMasterServerServerResponse Init(MasterServer.AuthenticateDedicatedServerMasterServerServerResponse/MasterServer.Result result)
    // Offset: 0x16CA698
    ::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse* Init(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x16CA5F0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Byte BaseReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x16CA5F8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.String BaseReliableResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x16CA77C
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateDedicatedServerMasterServerServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateDedicatedServerMasterServerServerResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16CA6A0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16CA6DC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16CA720
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateDedicatedServerMasterServerServerResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateDedicatedServerMasterServerServerResponse), 24 + sizeof(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result)> __MasterServer_AuthenticateDedicatedServerMasterServerServerResponseSizeCheck;
  static_assert(sizeof(AuthenticateDedicatedServerMasterServerServerResponse) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result, "MasterServer", "AuthenticateDedicatedServerMasterServerServerResponse/Result");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*>* (*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse* (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)(::MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Result)>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Init)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "AuthenticateDedicatedServerMasterServerServerResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerMasterServerServerResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerMasterServerServerResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
