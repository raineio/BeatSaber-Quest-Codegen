// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAuthenticateRequest
#include "BGNet/Core/Messages/IUnconnectedAuthenticateRequest.hpp"
// Including type: GameLift.IGameLiftClientToServerMessage
#include "GameLift/IGameLiftClientToServerMessage.hpp"
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
  // Forward declaring type: AuthenticateGameLiftUserRequest
  class AuthenticateGameLiftUserRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserRequest);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserRequest*, "GameLift", "AuthenticateGameLiftUserRequest");
// Type namespace: GameLift
namespace GameLift {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GameLift.AuthenticateGameLiftUserRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateGameLiftUserRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest, public ::GameLift::IGameLiftClientToServerMessage*/ {
    public:
    public:
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String playerSessionId
    // Size: 0x8
    // Offset: 0x28
    ::StringW playerSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest
    operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedAuthenticateRequest
    inline ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* i_IUnconnectedAuthenticateRequest() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: operator ::GameLift::IGameLiftClientToServerMessage
    operator ::GameLift::IGameLiftClientToServerMessage() noexcept {
      return *reinterpret_cast<::GameLift::IGameLiftClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IGameLiftClientToServerMessage
    inline ::GameLift::IGameLiftClientToServerMessage* i_IGameLiftClientToServerMessage() noexcept {
      return reinterpret_cast<::GameLift::IGameLiftClientToServerMessage*>(this);
    }
    // Get instance field reference: private System.String <userId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userId$k__BackingField();
    // Get instance field reference: private System.String <userName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userName$k__BackingField();
    // Get instance field reference: public System.String playerSessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playerSessionId();
    // static public PacketPool`1<GameLift.AuthenticateGameLiftUserRequest> get_pool()
    // Offset: 0x1677544
    static ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>* get_pool();
    // public System.String get_userId()
    // Offset: 0x167758C
    ::StringW get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x1677594
    void set_userId(::StringW value);
    // public System.String get_userName()
    // Offset: 0x167759C
    ::StringW get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x16775A4
    void set_userName(::StringW value);
    // public GameLift.AuthenticateGameLiftUserRequest Init(System.String userId, System.String userName, System.String playerSessionId)
    // Offset: 0x16775AC
    ::GameLift::AuthenticateGameLiftUserRequest* Init(::StringW userId, ::StringW userName, ::StringW playerSessionId);
    // public System.Void .ctor()
    // Offset: 0x16776D0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateGameLiftUserRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameLift::AuthenticateGameLiftUserRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateGameLiftUserRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16775B8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1677614
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1677674
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // GameLift.AuthenticateGameLiftUserRequest
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateGameLiftUserRequest), 40 + sizeof(::StringW)> __GameLift_AuthenticateGameLiftUserRequestSizeCheck;
  static_assert(sizeof(AuthenticateGameLiftUserRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>* (*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GameLift::AuthenticateGameLiftUserRequest* (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW, ::StringW, ::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::Init)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playerSessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, playerSessionId});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GameLift::AuthenticateGameLiftUserRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&GameLift::AuthenticateGameLiftUserRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GameLift::AuthenticateGameLiftUserRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::AuthenticateGameLiftUserRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
