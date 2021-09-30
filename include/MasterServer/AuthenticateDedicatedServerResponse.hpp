// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IMasterServerAuthenticateResponse
#include "MasterServer/IMasterServerAuthenticateResponse.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateDedicatedServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateDedicatedServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IMasterServerAuthenticateResponse, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::AuthenticateDedicatedServerResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      private:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Success
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Success
      static void _set_Success(MasterServer::AuthenticateDedicatedServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Failed
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result Failed
      static void _set_Failed(MasterServer::AuthenticateDedicatedServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result UnknownError
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(MasterServer::AuthenticateDedicatedServerResponse::Result value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(AuthenticateDedicatedServerResponse::Result), 0 + sizeof(int)> __MasterServer_AuthenticateDedicatedServerResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateDedicatedServerResponse::Result) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::AuthenticateDedicatedServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::AuthenticateDedicatedServerResponse::Result) == 0x4);
    public:
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateResponse
    operator MasterServer::IMasterServerAuthenticateResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateResponse*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator MasterServer::AuthenticateDedicatedServerResponse::Result
    constexpr operator MasterServer::AuthenticateDedicatedServerResponse::Result() const noexcept {
      return result;
    }
    // Get instance field reference: public MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result result
    MasterServer::AuthenticateDedicatedServerResponse::Result& dyn_result();
    // static public PacketPool`1<MasterServer.AuthenticateDedicatedServerResponse> get_pool()
    // Offset: 0x145EA4C
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerResponse*>* get_pool();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x145EB2C
    bool get_isAuthenticated();
    // public MasterServer.AuthenticateDedicatedServerResponse Init(MasterServer.AuthenticateDedicatedServerResponse/MasterServer.Result result)
    // Offset: 0x145EB3C
    MasterServer::AuthenticateDedicatedServerResponse* Init(MasterServer::AuthenticateDedicatedServerResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x145EA94
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x145EA9C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x145EC18
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateDedicatedServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateDedicatedServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateDedicatedServerResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x145EB44
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x145EB7C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x145EBBC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateDedicatedServerResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateDedicatedServerResponse), 24 + sizeof(MasterServer::AuthenticateDedicatedServerResponse::Result)> __MasterServer_AuthenticateDedicatedServerResponseSizeCheck;
  static_assert(sizeof(AuthenticateDedicatedServerResponse) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerResponse*, "MasterServer", "AuthenticateDedicatedServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerResponse::Result, "MasterServer", "AuthenticateDedicatedServerResponse/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerResponse*>* (*)()>(&MasterServer::AuthenticateDedicatedServerResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::AuthenticateDedicatedServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerResponse::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::AuthenticateDedicatedServerResponse* (MasterServer::AuthenticateDedicatedServerResponse::*)(MasterServer::AuthenticateDedicatedServerResponse::Result)>(&MasterServer::AuthenticateDedicatedServerResponse::Init)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "AuthenticateDedicatedServerResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::AuthenticateDedicatedServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::AuthenticateDedicatedServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateDedicatedServerResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateDedicatedServerResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateDedicatedServerResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateDedicatedServerResponse::*)()>(&MasterServer::AuthenticateDedicatedServerResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateDedicatedServerResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
