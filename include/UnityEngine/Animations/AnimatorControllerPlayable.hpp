// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimatorControllerPlayable
  // [RequiredByNativeCodeAttribute] Offset: DA9CF0
  // [NativeHeaderAttribute] Offset: DA9CF0
  // [NativeHeaderAttribute] Offset: DA9CF0
  // [StaticAccessorAttribute] Offset: DA9CF0
  // [NativeHeaderAttribute] Offset: DA9CF0
  // [NativeHeaderAttribute] Offset: DA9CF0
  // [NativeHeaderAttribute] Offset: DA9CF0
  struct AnimatorControllerPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AnimatorControllerPlayable
    constexpr AnimatorControllerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimatorControllerPlayable m_NullPlayable
    static UnityEngine::Animations::AnimatorControllerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimatorControllerPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimatorControllerPlayable value);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xF2198C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AnimatorControllerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xF21994
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Void SetHandle(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xF219A0
    void SetHandle(UnityEngine::Playables::PlayableHandle handle);
    // public System.Boolean Equals(UnityEngine.Animations.AnimatorControllerPlayable other)
    // Offset: 0xF219A8
    bool Equals(UnityEngine::Animations::AnimatorControllerPlayable other);
    // static private System.Void .cctor()
    // Offset: 0x235618C
    static void _cctor();
  }; // UnityEngine.Animations.AnimatorControllerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimatorControllerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimatorControllerPlayableSizeCheck;
  static_assert(sizeof(AnimatorControllerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorControllerPlayable::AnimatorControllerPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorControllerPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimatorControllerPlayable::*)()>(&UnityEngine::Animations::AnimatorControllerPlayable::GetHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorControllerPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorControllerPlayable::SetHandle
// Il2CppName: SetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimatorControllerPlayable::*)(UnityEngine::Playables::PlayableHandle)>(&UnityEngine::Animations::AnimatorControllerPlayable::SetHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorControllerPlayable), "SetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::PlayableHandle>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorControllerPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimatorControllerPlayable::*)(UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::Animations::AnimatorControllerPlayable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorControllerPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorControllerPlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimatorControllerPlayable::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorControllerPlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
