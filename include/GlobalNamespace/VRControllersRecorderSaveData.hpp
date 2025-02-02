// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRControllersRecorderSaveData
  class VRControllersRecorderSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderSaveData*, "", "VRControllersRecorderSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation
    class PositionAndRotation;
    // Nested type: ::GlobalNamespace::VRControllersRecorderSaveData::Keyframe
    class Keyframe;
    // Nested type: ::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo
    class NodeInfo;
    public:
    // public VRControllersRecorderSaveData/NodeInfo[] nodesInfo
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*> nodesInfo;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>) == 0x8);
    // public VRControllersRecorderSaveData/Keyframe[] keyframes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::Keyframe*> keyframes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>) == 0x8);
    public:
    // Get instance field reference: public VRControllersRecorderSaveData/NodeInfo[] nodesInfo
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*>& dyn_nodesInfo();
    // Get instance field reference: public VRControllersRecorderSaveData/Keyframe[] keyframes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>& dyn_keyframes();
    // public System.Void .ctor()
    // Offset: 0x165B670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData*, creationType>()));
    }
  }; // VRControllersRecorderSaveData
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData), 24 + sizeof(::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::Keyframe*>)> __GlobalNamespace_VRControllersRecorderSaveDataSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
