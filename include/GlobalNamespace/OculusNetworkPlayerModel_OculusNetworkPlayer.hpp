// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusNetworkPlayerModel/OculusNetworkPlayer
  class OculusNetworkPlayerModel::OculusNetworkPlayer : public ::Il2CppObject, public GlobalNamespace::INetworkPlayer {
    public:
    // private readonly OculusNetworkPlayerModel _playerModel
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* playerModel;
    // private readonly System.UInt64 _id
    // Offset: 0x18
    uint64_t id;
    // private readonly System.String _userId
    // Offset: 0x20
    ::Il2CppString* userId;
    // private readonly System.String _userName
    // Offset: 0x28
    ::Il2CppString* userName;
    // private readonly System.Boolean _isMe
    // Offset: 0x30
    bool isMe;
    // public System.Boolean removed
    // Offset: 0x31
    bool removed;
    // public System.String inviteToken
    // Offset: 0x38
    ::Il2CppString* inviteToken;
    // public Oculus.Platform.Models.Room room
    // Offset: 0x40
    Oculus::Platform::Models::Room* room;
    // private System.Boolean <isPlayer>k__BackingField
    // Offset: 0x48
    bool isPlayer;
    // private System.Boolean <isSpectating>k__BackingField
    // Offset: 0x49
    bool isSpectating;
    // private System.Boolean <isDedicatedServer>k__BackingField
    // Offset: 0x4A
    bool isDedicatedServer;
    // private System.Boolean <isConnected>k__BackingField
    // Offset: 0x4B
    bool isConnected;
    // private System.Boolean <isWaitingOnJoin>k__BackingField
    // Offset: 0x4C
    bool isWaitingOnJoin;
    // private System.Boolean <isWaitingOnInvite>k__BackingField
    // Offset: 0x4D
    bool isWaitingOnInvite;
    // public System.UInt64 get_id()
    // Offset: 0x1F7E3BC
    uint64_t get_id();
    // public System.Boolean get_isPartyOwner()
    // Offset: 0x1F7E3DC
    bool get_isPartyOwner();
    // public System.Boolean get_isRoomOwner()
    // Offset: 0x1F7E3F0
    bool get_isRoomOwner();
    // public System.Void .ctor(OculusNetworkPlayerModel playerModel, System.UInt64 id, System.String userName, System.Boolean isMe)
    // Offset: 0x1F7E2B4
    static OculusNetworkPlayerModel::OculusNetworkPlayer* New_ctor(GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::Il2CppString* userName, bool isMe);
    // public System.Void set_isPlayer(System.Boolean value)
    // Offset: 0x1F7E8E0
    void set_isPlayer(bool value);
    // public System.Void set_isSpectating(System.Boolean value)
    // Offset: 0x1F7E8F4
    void set_isSpectating(bool value);
    // public System.Void set_isDedicatedServer(System.Boolean value)
    // Offset: 0x1F7E908
    void set_isDedicatedServer(bool value);
    // public System.Void set_isConnected(System.Boolean value)
    // Offset: 0x1F7E91C
    void set_isConnected(bool value);
    // private System.Void set_isWaitingOnJoin(System.Boolean value)
    // Offset: 0x1F7EA44
    void set_isWaitingOnJoin(bool value);
    // public System.Void set_isWaitingOnInvite(System.Boolean value)
    // Offset: 0x1F7EB58
    void set_isWaitingOnInvite(bool value);
    // public System.Boolean SameRoomAs(OculusNetworkPlayerModel/OculusNetworkPlayer other)
    // Offset: 0x1F7E87C
    bool SameRoomAs(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* other);
    // private System.Void <Join>b__53_0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x1F7EE54
    void $Join$b__53_0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.String get_userId()
    // Offset: 0x1F7E3C4
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* get_userId();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userId
    // Maps to method: get_userId
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // public System.String get_userName()
    // Offset: 0x1F7E3CC
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* get_userName();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userName
    // Maps to method: get_userName
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x1F7E3D4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x1F7E48C
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x1F7E558
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x1F7E610
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x1F7E6B4
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x1F7E758
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x1F7E800
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x1F7E8B8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.Boolean get_isPlayer()
    // Offset: 0x1F7E8D8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x1F7E8EC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x1F7E900
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_isConnected()
    // Offset: 0x1F7E914
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_canJoin()
    // Offset: 0x1F7E928
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x1F7E948
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x1F7EA30
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x1F7EA38
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1F7EA3C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x1F7EA50
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x1F7EAD0
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x1F7EB50
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x1F7EB64
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x1F7EBE0
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x1F7ED10
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x1F7EDAC
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x1F7EDD0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x1F7EDD8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1F7EDDC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x1F7EDE4
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x1F7EDE8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1F7EE48
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
  }; // OculusNetworkPlayerModel/OculusNetworkPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*, "", "OculusNetworkPlayerModel/OculusNetworkPlayer");
#pragma pack(pop)
