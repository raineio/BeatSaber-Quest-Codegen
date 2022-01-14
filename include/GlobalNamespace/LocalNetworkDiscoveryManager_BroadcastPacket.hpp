// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket*, "", "LocalNetworkDiscoveryManager/BroadcastPacket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/BroadcastPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::BroadcastPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
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
    // public System.UInt32 version
    // Size: 0x4
    // Offset: 0x10
    uint version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: version and: userId
    char __padding0[0x4] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 currentPartySize
    // Size: 0x4
    // Offset: 0x28
    int currentPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isPartyOwner
    // Size: 0x1
    // Offset: 0x2C
    bool isPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPartyOwner and: selectionMask
    char __padding4[0x3] = {};
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public System.UInt32 version
    uint& dyn_version();
    // Get instance field reference: public System.String userId
    ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    ::StringW& dyn_userName();
    // Get instance field reference: public System.Int32 currentPartySize
    int& dyn_currentPartySize();
    // Get instance field reference: public System.Boolean isPartyOwner
    bool& dyn_isPartyOwner();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x13593B8
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1359454
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x13570FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::BroadcastPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::BroadcastPacket*, creationType>()));
    }
  }; // LocalNetworkDiscoveryManager/BroadcastPacket
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkDiscoveryManager::BroadcastPacket), 72 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_LocalNetworkDiscoveryManager_BroadcastPacketSizeCheck;
  static_assert(sizeof(LocalNetworkDiscoveryManager::BroadcastPacket) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
