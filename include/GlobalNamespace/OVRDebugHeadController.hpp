// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRDebugHeadController
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRDebugHeadController : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Boolean AllowPitchLook
    // Size: 0x1
    // Offset: 0x18
    bool AllowPitchLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AllowYawLook
    // Size: 0x1
    // Offset: 0x19
    bool AllowYawLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean InvertPitch
    // Size: 0x1
    // Offset: 0x1A
    bool InvertPitch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InvertPitch and: GamePad_PitchDegreesPerSec
    char __padding2[0x1] = {};
    // public System.Single GamePad_PitchDegreesPerSec
    // Size: 0x4
    // Offset: 0x1C
    float GamePad_PitchDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single GamePad_YawDegreesPerSec
    // Size: 0x4
    // Offset: 0x20
    float GamePad_YawDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AllowMovement
    // Size: 0x1
    // Offset: 0x24
    bool AllowMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AllowMovement and: ForwardSpeed
    char __padding5[0x3] = {};
    // public System.Single ForwardSpeed
    // Size: 0x4
    // Offset: 0x28
    float ForwardSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single StrafeSpeed
    // Size: 0x4
    // Offset: 0x2C
    float StrafeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean AllowPitchLook
    bool& dyn_AllowPitchLook();
    // Get instance field reference: public System.Boolean AllowYawLook
    bool& dyn_AllowYawLook();
    // Get instance field reference: public System.Boolean InvertPitch
    bool& dyn_InvertPitch();
    // Get instance field reference: public System.Single GamePad_PitchDegreesPerSec
    float& dyn_GamePad_PitchDegreesPerSec();
    // Get instance field reference: public System.Single GamePad_YawDegreesPerSec
    float& dyn_GamePad_YawDegreesPerSec();
    // Get instance field reference: public System.Boolean AllowMovement
    bool& dyn_AllowMovement();
    // Get instance field reference: public System.Single ForwardSpeed
    float& dyn_ForwardSpeed();
    // Get instance field reference: public System.Single StrafeSpeed
    float& dyn_StrafeSpeed();
    // Get instance field reference: protected OVRCameraRig CameraRig
    GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // private System.Void Awake()
    // Offset: 0x13BDEEC
    void Awake();
    // private System.Void Start()
    // Offset: 0x13BDFE4
    void Start();
    // private System.Void Update()
    // Offset: 0x13BDFE8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13BE574
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDebugHeadController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRDebugHeadController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDebugHeadController*, creationType>()));
    }
  }; // OVRDebugHeadController
  #pragma pack(pop)
  static check_size<sizeof(OVRDebugHeadController), 48 + sizeof(GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRDebugHeadControllerSizeCheck;
  static_assert(sizeof(OVRDebugHeadController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugHeadController*, "", "OVRDebugHeadController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
