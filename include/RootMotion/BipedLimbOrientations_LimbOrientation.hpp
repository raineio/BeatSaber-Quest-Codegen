// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.BipedLimbOrientations
#include "RootMotion/BipedLimbOrientations.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::BipedLimbOrientations::LimbOrientation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedLimbOrientations::LimbOrientation*, "RootMotion", "BipedLimbOrientations/LimbOrientation");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedLimbOrientations/RootMotion.LimbOrientation
  // [TokenAttribute] Offset: FFFFFFFF
  class BipedLimbOrientations::LimbOrientation : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 upperBoneForwardAxis
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 upperBoneForwardAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lowerBoneForwardAxis
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 lowerBoneForwardAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lastBoneLeftAxis
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 lastBoneLeftAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3 upperBoneForwardAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_upperBoneForwardAxis();
    // Get instance field reference: public UnityEngine.Vector3 lowerBoneForwardAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lowerBoneForwardAxis();
    // Get instance field reference: public UnityEngine.Vector3 lastBoneLeftAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastBoneLeftAxis();
    // public System.Void .ctor(UnityEngine.Vector3 upperBoneForwardAxis, UnityEngine.Vector3 lowerBoneForwardAxis, UnityEngine.Vector3 lastBoneLeftAxis)
    // Offset: 0x22EEAD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedLimbOrientations::LimbOrientation* New_ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis, ::UnityEngine::Vector3 lastBoneLeftAxis) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::BipedLimbOrientations::LimbOrientation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedLimbOrientations::LimbOrientation*, creationType>(upperBoneForwardAxis, lowerBoneForwardAxis, lastBoneLeftAxis)));
    }
  }; // RootMotion.BipedLimbOrientations/RootMotion.LimbOrientation
  #pragma pack(pop)
  static check_size<sizeof(BipedLimbOrientations::LimbOrientation), 40 + sizeof(::UnityEngine::Vector3)> __RootMotion_BipedLimbOrientations_LimbOrientationSizeCheck;
  static_assert(sizeof(BipedLimbOrientations::LimbOrientation) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BipedLimbOrientations::LimbOrientation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
