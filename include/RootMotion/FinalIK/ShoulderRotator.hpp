// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: FullBodyBipedChain
  struct FullBodyBipedChain;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: ShoulderRotator
  class ShoulderRotator;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::ShoulderRotator);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ShoulderRotator*, "RootMotion.FinalIK", "ShoulderRotator");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.ShoulderRotator
  // [TokenAttribute] Offset: FFFFFFFF
  class ShoulderRotator : public UnityEngine::MonoBehaviour {
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
    // [TooltipAttribute] Offset: 0xF600C0
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF600F8
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x1C
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // private System.Boolean skip
    // Size: 0x1
    // Offset: 0x28
    bool skip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public System.Single offset
    float& dyn_offset();
    // Get instance field reference: private RootMotion.FinalIK.FullBodyBipedIK ik
    RootMotion::FinalIK::FullBodyBipedIK*& dyn_ik();
    // Get instance field reference: private System.Boolean skip
    bool& dyn_skip();
    // private System.Void Start()
    // Offset: 0x1CA0AEC
    void Start();
    // private System.Void RotateShoulders()
    // Offset: 0x1CA0BC0
    void RotateShoulders();
    // private System.Void RotateShoulder(RootMotion.FinalIK.FullBodyBipedChain chain, System.Single weight, System.Single offset)
    // Offset: 0x1CA0CAC
    void RotateShoulder(RootMotion::FinalIK::FullBodyBipedChain chain, float weight, float offset);
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap GetParentBoneMap(RootMotion.FinalIK.FullBodyBipedChain chain)
    // Offset: 0x1CA10F4
    RootMotion::FinalIK::IKMapping::BoneMap* GetParentBoneMap(RootMotion::FinalIK::FullBodyBipedChain chain);
    // private System.Void OnDestroy()
    // Offset: 0x1CA112C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1CA1224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShoulderRotator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ShoulderRotator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShoulderRotator*, creationType>()));
    }
  }; // RootMotion.FinalIK.ShoulderRotator
  #pragma pack(pop)
  static check_size<sizeof(ShoulderRotator), 40 + sizeof(bool)> __RootMotion_FinalIK_ShoulderRotatorSizeCheck;
  static_assert(sizeof(ShoulderRotator) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ShoulderRotator::*)()>(&RootMotion::FinalIK::ShoulderRotator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ShoulderRotator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::RotateShoulders
// Il2CppName: RotateShoulders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ShoulderRotator::*)()>(&RootMotion::FinalIK::ShoulderRotator::RotateShoulders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ShoulderRotator*), "RotateShoulders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::RotateShoulder
// Il2CppName: RotateShoulder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ShoulderRotator::*)(RootMotion::FinalIK::FullBodyBipedChain, float, float)>(&RootMotion::FinalIK::ShoulderRotator::RotateShoulder)> {
  static const MethodInfo* get() {
    static auto* chain = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedChain")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ShoulderRotator*), "RotateShoulder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain, weight, offset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::GetParentBoneMap
// Il2CppName: GetParentBoneMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKMapping::BoneMap* (RootMotion::FinalIK::ShoulderRotator::*)(RootMotion::FinalIK::FullBodyBipedChain)>(&RootMotion::FinalIK::ShoulderRotator::GetParentBoneMap)> {
  static const MethodInfo* get() {
    static auto* chain = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedChain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ShoulderRotator*), "GetParentBoneMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ShoulderRotator::*)()>(&RootMotion::FinalIK::ShoulderRotator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ShoulderRotator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ShoulderRotator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
