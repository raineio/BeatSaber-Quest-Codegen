// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTrigger::Range);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTrigger::Range*, "RootMotion.FinalIK", "InteractionTrigger/Range");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionTrigger::Range : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::InteractionTrigger::Range::Interaction
    class Interaction;
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean show
    // Size: 0x1
    // Offset: 0x18
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: show and: characterPosition
    char __padding1[0x7] = {};
    // [TooltipAttribute] Offset: 0x114A1F4
    // public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CharacterPosition characterPosition
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::InteractionTrigger::CharacterPosition* characterPosition;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionTrigger::CharacterPosition*) == 0x8);
    // [TooltipAttribute] Offset: 0x114A22C
    // public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CameraPosition cameraPosition
    // Size: 0x8
    // Offset: 0x28
    ::RootMotion::FinalIK::InteractionTrigger::CameraPosition* cameraPosition;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionTrigger::CameraPosition*) == 0x8);
    // [TooltipAttribute] Offset: 0x114A264
    // public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range/RootMotion.FinalIK.Interaction[] interactions
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::RootMotion::FinalIK::InteractionTrigger::Range::Interaction*> interactions;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::InteractionTrigger::Range::Interaction*>) == 0x8);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Boolean show
    [[deprecated("Use field access instead!")]] bool& dyn_show();
    // Get instance field reference: public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CharacterPosition characterPosition
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionTrigger::CharacterPosition*& dyn_characterPosition();
    // Get instance field reference: public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CameraPosition cameraPosition
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionTrigger::CameraPosition*& dyn_cameraPosition();
    // Get instance field reference: public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range/RootMotion.FinalIK.Interaction[] interactions
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::InteractionTrigger::Range::Interaction*>& dyn_interactions();
    // public System.Void .ctor()
    // Offset: 0x205C470
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger::Range* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionTrigger::Range::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger::Range*, creationType>()));
    }
    // public System.Boolean IsInRange(UnityEngine.Transform character, UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit raycastHit, UnityEngine.Transform trigger, out System.Single maxError)
    // Offset: 0x205B614
    bool IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit, ::UnityEngine::Transform* trigger, ByRef<float> maxError);
  }; // RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger::Range), 48 + sizeof(::ArrayW<::RootMotion::FinalIK::InteractionTrigger::Range::Interaction*>)> __RootMotion_FinalIK_InteractionTrigger_RangeSizeCheck;
  static_assert(sizeof(InteractionTrigger::Range) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::Range::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::Range::IsInRange
// Il2CppName: IsInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionTrigger::Range::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit, ::UnityEngine::Transform*, ByRef<float>)>(&RootMotion::FinalIK::InteractionTrigger::Range::IsInRange)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* raycastFrom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* raycastHit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::Range*), "IsInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, raycastFrom, raycastHit, trigger, maxError});
  }
};
