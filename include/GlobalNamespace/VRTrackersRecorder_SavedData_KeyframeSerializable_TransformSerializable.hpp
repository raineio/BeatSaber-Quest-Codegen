// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRTrackersRecorder/SavedData/KeyframeSerializable
#include "GlobalNamespace/VRTrackersRecorder_SavedData_KeyframeSerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*, "", "VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable : public ::Il2CppObject {
    public:
    public:
    // public System.Single _xPos
    // Size: 0x4
    // Offset: 0x10
    float xPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _yPos
    // Size: 0x4
    // Offset: 0x14
    float yPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _zPos
    // Size: 0x4
    // Offset: 0x18
    float zPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _xRot
    // Size: 0x4
    // Offset: 0x1C
    float xRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _yRot
    // Size: 0x4
    // Offset: 0x20
    float yRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _zRot
    // Size: 0x4
    // Offset: 0x24
    float zRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _wRot
    // Size: 0x4
    // Offset: 0x28
    float wRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _valid
    // Size: 0x1
    // Offset: 0x2C
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single _xPos
    [[deprecated("Use field access instead!")]] float& dyn__xPos();
    // Get instance field reference: public System.Single _yPos
    [[deprecated("Use field access instead!")]] float& dyn__yPos();
    // Get instance field reference: public System.Single _zPos
    [[deprecated("Use field access instead!")]] float& dyn__zPos();
    // Get instance field reference: public System.Single _xRot
    [[deprecated("Use field access instead!")]] float& dyn__xRot();
    // Get instance field reference: public System.Single _yRot
    [[deprecated("Use field access instead!")]] float& dyn__yRot();
    // Get instance field reference: public System.Single _zRot
    [[deprecated("Use field access instead!")]] float& dyn__zRot();
    // Get instance field reference: public System.Single _wRot
    [[deprecated("Use field access instead!")]] float& dyn__wRot();
    // Get instance field reference: public System.Boolean _valid
    [[deprecated("Use field access instead!")]] bool& dyn__valid();
    // public System.Void .ctor()
    // Offset: 0x14A1660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*, creationType>()));
    }
  }; // VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable), 44 + sizeof(bool)> __GlobalNamespace_VRTrackersRecorder_SavedData_KeyframeSerializable_TransformSerializableSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
