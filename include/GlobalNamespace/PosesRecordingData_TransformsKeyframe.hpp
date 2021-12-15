// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesRecordingData
#include "GlobalNamespace/PosesRecordingData.hpp"
// Including type: PosesRecordingData/Pose
#include "GlobalNamespace/PosesRecordingData_Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PosesRecordingData::TransformsKeyframe);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesRecordingData::TransformsKeyframe*, "", "PosesRecordingData/TransformsKeyframe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingData/TransformsKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingData::TransformsKeyframe : public ::Il2CppObject {
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
    // public readonly PosesRecordingData/Pose[] poses
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::PosesRecordingData::Pose> poses;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::PosesRecordingData::Pose>) == 0x8);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly PosesRecordingData/Pose[] poses
    ::ArrayW<GlobalNamespace::PosesRecordingData::Pose>& dyn_poses();
    // Get instance field reference: public readonly System.Single time
    float& dyn_time();
    // public System.Void .ctor(PosesRecordingData/Pose[] poses, System.Single time)
    // Offset: 0x11AE314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingData::TransformsKeyframe* New_ctor(::ArrayW<GlobalNamespace::PosesRecordingData::Pose> poses, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PosesRecordingData::TransformsKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingData::TransformsKeyframe*, creationType>(poses, time)));
    }
  }; // PosesRecordingData/TransformsKeyframe
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingData::TransformsKeyframe), 24 + sizeof(float)> __GlobalNamespace_PosesRecordingData_TransformsKeyframeSizeCheck;
  static_assert(sizeof(PosesRecordingData::TransformsKeyframe) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::TransformsKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
