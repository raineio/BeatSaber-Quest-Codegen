// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: StandaloneInputModule
  class StandaloneInputModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::StandaloneInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::StandaloneInputModule*, "UnityEngine.EventSystems", "StandaloneInputModule");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.StandaloneInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10C66E8
  class StandaloneInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
    public:
    // Nested type: ::UnityEngine::EventSystems::StandaloneInputModule::InputMode
    struct InputMode;
    public:
    // private System.Single m_PrevActionTime
    // Size: 0x4
    // Offset: 0x58
    float m_PrevActionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 m_LastMoveVector
    // Size: 0x8
    // Offset: 0x5C
    ::UnityEngine::Vector2 m_LastMoveVector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Int32 m_ConsecutiveMoveCount
    // Size: 0x4
    // Offset: 0x64
    int m_ConsecutiveMoveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector2 m_LastMousePosition
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Vector2 m_LastMousePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_MousePosition
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Vector2 m_MousePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.GameObject m_CurrentFocusedGameObject
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* m_CurrentFocusedGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // private System.String m_HorizontalAxis
    // Size: 0x8
    // Offset: 0x88
    ::StringW m_HorizontalAxis;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_VerticalAxis
    // Size: 0x8
    // Offset: 0x90
    ::StringW m_VerticalAxis;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_SubmitButton
    // Size: 0x8
    // Offset: 0x98
    ::StringW m_SubmitButton;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_CancelButton
    // Size: 0x8
    // Offset: 0xA0
    ::StringW m_CancelButton;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single m_InputActionsPerSecond
    // Size: 0x4
    // Offset: 0xA8
    float m_InputActionsPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_RepeatDelay
    // Size: 0x4
    // Offset: 0xAC
    float m_RepeatDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x10C875C
    // private System.Boolean m_ForceModuleActive
    // Size: 0x1
    // Offset: 0xB0
    bool m_ForceModuleActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single m_PrevActionTime
    [[deprecated("Use field access instead!")]] float& dyn_m_PrevActionTime();
    // Get instance field reference: private UnityEngine.Vector2 m_LastMoveVector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_LastMoveVector();
    // Get instance field reference: private System.Int32 m_ConsecutiveMoveCount
    [[deprecated("Use field access instead!")]] int& dyn_m_ConsecutiveMoveCount();
    // Get instance field reference: private UnityEngine.Vector2 m_LastMousePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_LastMousePosition();
    // Get instance field reference: private UnityEngine.Vector2 m_MousePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_MousePosition();
    // Get instance field reference: private UnityEngine.GameObject m_CurrentFocusedGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_CurrentFocusedGameObject();
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::PointerEventData*& dyn_m_InputPointerEvent();
    // Get instance field reference: private System.String m_HorizontalAxis
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_HorizontalAxis();
    // Get instance field reference: private System.String m_VerticalAxis
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_VerticalAxis();
    // Get instance field reference: private System.String m_SubmitButton
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_SubmitButton();
    // Get instance field reference: private System.String m_CancelButton
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_CancelButton();
    // Get instance field reference: private System.Single m_InputActionsPerSecond
    [[deprecated("Use field access instead!")]] float& dyn_m_InputActionsPerSecond();
    // Get instance field reference: private System.Single m_RepeatDelay
    [[deprecated("Use field access instead!")]] float& dyn_m_RepeatDelay();
    // Get instance field reference: private System.Boolean m_ForceModuleActive
    [[deprecated("Use field access instead!")]] bool& dyn_m_ForceModuleActive();
    // public UnityEngine.EventSystems.StandaloneInputModule/UnityEngine.EventSystems.InputMode get_inputMode()
    // Offset: 0x197B980
    ::UnityEngine::EventSystems::StandaloneInputModule::InputMode get_inputMode();
    // public System.Boolean get_allowActivationOnMobileDevice()
    // Offset: 0x197B988
    bool get_allowActivationOnMobileDevice();
    // public System.Void set_allowActivationOnMobileDevice(System.Boolean value)
    // Offset: 0x197B990
    void set_allowActivationOnMobileDevice(bool value);
    // public System.Boolean get_forceModuleActive()
    // Offset: 0x197B99C
    bool get_forceModuleActive();
    // public System.Void set_forceModuleActive(System.Boolean value)
    // Offset: 0x197B9A4
    void set_forceModuleActive(bool value);
    // public System.Single get_inputActionsPerSecond()
    // Offset: 0x197B9B0
    float get_inputActionsPerSecond();
    // public System.Void set_inputActionsPerSecond(System.Single value)
    // Offset: 0x197B9B8
    void set_inputActionsPerSecond(float value);
    // public System.Single get_repeatDelay()
    // Offset: 0x197B9C0
    float get_repeatDelay();
    // public System.Void set_repeatDelay(System.Single value)
    // Offset: 0x197B9C8
    void set_repeatDelay(float value);
    // public System.String get_horizontalAxis()
    // Offset: 0x197B9D0
    ::StringW get_horizontalAxis();
    // public System.Void set_horizontalAxis(System.String value)
    // Offset: 0x197B9D8
    void set_horizontalAxis(::StringW value);
    // public System.String get_verticalAxis()
    // Offset: 0x197B9E0
    ::StringW get_verticalAxis();
    // public System.Void set_verticalAxis(System.String value)
    // Offset: 0x197B9E8
    void set_verticalAxis(::StringW value);
    // public System.String get_submitButton()
    // Offset: 0x197B9F0
    ::StringW get_submitButton();
    // public System.Void set_submitButton(System.String value)
    // Offset: 0x197B9F8
    void set_submitButton(::StringW value);
    // public System.String get_cancelButton()
    // Offset: 0x197BA00
    ::StringW get_cancelButton();
    // public System.Void set_cancelButton(System.String value)
    // Offset: 0x197BA08
    void set_cancelButton(::StringW value);
    // private System.Boolean ShouldIgnoreEventsOnNoFocus()
    // Offset: 0x197BA10
    bool ShouldIgnoreEventsOnNoFocus();
    // private System.Void ReleaseMouse(UnityEngine.EventSystems.PointerEventData pointerEvent, UnityEngine.GameObject currentOverGo)
    // Offset: 0x197BB28
    void ReleaseMouse(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::UnityEngine::GameObject* currentOverGo);
    // private System.Boolean ProcessTouchEvents()
    // Offset: 0x197C4A8
    bool ProcessTouchEvents();
    // protected System.Void ProcessTouchPress(UnityEngine.EventSystems.PointerEventData pointerEvent, System.Boolean pressed, System.Boolean released)
    // Offset: 0x197CAE8
    void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
    // protected System.Boolean SendSubmitEventToSelectedObject()
    // Offset: 0x197C8B4
    bool SendSubmitEventToSelectedObject();
    // private UnityEngine.Vector2 GetRawMoveVector()
    // Offset: 0x197D1C0
    ::UnityEngine::Vector2 GetRawMoveVector();
    // protected System.Boolean SendMoveEventToSelectedObject()
    // Offset: 0x197C620
    bool SendMoveEventToSelectedObject();
    // protected System.Void ProcessMouseEvent()
    // Offset: 0x197C618
    void ProcessMouseEvent();
    // protected System.Boolean ForceAutoSelect()
    // Offset: 0x197D56C
    bool ForceAutoSelect();
    // protected System.Void ProcessMouseEvent(System.Int32 id)
    // Offset: 0x197D2FC
    void ProcessMouseEvent(int id);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x197C354
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData data)
    // Offset: 0x197D574
    void ProcessMousePress(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data);
    // protected UnityEngine.GameObject GetCurrentFocusedGameObject()
    // Offset: 0x197D8EC
    ::UnityEngine::GameObject* GetCurrentFocusedGameObject();
    // protected System.Void .ctor()
    // Offset: 0x197B8F0
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::.ctor()
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::StandaloneInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneInputModule*, creationType>()));
    }
    // public override System.Void UpdateModule()
    // Offset: 0x197BA34
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x197BEC4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x197BF30
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void ActivateModule()
    // Offset: 0x197C160
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::ActivateModule()
    void ActivateModule();
    // public override System.Void DeactivateModule()
    // Offset: 0x197C290
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.Void Process()
    // Offset: 0x197C294
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // UnityEngine.EventSystems.StandaloneInputModule
  #pragma pack(pop)
  static check_size<sizeof(StandaloneInputModule), 176 + sizeof(bool)> __UnityEngine_EventSystems_StandaloneInputModuleSizeCheck;
  static_assert(sizeof(StandaloneInputModule) == 0xB1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_inputMode
// Il2CppName: get_inputMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::StandaloneInputModule::InputMode (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_inputMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_inputMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice
// Il2CppName: get_allowActivationOnMobileDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_allowActivationOnMobileDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice
// Il2CppName: set_allowActivationOnMobileDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(&UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_allowActivationOnMobileDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive
// Il2CppName: get_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive
// Il2CppName: set_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(&UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond
// Il2CppName: get_inputActionsPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_inputActionsPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond
// Il2CppName: set_inputActionsPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(float)>(&UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_inputActionsPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay
// Il2CppName: get_repeatDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_repeatDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay
// Il2CppName: set_repeatDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(float)>(&UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_repeatDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis
// Il2CppName: get_horizontalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_horizontalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis
// Il2CppName: set_horizontalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(&UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_horizontalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis
// Il2CppName: get_verticalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_verticalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis
// Il2CppName: set_verticalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(&UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_verticalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_submitButton
// Il2CppName: get_submitButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_submitButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_submitButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_submitButton
// Il2CppName: set_submitButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(&UnityEngine::EventSystems::StandaloneInputModule::set_submitButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_submitButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton
// Il2CppName: get_cancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_cancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton
// Il2CppName: set_cancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(&UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_cancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus
// Il2CppName: ShouldIgnoreEventsOnNoFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ShouldIgnoreEventsOnNoFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse
// Il2CppName: ReleaseMouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(&UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* currentOverGo = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ReleaseMouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent, currentOverGo});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents
// Il2CppName: ProcessTouchEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessTouchEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress
// Il2CppName: ProcessTouchPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* released = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessTouchPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent, pressed, released});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject
// Il2CppName: SendSubmitEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendSubmitEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector
// Il2CppName: GetRawMoveVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "GetRawMoveVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject
// Il2CppName: SendMoveEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendMoveEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent
// Il2CppName: ProcessMouseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMouseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect
// Il2CppName: ForceAutoSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ForceAutoSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent
// Il2CppName: ProcessMouseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(int)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMouseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject
// Il2CppName: SendUpdateEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress
// Il2CppName: ProcessMousePress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMousePress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject
// Il2CppName: GetCurrentFocusedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "GetCurrentFocusedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::UpdateModule
// Il2CppName: UpdateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::UpdateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "UpdateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::IsModuleSupported
// Il2CppName: IsModuleSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::IsModuleSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "IsModuleSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule
// Il2CppName: ShouldActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ShouldActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ActivateModule
// Il2CppName: ActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule
// Il2CppName: DeactivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "DeactivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
