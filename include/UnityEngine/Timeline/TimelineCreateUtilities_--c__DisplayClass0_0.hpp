// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineCreateUtilities
#include "UnityEngine/Timeline/TimelineCreateUtilities.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_0");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities/UnityEngine.Timeline.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimelineCreateUtilities::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // public System.Void .ctor()
    // Offset: 0x2A17BDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineCreateUtilities::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineCreateUtilities::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Boolean <GenerateUniqueActorName>b__0(UnityEngine.ScriptableObject x)
    // Offset: 0x2A18024
    bool $GenerateUniqueActorName$b__0(::UnityEngine::ScriptableObject* x);
  }; // UnityEngine.Timeline.TimelineCreateUtilities/UnityEngine.Timeline.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(TimelineCreateUtilities::$$c__DisplayClass0_0), 16 + sizeof(::StringW)> __UnityEngine_Timeline_TimelineCreateUtilities_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(TimelineCreateUtilities::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::$GenerateUniqueActorName$b__0
// Il2CppName: <GenerateUniqueActorName>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::*)(::UnityEngine::ScriptableObject*)>(&UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::$GenerateUniqueActorName$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0*), "<GenerateUniqueActorName>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
