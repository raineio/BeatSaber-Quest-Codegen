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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteJump
  class NoteJump;
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteJumpStartScaleUp
  class NoteJumpStartScaleUp;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteJumpStartScaleUp);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpStartScaleUp*, "", "NoteJumpStartScaleUp");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NoteJumpStartScaleUp
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteJumpStartScaleUp : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteControllerDidInitEvent*/ {
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
    // private System.Single _fullScaleJumpPart
    // Size: 0x4
    // Offset: 0x18
    float fullScaleJumpPart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fullScaleJumpPart and: targetTransform
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xF39B5C
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private NoteController _noteController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteController* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteController*) == 0x8);
    // private NoteJump _noteJump
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NoteJump* noteJump;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteJump*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerDidInitEvent
    operator GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _fullScaleJumpPart
    float& dyn__fullScaleJumpPart();
    // Get instance field reference: private UnityEngine.Transform _targetTransform
    UnityEngine::Transform*& dyn__targetTransform();
    // Get instance field reference: private NoteController _noteController
    GlobalNamespace::NoteController*& dyn__noteController();
    // Get instance field reference: private NoteJump _noteJump
    GlobalNamespace::NoteJump*& dyn__noteJump();
    // protected System.Void Awake()
    // Offset: 0x1343460
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x13436F0
    void OnDestroy();
    // private System.Void UpdateScale(System.Single progress)
    // Offset: 0x1343534
    void UpdateScale(float progress);
    // private System.Void HandleNoteJumpDidUpdateProgress(System.Single progress)
    // Offset: 0x1343884
    void HandleNoteJumpDidUpdateProgress(float progress);
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x1343888
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void .ctor()
    // Offset: 0x134395C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteJumpStartScaleUp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteJumpStartScaleUp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteJumpStartScaleUp*, creationType>()));
    }
  }; // NoteJumpStartScaleUp
  #pragma pack(pop)
  static check_size<sizeof(NoteJumpStartScaleUp), 48 + sizeof(GlobalNamespace::NoteJump*)> __GlobalNamespace_NoteJumpStartScaleUpSizeCheck;
  static_assert(sizeof(NoteJumpStartScaleUp) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartScaleUp::*)()>(&GlobalNamespace::NoteJumpStartScaleUp::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartScaleUp*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartScaleUp::*)()>(&GlobalNamespace::NoteJumpStartScaleUp::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartScaleUp*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::UpdateScale
// Il2CppName: UpdateScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartScaleUp::*)(float)>(&GlobalNamespace::NoteJumpStartScaleUp::UpdateScale)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartScaleUp*), "UpdateScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::HandleNoteJumpDidUpdateProgress
// Il2CppName: HandleNoteJumpDidUpdateProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartScaleUp::*)(float)>(&GlobalNamespace::NoteJumpStartScaleUp::HandleNoteJumpDidUpdateProgress)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartScaleUp*), "HandleNoteJumpDidUpdateProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartScaleUp::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::NoteJumpStartScaleUp::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartScaleUp*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartScaleUp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
