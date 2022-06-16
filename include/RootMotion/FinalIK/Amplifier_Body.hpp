// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Amplifier
#include "RootMotion/FinalIK/Amplifier.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Amplifier::Body);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Amplifier::Body*, "RootMotion.FinalIK", "Amplifier/Body");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body
  // [TokenAttribute] Offset: FFFFFFFF
  class Amplifier::Body : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::Amplifier::Body::EffectorLink
    class EffectorLink;
    public:
    // [TooltipAttribute] Offset: 0x10FFE08
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x10FFE40
    // public UnityEngine.Transform relativeTo
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* relativeTo;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x10FFE78
    // public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::RootMotion::FinalIK::Amplifier::Body::EffectorLink*> effectorLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::Amplifier::Body::EffectorLink*>) == 0x8);
    // [TooltipAttribute] Offset: 0x10FFEB0
    // public System.Single verticalWeight
    // Size: 0x4
    // Offset: 0x28
    float verticalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10FFEE8
    // public System.Single horizontalWeight
    // Size: 0x4
    // Offset: 0x2C
    float horizontalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10FFF20
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x30
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastRelativePos
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 lastRelativePos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 smoothDelta
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 smoothDelta;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x4C
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.Transform relativeTo
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_relativeTo();
    // Get instance field reference: public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::Amplifier::Body::EffectorLink*>& dyn_effectorLinks();
    // Get instance field reference: public System.Single verticalWeight
    [[deprecated("Use field access instead!")]] float& dyn_verticalWeight();
    // Get instance field reference: public System.Single horizontalWeight
    [[deprecated("Use field access instead!")]] float& dyn_horizontalWeight();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: private UnityEngine.Vector3 lastRelativePos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastRelativePos();
    // Get instance field reference: private UnityEngine.Vector3 smoothDelta
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_smoothDelta();
    // Get instance field reference: private System.Boolean firstUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_firstUpdate();
    // public System.Void .ctor()
    // Offset: 0x2248854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Amplifier::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier::Body*, creationType>()));
    }
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single w, System.Single deltaTime)
    // Offset: 0x22483D8
    void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float w, float deltaTime);
    // static private UnityEngine.Vector3 Multiply(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2)
    // Offset: 0x2248844
    static ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2);
  }; // RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body
  #pragma pack(pop)
  static check_size<sizeof(Amplifier::Body), 76 + sizeof(bool)> __RootMotion_FinalIK_Amplifier_BodySizeCheck;
  static_assert(sizeof(Amplifier::Body) == 0x4D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Amplifier::Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float, float)>(&RootMotion::FinalIK::Amplifier::Body::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Amplifier::Body*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, w, deltaTime});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::Amplifier::Body::Multiply)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Amplifier::Body*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2});
  }
};
