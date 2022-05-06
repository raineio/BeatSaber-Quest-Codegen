// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: MultiplayerPlacementErrorCode
#include "GlobalNamespace/MultiplayerPlacementErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: PlayerSessionInfo
  class PlayerSessionInfo;
}
// Completed forward declares
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: GetMultiplayerInstanceResponse
  struct GetMultiplayerInstanceResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, "BGNet.Core.GameLift", "GetMultiplayerInstanceResponse");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BGNet.Core.GameLift.GetMultiplayerInstanceResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  struct GetMultiplayerInstanceResponse/*, public ::System::ValueType*/ {
    public:
    public:
    // [JsonPropertyAttribute] Offset: 0x10B5F88
    // public readonly MultiplayerPlacementErrorCode errorCode
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::MultiplayerPlacementErrorCode errorCode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlacementErrorCode) == 0x4);
    // Padding between fields: errorCode and: playerSessionInfo
    char __padding0[0x4] = {};
    // [JsonPropertyAttribute] Offset: 0x10B5FC0
    // public readonly BGNet.Core.GameLift.PlayerSessionInfo playerSessionInfo
    // Size: 0x8
    // Offset: 0x8
    ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo;
    // Field size check
    static_assert(sizeof(::BGNet::Core::GameLift::PlayerSessionInfo*) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x10B5FF8
    // public readonly System.Int32 pollIntervalMs
    // Size: 0x4
    // Offset: 0x10
    int pollIntervalMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pollIntervalMs and: ticketId
    char __padding2[0x4] = {};
    // [JsonPropertyAttribute] Offset: 0x10B6030
    // public readonly System.String ticketId
    // Size: 0x8
    // Offset: 0x18
    ::StringW ticketId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x10B6068
    // public readonly System.String ticketStatus
    // Size: 0x8
    // Offset: 0x20
    ::StringW ticketStatus;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x10B60A0
    // public readonly System.String placementId
    // Size: 0x8
    // Offset: 0x28
    ::StringW placementId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x10B60D8
    // public readonly System.String placementStatus
    // Size: 0x8
    // Offset: 0x30
    ::StringW placementStatus;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: GetMultiplayerInstanceResponse
    constexpr GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode_ = {}, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo_ = {}, int pollIntervalMs_ = {}, ::StringW ticketId_ = {}, ::StringW ticketStatus_ = {}, ::StringW placementId_ = {}, ::StringW placementStatus_ = {}) noexcept : errorCode{errorCode_}, playerSessionInfo{playerSessionInfo_}, pollIntervalMs{pollIntervalMs_}, ticketId{ticketId_}, ticketStatus{ticketStatus_}, placementId{placementId_}, placementStatus{placementStatus_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly MultiplayerPlacementErrorCode errorCode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlacementErrorCode& dyn_errorCode();
    // Get instance field reference: public readonly BGNet.Core.GameLift.PlayerSessionInfo playerSessionInfo
    [[deprecated("Use field access instead!")]] ::BGNet::Core::GameLift::PlayerSessionInfo*& dyn_playerSessionInfo();
    // Get instance field reference: public readonly System.Int32 pollIntervalMs
    [[deprecated("Use field access instead!")]] int& dyn_pollIntervalMs();
    // Get instance field reference: public readonly System.String ticketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ticketId();
    // Get instance field reference: public readonly System.String ticketStatus
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ticketStatus();
    // Get instance field reference: public readonly System.String placementId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_placementId();
    // Get instance field reference: public readonly System.String placementStatus
    [[deprecated("Use field access instead!")]] ::StringW& dyn_placementStatus();
    // public System.Void .ctor(MultiplayerPlacementErrorCode errorCode, BGNet.Core.GameLift.PlayerSessionInfo playerSessionInfo, System.Int32 pollIntervalMs, System.String ticketId, System.String ticketStatus, System.String placementId, System.String placementStatus)
    // Offset: 0x152C688
    // ABORTED: conflicts with another method.  GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo, int pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus);
  }; // BGNet.Core.GameLift.GetMultiplayerInstanceResponse
  #pragma pack(pop)
  static check_size<sizeof(GetMultiplayerInstanceResponse), 48 + sizeof(::StringW)> __BGNet_Core_GameLift_GetMultiplayerInstanceResponseSizeCheck;
  static_assert(sizeof(GetMultiplayerInstanceResponse) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GetMultiplayerInstanceResponse::GetMultiplayerInstanceResponse
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
