// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderData
  class VRControllersRecorderData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorderData::PositionAndRotation
    struct PositionAndRotation;
    // Nested type: GlobalNamespace::VRControllersRecorderData::Keyframe
    class Keyframe;
    // Nested type: GlobalNamespace::VRControllersRecorderData::NodeInfo
    class NodeInfo;
    // public readonly VRControllersRecorderData/NodeInfo[] nodesInfo
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo;
    // private readonly System.Collections.Generic.List`1<VRControllersRecorderData/Keyframe> _keyframes
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>* keyframes;
    // public System.Void .ctor(VRControllersRecorderData/NodeInfo[] nodesInfo)
    // Offset: 0x21EA874
    static VRControllersRecorderData* New_ctor(::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo);
    // public System.Void AddKeyFrame(VRControllersRecorderData/PositionAndRotation[] positionsAndRotations, System.Single time)
    // Offset: 0x21EA90C
    void AddKeyFrame(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionsAndRotations, float time);
    // public VRControllersRecorderData/PositionAndRotation GetPositionAndRotation(System.Int32 frameIdx, UnityEngine.XR.XRNode nodeType, System.Int32 nodeIdx)
    // Offset: 0x21EA9FC
    GlobalNamespace::VRControllersRecorderData::PositionAndRotation GetPositionAndRotation(int frameIdx, UnityEngine::XR::XRNode nodeType, int nodeIdx);
    // public VRControllersRecorderData/PositionAndRotation GetLerpedPositionAndRotation(System.Int32 frameIdx, System.Single t, UnityEngine.XR.XRNode nodeType, System.Int32 nodeIdx)
    // Offset: 0x21EAB28
    GlobalNamespace::VRControllersRecorderData::PositionAndRotation GetLerpedPositionAndRotation(int frameIdx, float t, UnityEngine::XR::XRNode nodeType, int nodeIdx);
    // public System.Single GetFrameTime(System.Int32 frameIdx)
    // Offset: 0x21EAD24
    float GetFrameTime(int frameIdx);
    // public System.Int32 get_numberOfKeyframes()
    // Offset: 0x21EADA4
    int get_numberOfKeyframes();
  }; // VRControllersRecorderData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderData*, "", "VRControllersRecorderData");
#pragma pack(pop)
