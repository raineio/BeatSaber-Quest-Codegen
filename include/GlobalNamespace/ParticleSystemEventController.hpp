// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ParticleSystemEventController
  class ParticleSystemEventController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventController*, "", "ParticleSystemEventController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemEventController
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleSystemEventController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ParticleSystemEventController::Pool
    class Pool;
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // [SpaceAttribute] Offset: 0x112043C
    // private System.Single _particleSystemFullDuration
    // Size: 0x4
    // Offset: 0x20
    float particleSystemFullDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <startTime>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMaxSimDelta
    static constexpr const float kMaxSimDelta = 0.033333335;
    // Get static field: static private System.Single kMaxSimDelta
    static float _get_kMaxSimDelta();
    // Set static field: static private System.Single kMaxSimDelta
    static void _set_kMaxSimDelta(float value);
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private System.Single _particleSystemFullDuration
    [[deprecated("Use field access instead!")]] float& dyn__particleSystemFullDuration();
    // Get instance field reference: private System.Single <startTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$startTime$k__BackingField();
    // public System.Single get_startTime()
    // Offset: 0x138B52C
    float get_startTime();
    // private System.Void set_startTime(System.Single value)
    // Offset: 0x138B534
    void set_startTime(float value);
    // public System.Single get_endTime()
    // Offset: 0x138A754
    float get_endTime();
    // public System.Void .ctor()
    // Offset: 0x138B53C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemEventController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ParticleSystemEventController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemEventController*, creationType>()));
    }
    // public System.Void Init(System.Single startTime)
    // Offset: 0x138B45C
    void Init(float startTime);
    // public System.Void InitSpeed(System.Single simulationSpeedMultiplier)
    // Offset: 0x138B258
    void InitSpeed(float simulationSpeedMultiplier);
    // public System.Void Play()
    // Offset: 0x138B028
    void Play();
    // public System.Void Pause()
    // Offset: 0x138AEF4
    void Pause();
    // public System.Void Stop()
    // Offset: 0x138B2A0
    void Stop();
    // public System.Void ManualUpdate(System.Single time, System.Single deltaTime)
    // Offset: 0x138A760
    void ManualUpdate(float time, float deltaTime);
  }; // ParticleSystemEventController
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemEventController), 36 + sizeof(float)> __GlobalNamespace_ParticleSystemEventControllerSizeCheck;
  static_assert(sizeof(ParticleSystemEventController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ParticleSystemEventController::*)()>(&GlobalNamespace::ParticleSystemEventController::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::set_startTime
// Il2CppName: set_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)(float)>(&GlobalNamespace::ParticleSystemEventController::set_startTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "set_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::get_endTime
// Il2CppName: get_endTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ParticleSystemEventController::*)()>(&GlobalNamespace::ParticleSystemEventController::get_endTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "get_endTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)(float)>(&GlobalNamespace::ParticleSystemEventController::Init)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::InitSpeed
// Il2CppName: InitSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)(float)>(&GlobalNamespace::ParticleSystemEventController::InitSpeed)> {
  static const MethodInfo* get() {
    static auto* simulationSpeedMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "InitSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{simulationSpeedMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)()>(&GlobalNamespace::ParticleSystemEventController::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)()>(&GlobalNamespace::ParticleSystemEventController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)()>(&GlobalNamespace::ParticleSystemEventController::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventController::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventController::*)(float, float)>(&GlobalNamespace::ParticleSystemEventController::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventController*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, deltaTime});
  }
};
