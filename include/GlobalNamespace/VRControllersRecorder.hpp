// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Skipping declaration: Mode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRControllersRecorder
  class VRControllersRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorder*, "", "VRControllersRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorder : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::VRControllersRecorder::TypeSerializationBinder
    class TypeSerializationBinder;
    // Nested type: ::GlobalNamespace::VRControllersRecorder::SavedData
    class SavedData;
    // Nested type: ::GlobalNamespace::VRControllersRecorder::Mode
    struct Mode;
    // Nested type: ::GlobalNamespace::VRControllersRecorder::Keyframe
    class Keyframe;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VRControllersRecorder/Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public VRControllersRecorder/Mode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRControllersRecorder/Mode Record
      static ::GlobalNamespace::VRControllersRecorder::Mode _get_Record();
      // Set static field: static public VRControllersRecorder/Mode Record
      static void _set_Record(::GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRControllersRecorder/Mode Playback
      static ::GlobalNamespace::VRControllersRecorder::Mode _get_Playback();
      // Set static field: static public VRControllersRecorder/Mode Playback
      static void _set_Playback(::GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRControllersRecorder/Mode Off
      static ::GlobalNamespace::VRControllersRecorder::Mode _get_Off();
      // Set static field: static public VRControllersRecorder/Mode Off
      static void _set_Off(::GlobalNamespace::VRControllersRecorder::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // VRControllersRecorder/Mode
    #pragma pack(pop)
    static check_size<sizeof(VRControllersRecorder::Mode), 0 + sizeof(int)> __GlobalNamespace_VRControllersRecorder_ModeSizeCheck;
    static_assert(sizeof(VRControllersRecorder::Mode) == 0x4);
    public:
    // [NullAllowed] Offset: 0x112EB4C
    // private UnityEngine.TextAsset _recordingTextAsset
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextAsset* recordingTextAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private System.String _recordingFileName
    // Size: 0x8
    // Offset: 0x20
    ::StringW recordingFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VRControllersRecorder/Mode _mode
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::VRControllersRecorder::Mode mode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRControllersRecorder::Mode) == 0x4);
    // [SpaceAttribute] Offset: 0x112EBA4
    // private System.Boolean _dontMoveHead
    // Size: 0x1
    // Offset: 0x2C
    bool dontMoveHead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _changeToNonVRCamera
    // Size: 0x1
    // Offset: 0x2D
    bool changeToNonVRCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _adjustSabersPositionBasedOnHeadPosition
    // Size: 0x1
    // Offset: 0x2E
    bool adjustSabersPositionBasedOnHeadPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: adjustSabersPositionBasedOnHeadPosition and: headRotationOffset
    char __padding5[0x1] = {};
    // private UnityEngine.Vector3 _headRotationOffset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 headRotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _headPositionOffset
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 headPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _headSmooth
    // Size: 0x4
    // Offset: 0x48
    float headSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cameraFOV
    // Size: 0x4
    // Offset: 0x4C
    float cameraFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _controllersTimeOffset
    // Size: 0x4
    // Offset: 0x50
    float controllersTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _controllersSmooth
    // Size: 0x4
    // Offset: 0x54
    float controllersSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x112EC5C
    // private VRController _controller0
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::VRController* controller0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private VRController _controller1
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::VRController* controller1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // [SpaceAttribute] Offset: 0x112ECC4
    // private UnityEngine.Camera _recorderCamera
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Camera* recorderCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform _spawnRotationTransform
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Transform* spawnRotationTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0x112ED0C
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0x112ED44
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.List`1<VRControllersRecorder/Keyframe> _keyframes
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::List_1<::GlobalNamespace::VRControllersRecorder::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRControllersRecorder::Keyframe*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0xA0
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.TextAsset _recordingTextAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn__recordingTextAsset();
    // Get instance field reference: private System.String _recordingFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__recordingFileName();
    // Get instance field reference: private VRControllersRecorder/Mode _mode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRControllersRecorder::Mode& dyn__mode();
    // Get instance field reference: private System.Boolean _dontMoveHead
    [[deprecated("Use field access instead!")]] bool& dyn__dontMoveHead();
    // Get instance field reference: private System.Boolean _changeToNonVRCamera
    [[deprecated("Use field access instead!")]] bool& dyn__changeToNonVRCamera();
    // Get instance field reference: private System.Boolean _adjustSabersPositionBasedOnHeadPosition
    [[deprecated("Use field access instead!")]] bool& dyn__adjustSabersPositionBasedOnHeadPosition();
    // Get instance field reference: private UnityEngine.Vector3 _headRotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__headRotationOffset();
    // Get instance field reference: private UnityEngine.Vector3 _headPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__headPositionOffset();
    // Get instance field reference: private System.Single _headSmooth
    [[deprecated("Use field access instead!")]] float& dyn__headSmooth();
    // Get instance field reference: private System.Single _cameraFOV
    [[deprecated("Use field access instead!")]] float& dyn__cameraFOV();
    // Get instance field reference: private System.Single _controllersTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__controllersTimeOffset();
    // Get instance field reference: private System.Single _controllersSmooth
    [[deprecated("Use field access instead!")]] float& dyn__controllersSmooth();
    // Get instance field reference: private VRController _controller0
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__controller0();
    // Get instance field reference: private VRController _controller1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__controller1();
    // Get instance field reference: private UnityEngine.Transform _headTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__headTransform();
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private UnityEngine.Camera _recorderCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__recorderCamera();
    // Get instance field reference: private UnityEngine.Transform _spawnRotationTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__spawnRotationTransform();
    // Get instance field reference: private UnityEngine.Transform _originTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__originTransform();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Collections.Generic.List`1<VRControllersRecorder/Keyframe> _keyframes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::VRControllersRecorder::Keyframe*>*& dyn__keyframes();
    // Get instance field reference: private System.Int32 _keyframeIndex
    [[deprecated("Use field access instead!")]] int& dyn__keyframeIndex();
    // public VRControllersRecorder/Mode get_mode()
    // Offset: 0x1658108
    ::GlobalNamespace::VRControllersRecorder::Mode get_mode();
    // public System.Void set_mode(VRControllersRecorder/Mode value)
    // Offset: 0x1658100
    void set_mode(::GlobalNamespace::VRControllersRecorder::Mode value);
    // public UnityEngine.TextAsset get_recordingTextAsset()
    // Offset: 0x1658118
    ::UnityEngine::TextAsset* get_recordingTextAsset();
    // public System.Void set_recordingTextAsset(UnityEngine.TextAsset value)
    // Offset: 0x1658110
    void set_recordingTextAsset(::UnityEngine::TextAsset* value);
    // public System.String get_recordingFileName()
    // Offset: 0x1658128
    ::StringW get_recordingFileName();
    // public System.Void set_recordingFileName(System.String value)
    // Offset: 0x1658120
    void set_recordingFileName(::StringW value);
    // public System.Boolean get_changeToNonVRCamera()
    // Offset: 0x165813C
    bool get_changeToNonVRCamera();
    // public System.Void set_changeToNonVRCamera(System.Boolean value)
    // Offset: 0x1658130
    void set_changeToNonVRCamera(bool value);
    // public System.Void .ctor()
    // Offset: 0x165A6F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorder*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1658144
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1658A3C
    void OnDestroy();
    // public System.Void SetDefaultSettings()
    // Offset: 0x1658D40
    void SetDefaultSettings();
    // public System.Void SetInGamePlaybackDefaultSettings()
    // Offset: 0x1658DD8
    void SetInGamePlaybackDefaultSettings();
    // private System.Void PlaybackTick()
    // Offset: 0x1658E74
    void PlaybackTick();
    // private System.Void SetPositionAndRotation(UnityEngine.Transform transf, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion targetRot, System.Single t)
    // Offset: 0x165974C
    void SetPositionAndRotation(::UnityEngine::Transform* transf, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, float t);
    // private System.Void RecordTick()
    // Offset: 0x16598C8
    void RecordTick();
    // protected System.Void Update()
    // Offset: 0x1659B14
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x1659B9C
    void LateUpdate();
    // private System.Void Save()
    // Offset: 0x1658A4C
    void Save();
    // private System.Void Load()
    // Offset: 0x1658504
    void Load();
    // static public UnityEngine.AnimationClip CreateAnimationClipFromRecording(System.String recordingfilePath)
    // Offset: 0x1659BC4
    static ::UnityEngine::AnimationClip* CreateAnimationClipFromRecording(::StringW recordingfilePath);
  }; // VRControllersRecorder
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorder), 160 + sizeof(int)> __GlobalNamespace_VRControllersRecorderSizeCheck;
  static_assert(sizeof(VRControllersRecorder) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorder::Mode, "", "VRControllersRecorder/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::get_mode
// Il2CppName: get_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRControllersRecorder::Mode (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::get_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::set_mode
// Il2CppName: set_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)(::GlobalNamespace::VRControllersRecorder::Mode)>(&GlobalNamespace::VRControllersRecorder::set_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "VRControllersRecorder/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "set_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::get_recordingTextAsset
// Il2CppName: get_recordingTextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::get_recordingTextAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "get_recordingTextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::set_recordingTextAsset
// Il2CppName: set_recordingTextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)(::UnityEngine::TextAsset*)>(&GlobalNamespace::VRControllersRecorder::set_recordingTextAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "set_recordingTextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::get_recordingFileName
// Il2CppName: get_recordingFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::get_recordingFileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "get_recordingFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::set_recordingFileName
// Il2CppName: set_recordingFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)(::StringW)>(&GlobalNamespace::VRControllersRecorder::set_recordingFileName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "set_recordingFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::get_changeToNonVRCamera
// Il2CppName: get_changeToNonVRCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::get_changeToNonVRCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "get_changeToNonVRCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::set_changeToNonVRCamera
// Il2CppName: set_changeToNonVRCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)(bool)>(&GlobalNamespace::VRControllersRecorder::set_changeToNonVRCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "set_changeToNonVRCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::SetDefaultSettings
// Il2CppName: SetDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::SetDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "SetDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::SetInGamePlaybackDefaultSettings
// Il2CppName: SetInGamePlaybackDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::SetInGamePlaybackDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "SetInGamePlaybackDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::PlaybackTick
// Il2CppName: PlaybackTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::PlaybackTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "PlaybackTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float)>(&GlobalNamespace::VRControllersRecorder::SetPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* transf = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* targetPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transf, targetPos, targetRot, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::RecordTick
// Il2CppName: RecordTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::RecordTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "RecordTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorder::*)()>(&GlobalNamespace::VRControllersRecorder::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorder::CreateAnimationClipFromRecording
// Il2CppName: CreateAnimationClipFromRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (*)(::StringW)>(&GlobalNamespace::VRControllersRecorder::CreateAnimationClipFromRecording)> {
  static const MethodInfo* get() {
    static auto* recordingfilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorder*), "CreateAnimationClipFromRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingfilePath});
  }
};
