// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.VerticalScrollIndicator
  class VerticalScrollIndicator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _handle
    // Offset: 0x18
    UnityEngine::RectTransform* handle;
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // private UnityEngine.AnimationClip _disabledAnimationClip
    // Offset: 0x28
    UnityEngine::AnimationClip* disabledAnimationClip;
    // private System.Single _padding
    // Offset: 0x30
    float padding;
    // private System.Single _progress
    // Offset: 0x34
    float progress;
    // private System.Single _normalizedPageHeight
    // Offset: 0x38
    float normalizedPageHeight;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_progress(System.Single value)
    // Offset: 0x1EDF52C
    void set_progress(float value);
    // public System.Single get_progress()
    // Offset: 0x1EDF6F0
    float get_progress();
    // public System.Void set_normalizedPageHeight(System.Single value)
    // Offset: 0x1EDF6F8
    void set_normalizedPageHeight(float value);
    // public System.Single get_normalizedPageHeight()
    // Offset: 0x1EDF794
    float get_normalizedPageHeight();
    // public System.Void set_disabled(System.Boolean value)
    // Offset: 0x1EDF79C
    void set_disabled(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x1EDF7E8
    void OnEnable();
    // private System.Void RefreshHandle()
    // Offset: 0x1EDF5C8
    void RefreshHandle();
    // public System.Void .ctor()
    // Offset: 0x1EDF7EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VerticalScrollIndicator* New_ctor();
  }; // HMUI.VerticalScrollIndicator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::VerticalScrollIndicator*, "HMUI", "VerticalScrollIndicator");
#pragma pack(pop)
