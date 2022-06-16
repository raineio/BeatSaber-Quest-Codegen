// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IK*, "RootMotion.FinalIK", "IK");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IK
  // [TokenAttribute] Offset: FFFFFFFF
  class IK : public ::RootMotion::SolverManager {
    public:
    // public RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::RootMotion::FinalIK::IKSolver* GetIKSolver();
    // protected System.Void OpenUserManual()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OpenUserManual();
    // protected System.Void OpenScriptReference()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OpenScriptReference();
    // protected System.Void .ctor()
    // Offset: 0x220DDD4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IK*, creationType>()));
    }
    // protected override System.Void UpdateSolver()
    // Offset: 0x221AFF4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x221B0E8
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x221B2AC
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
  }; // RootMotion.FinalIK.IK
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::GetIKSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IK::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IK::*)()>(&RootMotion::FinalIK::IK::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IK*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
