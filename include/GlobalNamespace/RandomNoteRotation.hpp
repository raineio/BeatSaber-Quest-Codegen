// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteControllerDidInitEvent
#include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RandomNoteRotation
  class RandomNoteRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RandomNoteRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomNoteRotation*, "", "RandomNoteRotation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RandomNoteRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomNoteRotation : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::INoteControllerDidInitEvent*/ {
    public:
    public:
    // private NoteControllerBase _noteController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::NoteControllerBase* noteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteControllerBase*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteControllerDidInitEvent
    operator ::GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Creating interface conversion operator: i_INoteControllerDidInitEvent
    inline ::GlobalNamespace::INoteControllerDidInitEvent* i_INoteControllerDidInitEvent() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private NoteControllerBase _noteController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteControllerBase*& dyn__noteController();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public System.Void .ctor()
    // Offset: 0x142C4F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomNoteRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RandomNoteRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomNoteRotation*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x142C2F0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x142C3B8
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x142C4C4
    void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);
  }; // RandomNoteRotation
  #pragma pack(pop)
  static check_size<sizeof(RandomNoteRotation), 32 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_RandomNoteRotationSizeCheck;
  static_assert(sizeof(RandomNoteRotation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomNoteRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RandomNoteRotation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomNoteRotation::*)()>(&GlobalNamespace::RandomNoteRotation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomNoteRotation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomNoteRotation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomNoteRotation::*)()>(&GlobalNamespace::RandomNoteRotation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomNoteRotation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomNoteRotation::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomNoteRotation::*)(::GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::RandomNoteRotation::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomNoteRotation*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
