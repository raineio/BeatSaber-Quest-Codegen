// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Recoil
#include "RootMotion/FinalIK/Recoil.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class Recoil::RecoilOffset : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink
    class EffectorLink;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [TooltipAttribute] Offset: 0xEF796C
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xEF79A4
    // [RangeAttribute] Offset: 0xEF79A4
    // public System.Single additivity
    // Size: 0x4
    // Offset: 0x1C
    float additivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF79F8
    // public System.Single maxAdditiveOffsetMag
    // Size: 0x4
    // Offset: 0x20
    float maxAdditiveOffsetMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxAdditiveOffsetMag and: effectorLinks
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xEF7A30
    // public RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*> effectorLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*>) == 0x8);
    // private UnityEngine.Vector3 additiveOffset
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 additiveOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastOffset
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 lastOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public System.Single additivity
    float& dyn_additivity();
    // Get instance field reference: public System.Single maxAdditiveOffsetMag
    float& dyn_maxAdditiveOffsetMag();
    // Get instance field reference: public RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset/RootMotion.FinalIK.EffectorLink[] effectorLinks
    ::ArrayW<RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*>& dyn_effectorLinks();
    // Get instance field reference: private UnityEngine.Vector3 additiveOffset
    UnityEngine::Vector3& dyn_additiveOffset();
    // Get instance field reference: private UnityEngine.Vector3 lastOffset
    UnityEngine::Vector3& dyn_lastOffset();
    // public System.Void Start()
    // Offset: 0x1C61590
    void Start();
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Quaternion rotation, System.Single masterWeight, System.Single length, System.Single timeLeft)
    // Offset: 0x1C62120
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine::Quaternion rotation, float masterWeight, float length, float timeLeft);
    // public System.Void .ctor()
    // Offset: 0x1C62834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Recoil::RecoilOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Recoil::RecoilOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Recoil::RecoilOffset*, creationType>()));
    }
  }; // RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset
  #pragma pack(pop)
  static check_size<sizeof(Recoil::RecoilOffset), 60 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_Recoil_RecoilOffsetSizeCheck;
  static_assert(sizeof(Recoil::RecoilOffset) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::RecoilOffset*, "RootMotion.FinalIK", "Recoil/RecoilOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::RecoilOffset::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::RecoilOffset::*)()>(&RootMotion::FinalIK::Recoil::RecoilOffset::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil::RecoilOffset*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::RecoilOffset::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::RecoilOffset::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, UnityEngine::Quaternion, float, float, float)>(&RootMotion::FinalIK::Recoil::RecoilOffset::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* masterWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil::RecoilOffset*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, rotation, masterWeight, length, timeLeft});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::RecoilOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
