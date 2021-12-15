// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteDebrisDidFinishEvent
#include "GlobalNamespace/INoteDebrisDidFinishEvent.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorType
  struct ColorType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteDebrisSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDebrisSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteDebrisDidFinishEvent*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x18
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cutDirMultiplier
    // Size: 0x4
    // Offset: 0x1C
    float cutDirMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fromCenterSpeed
    // Size: 0x4
    // Offset: 0x20
    float fromCenterSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeedMultiplier
    // Size: 0x4
    // Offset: 0x24
    float moveSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xF3A444
    // private readonly NoteDebris/Pool _noteDebrisPool
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteDebris::Pool* noteDebrisPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris::Pool*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::INoteDebrisDidFinishEvent
    operator GlobalNamespace::INoteDebrisDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteDebrisDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMinLifeTime
    static constexpr const float kMinLifeTime = 0.2;
    // Get static field: static private System.Single kMinLifeTime
    static float _get_kMinLifeTime();
    // Set static field: static private System.Single kMinLifeTime
    static void _set_kMinLifeTime(float value);
    // static field const value: static private System.Single kMaxLifeTime
    static constexpr const float kMaxLifeTime = 2;
    // Get static field: static private System.Single kMaxLifeTime
    static float _get_kMaxLifeTime();
    // Set static field: static private System.Single kMaxLifeTime
    static void _set_kMaxLifeTime(float value);
    // static field const value: static private System.Single kLifeTimeOffset
    static constexpr const float kLifeTimeOffset = 0.05;
    // Get static field: static private System.Single kLifeTimeOffset
    static float _get_kLifeTimeOffset();
    // Set static field: static private System.Single kLifeTimeOffset
    static void _set_kLifeTimeOffset(float value);
    // Get instance field reference: private System.Single _rotation
    float& dyn__rotation();
    // Get instance field reference: private System.Single _cutDirMultiplier
    float& dyn__cutDirMultiplier();
    // Get instance field reference: private System.Single _fromCenterSpeed
    float& dyn__fromCenterSpeed();
    // Get instance field reference: private System.Single _moveSpeedMultiplier
    float& dyn__moveSpeedMultiplier();
    // Get instance field reference: private readonly NoteDebris/Pool _noteDebrisPool
    GlobalNamespace::NoteDebris::Pool*& dyn__noteDebrisPool();
    // public System.Void SpawnDebris(UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, System.Single saberSpeed, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 notePos, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, ColorType colorType, System.Single timeToNextColorNote, UnityEngine.Vector3 moveVec)
    // Offset: 0x133D58C
    void SpawnDebris(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, GlobalNamespace::ColorType colorType, float timeToNextColorNote, UnityEngine::Vector3 moveVec);
    // public System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0x1341400
    void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris);
    // public System.Void .ctor()
    // Offset: 0x13414E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisSpawner*, creationType>()));
    }
  }; // NoteDebrisSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisSpawner), 40 + sizeof(GlobalNamespace::NoteDebris::Pool*)> __GlobalNamespace_NoteDebrisSpawnerSizeCheck;
  static_assert(sizeof(NoteDebrisSpawner) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::SpawnDebris
// Il2CppName: SpawnDebris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, GlobalNamespace::ColorType, float, UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisSpawner::SpawnDebris)> {
  static const MethodInfo* get() {
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* saberSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saberDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* notePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* timeToNextColorNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "SpawnDebris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, noteScale, colorType, timeToNextColorNote, moveVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish
// Il2CppName: HandleNoteDebrisDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(GlobalNamespace::NoteDebris*)>(&GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish)> {
  static const MethodInfo* get() {
    static auto* noteDebris = &::il2cpp_utils::GetClassFromName("", "NoteDebris")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "HandleNoteDebrisDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteDebris});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
