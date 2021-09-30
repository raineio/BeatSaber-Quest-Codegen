// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E8BE20
  // [RequiredByNativeCodeAttribute] Offset: E8BE20
  // [StaticAccessorAttribute] Offset: E8BE20
  struct AnimationMotionXToDeltaPlayable/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Animations::AnimationMotionXToDeltaPlayable>, public UnityEngine::Playables::IPlayable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationMotionXToDeltaPlayable
    constexpr AnimationMotionXToDeltaPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimationMotionXToDeltaPlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimationMotionXToDeltaPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationMotionXToDeltaPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // private System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x258F544
    // ABORTED: conflicts with another method.  AnimationMotionXToDeltaPlayable(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x258F894
    static void _cctor();
    // static public UnityEngine.Animations.AnimationMotionXToDeltaPlayable Create(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0x258F3B0
    static UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(UnityEngine::Playables::PlayableGraph graph);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0x258F450
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x258F698
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable other)
    // Offset: 0x258F6D8
    bool Equals(UnityEngine::Animations::AnimationMotionXToDeltaPlayable other);
    // public System.Void SetAbsoluteMotion(System.Boolean value)
    // Offset: 0x258F760
    void SetAbsoluteMotion(bool value);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x258F5FC
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, ByRef<UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Void SetAbsoluteMotionInternal(ref UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x258F7F4
    static void SetAbsoluteMotionInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value);
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x258F844
    static bool CreateHandleInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> graph, ByRef<UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Animations.AnimationMotionXToDeltaPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationMotionXToDeltaPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationMotionXToDeltaPlayableSizeCheck;
  static_assert(sizeof(AnimationMotionXToDeltaPlayable) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::AnimationMotionXToDeltaPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animations::AnimationMotionXToDeltaPlayable (*)(UnityEngine::Playables::PlayableGraph)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (*)(UnityEngine::Playables::PlayableGraph)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)()>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)(UnityEngine::Animations::AnimationMotionXToDeltaPlayable)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationMotionXToDeltaPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::SetAbsoluteMotion
// Il2CppName: SetAbsoluteMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)(bool)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::SetAbsoluteMotion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "SetAbsoluteMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal
// Il2CppName: SetAbsoluteMotionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableHandle>, bool)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "SetAbsoluteMotionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
