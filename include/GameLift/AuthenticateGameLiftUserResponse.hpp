// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAuthenticateResponse
#include "BGNet/Core/Messages/IUnconnectedAuthenticateResponse.hpp"
// Including type: GameLift.IGameLiftServerToClientMessage
#include "GameLift/IGameLiftServerToClientMessage.hpp"
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
// Forward declaring namespace: GameLift
namespace GameLift {
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
// Type namespace: GameLift
namespace GameLift {
  // Forward declaring type: AuthenticateGameLiftUserResponse
  class AuthenticateGameLiftUserResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserResponse);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserResponse*, "GameLift", "AuthenticateGameLiftUserResponse");
// Type namespace: GameLift
namespace GameLift {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: GameLift.AuthenticateGameLiftUserResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateGameLiftUserResponse : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse, public ::GameLift::IGameLiftServerToClientMessage*/ {
    public:
    // Nested type: ::GameLift::AuthenticateGameLiftUserResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameLift.AuthenticateGameLiftUserResponse/GameLift.Result
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
      // static field const value: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Success
      static ::GameLift::AuthenticateGameLiftUserResponse::Result _get_Success();
      // Set static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Success
      static void _set_Success(::GameLift::AuthenticateGameLiftUserResponse::Result value);
      // static field const value: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Failed
      static ::GameLift::AuthenticateGameLiftUserResponse::Result _get_Failed();
      // Set static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result Failed
      static void _set_Failed(::GameLift::AuthenticateGameLiftUserResponse::Result value);
      // static field const value: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result UnknownError
      static ::GameLift::AuthenticateGameLiftUserResponse::Result _get_UnknownError();
      // Set static field: static public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result UnknownError
      static void _set_UnknownError(::GameLift::AuthenticateGameLiftUserResponse::Result value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // GameLift.AuthenticateGameLiftUserResponse/GameLift.Result
    #pragma pack(pop)
    static check_size<sizeof(AuthenticateGameLiftUserResponse::Result), 0 + sizeof(int)> __GameLift_AuthenticateGameLiftUserResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateGameLiftUserResponse::Result) == 0x4);
    public:
    // public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result result
    // Size: 0x4
    // Offset: 0x18
    ::GameLift::AuthenticateGameLiftUserResponse::Result result;
    // Field size check
    static_assert(sizeof(::GameLift::AuthenticateGameLiftUserResponse::Result) == 0x4);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse
    operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedAuthenticateResponse
    inline ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse* i_IUnconnectedAuthenticateResponse() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>(this);
    }
    // Creating interface conversion operator: operator ::GameLift::IGameLiftServerToClientMessage
    operator ::GameLift::IGameLiftServerToClientMessage() noexcept {
      return *reinterpret_cast<::GameLift::IGameLiftServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IGameLiftServerToClientMessage
    inline ::GameLift::IGameLiftServerToClientMessage* i_IGameLiftServerToClientMessage() noexcept {
      return reinterpret_cast<::GameLift::IGameLiftServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator ::GameLift::AuthenticateGameLiftUserResponse::Result
    constexpr operator ::GameLift::AuthenticateGameLiftUserResponse::Result() const noexcept {
      return result;
    }
    // Get instance field reference: public GameLift.AuthenticateGameLiftUserResponse/GameLift.Result result
    [[deprecated("Use field access instead!")]] ::GameLift::AuthenticateGameLiftUserResponse::Result& dyn_result();
    // static public PacketPool`1<GameLift.AuthenticateGameLiftUserResponse> get_pool()
    // Offset: 0x16C05AC
    static ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>* get_pool();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x16C068C
    bool get_isAuthenticated();
    // public GameLift.AuthenticateGameLiftUserResponse Init(GameLift.AuthenticateGameLiftUserResponse/GameLift.Result result)
    // Offset: 0x16C069C
    ::GameLift::AuthenticateGameLiftUserResponse* Init(::GameLift::AuthenticateGameLiftUserResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x16C05F4
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Byte BaseReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x16C05FC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.String BaseReliableResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x16C0780
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateGameLiftUserResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameLift::AuthenticateGameLiftUserResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateGameLiftUserResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16C06A4
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16C06E0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16C0724
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // GameLift.AuthenticateGameLiftUserResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateGameLiftUserResponse), 24 + sizeof(::GameLift::AuthenticateGameLiftUserResponse::Result)> __GameLift_AuthenticateGameLiftUserResponseSizeCheck;
  static_assert(sizeof(AuthenticateGameLiftUserResponse) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserResponse::Result, "GameLift", "AuthenticateGameLiftUserResponse/Result");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>* (*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GameLift::AuthenticateGameLiftUserResponse* (GameLift::AuthenticateGameLiftUserResponse::*)(::GameLift::AuthenticateGameLiftUserResponse::Result)>(&GameLift::AuthenticateGameLiftUserResponse::Init)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("GameLift", "AuthenticateGameLiftUserResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GameLift::AuthenticateGameLiftUserResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&GameLift::AuthenticateGameLiftUserResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
