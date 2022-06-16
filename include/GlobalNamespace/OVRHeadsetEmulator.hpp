// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Including type: UnityEngine.CursorLockMode
#include "UnityEngine/CursorLockMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRManager
  class OVRManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRHeadsetEmulator
  class OVRHeadsetEmulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: OVRHeadsetEmulator
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHeadsetEmulator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRHeadsetEmulator::OpMode
    struct OpMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRHeadsetEmulator/OpMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct OpMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OpMode
      constexpr OpMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHeadsetEmulator/OpMode Off
      static constexpr const int Off = 0;
      // Get static field: static public OVRHeadsetEmulator/OpMode Off
      static ::GlobalNamespace::OVRHeadsetEmulator::OpMode _get_Off();
      // Set static field: static public OVRHeadsetEmulator/OpMode Off
      static void _set_Off(::GlobalNamespace::OVRHeadsetEmulator::OpMode value);
      // static field const value: static public OVRHeadsetEmulator/OpMode EditorOnly
      static constexpr const int EditorOnly = 1;
      // Get static field: static public OVRHeadsetEmulator/OpMode EditorOnly
      static ::GlobalNamespace::OVRHeadsetEmulator::OpMode _get_EditorOnly();
      // Set static field: static public OVRHeadsetEmulator/OpMode EditorOnly
      static void _set_EditorOnly(::GlobalNamespace::OVRHeadsetEmulator::OpMode value);
      // static field const value: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static constexpr const int AlwaysOn = 2;
      // Get static field: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static ::GlobalNamespace::OVRHeadsetEmulator::OpMode _get_AlwaysOn();
      // Set static field: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static void _set_AlwaysOn(::GlobalNamespace::OVRHeadsetEmulator::OpMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRHeadsetEmulator/OpMode
    #pragma pack(pop)
    static check_size<sizeof(OVRHeadsetEmulator::OpMode), 0 + sizeof(int)> __GlobalNamespace_OVRHeadsetEmulator_OpModeSizeCheck;
    static_assert(sizeof(OVRHeadsetEmulator::OpMode) == 0x4);
    public:
    // public OVRHeadsetEmulator/OpMode opMode
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRHeadsetEmulator::OpMode opMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHeadsetEmulator::OpMode) == 0x4);
    // public System.Boolean resetHmdPoseOnRelease
    // Size: 0x1
    // Offset: 0x1C
    bool resetHmdPoseOnRelease;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean resetHmdPoseByMiddleMouseButton
    // Size: 0x1
    // Offset: 0x1D
    bool resetHmdPoseByMiddleMouseButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resetHmdPoseByMiddleMouseButton and: activateKeys
    char __padding2[0x2] = {};
    // public UnityEngine.KeyCode[] activateKeys
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::KeyCode> activateKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::KeyCode>) == 0x8);
    // public UnityEngine.KeyCode[] pitchKeys
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::KeyCode> pitchKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::KeyCode>) == 0x8);
    // private OVRManager manager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRManager* manager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager*) == 0x8);
    // private System.Boolean lastFrameEmulationActivated
    // Size: 0x1
    // Offset: 0x38
    bool lastFrameEmulationActivated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastFrameEmulationActivated and: recordedHeadPoseRelativeOffsetTranslation
    char __padding6[0x3] = {};
    // private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetTranslation
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetTranslation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetRotation
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean hasSentEvent
    // Size: 0x1
    // Offset: 0x54
    bool hasSentEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean emulatorHasInitialized
    // Size: 0x1
    // Offset: 0x55
    bool emulatorHasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: emulatorHasInitialized and: previousCursorLockMode
    char __padding10[0x2] = {};
    // private UnityEngine.CursorLockMode previousCursorLockMode
    // Size: 0x4
    // Offset: 0x58
    ::UnityEngine::CursorLockMode previousCursorLockMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::CursorLockMode) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single MOUSE_SCALE_X
    static constexpr const float MOUSE_SCALE_X = -2;
    // Get static field: static private System.Single MOUSE_SCALE_X
    static float _get_MOUSE_SCALE_X();
    // Set static field: static private System.Single MOUSE_SCALE_X
    static void _set_MOUSE_SCALE_X(float value);
    // static field const value: static private System.Single MOUSE_SCALE_X_PITCH
    static constexpr const float MOUSE_SCALE_X_PITCH = -2;
    // Get static field: static private System.Single MOUSE_SCALE_X_PITCH
    static float _get_MOUSE_SCALE_X_PITCH();
    // Set static field: static private System.Single MOUSE_SCALE_X_PITCH
    static void _set_MOUSE_SCALE_X_PITCH(float value);
    // static field const value: static private System.Single MOUSE_SCALE_Y
    static constexpr const float MOUSE_SCALE_Y = 2;
    // Get static field: static private System.Single MOUSE_SCALE_Y
    static float _get_MOUSE_SCALE_Y();
    // Set static field: static private System.Single MOUSE_SCALE_Y
    static void _set_MOUSE_SCALE_Y(float value);
    // static field const value: static private System.Single MOUSE_SCALE_HEIGHT
    static constexpr const float MOUSE_SCALE_HEIGHT = 1;
    // Get static field: static private System.Single MOUSE_SCALE_HEIGHT
    static float _get_MOUSE_SCALE_HEIGHT();
    // Set static field: static private System.Single MOUSE_SCALE_HEIGHT
    static void _set_MOUSE_SCALE_HEIGHT(float value);
    // static field const value: static private System.Single MAX_ROLL
    static constexpr const float MAX_ROLL = 85;
    // Get static field: static private System.Single MAX_ROLL
    static float _get_MAX_ROLL();
    // Set static field: static private System.Single MAX_ROLL
    static void _set_MAX_ROLL(float value);
    // Get instance field reference: public OVRHeadsetEmulator/OpMode opMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHeadsetEmulator::OpMode& dyn_opMode();
    // Get instance field reference: public System.Boolean resetHmdPoseOnRelease
    [[deprecated("Use field access instead!")]] bool& dyn_resetHmdPoseOnRelease();
    // Get instance field reference: public System.Boolean resetHmdPoseByMiddleMouseButton
    [[deprecated("Use field access instead!")]] bool& dyn_resetHmdPoseByMiddleMouseButton();
    // Get instance field reference: public UnityEngine.KeyCode[] activateKeys
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::KeyCode>& dyn_activateKeys();
    // Get instance field reference: public UnityEngine.KeyCode[] pitchKeys
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::KeyCode>& dyn_pitchKeys();
    // Get instance field reference: private OVRManager manager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager*& dyn_manager();
    // Get instance field reference: private System.Boolean lastFrameEmulationActivated
    [[deprecated("Use field access instead!")]] bool& dyn_lastFrameEmulationActivated();
    // Get instance field reference: private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetTranslation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_recordedHeadPoseRelativeOffsetTranslation();
    // Get instance field reference: private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_recordedHeadPoseRelativeOffsetRotation();
    // Get instance field reference: private System.Boolean hasSentEvent
    [[deprecated("Use field access instead!")]] bool& dyn_hasSentEvent();
    // Get instance field reference: private System.Boolean emulatorHasInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_emulatorHasInitialized();
    // Get instance field reference: private UnityEngine.CursorLockMode previousCursorLockMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::CursorLockMode& dyn_previousCursorLockMode();
    // public System.Void .ctor()
    // Offset: 0x19F12C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHeadsetEmulator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHeadsetEmulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHeadsetEmulator*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x19F0B2C
    void Start();
    // private System.Void Update()
    // Offset: 0x19F0B30
    void Update();
    // private System.Boolean IsEmulationActivated()
    // Offset: 0x19F0F18
    bool IsEmulationActivated();
    // private System.Boolean IsTweakingPitch()
    // Offset: 0x19F1234
    bool IsTweakingPitch();
  }; // OVRHeadsetEmulator
  #pragma pack(pop)
  static check_size<sizeof(OVRHeadsetEmulator), 88 + sizeof(::UnityEngine::CursorLockMode)> __GlobalNamespace_OVRHeadsetEmulatorSizeCheck;
  static_assert(sizeof(OVRHeadsetEmulator) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator::OpMode, "", "OVRHeadsetEmulator/OpMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHeadsetEmulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHeadsetEmulator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHeadsetEmulator::*)()>(&GlobalNamespace::OVRHeadsetEmulator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHeadsetEmulator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHeadsetEmulator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHeadsetEmulator::*)()>(&GlobalNamespace::OVRHeadsetEmulator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHeadsetEmulator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated
// Il2CppName: IsEmulationActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHeadsetEmulator::*)()>(&GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHeadsetEmulator*), "IsEmulationActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch
// Il2CppName: IsTweakingPitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHeadsetEmulator::*)()>(&GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHeadsetEmulator*), "IsTweakingPitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
