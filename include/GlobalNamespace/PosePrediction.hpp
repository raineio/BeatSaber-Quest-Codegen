// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PoseSerializable
  struct PoseSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PosePrediction
  class PosePrediction : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PosePrediction
    PosePrediction() noexcept {}
    // static public UnityEngine.Pose PredictPose(UnityEngine.Pose prev, System.Single prevTime, UnityEngine.Pose curr, System.Single currTime, System.Single time)
    // Offset: 0x150B338
    static UnityEngine::Pose PredictPose(UnityEngine::Pose prev, float prevTime, UnityEngine::Pose curr, float currTime, float time);
    // static public UnityEngine.Pose InterpolatePose(UnityEngine.Pose prev, UnityEngine.Pose curr, System.Single t)
    // Offset: 0x150B440
    static UnityEngine::Pose InterpolatePose(UnityEngine::Pose prev, UnityEngine::Pose curr, float t);
    // static public PoseSerializable PredictPoseSerializable(PoseSerializable prev, System.Single prevTime, PoseSerializable curr, System.Single currTime, System.Single time)
    // Offset: 0x150B94C
    static GlobalNamespace::PoseSerializable PredictPoseSerializable(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time);
    // static public PoseSerializable InterpolatePoseSerializable(PoseSerializable a, PoseSerializable b, System.Single t)
    // Offset: 0x150BA38
    static GlobalNamespace::PoseSerializable InterpolatePoseSerializable(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float t);
    // public System.Void .ctor()
    // Offset: 0x150BB0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosePrediction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PosePrediction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosePrediction*, creationType>()));
    }
  }; // PosePrediction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosePrediction*, "", "PosePrediction");
// Writing MetadataGetter for method: GlobalNamespace::PosePrediction::PredictPose
// Il2CppName: PredictPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (*)(UnityEngine::Pose, float, UnityEngine::Pose, float, float)>(&GlobalNamespace::PosePrediction::PredictPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosePrediction*), "PredictPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Pose>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Pose>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosePrediction::InterpolatePose
// Il2CppName: InterpolatePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (*)(UnityEngine::Pose, UnityEngine::Pose, float)>(&GlobalNamespace::PosePrediction::InterpolatePose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosePrediction*), "InterpolatePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Pose>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Pose>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosePrediction::PredictPoseSerializable
// Il2CppName: PredictPoseSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (*)(GlobalNamespace::PoseSerializable, float, GlobalNamespace::PoseSerializable, float, float)>(&GlobalNamespace::PosePrediction::PredictPoseSerializable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosePrediction*), "PredictPoseSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PoseSerializable>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PoseSerializable>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosePrediction::InterpolatePoseSerializable
// Il2CppName: InterpolatePoseSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (*)(GlobalNamespace::PoseSerializable, GlobalNamespace::PoseSerializable, float)>(&GlobalNamespace::PosePrediction::InterpolatePoseSerializable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosePrediction*), "InterpolatePoseSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PoseSerializable>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PoseSerializable>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosePrediction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
