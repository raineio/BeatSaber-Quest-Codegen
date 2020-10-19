// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Rigidbody2D
  class Rigidbody2D : public UnityEngine::Component {
    public:
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x1F72D08
    UnityEngine::Vector2 get_position();
    // public UnityEngine.Vector2 get_velocity()
    // Offset: 0x1F72DB0
    UnityEngine::Vector2 get_velocity();
    // public System.Void set_velocity(UnityEngine.Vector2 value)
    // Offset: 0x1F72E58
    void set_velocity(UnityEngine::Vector2 value);
    // public System.Void Sleep()
    // Offset: 0x1F72EFC
    void Sleep();
    // private System.Void get_position_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1F72D60
    void get_position_Injected(UnityEngine::Vector2& ret);
    // private System.Void get_velocity_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1F72E08
    void get_velocity_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1F72EAC
    void set_velocity_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.Rigidbody2D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
#pragma pack(pop)
