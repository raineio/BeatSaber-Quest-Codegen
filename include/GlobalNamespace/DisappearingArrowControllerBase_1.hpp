// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IGameNoteControllerInitializable`1<T>
  template<typename T>
  class IGameNoteControllerInitializable_1;
  // Forward declaring type: IGameNoteTypeProvider
  class IGameNoteTypeProvider;
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
  // Forward declaring type: NoteMovement
  class NoteMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DisappearingArrowControllerBase`1
  template<typename T>
  class DisappearingArrowControllerBase_1 : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.SpriteRenderer[] _spriteRenderers
    // Offset: 0x0
    ::Array<UnityEngine::SpriteRenderer*>* spriteRenderers;
    // private UnityEngine.MeshRenderer _cubeMeshRenderer
    // Offset: 0x0
    UnityEngine::MeshRenderer* cubeMeshRenderer;
    // private CutoutEffect _arrowCutoutEffect
    // Offset: 0x0
    GlobalNamespace::CutoutEffect* arrowCutoutEffect;
    // private NoteMovement _noteMovement
    // Offset: 0x0
    GlobalNamespace::NoteMovement* noteMovement;
    // private System.Single _disappearingNormalStart
    // Offset: 0x0
    float disappearingNormalStart;
    // private System.Single _disappearingNormalEnd
    // Offset: 0x0
    float disappearingNormalEnd;
    // private System.Single _disappearingGhostStart
    // Offset: 0x0
    float disappearingGhostStart;
    // private System.Single _disappearingGhostEnd
    // Offset: 0x0
    float disappearingGhostEnd;
    // private System.Single[] _initialSpriteAlphas
    // Offset: 0x0
    ::Array<float>* initialSpriteAlphas;
    // private System.Single _prevArrowTransparency
    // Offset: 0x0
    float prevArrowTransparency;
    // private System.Single _minDistance
    // Offset: 0x0
    float minDistance;
    // private System.Single _maxDistance
    // Offset: 0x0
    float maxDistance;
    // private System.Boolean _hideMesh
    // Offset: 0x0
    bool hideMesh;
    // private System.Boolean _fadeArrow
    // Offset: 0x0
    bool fadeArrow;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected T get_gameNoteController()
    // Offset: 0xFFFFFFFF
    T get_gameNoteController() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("get_gameNoteController");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<T>(), "get_gameNoteController", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("Awake");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Awake", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("OnDestroy");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void CalculateMinMaxDistance()
    // Offset: 0xFFFFFFFF
    void CalculateMinMaxDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("CalculateMinMaxDistance");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CalculateMinMaxDistance", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandleNoteMovementNoteDidMoveInJumpPhase()
    // Offset: 0xFFFFFFFF
    void HandleNoteMovementNoteDidMoveInJumpPhase() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("HandleNoteMovementNoteDidMoveInJumpPhase");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleNoteMovementNoteDidMoveInJumpPhase", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandleGameNoteControllerDidInit(T gameNoteController)
    // Offset: 0xFFFFFFFF
    void HandleGameNoteControllerDidInit(T gameNoteController) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("HandleGameNoteControllerDidInit");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleGameNoteControllerDidInit", {}, ::il2cpp_utils::ExtractTypes(gameNoteController)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, gameNoteController);
    }
    // private System.Void SetArrowTransparency(System.Single arrowTransparency)
    // Offset: 0xFFFFFFFF
    void SetArrowTransparency(float arrowTransparency) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext("SetArrowTransparency");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetArrowTransparency", {}, ::il2cpp_utils::ExtractTypes(arrowTransparency)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arrowTransparency);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DisappearingArrowControllerBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DisappearingArrowControllerBase_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<DisappearingArrowControllerBase_1<T>*>());
    }
  }; // DisappearingArrowControllerBase`1
  // Could not write size check! Type: DisappearingArrowControllerBase`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
#pragma pack(pop)