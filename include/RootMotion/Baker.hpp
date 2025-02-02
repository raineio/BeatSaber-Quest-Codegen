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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Baker
  class Baker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::Baker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Baker*, "RootMotion", "Baker");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Baker
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 1143CEC
  // [AddComponentMenu] Offset: 1143CEC
  class Baker : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::Baker::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.Baker/RootMotion.Mode
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
      // static field const value: static public RootMotion.Baker/RootMotion.Mode AnimationClips
      static constexpr const int AnimationClips = 0;
      // Get static field: static public RootMotion.Baker/RootMotion.Mode AnimationClips
      static ::RootMotion::Baker::Mode _get_AnimationClips();
      // Set static field: static public RootMotion.Baker/RootMotion.Mode AnimationClips
      static void _set_AnimationClips(::RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/RootMotion.Mode AnimationStates
      static constexpr const int AnimationStates = 1;
      // Get static field: static public RootMotion.Baker/RootMotion.Mode AnimationStates
      static ::RootMotion::Baker::Mode _get_AnimationStates();
      // Set static field: static public RootMotion.Baker/RootMotion.Mode AnimationStates
      static void _set_AnimationStates(::RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/RootMotion.Mode PlayableDirector
      static constexpr const int PlayableDirector = 2;
      // Get static field: static public RootMotion.Baker/RootMotion.Mode PlayableDirector
      static ::RootMotion::Baker::Mode _get_PlayableDirector();
      // Set static field: static public RootMotion.Baker/RootMotion.Mode PlayableDirector
      static void _set_PlayableDirector(::RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/RootMotion.Mode Realtime
      static constexpr const int Realtime = 3;
      // Get static field: static public RootMotion.Baker/RootMotion.Mode Realtime
      static ::RootMotion::Baker::Mode _get_Realtime();
      // Set static field: static public RootMotion.Baker/RootMotion.Mode Realtime
      static void _set_Realtime(::RootMotion::Baker::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // RootMotion.Baker/RootMotion.Mode
    #pragma pack(pop)
    static check_size<sizeof(Baker::Mode), 0 + sizeof(int)> __RootMotion_Baker_ModeSizeCheck;
    static_assert(sizeof(Baker::Mode) == 0x4);
    public:
    // [TooltipAttribute] Offset: 0x1144758
    // [RangeAttribute] Offset: 0x1144758
    // public System.Int32 frameRate
    // Size: 0x4
    // Offset: 0x18
    int frameRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0x11447B0
    // [RangeAttribute] Offset: 0x11447B0
    // public System.Single keyReductionError
    // Size: 0x4
    // Offset: 0x1C
    float keyReductionError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1144808
    // public RootMotion.Baker/RootMotion.Mode mode
    // Size: 0x4
    // Offset: 0x20
    ::RootMotion::Baker::Mode mode;
    // Field size check
    static_assert(sizeof(::RootMotion::Baker::Mode) == 0x4);
    // Padding between fields: mode and: animationClips
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0x1144840
    // public UnityEngine.AnimationClip[] animationClips
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AnimationClip*> animationClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AnimationClip*>) == 0x8);
    // [TooltipAttribute] Offset: 0x1144878
    // public System.String[] animationStates
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> animationStates;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // [TooltipAttribute] Offset: 0x11448B0
    // public System.Boolean loop
    // Size: 0x1
    // Offset: 0x38
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: saveToFolder
    char __padding5[0x7] = {};
    // [TooltipAttribute] Offset: 0x11448E8
    // public System.String saveToFolder
    // Size: 0x8
    // Offset: 0x40
    ::StringW saveToFolder;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x1144920
    // public System.String appendName
    // Size: 0x8
    // Offset: 0x48
    ::StringW appendName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x1144958
    // public System.String saveName
    // Size: 0x8
    // Offset: 0x50
    ::StringW saveName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <isBaking>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    bool isBaking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isBaking and: bakingProgress
    char __padding9[0x3] = {};
    // private System.Single <bakingProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float bakingProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // public UnityEngine.Playables.PlayableDirector director
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Playables::PlayableDirector* director;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.Single <clipLength>k__BackingField
    // Size: 0x4
    // Offset: 0x70
    float clipLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 frameRate
    [[deprecated("Use field access instead!")]] int& dyn_frameRate();
    // Get instance field reference: public System.Single keyReductionError
    [[deprecated("Use field access instead!")]] float& dyn_keyReductionError();
    // Get instance field reference: public RootMotion.Baker/RootMotion.Mode mode
    [[deprecated("Use field access instead!")]] ::RootMotion::Baker::Mode& dyn_mode();
    // Get instance field reference: public UnityEngine.AnimationClip[] animationClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AnimationClip*>& dyn_animationClips();
    // Get instance field reference: public System.String[] animationStates
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_animationStates();
    // Get instance field reference: public System.Boolean loop
    [[deprecated("Use field access instead!")]] bool& dyn_loop();
    // Get instance field reference: public System.String saveToFolder
    [[deprecated("Use field access instead!")]] ::StringW& dyn_saveToFolder();
    // Get instance field reference: public System.String appendName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_appendName();
    // Get instance field reference: public System.String saveName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_saveName();
    // Get instance field reference: private System.Boolean <isBaking>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isBaking$k__BackingField();
    // Get instance field reference: private System.Single <bakingProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$bakingProgress$k__BackingField();
    // Get instance field reference: public UnityEngine.Animator animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: public UnityEngine.Playables.PlayableDirector director
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn_director();
    // Get instance field reference: private System.Single <clipLength>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$clipLength$k__BackingField();
    // public System.Boolean get_isBaking()
    // Offset: 0x22EBDD4
    bool get_isBaking();
    // private System.Void set_isBaking(System.Boolean value)
    // Offset: 0x22EBDDC
    void set_isBaking(bool value);
    // public System.Single get_bakingProgress()
    // Offset: 0x22EBDE8
    float get_bakingProgress();
    // private System.Void set_bakingProgress(System.Single value)
    // Offset: 0x22EBDF0
    void set_bakingProgress(float value);
    // protected System.Single get_clipLength()
    // Offset: 0x22EBDF8
    float get_clipLength();
    // private System.Void set_clipLength(System.Single value)
    // Offset: 0x22EBE00
    void set_clipLength(float value);
    // protected System.Void .ctor()
    // Offset: 0x22EBE14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Baker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::Baker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Baker*, creationType>()));
    }
    // private System.Void OpenUserManual()
    // Offset: 0x22EBCA4
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x22EBCF0
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x22EBD3C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x22EBD88
    void ASThread();
    // protected UnityEngine.Transform GetCharacterRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* GetCharacterRoot();
    // protected System.Void OnStartBaking()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStartBaking();
    // protected System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSetLoopFrame(float time);
    // protected System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip);
    // protected System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSetKeyframes(float time, bool lastFrame);
    // public System.Void BakeClip()
    // Offset: 0x22EBE08
    void BakeClip();
    // public System.Void StartBaking()
    // Offset: 0x22EBE0C
    void StartBaking();
    // public System.Void StopBaking()
    // Offset: 0x22EBE10
    void StopBaking();
  }; // RootMotion.Baker
  #pragma pack(pop)
  static check_size<sizeof(Baker), 112 + sizeof(float)> __RootMotion_BakerSizeCheck;
  static_assert(sizeof(Baker) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Baker::Mode, "RootMotion", "Baker/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Baker::get_isBaking
// Il2CppName: get_isBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::Baker::*)()>(&RootMotion::Baker::get_isBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "get_isBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::set_isBaking
// Il2CppName: set_isBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(bool)>(&RootMotion::Baker::set_isBaking)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "set_isBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::get_bakingProgress
// Il2CppName: get_bakingProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::Baker::*)()>(&RootMotion::Baker::get_bakingProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "get_bakingProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::set_bakingProgress
// Il2CppName: set_bakingProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(float)>(&RootMotion::Baker::set_bakingProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "set_bakingProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::get_clipLength
// Il2CppName: get_clipLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::Baker::*)()>(&RootMotion::Baker::get_clipLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "get_clipLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::set_clipLength
// Il2CppName: set_clipLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(float)>(&RootMotion::Baker::set_clipLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "set_clipLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::Baker::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::GetCharacterRoot
// Il2CppName: GetCharacterRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (RootMotion::Baker::*)()>(&RootMotion::Baker::GetCharacterRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "GetCharacterRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::OnStartBaking
// Il2CppName: OnStartBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::OnStartBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OnStartBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::OnSetLoopFrame
// Il2CppName: OnSetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(float)>(&RootMotion::Baker::OnSetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OnSetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::OnSetCurves
// Il2CppName: OnSetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(ByRef<::UnityEngine::AnimationClip*>)>(&RootMotion::Baker::OnSetCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OnSetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::OnSetKeyframes
// Il2CppName: OnSetKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)(float, bool)>(&RootMotion::Baker::OnSetKeyframes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lastFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "OnSetKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, lastFrame});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::BakeClip
// Il2CppName: BakeClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::BakeClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "BakeClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::StartBaking
// Il2CppName: StartBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::StartBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "StartBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Baker::StopBaking
// Il2CppName: StopBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Baker::*)()>(&RootMotion::Baker::StopBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Baker*), "StopBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
