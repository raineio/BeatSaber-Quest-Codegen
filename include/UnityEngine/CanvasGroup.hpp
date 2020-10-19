// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CanvasGroup
  class CanvasGroup : public UnityEngine::Behaviour, public UnityEngine::ICanvasRaycastFilter {
    public:
    // public System.Single get_alpha()
    // Offset: 0x1F6DBC4
    float get_alpha();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x1F6DC04
    void set_alpha(float value);
    // public System.Boolean get_interactable()
    // Offset: 0x1F6DC54
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x1F6DC94
    void set_interactable(bool value);
    // public System.Boolean get_blocksRaycasts()
    // Offset: 0x1F6DCE4
    bool get_blocksRaycasts();
    // public System.Void set_blocksRaycasts(System.Boolean value)
    // Offset: 0x1F6DD24
    void set_blocksRaycasts(bool value);
    // public System.Boolean get_ignoreParentGroups()
    // Offset: 0x1F6DD74
    bool get_ignoreParentGroups();
    // public System.Void set_ignoreParentGroups(System.Boolean value)
    // Offset: 0x1F6DDB4
    void set_ignoreParentGroups(bool value);
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x1F6DE04
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
  }; // UnityEngine.CanvasGroup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
#pragma pack(pop)
