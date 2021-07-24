// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelGameplaySetupData
#include "GlobalNamespace/LevelGameplaySetupData.hpp"
// Including type: ILobbyPlayerData
#include "GlobalNamespace/ILobbyPlayerData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LobbyPlayerData
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyPlayerData : public GlobalNamespace::LevelGameplaySetupData/*, public GlobalNamespace::ILobbyPlayerData*/ {
    public:
    // private System.Boolean <isPartyOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool isPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <isActive>k__BackingField
    // Size: 0x1
    // Offset: 0x2D
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <isReady>k__BackingField
    // Size: 0x1
    // Offset: 0x2E
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <isInLobby>k__BackingField
    // Size: 0x1
    // Offset: 0x2F
    bool isInLobby;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LobbyPlayerData
    LobbyPlayerData(bool isPartyOwner_ = {}, bool isActive_ = {}, bool isReady_ = {}, bool isInLobby_ = {}) noexcept : isPartyOwner{isPartyOwner_}, isActive{isActive_}, isReady{isReady_}, isInLobby{isInLobby_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyPlayerData
    operator GlobalNamespace::ILobbyPlayerData() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyPlayerData*>(this);
    }
    // Get instance field: private System.Boolean <isPartyOwner>k__BackingField
    bool _get_$isPartyOwner$k__BackingField();
    // Set instance field: private System.Boolean <isPartyOwner>k__BackingField
    void _set_$isPartyOwner$k__BackingField(bool value);
    // Get instance field: private System.Boolean <isActive>k__BackingField
    bool _get_$isActive$k__BackingField();
    // Set instance field: private System.Boolean <isActive>k__BackingField
    void _set_$isActive$k__BackingField(bool value);
    // Get instance field: private System.Boolean <isReady>k__BackingField
    bool _get_$isReady$k__BackingField();
    // Set instance field: private System.Boolean <isReady>k__BackingField
    void _set_$isReady$k__BackingField(bool value);
    // Get instance field: private System.Boolean <isInLobby>k__BackingField
    bool _get_$isInLobby$k__BackingField();
    // Set instance field: private System.Boolean <isInLobby>k__BackingField
    void _set_$isInLobby$k__BackingField(bool value);
    // public System.Boolean get_isPartyOwner()
    // Offset: 0x11BF64C
    bool get_isPartyOwner();
    // public System.Void set_isPartyOwner(System.Boolean value)
    // Offset: 0x11BF654
    void set_isPartyOwner(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0x11BF660
    bool get_isActive();
    // public System.Void set_isActive(System.Boolean value)
    // Offset: 0x11BF668
    void set_isActive(bool value);
    // public System.Boolean get_isReady()
    // Offset: 0x11BF674
    bool get_isReady();
    // public System.Void set_isReady(System.Boolean value)
    // Offset: 0x11BF67C
    void set_isReady(bool value);
    // public System.Boolean get_isInLobby()
    // Offset: 0x11BF688
    bool get_isInLobby();
    // public System.Void set_isInLobby(System.Boolean value)
    // Offset: 0x11BF690
    void set_isInLobby(bool value);
    // public System.Void .ctor()
    // Offset: 0x11BF69C
    // Implemented from: LevelGameplaySetupData
    // Base method: System.Void LevelGameplaySetupData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyPlayerData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyPlayerData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyPlayerData*, creationType>()));
    }
  }; // LobbyPlayerData
  #pragma pack(pop)
  static check_size<sizeof(LobbyPlayerData), 47 + sizeof(bool)> __GlobalNamespace_LobbyPlayerDataSizeCheck;
  static_assert(sizeof(LobbyPlayerData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayerData*, "", "LobbyPlayerData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::get_isPartyOwner
// Il2CppName: get_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerData::*)()>(&GlobalNamespace::LobbyPlayerData::get_isPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "get_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::set_isPartyOwner
// Il2CppName: set_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerData::*)(bool)>(&GlobalNamespace::LobbyPlayerData::set_isPartyOwner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "set_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerData::*)()>(&GlobalNamespace::LobbyPlayerData::get_isActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::set_isActive
// Il2CppName: set_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerData::*)(bool)>(&GlobalNamespace::LobbyPlayerData::set_isActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "set_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerData::*)()>(&GlobalNamespace::LobbyPlayerData::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::set_isReady
// Il2CppName: set_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerData::*)(bool)>(&GlobalNamespace::LobbyPlayerData::set_isReady)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "set_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::get_isInLobby
// Il2CppName: get_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerData::*)()>(&GlobalNamespace::LobbyPlayerData::get_isInLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "get_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::set_isInLobby
// Il2CppName: set_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerData::*)(bool)>(&GlobalNamespace::LobbyPlayerData::set_isInLobby)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerData*), "set_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!