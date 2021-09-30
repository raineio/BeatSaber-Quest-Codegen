// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkPlayersTableView
  class NetworkPlayersTableView;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
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
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayersViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPlayersViewController : public HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private NetworkPlayersTableView _networkPlayersTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::NetworkPlayersTableView* networkPlayersTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayersTableView*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0x78
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: refreshIsNeeded and: onJoinRequestEvent
    char __padding1[0x7] = {};
    // private System.Action`1<INetworkPlayer> onJoinRequestEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<GlobalNamespace::INetworkPlayer*>* onJoinRequestEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // private System.Action`1<INetworkPlayer> onInviteRequestEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::INetworkPlayer*>* onInviteRequestEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    public:
    // Get instance field reference: private NetworkPlayersTableView _networkPlayersTableView
    GlobalNamespace::NetworkPlayersTableView*& dyn__networkPlayersTableView();
    // Get instance field reference: private System.Boolean _refreshIsNeeded
    bool& dyn__refreshIsNeeded();
    // Get instance field reference: private System.Action`1<INetworkPlayer> onJoinRequestEvent
    System::Action_1<GlobalNamespace::INetworkPlayer*>*& dyn_onJoinRequestEvent();
    // Get instance field reference: private System.Action`1<INetworkPlayer> onInviteRequestEvent
    System::Action_1<GlobalNamespace::INetworkPlayer*>*& dyn_onInviteRequestEvent();
    // public System.String get_myPartyTitle()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_myPartyTitle();
    // public System.String get_otherPlayersTitle()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_otherPlayersTitle();
    // public INetworkPlayerModel get_networkPlayerModel()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();
    // public System.Void add_onJoinRequestEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x113B7FC
    void add_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_onJoinRequestEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x113B8A0
    void remove_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_onInviteRequestEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x113B944
    void add_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_onInviteRequestEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x113B9E8
    void remove_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // protected System.Void NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x113BF10
    void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected System.Void NetworkPlayersViewControllerDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x113C1B8
    void NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy);
    // private System.Void HandlePartyChanged(INetworkPlayerModel playerModel)
    // Offset: 0x113C1C4
    void HandlePartyChanged(GlobalNamespace::INetworkPlayerModel* playerModel);
    // private System.Void HandleJoinRequest(INetworkPlayer player)
    // Offset: 0x113C1DC
    void HandleJoinRequest(GlobalNamespace::INetworkPlayer* player);
    // private System.Void HandleInviteRequest(INetworkPlayer player)
    // Offset: 0x113C250
    void HandleInviteRequest(GlobalNamespace::INetworkPlayer* player);
    // private System.Void Refresh()
    // Offset: 0x113BD64
    void Refresh();
    // protected System.Void .ctor()
    // Offset: 0x113C2C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayersViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayersViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayersViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x113BA8C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x113BF14
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x113C1BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // NetworkPlayersViewController
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayersViewController), 136 + sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_NetworkPlayersViewControllerSizeCheck;
  static_assert(sizeof(NetworkPlayersViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersViewController*, "", "NetworkPlayersViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle
// Il2CppName: get_myPartyTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetworkPlayersViewController::*)()>(&GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "get_myPartyTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle
// Il2CppName: get_otherPlayersTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetworkPlayersViewController::*)()>(&GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "get_otherPlayersTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel
// Il2CppName: get_networkPlayerModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayerModel* (GlobalNamespace::NetworkPlayersViewController::*)()>(&GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "get_networkPlayerModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent
// Il2CppName: add_onJoinRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "add_onJoinRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent
// Il2CppName: remove_onJoinRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "remove_onJoinRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent
// Il2CppName: add_onInviteRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "add_onInviteRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent
// Il2CppName: remove_onInviteRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "remove_onInviteRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate
// Il2CppName: NetworkPlayersViewControllerDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(bool, bool)>(&GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "NetworkPlayersViewControllerDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate
// Il2CppName: NetworkPlayersViewControllerDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(bool)>(&GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "NetworkPlayersViewControllerDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged
// Il2CppName: HandlePartyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(GlobalNamespace::INetworkPlayerModel*)>(&GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged)> {
  static const MethodInfo* get() {
    static auto* playerModel = &::il2cpp_utils::GetClassFromName("", "INetworkPlayerModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "HandlePartyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest
// Il2CppName: HandleJoinRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "HandleJoinRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest
// Il2CppName: HandleInviteRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "HandleInviteRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)()>(&GlobalNamespace::NetworkPlayersViewController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(bool, bool, bool)>(&GlobalNamespace::NetworkPlayersViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)(bool, bool)>(&GlobalNamespace::NetworkPlayersViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersViewController::*)()>(&GlobalNamespace::NetworkPlayersViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
