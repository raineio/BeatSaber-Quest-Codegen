// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesRecordingData
#include "GlobalNamespace/PosesRecordingData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration*, "", "PosesRecordingData/ExternalCameraCalibration");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingData/ExternalCameraCalibration
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingData::ExternalCameraCalibration : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single fieldOfVision
    // Size: 0x4
    // Offset: 0x10
    float fieldOfVision;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single nearClip
    // Size: 0x4
    // Offset: 0x14
    float nearClip;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single farClip
    // Size: 0x4
    // Offset: 0x18
    float farClip;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single hmdOffset
    // Size: 0x4
    // Offset: 0x1C
    float hmdOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single nearOffset
    // Size: 0x4
    // Offset: 0x20
    float nearOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single fieldOfVision
    [[deprecated("Use field access instead!")]] float& dyn_fieldOfVision();
    // Get instance field reference: public readonly System.Single nearClip
    [[deprecated("Use field access instead!")]] float& dyn_nearClip();
    // Get instance field reference: public readonly System.Single farClip
    [[deprecated("Use field access instead!")]] float& dyn_farClip();
    // Get instance field reference: public readonly System.Single hmdOffset
    [[deprecated("Use field access instead!")]] float& dyn_hmdOffset();
    // Get instance field reference: public readonly System.Single nearOffset
    [[deprecated("Use field access instead!")]] float& dyn_nearOffset();
    // public System.Void .ctor(System.Single fieldOfVision, System.Single nearClip, System.Single farClip, System.Single hmdOffset, System.Single nearOffset)
    // Offset: 0x13DC674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingData::ExternalCameraCalibration* New_ctor(float fieldOfVision, float nearClip, float farClip, float hmdOffset, float nearOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingData::ExternalCameraCalibration*, creationType>(fieldOfVision, nearClip, farClip, hmdOffset, nearOffset)));
    }
    // public System.Void .ctor(UnityEngine.Camera camera)
    // Offset: 0x13DC6D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingData::ExternalCameraCalibration* New_ctor(::UnityEngine::Camera* camera) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingData::ExternalCameraCalibration*, creationType>(camera)));
    }
  }; // PosesRecordingData/ExternalCameraCalibration
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingData::ExternalCameraCalibration), 32 + sizeof(float)> __GlobalNamespace_PosesRecordingData_ExternalCameraCalibrationSizeCheck;
  static_assert(sizeof(PosesRecordingData::ExternalCameraCalibration) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::ExternalCameraCalibration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::ExternalCameraCalibration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
