// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioClipPlayable
  struct AudioClipPlayable;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Audio.AudioClipPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EE1444
  // [StaticAccessorAttribute] Offset: EE1444
  // [NativeHeaderAttribute] Offset: EE1444
  // [NativeHeaderAttribute] Offset: EE1444
  // [RequiredByNativeCodeAttribute] Offset: EE1444
  struct AudioClipPlayable/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>, public UnityEngine::Playables::IPlayable*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AudioClipPlayable
    constexpr AudioClipPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>
    operator System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x26AFA84
    // ABORTED: conflicts with another method.  AudioClipPlayable(UnityEngine::Playables::PlayableHandle handle);
    // static public UnityEngine.Audio.AudioClipPlayable Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AudioClip clip, System.Boolean looping)
    // Offset: 0x26AF874
    static UnityEngine::Audio::AudioClipPlayable Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AudioClip* clip, bool looping);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AudioClip clip, System.Boolean looping)
    // Offset: 0x26AF99C
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AudioClip* clip, bool looping);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x26AFBE4
    UnityEngine::Playables::PlayableHandle GetHandle();
    // static public UnityEngine.Audio.AudioClipPlayable op_Explicit(UnityEngine.Playables.Playable playable)
    // Offset: 0x26AFC24
    explicit AudioClipPlayable(UnityEngine::Playables::Playable& playable);
    // public System.Boolean Equals(UnityEngine.Audio.AudioClipPlayable other)
    // Offset: 0x26AFC6C
    bool Equals(UnityEngine::Audio::AudioClipPlayable other);
    // System.Void SetVolume(System.Single value)
    // Offset: 0x26AFCF4
    void SetVolume(float value);
    // System.Void SetStereoPan(System.Single value)
    // Offset: 0x26AFE3C
    void SetStereoPan(float value);
    // System.Void SetSpatialBlend(System.Single value)
    // Offset: 0x26AFF88
    void SetSpatialBlend(float value);
    // public System.Void Seek(System.Double startTime, System.Double startDelay, System.Double duration)
    // Offset: 0x26B00D0
    void Seek(double startTime, double startDelay, double duration);
    // static private System.Void SetVolumeInternal(ref UnityEngine.Playables.PlayableHandle hdl, System.Single volume)
    // Offset: 0x26AFDEC
    static void SetVolumeInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float volume);
    // static private System.Void SetStereoPanInternal(ref UnityEngine.Playables.PlayableHandle hdl, System.Single stereoPan)
    // Offset: 0x26AFF38
    static void SetStereoPanInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float stereoPan);
    // static private System.Void SetSpatialBlendInternal(ref UnityEngine.Playables.PlayableHandle hdl, System.Single spatialBlend)
    // Offset: 0x26B0080
    static void SetSpatialBlendInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float spatialBlend);
    // static private System.Void SetStartDelayInternal(ref UnityEngine.Playables.PlayableHandle hdl, System.Double delay)
    // Offset: 0x26B01D4
    static void SetStartDelayInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, double delay);
    // static private System.Void SetPauseDelayInternal(ref UnityEngine.Playables.PlayableHandle hdl, System.Double delay)
    // Offset: 0x26B0224
    static void SetPauseDelayInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, double delay);
    // static private System.Boolean InternalCreateAudioClipPlayable(ref UnityEngine.Playables.PlayableGraph graph, UnityEngine.AudioClip clip, System.Boolean looping, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x26AFB7C
    static bool InternalCreateAudioClipPlayable(ByRef<UnityEngine::Playables::PlayableGraph> graph, UnityEngine::AudioClip* clip, bool looping, ByRef<UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Audio.AudioClipPlayable
  #pragma pack(pop)
  static check_size<sizeof(AudioClipPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Audio_AudioClipPlayableSizeCheck;
  static_assert(sizeof(AudioClipPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Audio::AudioClipPlayable (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::AudioClip*, bool)>(&UnityEngine::Audio::AudioClipPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* looping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip, looping});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::AudioClip*, bool)>(&UnityEngine::Audio::AudioClipPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* looping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip, looping});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Audio::AudioClipPlayable::*)()>(&UnityEngine::Audio::AudioClipPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioClipPlayable::*)(UnityEngine::Audio::AudioClipPlayable)>(&UnityEngine::Audio::AudioClipPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioClipPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetVolume
// Il2CppName: SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioClipPlayable::*)(float)>(&UnityEngine::Audio::AudioClipPlayable::SetVolume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetStereoPan
// Il2CppName: SetStereoPan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioClipPlayable::*)(float)>(&UnityEngine::Audio::AudioClipPlayable::SetStereoPan)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetStereoPan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend
// Il2CppName: SetSpatialBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioClipPlayable::*)(float)>(&UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetSpatialBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioClipPlayable::*)(double, double, double)>(&UnityEngine::Audio::AudioClipPlayable::Seek)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* startDelay = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime, startDelay, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal
// Il2CppName: SetVolumeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, float)>(&UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal)> {
  static const MethodInfo* get() {
    static auto* hdl = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetVolumeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hdl, volume});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal
// Il2CppName: SetStereoPanInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, float)>(&UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal)> {
  static const MethodInfo* get() {
    static auto* hdl = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* stereoPan = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetStereoPanInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hdl, stereoPan});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal
// Il2CppName: SetSpatialBlendInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, float)>(&UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal)> {
  static const MethodInfo* get() {
    static auto* hdl = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* spatialBlend = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetSpatialBlendInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hdl, spatialBlend});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal
// Il2CppName: SetStartDelayInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, double)>(&UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal)> {
  static const MethodInfo* get() {
    static auto* hdl = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetStartDelayInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hdl, delay});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal
// Il2CppName: SetPauseDelayInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, double)>(&UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal)> {
  static const MethodInfo* get() {
    static auto* hdl = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "SetPauseDelayInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hdl, delay});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable
// Il2CppName: InternalCreateAudioClipPlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, UnityEngine::AudioClip*, bool, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* looping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioClipPlayable), "InternalCreateAudioClipPlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip, looping, handle});
  }
};
