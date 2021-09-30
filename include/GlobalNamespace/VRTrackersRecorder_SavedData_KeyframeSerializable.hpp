// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRTrackersRecorder/SavedData
#include "GlobalNamespace/VRTrackersRecorder_SavedData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/SavedData/KeyframeSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder::SavedData::KeyframeSerializable : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable
    class TransformSerializable;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable[] _transforms
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*>) == 0x8);
    // public System.Single _time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable[] _transforms
    ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*>& dyn__transforms();
    // Get instance field reference: public System.Single _time
    float& dyn__time();
    // public System.Void .ctor()
    // Offset: 0x134C914
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::SavedData::KeyframeSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::SavedData::KeyframeSerializable*, creationType>()));
    }
  }; // VRTrackersRecorder/SavedData/KeyframeSerializable
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable), 24 + sizeof(float)> __GlobalNamespace_VRTrackersRecorder_SavedData_KeyframeSerializableSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::SavedData::KeyframeSerializable) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*, "", "VRTrackersRecorder/SavedData/KeyframeSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
