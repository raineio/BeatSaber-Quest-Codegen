// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: EF1094
  // [AddComponentMenu] Offset: EF1094
  class InteractionTrigger : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionTrigger::CharacterPosition
    class CharacterPosition;
    // Nested type: RootMotion::FinalIK::InteractionTrigger::CameraPosition
    class CameraPosition;
    // Nested type: RootMotion::FinalIK::InteractionTrigger::Range
    class Range;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [TooltipAttribute] Offset: 0xEF3CD8
    // public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range[] ranges
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<RootMotion::FinalIK::InteractionTrigger::Range*> ranges;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::InteractionTrigger::Range*>) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range[] ranges
    ::ArrayW<RootMotion::FinalIK::InteractionTrigger::Range*>& dyn_ranges();
    // private System.Void OpenUserManual()
    // Offset: 0x1C5B8CC
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1C5B918
    void OpenScriptReference();
    // private System.Void OpenTutorial4()
    // Offset: 0x1C5B964
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x1C5B9B0
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1C5B9FC
    void ASThread();
    // private System.Void Start()
    // Offset: 0x1C5BA48
    void Start();
    // public System.Int32 GetBestRangeIndex(UnityEngine.Transform character, UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit raycastHit)
    // Offset: 0x1C5BA4C
    int GetBestRangeIndex(UnityEngine::Transform* character, UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit raycastHit);
    // public System.Void .ctor()
    // Offset: 0x1C5BDE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger), 24 + sizeof(::ArrayW<RootMotion::FinalIK::InteractionTrigger::Range*>)> __RootMotion_FinalIK_InteractionTriggerSizeCheck;
  static_assert(sizeof(InteractionTrigger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger*, "RootMotion.FinalIK", "InteractionTrigger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::OpenTutorial4
// Il2CppName: OpenTutorial4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenTutorial4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "OpenTutorial4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex
// Il2CppName: GetBestRangeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::InteractionTrigger::*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::RaycastHit)>(&RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* raycastFrom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* raycastHit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger*), "GetBestRangeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, raycastFrom, raycastHit});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
