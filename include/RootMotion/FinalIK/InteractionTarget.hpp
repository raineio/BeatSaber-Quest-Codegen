// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/WeightCurve
#include "RootMotion/FinalIK/InteractionObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget
  class InteractionTarget : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionTarget::Multiplier
    class Multiplier;
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Offset: 0x18
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // public RootMotion.FinalIK.InteractionTarget/Multiplier[] multipliers
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::InteractionTarget::Multiplier*>* multipliers;
    // public System.Single interactionSpeedMlp
    // Offset: 0x28
    float interactionSpeedMlp;
    // public UnityEngine.Transform pivot
    // Offset: 0x30
    UnityEngine::Transform* pivot;
    // public UnityEngine.Vector3 twistAxis
    // Offset: 0x38
    UnityEngine::Vector3 twistAxis;
    // public System.Single twistWeight
    // Offset: 0x44
    float twistWeight;
    // public System.Single swingWeight
    // Offset: 0x48
    float swingWeight;
    // public System.Boolean rotateOnce
    // Offset: 0x4C
    bool rotateOnce;
    // private UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x50
    UnityEngine::Quaternion defaultLocalRotation;
    // private UnityEngine.Transform lastPivot
    // Offset: 0x60
    UnityEngine::Transform* lastPivot;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OpenUserManual()
    // Offset: 0x19A267C
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x19A26C8
    void OpenScriptReference();
    // private System.Void OpenTutorial1()
    // Offset: 0x19A2714
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x19A2760
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x19A27AC
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x19A27F8
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x19A2844
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x19A2890
    void ASThread();
    // public System.Single GetValue(RootMotion.FinalIK.InteractionObject/WeightCurve/Type curveType)
    // Offset: 0x199DEE0
    float GetValue(RootMotion::FinalIK::InteractionObject::WeightCurve::Type curveType);
    // public System.Void ResetRotation()
    // Offset: 0x199CE60
    void ResetRotation();
    // public System.Void RotateTo(UnityEngine.Vector3 position)
    // Offset: 0x199B1F8
    void RotateTo(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x19A28DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InteractionTarget* New_ctor();
  }; // RootMotion.FinalIK.InteractionTarget
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTarget*, "RootMotion.FinalIK", "InteractionTarget");
#pragma pack(pop)
