// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.HumanPose
  struct HumanPose : public System::ValueType {
    public:
    // public UnityEngine.Vector3 bodyPosition
    // Offset: 0x0
    UnityEngine::Vector3 bodyPosition;
    // public UnityEngine.Quaternion bodyRotation
    // Offset: 0xC
    UnityEngine::Quaternion bodyRotation;
    // public System.Single[] muscles
    // Offset: 0x20
    ::Array<float>* muscles;
    // Creating value type constructor for type: HumanPose
    constexpr HumanPose(UnityEngine::Vector3 bodyPosition_ = {}, UnityEngine::Quaternion bodyRotation_ = {}, ::Array<float>* muscles_ = {}) noexcept : bodyPosition{bodyPosition_}, bodyRotation{bodyRotation_}, muscles{muscles_} {}
    // System.Void Init()
    // Offset: 0xC8A568
    void Init();
  }; // UnityEngine.HumanPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanPose, "UnityEngine", "HumanPose");
#pragma pack(pop)
