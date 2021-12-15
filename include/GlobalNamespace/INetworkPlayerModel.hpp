// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::INetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkPlayerModel*, "", "INetworkPlayerModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INetworkPlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  class INetworkPlayerModel {
    public:
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0xFFFFFFFF
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_discoveryEnabled(bool value);
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0xFFFFFFFF
    bool get_localPlayerIsPartyOwner();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public System.Int32 get_currentPartySize()
    // Offset: 0xFFFFFFFF
    int get_currentPartySize();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_otherPlayers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_otherPlayers();
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFFFFFFFF
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFFFFFFFF
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFFFFFFFF
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFFFFFFFF
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFFFFFFFF
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Boolean CreatePartyConnection(INetworkPlayerModelPartyConfig`1<T> config)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* config) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPlayerModel::CreatePartyConnection");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreatePartyConnection", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(config)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, config);
    }
    // public System.Void DestroyPartyConnection()
    // Offset: 0xFFFFFFFF
    void DestroyPartyConnection();
  }; // INetworkPlayerModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_discoveryEnabled
// Il2CppName: get_discoveryEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_discoveryEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_discoveryEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::set_discoveryEnabled
// Il2CppName: set_discoveryEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(bool)>(&GlobalNamespace::INetworkPlayerModel::set_discoveryEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "set_discoveryEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_localPlayerIsPartyOwner
// Il2CppName: get_localPlayerIsPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_localPlayerIsPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_currentPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_partyPlayers
// Il2CppName: get_partyPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_partyPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_partyPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_otherPlayers
// Il2CppName: get_otherPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_otherPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_otherPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::get_connectedPlayerManager
// Il2CppName: get_connectedPlayerManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager* (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::get_connectedPlayerManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "get_connectedPlayerManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent
// Il2CppName: add_connectedPlayerManagerCreatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent
// Il2CppName: remove_connectedPlayerManagerCreatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent
// Il2CppName: add_connectedPlayerManagerDestroyedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent
// Il2CppName: remove_connectedPlayerManagerDestroyedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_partyChangedEvent
// Il2CppName: add_partyChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::add_partyChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_partyChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_partyChangedEvent
// Il2CppName: remove_partyChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)>(&GlobalNamespace::INetworkPlayerModel::remove_partyChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_partyChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_partySizeChangedEvent
// Il2CppName: add_partySizeChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<int>*)>(&GlobalNamespace::INetworkPlayerModel::add_partySizeChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_partySizeChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_partySizeChangedEvent
// Il2CppName: remove_partySizeChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<int>*)>(&GlobalNamespace::INetworkPlayerModel::remove_partySizeChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_partySizeChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_joinRequestedEvent
// Il2CppName: add_joinRequestedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::INetworkPlayerModel::add_joinRequestedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_joinRequestedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_joinRequestedEvent
// Il2CppName: remove_joinRequestedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::INetworkPlayerModel::remove_joinRequestedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_joinRequestedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::add_inviteRequestedEvent
// Il2CppName: add_inviteRequestedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::INetworkPlayerModel::add_inviteRequestedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "add_inviteRequestedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::remove_inviteRequestedEvent
// Il2CppName: remove_inviteRequestedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::INetworkPlayerModel::remove_inviteRequestedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "remove_inviteRequestedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::CreatePartyConnection
// Il2CppName: CreatePartyConnection
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayerModel::DestroyPartyConnection
// Il2CppName: DestroyPartyConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayerModel::*)()>(&GlobalNamespace::INetworkPlayerModel::DestroyPartyConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayerModel*), "DestroyPartyConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
