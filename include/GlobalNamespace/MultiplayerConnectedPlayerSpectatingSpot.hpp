// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSpectatingSpot
  class MultiplayerConnectedPlayerSpectatingSpot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*, "", "MultiplayerConnectedPlayerSpectatingSpot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerSpectatingSpot
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSpectatingSpot : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerSpectatingSpot*/ {
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
    // [InjectAttribute] Offset: 0xF3F51C
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F52C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F53C
    // private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatingSpotManager*) == 0x8);
    // private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*) == 0x8);
    // private System.Action`1<System.Boolean> isObservedChangedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<bool>* isObservedChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private IMultiplayerObservable <observable>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IMultiplayerObservable* observable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerObservable*) == 0x8);
    // private System.Boolean _playerFailed
    // Size: 0x1
    // Offset: 0x48
    bool playerFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSpectatingSpot
    operator GlobalNamespace::IMultiplayerSpectatingSpot() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSpectatingSpot*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    GlobalNamespace::MultiplayerSpectatingSpotManager*& dyn__spectatingSpotManager();
    // Get instance field reference: private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*& dyn_hasBeenRemovedEvent();
    // Get instance field reference: private System.Action`1<System.Boolean> isObservedChangedEvent
    System::Action_1<bool>*& dyn_isObservedChangedEvent();
    // Get instance field reference: private IMultiplayerObservable <observable>k__BackingField
    GlobalNamespace::IMultiplayerObservable*& dyn_$observable$k__BackingField();
    // Get instance field reference: private System.Boolean _playerFailed
    bool& dyn__playerFailed();
    // public IMultiplayerObservable get_observable()
    // Offset: 0x11CF71C
    GlobalNamespace::IMultiplayerObservable* get_observable();
    // private System.Void set_observable(IMultiplayerObservable value)
    // Offset: 0x11CF724
    void set_observable(GlobalNamespace::IMultiplayerObservable* value);
    // public System.String get_spotName()
    // Offset: 0x11CF72C
    ::StringW get_spotName();
    // public System.Boolean get_isMain()
    // Offset: 0x11CF7E0
    bool get_isMain();
    // private UnityEngine.Transform IMultiplayerSpectatingSpot.get_transform()
    // Offset: 0x11CFD8C
    UnityEngine::Transform* IMultiplayerSpectatingSpot_get_transform();
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x11CF5D4
    void add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x11CF678
    void remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void add_isObservedChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x11CBB50
    void add_isObservedChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_isObservedChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x11CBDEC
    void remove_isObservedChangedEvent(System::Action_1<bool>* value);
    // protected System.Void Start()
    // Offset: 0x11CF7E8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11CF9CC
    void OnDestroy();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0x11CFB70
    void SetIsObserved(bool isObserved);
    // private System.Void ReloadBasedOnPlayerCurrentState(IConnectedPlayer connectedPlayer)
    // Offset: 0x11CFBE4
    void ReloadBasedOnPlayerCurrentState(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandlePlayerStateChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0x11CFD7C
    void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x11CFD80
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // public System.Void .ctor()
    // Offset: 0x11CFD84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSpectatingSpot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSpectatingSpot*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerSpectatingSpot
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerSpectatingSpot), 72 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerSpectatingSpotSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSpectatingSpot) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_observable
// Il2CppName: get_observable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IMultiplayerObservable* (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_observable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "get_observable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::set_observable
// Il2CppName: set_observable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(GlobalNamespace::IMultiplayerObservable*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::set_observable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IMultiplayerObservable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "set_observable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_spotName
// Il2CppName: get_spotName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_spotName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "get_spotName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_isMain
// Il2CppName: get_isMain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_isMain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "get_isMain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::IMultiplayerSpectatingSpot_get_transform
// Il2CppName: IMultiplayerSpectatingSpot.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::IMultiplayerSpectatingSpot_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "IMultiplayerSpectatingSpot.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_hasBeenRemovedEvent
// Il2CppName: add_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "add_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_hasBeenRemovedEvent
// Il2CppName: remove_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "remove_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_isObservedChangedEvent
// Il2CppName: add_isObservedChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(System::Action_1<bool>*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_isObservedChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "add_isObservedChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_isObservedChangedEvent
// Il2CppName: remove_isObservedChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(System::Action_1<bool>*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_isObservedChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "remove_isObservedChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::SetIsObserved
// Il2CppName: SetIsObserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(bool)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::SetIsObserved)> {
  static const MethodInfo* get() {
    static auto* isObserved = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "SetIsObserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isObserved});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::ReloadBasedOnPlayerCurrentState
// Il2CppName: ReloadBasedOnPlayerCurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::ReloadBasedOnPlayerCurrentState)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "ReloadBasedOnPlayerCurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerStateChanged
// Il2CppName: HandlePlayerStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerStateChanged)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "HandlePlayerStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerDisconnected
// Il2CppName: HandlePlayerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerDisconnected)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*), "HandlePlayerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
