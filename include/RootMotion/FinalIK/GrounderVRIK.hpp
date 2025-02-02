// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: GrounderVRIK
  class GrounderVRIK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::GrounderVRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderVRIK*, "RootMotion.FinalIK", "GrounderVRIK");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderVRIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 1143F3C
  // [AddComponentMenu] Offset: 1143F3C
  class GrounderVRIK : public ::RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    public:
    // [TooltipAttribute] Offset: 0x11456C8
    // public RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x40
    ::RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::VRIK*) == 0x8);
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Transform*> feet;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.VRIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::VRIK*& dyn_ik();
    // Get instance field reference: private UnityEngine.Transform[] feet
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_feet();
    // private System.Void OpenTutorial()
    // Offset: 0x22DB8B4
    void OpenTutorial();
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x22DB9B0
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x22DBA48
    void Update();
    // private System.Void Initiate()
    // Offset: 0x22DBAFC
    void Initiate();
    // private System.Void OnSolverUpdate()
    // Offset: 0x22DBCFC
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset positionOffset, UnityEngine.Transform bone, RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg)
    // Offset: 0x22DBF90
    void SetLegIK(::RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset, ::UnityEngine::Transform* bone, ::RootMotion::FinalIK::Grounding::Leg* leg);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x22DC098
    void OnPostSolverUpdate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x22DC298
    void OnDrawGizmosSelected();
    // private System.Void OnDestroy()
    // Offset: 0x22DC3D0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x22DC530
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderVRIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::GrounderVRIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderVRIK*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x22DB900
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x22DB94C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x22DB998
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
  }; // RootMotion.FinalIK.GrounderVRIK
  #pragma pack(pop)
  static check_size<sizeof(GrounderVRIK), 72 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __RootMotion_FinalIK_GrounderVRIKSizeCheck;
  static_assert(sizeof(GrounderVRIK) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OpenTutorial
// Il2CppName: OpenTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OpenTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OpenTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::IsReadyToInitiate
// Il2CppName: IsReadyToInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::IsReadyToInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "IsReadyToInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OnSolverUpdate
// Il2CppName: OnSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OnSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OnSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::SetLegIK
// Il2CppName: SetLegIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)(::RootMotion::FinalIK::IKSolverVR::PositionOffset, ::UnityEngine::Transform*, ::RootMotion::FinalIK::Grounding::Leg*)>(&RootMotion::FinalIK::GrounderVRIK::SetLegIK)> {
  static const MethodInfo* get() {
    static auto* positionOffset = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/PositionOffset")->byval_arg;
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "Grounding/Leg")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "SetLegIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionOffset, bone, leg});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OnPostSolverUpdate
// Il2CppName: OnPostSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OnPostSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OnPostSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderVRIK::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderVRIK::*)()>(&RootMotion::FinalIK::GrounderVRIK::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderVRIK*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
