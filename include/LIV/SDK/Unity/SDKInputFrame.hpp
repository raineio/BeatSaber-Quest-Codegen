// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKPose
#include "LIV/SDK/Unity/SDKPose.hpp"
// Including type: LIV.SDK.Unity.SDKClipPlane
#include "LIV/SDK/Unity/SDKClipPlane.hpp"
// Including type: LIV.SDK.Unity.SDKTransform
#include "LIV/SDK/Unity/SDKTransform.hpp"
// Including type: LIV.SDK.Unity.FEATURES
#include "LIV/SDK/Unity/FEATURES.hpp"
// Including type: LIV.SDK.Unity.SDKPriority
#include "LIV/SDK/Unity/SDKPriority.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKInputFrame
  struct SDKInputFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKInputFrame, "LIV.SDK.Unity", "SDKInputFrame");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x158
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKInputFrame
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKInputFrame/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.SDKPose pose
    // Size: 0x70
    // Offset: 0x0
    ::LIV::SDK::Unity::SDKPose pose;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKPose) == 0x70);
    // public LIV.SDK.Unity.SDKClipPlane clipPlane
    // Size: 0x4C
    // Offset: 0x70
    ::LIV::SDK::Unity::SDKClipPlane clipPlane;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKClipPlane) == 0x4C);
    // public LIV.SDK.Unity.SDKTransform stageTransform
    // Size: 0x28
    // Offset: 0xBC
    ::LIV::SDK::Unity::SDKTransform stageTransform;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKTransform) == 0x28);
    // Padding between fields: stageTransform and: features
    char __padding2[0x4] = {};
    // public LIV.SDK.Unity.FEATURES features
    // Size: 0x8
    // Offset: 0xE8
    ::LIV::SDK::Unity::FEATURES features;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::FEATURES) == 0x8);
    // public LIV.SDK.Unity.SDKClipPlane groundClipPlane
    // Size: 0x4C
    // Offset: 0xF0
    ::LIV::SDK::Unity::SDKClipPlane groundClipPlane;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKClipPlane) == 0x4C);
    // Padding between fields: groundClipPlane and: frameid
    char __padding4[0x4] = {};
    // public System.UInt64 frameid
    // Size: 0x8
    // Offset: 0x140
    uint64_t frameid;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 referenceframe
    // Size: 0x8
    // Offset: 0x148
    uint64_t referenceframe;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public LIV.SDK.Unity.SDKPriority priority
    // Size: 0x8
    // Offset: 0x150
    ::LIV::SDK::Unity::SDKPriority priority;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKPriority) == 0x8);
    public:
    // Creating value type constructor for type: SDKInputFrame
    constexpr SDKInputFrame(::LIV::SDK::Unity::SDKPose pose_ = {}, ::LIV::SDK::Unity::SDKClipPlane clipPlane_ = {}, ::LIV::SDK::Unity::SDKTransform stageTransform_ = {}, ::LIV::SDK::Unity::FEATURES features_ = {}, ::LIV::SDK::Unity::SDKClipPlane groundClipPlane_ = {}, uint64_t frameid_ = {}, uint64_t referenceframe_ = {}, ::LIV::SDK::Unity::SDKPriority priority_ = {}) noexcept : pose{pose_}, clipPlane{clipPlane_}, stageTransform{stageTransform_}, features{features_}, groundClipPlane{groundClipPlane_}, frameid{frameid_}, referenceframe{referenceframe_}, priority{priority_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.SDKPose pose
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKPose& dyn_pose();
    // Get instance field reference: public LIV.SDK.Unity.SDKClipPlane clipPlane
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKClipPlane& dyn_clipPlane();
    // Get instance field reference: public LIV.SDK.Unity.SDKTransform stageTransform
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKTransform& dyn_stageTransform();
    // Get instance field reference: public LIV.SDK.Unity.FEATURES features
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::FEATURES& dyn_features();
    // Get instance field reference: public LIV.SDK.Unity.SDKClipPlane groundClipPlane
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKClipPlane& dyn_groundClipPlane();
    // Get instance field reference: public System.UInt64 frameid
    [[deprecated("Use field access instead!")]] uint64_t& dyn_frameid();
    // Get instance field reference: public System.UInt64 referenceframe
    [[deprecated("Use field access instead!")]] uint64_t& dyn_referenceframe();
    // Get instance field reference: public LIV.SDK.Unity.SDKPriority priority
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKPriority& dyn_priority();
    // static public LIV.SDK.Unity.SDKInputFrame get_empty()
    // Offset: 0x2A51B74
    static ::LIV::SDK::Unity::SDKInputFrame get_empty();
    // public System.Void ReleaseControl()
    // Offset: 0x2A529E8
    void ReleaseControl();
    // public System.Void ObtainControl()
    // Offset: 0x2A529F8
    void ObtainControl();
    // public override System.String ToString()
    // Offset: 0x2A52A0C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKInputFrame
  #pragma pack(pop)
  static check_size<sizeof(SDKInputFrame), 336 + sizeof(::LIV::SDK::Unity::SDKPriority)> __LIV_SDK_Unity_SDKInputFrameSizeCheck;
  static_assert(sizeof(SDKInputFrame) == 0x158);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKInputFrame::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKInputFrame (*)()>(&LIV::SDK::Unity::SDKInputFrame::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKInputFrame), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKInputFrame::ReleaseControl
// Il2CppName: ReleaseControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ReleaseControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKInputFrame), "ReleaseControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKInputFrame::ObtainControl
// Il2CppName: ObtainControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ObtainControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKInputFrame), "ObtainControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKInputFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKInputFrame), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
