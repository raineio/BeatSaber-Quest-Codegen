// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleVRNodeRecorder/SavedData
#include "GlobalNamespace/SimpleVRNodeRecorder.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*, "", "SimpleVRNodeRecorder/SavedData/NodeKeyframe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SimpleVRNodeRecorder/SavedData/NodeKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleVRNodeRecorder::SavedData::NodeKeyframe : public ::Il2CppObject {
    public:
    public:
    // public System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x2C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single posX
    [[deprecated("Use field access instead!")]] float& dyn_posX();
    // Get instance field reference: public System.Single posY
    [[deprecated("Use field access instead!")]] float& dyn_posY();
    // Get instance field reference: public System.Single posZ
    [[deprecated("Use field access instead!")]] float& dyn_posZ();
    // Get instance field reference: public System.Single rotX
    [[deprecated("Use field access instead!")]] float& dyn_rotX();
    // Get instance field reference: public System.Single rotY
    [[deprecated("Use field access instead!")]] float& dyn_rotY();
    // Get instance field reference: public System.Single rotZ
    [[deprecated("Use field access instead!")]] float& dyn_rotZ();
    // Get instance field reference: public System.Single rotW
    [[deprecated("Use field access instead!")]] float& dyn_rotW();
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public UnityEngine.Vector3 get_pos()
    // Offset: 0x1383514
    ::UnityEngine::Vector3 get_pos();
    // public UnityEngine.Quaternion get_rot()
    // Offset: 0x1383550
    ::UnityEngine::Quaternion get_rot();
    // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Single time)
    // Offset: 0x1382F94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleVRNodeRecorder::SavedData::NodeKeyframe* New_ctor(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleVRNodeRecorder::SavedData::NodeKeyframe*, creationType>(pos, rot, time)));
    }
  }; // SimpleVRNodeRecorder/SavedData/NodeKeyframe
  #pragma pack(pop)
  static check_size<sizeof(SimpleVRNodeRecorder::SavedData::NodeKeyframe), 44 + sizeof(float)> __GlobalNamespace_SimpleVRNodeRecorder_SavedData_NodeKeyframeSizeCheck;
  static_assert(sizeof(SimpleVRNodeRecorder::SavedData::NodeKeyframe) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::get_pos
// Il2CppName: get_pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::get_pos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*), "get_pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::get_rot
// Il2CppName: get_rot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::get_rot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*), "get_rot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
