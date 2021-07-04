// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverTrigonometric
  class IKSolverTrigonometric;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.TrigonometricIK
  // [HelpURLAttribute] Offset: E07308
  // [AddComponentMenu] Offset: E07308
  class TrigonometricIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.FinalIK.IKSolverTrigonometric solver
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverTrigonometric* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric*) == 0x8);
    // Creating value type constructor for type: TrigonometricIK
    TrigonometricIK(RootMotion::FinalIK::IKSolverTrigonometric* solver_ = {}) noexcept : solver{solver_} {}
    // private System.Void SupportGroup()
    // Offset: 0x1AA9788
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1AA97D4
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1AA96F0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1AA973C
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1AA9820
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1AA9828
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrigonometricIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::TrigonometricIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrigonometricIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.TrigonometricIK
  #pragma pack(pop)
  static check_size<sizeof(TrigonometricIK), 56 + sizeof(RootMotion::FinalIK::IKSolverTrigonometric*)> __RootMotion_FinalIK_TrigonometricIKSizeCheck;
  static_assert(sizeof(TrigonometricIK) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::TrigonometricIK*, "RootMotion.FinalIK", "TrigonometricIK");
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::SupportGroup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::ASThread)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::OpenUserManual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::OpenScriptReference)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::TrigonometricIK::*)()>(&RootMotion::FinalIK::TrigonometricIK::GetIKSolver)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TrigonometricIK*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TrigonometricIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
