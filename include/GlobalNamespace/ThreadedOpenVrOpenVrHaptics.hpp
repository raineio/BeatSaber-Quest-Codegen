// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IOpenVRHaptics
#include "GlobalNamespace/IOpenVRHaptics.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ThreadedOpenVrOpenVrHaptics
  class ThreadedOpenVrOpenVrHaptics;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ThreadedOpenVrOpenVrHaptics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ThreadedOpenVrOpenVrHaptics*, "", "ThreadedOpenVrOpenVrHaptics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ThreadedOpenVrOpenVrHaptics
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadedOpenVrOpenVrHaptics : public ::Il2CppObject/*, public GlobalNamespace::IOpenVRHaptics*/ {
    public:
    // Nested type: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData
    struct OpenVrHapticData;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: ThreadedOpenVrOpenVrHaptics/OpenVrHapticData
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct OpenVrHapticData/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public readonly System.Single endTime
      // Size: 0x4
      // Offset: 0x0
      float endTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Single strength
      // Size: 0x4
      // Offset: 0x4
      float strength;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: OpenVrHapticData
      constexpr OpenVrHapticData(float endTime_ = {}, float strength_ = {}) noexcept : endTime{endTime_}, strength{strength_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single endTime
      float& dyn_endTime();
      // Get instance field reference: public readonly System.Single strength
      float& dyn_strength();
      // public System.Void .ctor(System.Single endTime, System.Single strength)
      // Offset: 0x257FC10
      // ABORTED: conflicts with another method.  OpenVrHapticData(float endTime, float strength);
    }; // ThreadedOpenVrOpenVrHaptics/OpenVrHapticData
    #pragma pack(pop)
    static check_size<sizeof(ThreadedOpenVrOpenVrHaptics::OpenVrHapticData), 4 + sizeof(float)> __GlobalNamespace_ThreadedOpenVrOpenVrHaptics_OpenVrHapticDataSizeCheck;
    static_assert(sizeof(ThreadedOpenVrOpenVrHaptics::OpenVrHapticData) == 0x8);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Single _currentTime
    // Size: 0x4
    // Offset: 0x10
    float currentTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentTime and: hapticThread
    char __padding0[0x4] = {};
    // private System.Threading.Thread _hapticThread
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Thread* hapticThread;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private ThreadedOpenVrOpenVrHaptics/OpenVrHapticData _leftHandHaptics
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData leftHandHaptics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData) == 0x8);
    // private ThreadedOpenVrOpenVrHaptics/OpenVrHapticData _rightHandHaptics
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData rightHandHaptics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IOpenVRHaptics
    operator GlobalNamespace::IOpenVRHaptics() noexcept {
      return *reinterpret_cast<GlobalNamespace::IOpenVRHaptics*>(this);
    }
    // Get instance field reference: private System.Single _currentTime
    float& dyn__currentTime();
    // Get instance field reference: private System.Threading.Thread _hapticThread
    System::Threading::Thread*& dyn__hapticThread();
    // Get instance field reference: private ThreadedOpenVrOpenVrHaptics/OpenVrHapticData _leftHandHaptics
    GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData& dyn__leftHandHaptics();
    // Get instance field reference: private ThreadedOpenVrOpenVrHaptics/OpenVrHapticData _rightHandHaptics
    GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData& dyn__rightHandHaptics();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x257FBE4
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // private System.Void UpdateHaptics()
    // Offset: 0x257FC18
    void UpdateHaptics();
    // private System.Void UpdateHandHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x257FCE0
    void UpdateHandHaptics(UnityEngine::XR::XRNode node);
    // public System.Void Destroy()
    // Offset: 0x257FE24
    void Destroy();
    // public System.Void .ctor()
    // Offset: 0x257FB24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadedOpenVrOpenVrHaptics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ThreadedOpenVrOpenVrHaptics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadedOpenVrOpenVrHaptics*, creationType>()));
    }
  }; // ThreadedOpenVrOpenVrHaptics
  #pragma pack(pop)
  static check_size<sizeof(ThreadedOpenVrOpenVrHaptics), 40 + sizeof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData)> __GlobalNamespace_ThreadedOpenVrOpenVrHapticsSizeCheck;
  static_assert(sizeof(ThreadedOpenVrOpenVrHaptics) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ThreadedOpenVrOpenVrHaptics::OpenVrHapticData, "", "ThreadedOpenVrOpenVrHaptics/OpenVrHapticData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::TriggerHapticPulse
// Il2CppName: TriggerHapticPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThreadedOpenVrOpenVrHaptics::*)(UnityEngine::XR::XRNode, float, float, float)>(&GlobalNamespace::ThreadedOpenVrOpenVrHaptics::TriggerHapticPulse)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics*), "TriggerHapticPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, duration, strength, frequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::UpdateHaptics
// Il2CppName: UpdateHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThreadedOpenVrOpenVrHaptics::*)()>(&GlobalNamespace::ThreadedOpenVrOpenVrHaptics::UpdateHaptics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics*), "UpdateHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::UpdateHandHaptics
// Il2CppName: UpdateHandHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThreadedOpenVrOpenVrHaptics::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::ThreadedOpenVrOpenVrHaptics::UpdateHandHaptics)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics*), "UpdateHandHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThreadedOpenVrOpenVrHaptics::*)()>(&GlobalNamespace::ThreadedOpenVrOpenVrHaptics::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThreadedOpenVrOpenVrHaptics*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThreadedOpenVrOpenVrHaptics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
