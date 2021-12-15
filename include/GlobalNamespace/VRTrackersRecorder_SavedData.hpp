// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRTrackersRecorder
#include "GlobalNamespace/VRTrackersRecorder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::VRTrackersRecorder::SavedData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData*, "", "VRTrackersRecorder/SavedData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/SavedData
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder::SavedData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable
    class KeyframeSerializable;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public VRTrackersRecorder/SavedData/KeyframeSerializable[] _keyframes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*> keyframes;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>
    constexpr operator ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>() const noexcept {
      return keyframes;
    }
    // Get instance field reference: public VRTrackersRecorder/SavedData/KeyframeSerializable[] _keyframes
    ::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>& dyn__keyframes();
    // public System.Void .ctor()
    // Offset: 0x1BDDA84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::SavedData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::SavedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::SavedData*, creationType>()));
    }
  }; // VRTrackersRecorder/SavedData
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::SavedData), 16 + sizeof(::ArrayW<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>)> __GlobalNamespace_VRTrackersRecorder_SavedDataSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::SavedData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::SavedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
