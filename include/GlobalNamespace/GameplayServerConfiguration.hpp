// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerMode
#include "GlobalNamespace/GameplayServerMode.hpp"
// Including type: SongSelectionMode
#include "GlobalNamespace/SongSelectionMode.hpp"
// Including type: GameplayServerControlSettings
#include "GlobalNamespace/GameplayServerControlSettings.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GameplayServerConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct GameplayServerConfiguration/*, public ::System::ValueType, public ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>, public ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*/ {
    public:
    public:
    // [JsonPropertyAttribute] Offset: 0x10B5150
    // public readonly System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x0
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [JsonPropertyAttribute] Offset: 0x10B5188
    // public readonly DiscoveryPolicy discoveryPolicy
    // Size: 0x1
    // Offset: 0x4
    ::GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DiscoveryPolicy) == 0x1);
    // Padding between fields: discoveryPolicy and: invitePolicy
    char __padding1[0x3] = {};
    // [JsonPropertyAttribute] Offset: 0x10B51C0
    // public readonly InvitePolicy invitePolicy
    // Size: 0x4
    // Offset: 0x8
    ::GlobalNamespace::InvitePolicy invitePolicy;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InvitePolicy) == 0x4);
    // [JsonPropertyAttribute] Offset: 0x10B51F8
    // public readonly GameplayServerMode gameplayServerMode
    // Size: 0x4
    // Offset: 0xC
    ::GlobalNamespace::GameplayServerMode gameplayServerMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerMode) == 0x4);
    // [JsonPropertyAttribute] Offset: 0x10B5230
    // public readonly SongSelectionMode songSelectionMode
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::SongSelectionMode songSelectionMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongSelectionMode) == 0x4);
    // [JsonPropertyAttribute] Offset: 0x10B5268
    // public readonly GameplayServerControlSettings gameplayServerControlSettings
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerControlSettings) == 0x4);
    public:
    // Creating value type constructor for type: GameplayServerConfiguration
    constexpr GameplayServerConfiguration(int maxPlayerCount_ = {}, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy_ = {}, ::GlobalNamespace::InvitePolicy invitePolicy_ = {}, ::GlobalNamespace::GameplayServerMode gameplayServerMode_ = {}, ::GlobalNamespace::SongSelectionMode songSelectionMode_ = {}, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings_ = {}) noexcept : maxPlayerCount{maxPlayerCount_}, discoveryPolicy{discoveryPolicy_}, invitePolicy{invitePolicy_}, gameplayServerMode{gameplayServerMode_}, songSelectionMode{songSelectionMode_}, gameplayServerControlSettings{gameplayServerControlSettings_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>
    operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>
    operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // Get instance field reference: public readonly System.Int32 maxPlayerCount
    [[deprecated("Use field access instead!")]] int& dyn_maxPlayerCount();
    // Get instance field reference: public readonly DiscoveryPolicy discoveryPolicy
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DiscoveryPolicy& dyn_discoveryPolicy();
    // Get instance field reference: public readonly InvitePolicy invitePolicy
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InvitePolicy& dyn_invitePolicy();
    // Get instance field reference: public readonly GameplayServerMode gameplayServerMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerMode& dyn_gameplayServerMode();
    // Get instance field reference: public readonly SongSelectionMode songSelectionMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongSelectionMode& dyn_songSelectionMode();
    // Get instance field reference: public readonly GameplayServerControlSettings gameplayServerControlSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerControlSettings& dyn_gameplayServerControlSettings();
    // public System.Void .ctor(System.Int32 maxPlayerCount, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, GameplayServerMode gameplayServerMode, SongSelectionMode songSelectionMode, GameplayServerControlSettings gameplayServerControlSettings)
    // Offset: 0x167C028
    // ABORTED: conflicts with another method.  GameplayServerConfiguration(int maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings);
    // public System.Boolean Equals(in GameplayServerConfiguration other)
    // Offset: 0x167ECB4
    bool Equals(ByRef<::GlobalNamespace::GameplayServerConfiguration> other);
    // public System.Boolean Equals(GameplayServerConfiguration other)
    // Offset: 0x167ED20
    bool Equals_(::GlobalNamespace::GameplayServerConfiguration other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x167EE5C
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public GameplayServerConfiguration CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x167EEDC
    ::GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
    // static public GameplayServerConfiguration Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x167EEE4
    static ::GlobalNamespace::GameplayServerConfiguration Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public GameplayServerConfiguration WithMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x167EF88
    ::GlobalNamespace::GameplayServerConfiguration WithMaxPlayerCount(int maxPlayerCount);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x167ED24
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x167EDFC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // GameplayServerConfiguration
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerConfiguration), 20 + sizeof(::GlobalNamespace::GameplayServerControlSettings)> __GlobalNamespace_GameplayServerConfigurationSizeCheck;
  static_assert(sizeof(GameplayServerConfiguration) == 0x18);
  // static public System.Boolean op_Equality(in GameplayServerConfiguration a, in GameplayServerConfiguration b)
  // Offset: 0x167EE3C
  bool operator ==(const ::GlobalNamespace::GameplayServerConfiguration&& a, const ::GlobalNamespace::GameplayServerConfiguration&& b);
  // static public System.Boolean op_Inequality(in GameplayServerConfiguration a, in GameplayServerConfiguration b)
  // Offset: 0x167EE40
  bool operator !=(const ::GlobalNamespace::GameplayServerConfiguration&& a, const ::GlobalNamespace::GameplayServerConfiguration&& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::GameplayServerConfiguration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerConfiguration::*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&GlobalNamespace::GameplayServerConfiguration::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Equals_
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerConfiguration::*)(::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GameplayServerConfiguration::Equals_)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::GameplayServerConfiguration::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerConfiguration::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount
// Il2CppName: WithMaxPlayerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::GameplayServerConfiguration::*)(int)>(&GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount)> {
  static const MethodInfo* get() {
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "WithMaxPlayerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxPlayerCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerConfiguration::*)(::Il2CppObject*)>(&GlobalNamespace::GameplayServerConfiguration::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayServerConfiguration::*)()>(&GlobalNamespace::GameplayServerConfiguration::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerConfiguration), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerConfiguration::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
