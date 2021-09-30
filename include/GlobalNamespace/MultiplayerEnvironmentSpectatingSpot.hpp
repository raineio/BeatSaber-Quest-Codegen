// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager;
  // Forward declaring type: MultiplayerActivePlayersTimeOffsetAverage
  class MultiplayerActivePlayersTimeOffsetAverage;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentSpectatingSpot
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerEnvironmentSpectatingSpot : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerSpectatingSpot*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Boolean _preferredSpectatingSpot
    // Size: 0x1
    // Offset: 0x18
    bool preferredSpectatingSpot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _displaySpotNumber
    // Size: 0x1
    // Offset: 0x19
    bool displaySpotNumber;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: displaySpotNumber and: spotNumber
    char __padding1[0x2] = {};
    // [DrawIfAttribute] Offset: 0xF0A444
    // private System.Int32 _spotNumber
    // Size: 0x4
    // Offset: 0x1C
    int spotNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0xF0A4EC
    // private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatingSpotManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A4FC
    // private readonly MultiplayerActivePlayersTimeOffsetAverage _activePlayersTimeOffsetAverage
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* activePlayersTimeOffsetAverage;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*) == 0x8);
    // private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSpectatingSpot
    operator GlobalNamespace::IMultiplayerSpectatingSpot() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSpectatingSpot*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _preferredSpectatingSpot
    bool& dyn__preferredSpectatingSpot();
    // Get instance field reference: private System.Boolean _displaySpotNumber
    bool& dyn__displaySpotNumber();
    // Get instance field reference: private System.Int32 _spotNumber
    int& dyn__spotNumber();
    // Get instance field reference: private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    GlobalNamespace::MultiplayerSpectatingSpotManager*& dyn__spectatingSpotManager();
    // Get instance field reference: private readonly MultiplayerActivePlayersTimeOffsetAverage _activePlayersTimeOffsetAverage
    GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*& dyn__activePlayersTimeOffsetAverage();
    // Get instance field reference: private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*& dyn_hasBeenRemovedEvent();
    // public IMultiplayerObservable get_observable()
    // Offset: 0x1219780
    GlobalNamespace::IMultiplayerObservable* get_observable();
    // public System.String get_spotName()
    // Offset: 0x1219788
    ::Il2CppString* get_spotName();
    // public System.Boolean get_isMain()
    // Offset: 0x1219834
    bool get_isMain();
    // private UnityEngine.Transform IMultiplayerSpectatingSpot.get_transform()
    // Offset: 0x12198CC
    UnityEngine::Transform* IMultiplayerSpectatingSpot_get_transform();
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x1219638
    void add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x12196DC
    void remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // protected System.Void Start()
    // Offset: 0x121983C
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x121985C
    void OnDisable();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0x12198C0
    void SetIsObserved(bool isObserved);
    // public System.Void .ctor()
    // Offset: 0x12198C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEnvironmentSpectatingSpot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEnvironmentSpectatingSpot*, creationType>()));
    }
  }; // MultiplayerEnvironmentSpectatingSpot
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentSpectatingSpot), 48 + sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)> __GlobalNamespace_MultiplayerEnvironmentSpectatingSpotSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentSpectatingSpot) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*, "", "MultiplayerEnvironmentSpectatingSpot");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_observable
// Il2CppName: get_observable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IMultiplayerObservable* (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_observable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "get_observable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_spotName
// Il2CppName: get_spotName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_spotName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "get_spotName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_isMain
// Il2CppName: get_isMain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_isMain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "get_isMain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::IMultiplayerSpectatingSpot_get_transform
// Il2CppName: IMultiplayerSpectatingSpot.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::IMultiplayerSpectatingSpot_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "IMultiplayerSpectatingSpot.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::add_hasBeenRemovedEvent
// Il2CppName: add_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::add_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "add_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::remove_hasBeenRemovedEvent
// Il2CppName: remove_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::remove_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "remove_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)()>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::SetIsObserved
// Il2CppName: SetIsObserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::*)(bool)>(&GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::SetIsObserved)> {
  static const MethodInfo* get() {
    static auto* isObserved = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*), "SetIsObserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isObserved});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
