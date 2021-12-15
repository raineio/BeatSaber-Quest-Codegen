// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Posef
#include "GlobalNamespace/OVRPlugin.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSkeleton/SkeletonPoseData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRSkeleton::SkeletonPoseData/*, public System::ValueType*/ {
    public:
    public:
    // private OVRPlugin/Posef <RootPose>k__BackingField
    // Size: 0x1C
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Posef RootPose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // private System.Single <RootScale>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float RootScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private OVRPlugin/Quatf[] <BoneRotations>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::OVRPlugin::Quatf> BoneRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::OVRPlugin::Quatf>) == 0x8);
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: SkeletonChangedCount
    char __padding4[0x2] = {};
    // private System.Int32 <SkeletonChangedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int SkeletonChangedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SkeletonPoseData
    constexpr SkeletonPoseData(GlobalNamespace::OVRPlugin::Posef RootPose_ = {}, float RootScale_ = {}, ::ArrayW<GlobalNamespace::OVRPlugin::Quatf> BoneRotations_ = ::ArrayW<GlobalNamespace::OVRPlugin::Quatf>(nullptr), bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, int SkeletonChangedCount_ = {}) noexcept : RootPose{RootPose_}, RootScale{RootScale_}, BoneRotations{BoneRotations_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, SkeletonChangedCount{SkeletonChangedCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private OVRPlugin/Posef <RootPose>k__BackingField
    GlobalNamespace::OVRPlugin::Posef& dyn_$RootPose$k__BackingField();
    // Get instance field reference: private System.Single <RootScale>k__BackingField
    float& dyn_$RootScale$k__BackingField();
    // Get instance field reference: private OVRPlugin/Quatf[] <BoneRotations>k__BackingField
    ::ArrayW<GlobalNamespace::OVRPlugin::Quatf>& dyn_$BoneRotations$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Int32 <SkeletonChangedCount>k__BackingField
    int& dyn_$SkeletonChangedCount$k__BackingField();
    // public OVRPlugin/Posef get_RootPose()
    // Offset: 0x2168A58
    GlobalNamespace::OVRPlugin::Posef get_RootPose();
    // public System.Void set_RootPose(OVRPlugin/Posef value)
    // Offset: 0x2168A6C
    void set_RootPose(GlobalNamespace::OVRPlugin::Posef value);
    // public System.Single get_RootScale()
    // Offset: 0x2168A88
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0x2168A90
    void set_RootScale(float value);
    // public OVRPlugin/Quatf[] get_BoneRotations()
    // Offset: 0x2168A98
    ::ArrayW<GlobalNamespace::OVRPlugin::Quatf> get_BoneRotations();
    // public System.Void set_BoneRotations(OVRPlugin/Quatf[] value)
    // Offset: 0x2168AA0
    void set_BoneRotations(::ArrayW<GlobalNamespace::OVRPlugin::Quatf> value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x2168AA8
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x2168AB0
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x2168ABC
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x2168AC4
    void set_IsDataHighConfidence(bool value);
    // public System.Int32 get_SkeletonChangedCount()
    // Offset: 0x2168AD0
    int get_SkeletonChangedCount();
    // public System.Void set_SkeletonChangedCount(System.Int32 value)
    // Offset: 0x2168AD8
    void set_SkeletonChangedCount(int value);
  }; // OVRSkeleton/SkeletonPoseData
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton::SkeletonPoseData), 44 + sizeof(int)> __GlobalNamespace_OVRSkeleton_SkeletonPoseDataSizeCheck;
  static_assert(sizeof(OVRSkeleton::SkeletonPoseData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_RootPose
// Il2CppName: get_RootPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Posef (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_RootPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_RootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_RootPose
// Il2CppName: set_RootPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_RootPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_RootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_RootScale
// Il2CppName: get_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_RootScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_RootScale
// Il2CppName: set_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(float)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_RootScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_BoneRotations
// Il2CppName: get_BoneRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::OVRPlugin::Quatf> (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_BoneRotations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_BoneRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_BoneRotations
// Il2CppName: set_BoneRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(::ArrayW<GlobalNamespace::OVRPlugin::Quatf>)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_BoneRotations)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_BoneRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(bool)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(bool)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_SkeletonChangedCount
// Il2CppName: get_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)()>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::get_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "get_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_SkeletonChangedCount
// Il2CppName: set_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::SkeletonPoseData::*)(int)>(&GlobalNamespace::OVRSkeleton::SkeletonPoseData::set_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::SkeletonPoseData), "set_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
