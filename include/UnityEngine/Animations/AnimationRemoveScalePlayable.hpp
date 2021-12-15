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
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationRemoveScalePlayable
  struct AnimationRemoveScalePlayable;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationRemoveScalePlayable, "UnityEngine.Animations", "AnimationRemoveScalePlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationRemoveScalePlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: ECE8B4
  // [StaticAccessorAttribute] Offset: ECE8B4
  // [NativeHeaderAttribute] Offset: ECE8B4
  // [NativeHeaderAttribute] Offset: ECE8B4
  // [NativeHeaderAttribute] Offset: ECE8B4
  struct AnimationRemoveScalePlayable/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>, public UnityEngine::Playables::IPlayable*/ {
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
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationRemoveScalePlayable
    constexpr AnimationRemoveScalePlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationRemoveScalePlayable m_NullPlayable
    static UnityEngine::Animations::AnimationRemoveScalePlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationRemoveScalePlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationRemoveScalePlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2636ABC
    // ABORTED: conflicts with another method.  AnimationRemoveScalePlayable(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x2636D60
    static void _cctor();
    // static public UnityEngine.Animations.AnimationRemoveScalePlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x263691C
    static UnityEngine::Animations::AnimationRemoveScalePlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x26369C4
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x2636C10
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationRemoveScalePlayable other)
    // Offset: 0x2636C50
    bool Equals(UnityEngine::Animations::AnimationRemoveScalePlayable other);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2636B74
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, ByRef<UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2636D10
    static bool CreateHandleInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> graph, ByRef<UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Animations.AnimationRemoveScalePlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationRemoveScalePlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationRemoveScalePlayableSizeCheck;
  static_assert(sizeof(AnimationRemoveScalePlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::AnimationRemoveScalePlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationRemoveScalePlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animations::AnimationRemoveScalePlayable (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationRemoveScalePlayable::*)()>(&UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationRemoveScalePlayable::*)(UnityEngine::Animations::AnimationRemoveScalePlayable)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationRemoveScalePlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
