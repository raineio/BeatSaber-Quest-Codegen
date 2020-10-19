// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BakerTransform
  class BakerTransform : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // public UnityEngine.AnimationCurve posX
    // Offset: 0x18
    UnityEngine::AnimationCurve* posX;
    // public UnityEngine.AnimationCurve posY
    // Offset: 0x20
    UnityEngine::AnimationCurve* posY;
    // public UnityEngine.AnimationCurve posZ
    // Offset: 0x28
    UnityEngine::AnimationCurve* posZ;
    // public UnityEngine.AnimationCurve rotX
    // Offset: 0x30
    UnityEngine::AnimationCurve* rotX;
    // public UnityEngine.AnimationCurve rotY
    // Offset: 0x38
    UnityEngine::AnimationCurve* rotY;
    // public UnityEngine.AnimationCurve rotZ
    // Offset: 0x40
    UnityEngine::AnimationCurve* rotZ;
    // public UnityEngine.AnimationCurve rotW
    // Offset: 0x48
    UnityEngine::AnimationCurve* rotW;
    // private System.String relativePath
    // Offset: 0x50
    ::Il2CppString* relativePath;
    // private System.Boolean recordPosition
    // Offset: 0x58
    bool recordPosition;
    // private UnityEngine.Vector3 relativePosition
    // Offset: 0x5C
    UnityEngine::Vector3 relativePosition;
    // private System.Boolean isRootNode
    // Offset: 0x68
    bool isRootNode;
    // private UnityEngine.Quaternion relativeRotation
    // Offset: 0x6C
    UnityEngine::Quaternion relativeRotation;
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Transform root, System.Boolean recordPosition, System.Boolean isRootNode)
    // Offset: 0x1862A5C
    static BakerTransform* New_ctor(UnityEngine::Transform* transform, UnityEngine::Transform* root, bool recordPosition, bool isRootNode);
    // public System.Void SetRelativeSpace(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1862C54
    void SetRelativeSpace(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x1862C68
    void SetCurves(UnityEngine::AnimationClip*& clip);
    // private System.Void AddRootMotionCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x1862EF8
    void AddRootMotionCurves(UnityEngine::AnimationClip*& clip);
    // public System.Void Reset()
    // Offset: 0x1862B0C
    void Reset();
    // public System.Void ReduceKeyframes(System.Single maxError)
    // Offset: 0x1863144
    void ReduceKeyframes(float maxError);
    // public System.Void SetKeyframes(System.Single time)
    // Offset: 0x18631B8
    void SetKeyframes(float time);
    // public System.Void AddLoopFrame(System.Single time)
    // Offset: 0x1863404
    void AddLoopFrame(float time);
  }; // RootMotion.BakerTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerTransform*, "RootMotion", "BakerTransform");
#pragma pack(pop)
