// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedPlayer
  class DisconnectedPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisconnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedPlayer*, "", "DisconnectedPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectedPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class DisconnectedPlayer : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectedPlayer*/ {
    public:
    public:
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int32 <sortIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sortIndex and: multiplayerAvatarData
    char __padding2[0x4] = {};
    // private readonly MultiplayerAvatarData <multiplayerAvatarData>k__BackingField
    // Size: 0x70
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerAvatarData) == 0x70);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectedPlayer
    operator ::GlobalNamespace::IConnectedPlayer() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectedPlayer*>(this);
    }
    // Creating interface conversion operator: i_IConnectedPlayer
    inline ::GlobalNamespace::IConnectedPlayer* i_IConnectedPlayer() noexcept {
      return reinterpret_cast<::GlobalNamespace::IConnectedPlayer*>(this);
    }
    // Get instance field reference: private System.String <userId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userId$k__BackingField();
    // Get instance field reference: private System.String <userName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userName$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <sortIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$sortIndex$k__BackingField();
    // Get instance field reference: private readonly MultiplayerAvatarData <multiplayerAvatarData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerAvatarData& dyn_$multiplayerAvatarData$k__BackingField();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x16BDA9C
    float get_offsetSyncTime();
    // public System.Boolean get_isFailed()
    // Offset: 0x16BDAA4
    bool get_isFailed();
    // public System.Boolean get_isMe()
    // Offset: 0x16BDAAC
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0x16BDAB4
    ::StringW get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x16BDABC
    void set_userId(::StringW value);
    // public System.String get_userName()
    // Offset: 0x16BDAC4
    ::StringW get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x16BDACC
    void set_userName(::StringW value);
    // public System.Boolean get_hasValidLatency()
    // Offset: 0x16BDAD4
    bool get_hasValidLatency();
    // public System.Single get_currentLatency()
    // Offset: 0x16BDADC
    float get_currentLatency();
    // public System.Boolean get_isConnected()
    // Offset: 0x16BDAE4
    bool get_isConnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x16BDAEC
    ::GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x16BDAF4
    bool get_isConnectionOwner();
    // public System.Int32 get_sortIndex()
    // Offset: 0x16BDAFC
    int get_sortIndex();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0x16BDB04
    ::GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean get_isKicked()
    // Offset: 0x16BDB14
    bool get_isKicked();
    // public System.Void .ctor(System.String userId, System.String userName, System.Int32 sortIndex)
    // Offset: 0x16BDB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectedPlayer* New_ctor(::StringW userId, ::StringW userName, int sortIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisconnectedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectedPlayer*, creationType>(userId, userName, sortIndex)));
    }
    // public System.Boolean HasState(System.String state)
    // Offset: 0x16BDB1C
    bool HasState(::StringW state);
  }; // DisconnectedPlayer
  #pragma pack(pop)
  static check_size<sizeof(DisconnectedPlayer), 40 + sizeof(::GlobalNamespace::MultiplayerAvatarData)> __GlobalNamespace_DisconnectedPlayerSizeCheck;
  static_assert(sizeof(DisconnectedPlayer) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_offsetSyncTime
// Il2CppName: get_offsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_offsetSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_offsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_isFailed
// Il2CppName: get_isFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_isFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_isFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectedPlayer::*)(::StringW)>(&GlobalNamespace::DisconnectedPlayer::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectedPlayer::*)(::StringW)>(&GlobalNamespace::DisconnectedPlayer::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_hasValidLatency
// Il2CppName: get_hasValidLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_hasValidLatency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_hasValidLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_currentLatency
// Il2CppName: get_currentLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_currentLatency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_currentLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_disconnectedReason
// Il2CppName: get_disconnectedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_disconnectedReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_disconnectedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_sortIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_multiplayerAvatarData
// Il2CppName: get_multiplayerAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_multiplayerAvatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_multiplayerAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::get_isKicked
// Il2CppName: get_isKicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)()>(&GlobalNamespace::DisconnectedPlayer::get_isKicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "get_isKicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectedPlayer::HasState
// Il2CppName: HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DisconnectedPlayer::*)(::StringW)>(&GlobalNamespace::DisconnectedPlayer::HasState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectedPlayer*), "HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
