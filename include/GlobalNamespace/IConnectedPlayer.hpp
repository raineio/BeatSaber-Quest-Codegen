// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectedPlayer*, "", "IConnectedPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IConnectedPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class IConnectedPlayer {
    public:
    // public System.Boolean get_isMe()
    // Offset: 0xFFFFFFFF
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::StringW get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::StringW get_userName();
    // public System.Single get_currentLatency()
    // Offset: 0xFFFFFFFF
    float get_currentLatency();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner();
    // public System.Single get_offsetSyncTime()
    // Offset: 0xFFFFFFFF
    float get_offsetSyncTime();
    // public System.Int32 get_sortIndex()
    // Offset: 0xFFFFFFFF
    int get_sortIndex();
    // public System.Boolean get_isKicked()
    // Offset: 0xFFFFFFFF
    bool get_isKicked();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean HasState(System.String state)
    // Offset: 0xFFFFFFFF
    bool HasState(::StringW state);
  }; // IConnectedPlayer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_currentLatency
// Il2CppName: get_currentLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_currentLatency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_currentLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_disconnectedReason
// Il2CppName: get_disconnectedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DisconnectedReason (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_disconnectedReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_disconnectedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_offsetSyncTime
// Il2CppName: get_offsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_offsetSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_offsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_sortIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_isKicked
// Il2CppName: get_isKicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_isKicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_isKicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::get_multiplayerAvatarData
// Il2CppName: get_multiplayerAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::IConnectedPlayer::*)()>(&GlobalNamespace::IConnectedPlayer::get_multiplayerAvatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "get_multiplayerAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectedPlayer::HasState
// Il2CppName: HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectedPlayer::*)(::StringW)>(&GlobalNamespace::IConnectedPlayer::HasState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectedPlayer*), "HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
