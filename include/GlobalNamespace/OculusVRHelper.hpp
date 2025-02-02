// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IVRPlatformHelper
#include "GlobalNamespace/IVRPlatformHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusVRHelper
  class OculusVRHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusVRHelper*, "", "OculusVRHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: OculusVRHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusVRHelper : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IVRPlatformHelper*/ {
    public:
    public:
    // private System.Action inputFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* inputFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action inputFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* inputFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action vrFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* vrFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action vrFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* vrFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action hmdUnmountedEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* hmdUnmountedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action hmdMountedEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* hmdMountedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action joystickWasCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* joystickWasCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Vector2>*) == 0x8);
    // private System.Boolean _hasInputFocus
    // Size: 0x1
    // Offset: 0x58
    bool hasInputFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasVrFocus
    // Size: 0x1
    // Offset: 0x59
    bool hasVrFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _userPresent
    // Size: 0x1
    // Offset: 0x5A
    bool userPresent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _scrollingLastFrame
    // Size: 0x1
    // Offset: 0x5B
    bool scrollingLastFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: scrollingLastFrame and: disabledEventSystem
    char __padding11[0x4] = {};
    // private UnityEngine.EventSystems.EventSystem _disabledEventSystem
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::EventSystems::EventSystem* disabledEventSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventSystem*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IVRPlatformHelper
    operator ::GlobalNamespace::IVRPlatformHelper() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IVRPlatformHelper*>(this);
    }
    // Creating interface conversion operator: i_IVRPlatformHelper
    inline ::GlobalNamespace::IVRPlatformHelper* i_IVRPlatformHelper() noexcept {
      return reinterpret_cast<::GlobalNamespace::IVRPlatformHelper*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action inputFocusWasCapturedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_inputFocusWasCapturedEvent();
    // Get instance field reference: private System.Action inputFocusWasReleasedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_inputFocusWasReleasedEvent();
    // Get instance field reference: private System.Action vrFocusWasCapturedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_vrFocusWasCapturedEvent();
    // Get instance field reference: private System.Action vrFocusWasReleasedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_vrFocusWasReleasedEvent();
    // Get instance field reference: private System.Action hmdUnmountedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_hmdUnmountedEvent();
    // Get instance field reference: private System.Action hmdMountedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_hmdMountedEvent();
    // Get instance field reference: private System.Action joystickWasCenteredThisFrameEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_joystickWasCenteredThisFrameEvent();
    // Get instance field reference: private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Vector2>*& dyn_joystickWasNotCenteredThisFrameEvent();
    // Get instance field reference: private System.Boolean _hasInputFocus
    [[deprecated("Use field access instead!")]] bool& dyn__hasInputFocus();
    // Get instance field reference: private System.Boolean _hasVrFocus
    [[deprecated("Use field access instead!")]] bool& dyn__hasVrFocus();
    // Get instance field reference: private System.Boolean _userPresent
    [[deprecated("Use field access instead!")]] bool& dyn__userPresent();
    // Get instance field reference: private System.Boolean _scrollingLastFrame
    [[deprecated("Use field access instead!")]] bool& dyn__scrollingLastFrame();
    // Get instance field reference: private UnityEngine.EventSystems.EventSystem _disabledEventSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::EventSystem*& dyn__disabledEventSystem();
    // public System.Boolean get_hasInputFocus()
    // Offset: 0x162A694
    bool get_hasInputFocus();
    // public System.Boolean get_hasVrFocus()
    // Offset: 0x162A6F4
    bool get_hasVrFocus();
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0x162A754
    bool get_isAlwaysWireless();
    // public VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0x162A77C
    ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();
    // public XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0x162A774
    ::GlobalNamespace::XRDeviceModel get_currentXRDeviceModel();
    // private System.Boolean get__isOVRManagerPresent()
    // Offset: 0x162A784
    bool get__isOVRManagerPresent();
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1629C54
    void add_inputFocusWasCapturedEvent(::System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1629CF8
    void remove_inputFocusWasCapturedEvent(::System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x1629D9C
    void add_inputFocusWasReleasedEvent(::System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x1629E40
    void remove_inputFocusWasReleasedEvent(::System::Action* value);
    // public System.Void add_vrFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1629EE4
    void add_vrFocusWasCapturedEvent(::System::Action* value);
    // public System.Void remove_vrFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1629F88
    void remove_vrFocusWasCapturedEvent(::System::Action* value);
    // public System.Void add_vrFocusWasReleasedEvent(System.Action value)
    // Offset: 0x162A02C
    void add_vrFocusWasReleasedEvent(::System::Action* value);
    // public System.Void remove_vrFocusWasReleasedEvent(System.Action value)
    // Offset: 0x162A0D0
    void remove_vrFocusWasReleasedEvent(::System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0x162A174
    void add_hmdUnmountedEvent(::System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0x162A218
    void remove_hmdUnmountedEvent(::System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0x162A2BC
    void add_hmdMountedEvent(::System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0x162A360
    void remove_hmdMountedEvent(::System::Action* value);
    // public System.Void add_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x162A404
    void add_joystickWasCenteredThisFrameEvent(::System::Action* value);
    // public System.Void remove_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x162A4A8
    void remove_joystickWasCenteredThisFrameEvent(::System::Action* value);
    // public System.Void add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x162A54C
    void add_joystickWasNotCenteredThisFrameEvent(::System::Action_1<::UnityEngine::Vector2>* value);
    // public System.Void remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x162A5F0
    void remove_joystickWasNotCenteredThisFrameEvent(::System::Action_1<::UnityEngine::Vector2>* value);
    // public System.Void .ctor()
    // Offset: 0x162B24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusVRHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusVRHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusVRHelper*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x162A858
    void Update();
    // protected System.Void FixedUpdate()
    // Offset: 0x162ADA0
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x162AE14
    void LateUpdate();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x162AE88
    void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void StopHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x162AF14
    void StopHaptics(::UnityEngine::XR::XRNode node);
    // public System.Void AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    // Offset: 0x162AF90
    void AdjustControllerTransform(::UnityEngine::XR::XRNode node, ::UnityEngine::Transform* transform, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation);
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x162B110
    bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
    // private System.Void EnableEventSystem()
    // Offset: 0x162AD0C
    void EnableEventSystem();
    // private System.Void DisableEventSystem()
    // Offset: 0x162ABF4
    void DisableEventSystem();
  }; // OculusVRHelper
  #pragma pack(pop)
  static check_size<sizeof(OculusVRHelper), 96 + sizeof(::UnityEngine::EventSystems::EventSystem*)> __GlobalNamespace_OculusVRHelperSizeCheck;
  static_assert(sizeof(OculusVRHelper) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get_hasInputFocus
// Il2CppName: get_hasInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get_hasInputFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get_hasInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get_hasVrFocus
// Il2CppName: get_hasVrFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get_hasVrFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get_hasVrFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get_isAlwaysWireless
// Il2CppName: get_isAlwaysWireless
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get_isAlwaysWireless)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get_isAlwaysWireless", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get_vrPlatformSDK
// Il2CppName: get_vrPlatformSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRPlatformSDK (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get_vrPlatformSDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get_vrPlatformSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get_currentXRDeviceModel
// Il2CppName: get_currentXRDeviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::XRDeviceModel (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get_currentXRDeviceModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get_currentXRDeviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::get__isOVRManagerPresent
// Il2CppName: get__isOVRManagerPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::get__isOVRManagerPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "get__isOVRManagerPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_inputFocusWasCapturedEvent
// Il2CppName: add_inputFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_inputFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_inputFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_inputFocusWasCapturedEvent
// Il2CppName: remove_inputFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_inputFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_inputFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_inputFocusWasReleasedEvent
// Il2CppName: add_inputFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_inputFocusWasReleasedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_inputFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_inputFocusWasReleasedEvent
// Il2CppName: remove_inputFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_inputFocusWasReleasedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_inputFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_vrFocusWasCapturedEvent
// Il2CppName: add_vrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_vrFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_vrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_vrFocusWasCapturedEvent
// Il2CppName: remove_vrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_vrFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_vrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_vrFocusWasReleasedEvent
// Il2CppName: add_vrFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_vrFocusWasReleasedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_vrFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_vrFocusWasReleasedEvent
// Il2CppName: remove_vrFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_vrFocusWasReleasedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_vrFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_hmdUnmountedEvent
// Il2CppName: add_hmdUnmountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_hmdUnmountedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_hmdUnmountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_hmdUnmountedEvent
// Il2CppName: remove_hmdUnmountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_hmdUnmountedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_hmdUnmountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_hmdMountedEvent
// Il2CppName: add_hmdMountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_hmdMountedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_hmdMountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_hmdMountedEvent
// Il2CppName: remove_hmdMountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_hmdMountedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_hmdMountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_joystickWasCenteredThisFrameEvent
// Il2CppName: add_joystickWasCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::add_joystickWasCenteredThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_joystickWasCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_joystickWasCenteredThisFrameEvent
// Il2CppName: remove_joystickWasCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action*)>(&GlobalNamespace::OculusVRHelper::remove_joystickWasCenteredThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_joystickWasCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::add_joystickWasNotCenteredThisFrameEvent
// Il2CppName: add_joystickWasNotCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&GlobalNamespace::OculusVRHelper::add_joystickWasNotCenteredThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "add_joystickWasNotCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::remove_joystickWasNotCenteredThisFrameEvent
// Il2CppName: remove_joystickWasNotCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&GlobalNamespace::OculusVRHelper::remove_joystickWasNotCenteredThisFrameEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "remove_joystickWasNotCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::TriggerHapticPulse
// Il2CppName: TriggerHapticPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::UnityEngine::XR::XRNode, float, float, float)>(&GlobalNamespace::OculusVRHelper::TriggerHapticPulse)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "TriggerHapticPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, duration, strength, frequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::StopHaptics
// Il2CppName: StopHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::OculusVRHelper::StopHaptics)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "StopHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::AdjustControllerTransform
// Il2CppName: AdjustControllerTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)(::UnityEngine::XR::XRNode, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::OculusVRHelper::AdjustControllerTransform)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "AdjustControllerTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, transform, position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::GetNodePose
// Il2CppName: GetNodePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusVRHelper::*)(::UnityEngine::XR::XRNode, int, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&GlobalNamespace::OculusVRHelper::GetNodePose)> {
  static const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "GetNodePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, idx, pos, rot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::EnableEventSystem
// Il2CppName: EnableEventSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::EnableEventSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "EnableEventSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusVRHelper::DisableEventSystem
// Il2CppName: DisableEventSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusVRHelper::*)()>(&GlobalNamespace::OculusVRHelper::DisableEventSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusVRHelper*), "DisableEventSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
