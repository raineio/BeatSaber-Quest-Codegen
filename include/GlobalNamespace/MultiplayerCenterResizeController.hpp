// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
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
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerCenterResizeController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterResizeController*, "", "MultiplayerCenterResizeController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCenterResizeController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerCenterResizeController : public UnityEngine::MonoBehaviour {
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
    // private System.Single _platformWidth
    // Size: 0x4
    // Offset: 0x18
    float platformWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: platformWidth and: layoutProvider
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xF3E2D0
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // private System.Action`1<System.Single> edgeDistanceFromCenterWasCalculatedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<float>* edgeDistanceFromCenterWasCalculatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private System.Boolean <isEdgeDistanceFromCenterCalculated>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isEdgeDistanceFromCenterCalculated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEdgeDistanceFromCenterCalculated and: edgeDistanceFromCenter
    char __padding3[0x3] = {};
    // private System.Single <edgeDistanceFromCenter>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float edgeDistanceFromCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _platformWidth
    float& dyn__platformWidth();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private System.Action`1<System.Single> edgeDistanceFromCenterWasCalculatedEvent
    System::Action_1<float>*& dyn_edgeDistanceFromCenterWasCalculatedEvent();
    // Get instance field reference: private System.Boolean <isEdgeDistanceFromCenterCalculated>k__BackingField
    bool& dyn_$isEdgeDistanceFromCenterCalculated$k__BackingField();
    // Get instance field reference: private System.Single <edgeDistanceFromCenter>k__BackingField
    float& dyn_$edgeDistanceFromCenter$k__BackingField();
    // public System.Boolean get_isEdgeDistanceFromCenterCalculated()
    // Offset: 0x11C8E5C
    bool get_isEdgeDistanceFromCenterCalculated();
    // private System.Void set_isEdgeDistanceFromCenterCalculated(System.Boolean value)
    // Offset: 0x11C8E64
    void set_isEdgeDistanceFromCenterCalculated(bool value);
    // public System.Single get_edgeDistanceFromCenter()
    // Offset: 0x11C8E70
    float get_edgeDistanceFromCenter();
    // private System.Void set_edgeDistanceFromCenter(System.Single value)
    // Offset: 0x11C8E78
    void set_edgeDistanceFromCenter(float value);
    // public System.Void add_edgeDistanceFromCenterWasCalculatedEvent(System.Action`1<System.Single> value)
    // Offset: 0x11C8D14
    void add_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float>* value);
    // public System.Void remove_edgeDistanceFromCenterWasCalculatedEvent(System.Action`1<System.Single> value)
    // Offset: 0x11C8DB8
    void remove_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float>* value);
    // protected System.Void Start()
    // Offset: 0x11C8E80
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11C9014
    void OnDestroy();
    // private System.Void HandlePlayersLayoutWasCalculated(MultiplayerPlayerLayout layout, System.Int32 numberOfPlayers)
    // Offset: 0x11C8F34
    void HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int numberOfPlayers);
    // public System.Void .ctor()
    // Offset: 0x11C90B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCenterResizeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerCenterResizeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCenterResizeController*, creationType>()));
    }
  }; // MultiplayerCenterResizeController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCenterResizeController), 52 + sizeof(float)> __GlobalNamespace_MultiplayerCenterResizeControllerSizeCheck;
  static_assert(sizeof(MultiplayerCenterResizeController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::get_isEdgeDistanceFromCenterCalculated
// Il2CppName: get_isEdgeDistanceFromCenterCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerCenterResizeController::*)()>(&GlobalNamespace::MultiplayerCenterResizeController::get_isEdgeDistanceFromCenterCalculated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "get_isEdgeDistanceFromCenterCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::set_isEdgeDistanceFromCenterCalculated
// Il2CppName: set_isEdgeDistanceFromCenterCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)(bool)>(&GlobalNamespace::MultiplayerCenterResizeController::set_isEdgeDistanceFromCenterCalculated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "set_isEdgeDistanceFromCenterCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::get_edgeDistanceFromCenter
// Il2CppName: get_edgeDistanceFromCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerCenterResizeController::*)()>(&GlobalNamespace::MultiplayerCenterResizeController::get_edgeDistanceFromCenter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "get_edgeDistanceFromCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::set_edgeDistanceFromCenter
// Il2CppName: set_edgeDistanceFromCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)(float)>(&GlobalNamespace::MultiplayerCenterResizeController::set_edgeDistanceFromCenter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "set_edgeDistanceFromCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::add_edgeDistanceFromCenterWasCalculatedEvent
// Il2CppName: add_edgeDistanceFromCenterWasCalculatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)(System::Action_1<float>*)>(&GlobalNamespace::MultiplayerCenterResizeController::add_edgeDistanceFromCenterWasCalculatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "add_edgeDistanceFromCenterWasCalculatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::remove_edgeDistanceFromCenterWasCalculatedEvent
// Il2CppName: remove_edgeDistanceFromCenterWasCalculatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)(System::Action_1<float>*)>(&GlobalNamespace::MultiplayerCenterResizeController::remove_edgeDistanceFromCenterWasCalculatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "remove_edgeDistanceFromCenterWasCalculatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)()>(&GlobalNamespace::MultiplayerCenterResizeController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)()>(&GlobalNamespace::MultiplayerCenterResizeController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::HandlePlayersLayoutWasCalculated
// Il2CppName: HandlePlayersLayoutWasCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterResizeController::*)(GlobalNamespace::MultiplayerPlayerLayout, int)>(&GlobalNamespace::MultiplayerCenterResizeController::HandlePlayersLayoutWasCalculated)> {
  static const MethodInfo* get() {
    static auto* layout = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout")->byval_arg;
    static auto* numberOfPlayers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterResizeController*), "HandlePlayersLayoutWasCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layout, numberOfPlayers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterResizeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
