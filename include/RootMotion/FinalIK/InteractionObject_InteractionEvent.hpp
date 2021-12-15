// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionEvent
  class InteractionEvent;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::InteractionObject::InteractionEvent);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::InteractionEvent*, "RootMotion.FinalIK", "InteractionObject/InteractionEvent");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.InteractionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionObject::InteractionEvent : public ::Il2CppObject {
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
    // [TooltipAttribute] Offset: 0xF6193C
    // public System.Single time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF61974
    // public System.Boolean pause
    // Size: 0x1
    // Offset: 0x14
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xF619AC
    // public System.Boolean pickUp
    // Size: 0x1
    // Offset: 0x15
    bool pickUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pickUp and: animations
    char __padding2[0x2] = {};
    // [TooltipAttribute] Offset: 0xF619E4
    // public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.AnimatorEvent[] animations
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<RootMotion::FinalIK::InteractionObject::AnimatorEvent*> animations;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::InteractionObject::AnimatorEvent*>) == 0x8);
    // [TooltipAttribute] Offset: 0xF61A1C
    // public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Message[] messages
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<RootMotion::FinalIK::InteractionObject::Message*> messages;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::InteractionObject::Message*>) == 0x8);
    // [TooltipAttribute] Offset: 0xF61A54
    // public UnityEngine.Events.UnityEvent unityEvent
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Events::UnityEvent* unityEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Get instance field reference: public System.Single time
    float& dyn_time();
    // Get instance field reference: public System.Boolean pause
    bool& dyn_pause();
    // Get instance field reference: public System.Boolean pickUp
    bool& dyn_pickUp();
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.AnimatorEvent[] animations
    ::ArrayW<RootMotion::FinalIK::InteractionObject::AnimatorEvent*>& dyn_animations();
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Message[] messages
    ::ArrayW<RootMotion::FinalIK::InteractionObject::Message*>& dyn_messages();
    // Get instance field reference: public UnityEngine.Events.UnityEvent unityEvent
    UnityEngine::Events::UnityEvent*& dyn_unityEvent();
    // public System.Void Activate(UnityEngine.Transform t)
    // Offset: 0x1FF0724
    void Activate(UnityEngine::Transform* t);
    // public System.Void .ctor()
    // Offset: 0x1FF2778
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::InteractionEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionObject::InteractionEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::InteractionEvent*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.InteractionEvent
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::InteractionEvent), 40 + sizeof(UnityEngine::Events::UnityEvent*)> __RootMotion_FinalIK_InteractionObject_InteractionEventSizeCheck;
  static_assert(sizeof(InteractionObject::InteractionEvent) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::InteractionEvent::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionObject::InteractionEvent::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::InteractionObject::InteractionEvent::Activate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::InteractionEvent*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::InteractionEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
