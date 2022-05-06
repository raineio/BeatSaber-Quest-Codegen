// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.ITimelineEvaluateCallback
#include "UnityEngine/Timeline/ITimelineEvaluateCallback.hpp"
// Including type: UnityEngine.Animations.AnimationPlayableOutput
#include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
// Including type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
#include "UnityEngine/Animations/AnimationMotionXToDeltaPlayable.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AnimationOutputWeightProcessor
  class AnimationOutputWeightProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor*, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationOutputWeightProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimationOutputWeightProcessor : public ::Il2CppObject/*, public ::UnityEngine::Timeline::ITimelineEvaluateCallback*/ {
    public:
    // Nested type: ::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo
    struct WeightInfo;
    // Size: 0x24
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Timeline.AnimationOutputWeightProcessor/UnityEngine.Timeline.WeightInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct WeightInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Playables.Playable mixer
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Playables::Playable mixer;
      // Field size check
      static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
      // Padding between fields: mixer and: parentMixer
      char __padding0[0x4] = {};
      // public UnityEngine.Playables.Playable parentMixer
      // Size: 0xC
      // Offset: 0x10
      ::UnityEngine::Playables::Playable parentMixer;
      // Field size check
      static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
      // Padding between fields: parentMixer and: port
      char __padding1[0x4] = {};
      // public System.Int32 port
      // Size: 0x4
      // Offset: 0x20
      int port;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: WeightInfo
      constexpr WeightInfo(::UnityEngine::Playables::Playable mixer_ = {}, ::UnityEngine::Playables::Playable parentMixer_ = {}, int port_ = {}) noexcept : mixer{mixer_}, parentMixer{parentMixer_}, port{port_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Playables.Playable mixer
      [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::Playable& dyn_mixer();
      // Get instance field reference: public UnityEngine.Playables.Playable parentMixer
      [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::Playable& dyn_parentMixer();
      // Get instance field reference: public System.Int32 port
      [[deprecated("Use field access instead!")]] int& dyn_port();
    }; // UnityEngine.Timeline.AnimationOutputWeightProcessor/UnityEngine.Timeline.WeightInfo
    #pragma pack(pop)
    static check_size<sizeof(AnimationOutputWeightProcessor::WeightInfo), 32 + sizeof(int)> __UnityEngine_Timeline_AnimationOutputWeightProcessor_WeightInfoSizeCheck;
    static_assert(sizeof(AnimationOutputWeightProcessor::WeightInfo) == 0x24);
    public:
    // private UnityEngine.Animations.AnimationPlayableOutput m_Output
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Animations::AnimationPlayableOutput m_Output;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::AnimationPlayableOutput) == 0xC);
    // Padding between fields: m_Output and: m_MotionXPlayable
    char __padding0[0x4] = {};
    // private UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_MotionXPlayable
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable) == 0xC);
    // Padding between fields: m_MotionXPlayable and: m_Mixers
    char __padding1[0x4] = {};
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/UnityEngine.Timeline.WeightInfo> m_Mixers
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo>* m_Mixers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Timeline::ITimelineEvaluateCallback
    operator ::UnityEngine::Timeline::ITimelineEvaluateCallback() noexcept {
      return *reinterpret_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(this);
    }
    // Get instance field reference: private UnityEngine.Animations.AnimationPlayableOutput m_Output
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::AnimationPlayableOutput& dyn_m_Output();
    // Get instance field reference: private UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_MotionXPlayable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& dyn_m_MotionXPlayable();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/UnityEngine.Timeline.WeightInfo> m_Mixers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo>*& dyn_m_Mixers();
    // public System.Void .ctor(UnityEngine.Animations.AnimationPlayableOutput output)
    // Offset: 0x1DACE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationOutputWeightProcessor* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::AnimationOutputWeightProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationOutputWeightProcessor*, creationType>(output)));
    }
    // private System.Void FindMixers()
    // Offset: 0x1DACED4
    void FindMixers();
    // private System.Void FindMixers(UnityEngine.Playables.Playable parent, System.Int32 port, UnityEngine.Playables.Playable node)
    // Offset: 0x1DACFA8
    void FindMixers(::UnityEngine::Playables::Playable parent, int port, ::UnityEngine::Playables::Playable node);
    // public System.Void Evaluate()
    // Offset: 0x1DAD1EC
    void Evaluate();
  }; // UnityEngine.Timeline.AnimationOutputWeightProcessor
  #pragma pack(pop)
  static check_size<sizeof(AnimationOutputWeightProcessor), 48 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo>*)> __UnityEngine_Timeline_AnimationOutputWeightProcessorSizeCheck;
  static_assert(sizeof(AnimationOutputWeightProcessor) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationOutputWeightProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers
// Il2CppName: FindMixers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationOutputWeightProcessor*), "FindMixers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers
// Il2CppName: FindMixers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(::UnityEngine::Playables::Playable, int, ::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationOutputWeightProcessor*), "FindMixers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, port, node});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationOutputWeightProcessor*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
