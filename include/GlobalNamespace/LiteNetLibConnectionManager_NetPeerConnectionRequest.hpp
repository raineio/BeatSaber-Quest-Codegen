// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*, "", "LiteNetLibConnectionManager/NetPeerConnectionRequest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/NetPeerConnectionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::NetPeerConnectionRequest : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x20
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: request
    char __padding2[0x7] = {};
    // private readonly LiteNetLib.ConnectionRequest _request
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::ConnectionRequest* request;
    // Field size check
    static_assert(sizeof(LiteNetLib::ConnectionRequest*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String _userId
    ::StringW& dyn__userId();
    // Get instance field reference: private readonly System.String _userName
    ::StringW& dyn__userName();
    // Get instance field reference: private readonly System.Boolean _isConnectionOwner
    bool& dyn__isConnectionOwner();
    // Get instance field reference: private readonly LiteNetLib.ConnectionRequest _request
    LiteNetLib::ConnectionRequest*& dyn__request();
    // public System.String get_userId()
    // Offset: 0x156E750
    ::StringW get_userId();
    // public System.String get_userName()
    // Offset: 0x156E758
    ::StringW get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x156E760
    bool get_isConnectionOwner();
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x156E768
    System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(LiteNetLib.ConnectionRequest request, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x156E784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::NetPeerConnectionRequest* New_ctor(LiteNetLib::ConnectionRequest* request, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::NetPeerConnectionRequest*, creationType>(request, userId, userName, isConnectionOwner)));
    }
    // public LiteNetLib.NetPeer Accept()
    // Offset: 0x156DA64
    LiteNetLib::NetPeer* Accept();
  }; // LiteNetLibConnectionManager/NetPeerConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::NetPeerConnectionRequest), 40 + sizeof(LiteNetLib::ConnectionRequest*)> __GlobalNamespace_LiteNetLibConnectionManager_NetPeerConnectionRequestSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::NetPeerConnectionRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_endPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPeer* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::Accept)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
