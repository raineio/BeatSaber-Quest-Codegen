// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRCursor
#include "GlobalNamespace/OVRCursor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRProgressIndicator
  class OVRProgressIndicator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: OVRGazePointer
  class OVRGazePointer : public GlobalNamespace::OVRCursor {
    public:
    // private UnityEngine.Transform gazeIcon
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* gazeIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDCFC00
    // public System.Boolean hideByDefault
    // Size: 0x1
    // Offset: 0x20
    bool hideByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideByDefault and: showTimeoutPeriod
    char __padding1[0x3] = {};
    // [TooltipAttribute] Offset: 0xDCFC38
    // public System.Single showTimeoutPeriod
    // Size: 0x4
    // Offset: 0x24
    float showTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDCFC70
    // public System.Single hideTimeoutPeriod
    // Size: 0x4
    // Offset: 0x28
    float hideTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDCFCA8
    // public System.Boolean dimOnHideRequest
    // Size: 0x1
    // Offset: 0x2C
    bool dimOnHideRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dimOnHideRequest and: depthScaleMultiplier
    char __padding4[0x3] = {};
    // [TooltipAttribute] Offset: 0xDCFCE0
    // public System.Single depthScaleMultiplier
    // Size: 0x4
    // Offset: 0x30
    float depthScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean matchNormalOnPhysicsColliders
    // Size: 0x1
    // Offset: 0x34
    bool matchNormalOnPhysicsColliders;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: matchNormalOnPhysicsColliders and: rayTransform
    char __padding6[0x3] = {};
    // public UnityEngine.Transform rayTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rayTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFD18
    // private System.Boolean <hidden>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hidden and: currentScale
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDCFD28
    // private System.Single <currentScale>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    float currentScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single depth
    // Size: 0x4
    // Offset: 0x48
    float depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single hideUntilTime
    // Size: 0x4
    // Offset: 0x4C
    float hideUntilTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 positionSetsThisFrame
    // Size: 0x4
    // Offset: 0x50
    int positionSetsThisFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single lastShowRequestTime
    // Size: 0x4
    // Offset: 0x54
    float lastShowRequestTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastHideRequestTime
    // Size: 0x4
    // Offset: 0x58
    float lastHideRequestTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastHideRequestTime and: progressIndicator
    char __padding14[0x4] = {};
    // private OVRProgressIndicator progressIndicator
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::OVRProgressIndicator* progressIndicator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRProgressIndicator*) == 0x8);
    // Creating value type constructor for type: OVRGazePointer
    OVRGazePointer(UnityEngine::Transform* gazeIcon_ = {}, bool hideByDefault_ = {}, float showTimeoutPeriod_ = {}, float hideTimeoutPeriod_ = {}, bool dimOnHideRequest_ = {}, float depthScaleMultiplier_ = {}, bool matchNormalOnPhysicsColliders_ = {}, UnityEngine::Transform* rayTransform_ = {}, bool hidden_ = {}, float currentScale_ = {}, float depth_ = {}, float hideUntilTime_ = {}, int positionSetsThisFrame_ = {}, float lastShowRequestTime_ = {}, float lastHideRequestTime_ = {}, GlobalNamespace::OVRProgressIndicator* progressIndicator_ = {}) noexcept : gazeIcon{gazeIcon_}, hideByDefault{hideByDefault_}, showTimeoutPeriod{showTimeoutPeriod_}, hideTimeoutPeriod{hideTimeoutPeriod_}, dimOnHideRequest{dimOnHideRequest_}, depthScaleMultiplier{depthScaleMultiplier_}, matchNormalOnPhysicsColliders{matchNormalOnPhysicsColliders_}, rayTransform{rayTransform_}, hidden{hidden_}, currentScale{currentScale_}, depth{depth_}, hideUntilTime{hideUntilTime_}, positionSetsThisFrame{positionSetsThisFrame_}, lastShowRequestTime{lastShowRequestTime_}, lastHideRequestTime{lastHideRequestTime_}, progressIndicator{progressIndicator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private OVRGazePointer _instance
    static GlobalNamespace::OVRGazePointer* _get__instance();
    // Set static field: static private OVRGazePointer _instance
    static void _set__instance(GlobalNamespace::OVRGazePointer* value);
    // public System.Boolean get_hidden()
    // Offset: 0x128AAD8
    bool get_hidden();
    // private System.Void set_hidden(System.Boolean value)
    // Offset: 0x128AAE0
    void set_hidden(bool value);
    // public System.Single get_currentScale()
    // Offset: 0x128AAEC
    float get_currentScale();
    // private System.Void set_currentScale(System.Single value)
    // Offset: 0x128AAF4
    void set_currentScale(float value);
    // static public OVRGazePointer get_instance()
    // Offset: 0x128AAFC
    static GlobalNamespace::OVRGazePointer* get_instance();
    // public System.Single get_visibilityStrength()
    // Offset: 0x128ACD0
    float get_visibilityStrength();
    // public System.Single get_SelectionProgress()
    // Offset: 0x128ADE0
    float get_SelectionProgress();
    // public System.Void set_SelectionProgress(System.Single value)
    // Offset: 0x128AE68
    void set_SelectionProgress(float value);
    // public System.Void Awake()
    // Offset: 0x128AEF8
    void Awake();
    // private System.Void Update()
    // Offset: 0x128B064
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x128BA80
    void LateUpdate();
    // public System.Void RequestHide()
    // Offset: 0x128BC44
    void RequestHide();
    // public System.Void RequestShow()
    // Offset: 0x128BA50
    void RequestShow();
    // private System.Void Hide()
    // Offset: 0x128B28C
    void Hide();
    // private System.Void Show()
    // Offset: 0x128B55C
    void Show();
    // public override System.Void SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x128B828
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    void SetCursorStartDest(UnityEngine::Vector3 _, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // public override System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0x128BA7C
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorRay(UnityEngine.Transform ray)
    void SetCursorRay(UnityEngine::Transform* ray);
    // public System.Void .ctor()
    // Offset: 0x128BC7C
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGazePointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGazePointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGazePointer*, creationType>()));
    }
  }; // OVRGazePointer
  #pragma pack(pop)
  static check_size<sizeof(OVRGazePointer), 96 + sizeof(GlobalNamespace::OVRProgressIndicator*)> __GlobalNamespace_OVRGazePointerSizeCheck;
  static_assert(sizeof(OVRGazePointer) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGazePointer*, "", "OVRGazePointer");
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_hidden
// Il2CppName: get_hidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_hidden)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_hidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_hidden
// Il2CppName: set_hidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(bool)>(&GlobalNamespace::OVRGazePointer::set_hidden)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_hidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_currentScale
// Il2CppName: get_currentScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_currentScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_currentScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_currentScale
// Il2CppName: set_currentScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(float)>(&GlobalNamespace::OVRGazePointer::set_currentScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_currentScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRGazePointer* (*)()>(&GlobalNamespace::OVRGazePointer::get_instance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_visibilityStrength
// Il2CppName: get_visibilityStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_visibilityStrength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_visibilityStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_SelectionProgress
// Il2CppName: get_SelectionProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_SelectionProgress)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_SelectionProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_SelectionProgress
// Il2CppName: set_SelectionProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(float)>(&GlobalNamespace::OVRGazePointer::set_SelectionProgress)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_SelectionProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::RequestHide
// Il2CppName: RequestHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::RequestHide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "RequestHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::RequestShow
// Il2CppName: RequestShow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::RequestShow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "RequestShow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Show)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::SetCursorStartDest
// Il2CppName: SetCursorStartDest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::OVRGazePointer::SetCursorStartDest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "SetCursorStartDest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::SetCursorRay
// Il2CppName: SetCursorRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(UnityEngine::Transform*)>(&GlobalNamespace::OVRGazePointer::SetCursorRay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "SetCursorRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
