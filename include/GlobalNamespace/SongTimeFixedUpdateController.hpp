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
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SongTimeFixedUpdateController
  class SongTimeFixedUpdateController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongTimeFixedUpdateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeFixedUpdateController*, "", "SongTimeFixedUpdateController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SongTimeFixedUpdateController
  // [TokenAttribute] Offset: FFFFFFFF
  class SongTimeFixedUpdateController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10CF70C
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private System.Action`1<System.Single> songControllerFixedTimeDidUpdateEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<float>* songControllerFixedTimeDidUpdateEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private System.Action songControllerTimeDidUpdateEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* songControllerTimeDidUpdateEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Single _accumulator
    // Size: 0x4
    // Offset: 0x30
    float accumulator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _interpolationFactor
    // Size: 0x4
    // Offset: 0x34
    float interpolationFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kFixedDeltaTime
    static constexpr const float kFixedDeltaTime = 0.016666668;
    // Get static field: static private System.Single kFixedDeltaTime
    static float _get_kFixedDeltaTime();
    // Set static field: static private System.Single kFixedDeltaTime
    static void _set_kFixedDeltaTime(float value);
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private System.Action`1<System.Single> songControllerFixedTimeDidUpdateEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_songControllerFixedTimeDidUpdateEvent();
    // Get instance field reference: private System.Action songControllerTimeDidUpdateEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_songControllerTimeDidUpdateEvent();
    // Get instance field reference: private System.Single _accumulator
    [[deprecated("Use field access instead!")]] float& dyn__accumulator();
    // Get instance field reference: private System.Single _interpolationFactor
    [[deprecated("Use field access instead!")]] float& dyn__interpolationFactor();
    // public System.Single get_fixedDeltaTime()
    // Offset: 0x138FE1C
    float get_fixedDeltaTime();
    // public System.Single get_interpolationFactor()
    // Offset: 0x138FE28
    float get_interpolationFactor();
    // public System.Void add_songControllerFixedTimeDidUpdateEvent(System.Action`1<System.Single> value)
    // Offset: 0x138FB8C
    void add_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float>* value);
    // public System.Void remove_songControllerFixedTimeDidUpdateEvent(System.Action`1<System.Single> value)
    // Offset: 0x138FC30
    void remove_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float>* value);
    // public System.Void add_songControllerTimeDidUpdateEvent(System.Action value)
    // Offset: 0x138FCD4
    void add_songControllerTimeDidUpdateEvent(::System::Action* value);
    // public System.Void remove_songControllerTimeDidUpdateEvent(System.Action value)
    // Offset: 0x138FD78
    void remove_songControllerTimeDidUpdateEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x138FF88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongTimeFixedUpdateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongTimeFixedUpdateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongTimeFixedUpdateController*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x138FE30
    void Update();
  }; // SongTimeFixedUpdateController
  #pragma pack(pop)
  static check_size<sizeof(SongTimeFixedUpdateController), 52 + sizeof(float)> __GlobalNamespace_SongTimeFixedUpdateControllerSizeCheck;
  static_assert(sizeof(SongTimeFixedUpdateController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::get_fixedDeltaTime
// Il2CppName: get_fixedDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongTimeFixedUpdateController::*)()>(&GlobalNamespace::SongTimeFixedUpdateController::get_fixedDeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "get_fixedDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::get_interpolationFactor
// Il2CppName: get_interpolationFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongTimeFixedUpdateController::*)()>(&GlobalNamespace::SongTimeFixedUpdateController::get_interpolationFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "get_interpolationFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::add_songControllerFixedTimeDidUpdateEvent
// Il2CppName: add_songControllerFixedTimeDidUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeFixedUpdateController::*)(::System::Action_1<float>*)>(&GlobalNamespace::SongTimeFixedUpdateController::add_songControllerFixedTimeDidUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "add_songControllerFixedTimeDidUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::remove_songControllerFixedTimeDidUpdateEvent
// Il2CppName: remove_songControllerFixedTimeDidUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeFixedUpdateController::*)(::System::Action_1<float>*)>(&GlobalNamespace::SongTimeFixedUpdateController::remove_songControllerFixedTimeDidUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "remove_songControllerFixedTimeDidUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::add_songControllerTimeDidUpdateEvent
// Il2CppName: add_songControllerTimeDidUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeFixedUpdateController::*)(::System::Action*)>(&GlobalNamespace::SongTimeFixedUpdateController::add_songControllerTimeDidUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "add_songControllerTimeDidUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::remove_songControllerTimeDidUpdateEvent
// Il2CppName: remove_songControllerTimeDidUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeFixedUpdateController::*)(::System::Action*)>(&GlobalNamespace::SongTimeFixedUpdateController::remove_songControllerTimeDidUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "remove_songControllerTimeDidUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongTimeFixedUpdateController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeFixedUpdateController::*)()>(&GlobalNamespace::SongTimeFixedUpdateController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeFixedUpdateController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
