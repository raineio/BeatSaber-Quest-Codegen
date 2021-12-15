// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ContactPoint2D
  struct ContactPoint2D;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactPoint2D, "UnityEngine", "ContactPoint2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactPoint2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: ED7A74
  // [RequiredByNativeCodeAttribute] Offset: ED7A74
  // [NativeHeaderAttribute] Offset: ED7A74
  struct ContactPoint2D/*, public System::ValueType*/ {
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
    // [NativeNameAttribute] Offset: 0xED7F38
    // private UnityEngine.Vector2 m_Point
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 m_Point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xED7F70
    // private UnityEngine.Vector2 m_Normal
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Vector2 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xED7FA8
    // private UnityEngine.Vector2 m_RelativeVelocity
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 m_RelativeVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xED7FE0
    // private System.Single m_Separation
    // Size: 0x4
    // Offset: 0x18
    float m_Separation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xED8018
    // private System.Single m_NormalImpulse
    // Size: 0x4
    // Offset: 0x1C
    float m_NormalImpulse;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xED8050
    // private System.Single m_TangentImpulse
    // Size: 0x4
    // Offset: 0x20
    float m_TangentImpulse;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xED8088
    // private System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x24
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xED80C0
    // private System.Int32 m_OtherCollider
    // Size: 0x4
    // Offset: 0x28
    int m_OtherCollider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xED80F8
    // private System.Int32 m_Rigidbody
    // Size: 0x4
    // Offset: 0x2C
    int m_Rigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xED8130
    // private System.Int32 m_OtherRigidbody
    // Size: 0x4
    // Offset: 0x30
    int m_OtherRigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xED8168
    // private System.Int32 m_Enabled
    // Size: 0x4
    // Offset: 0x34
    int m_Enabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ContactPoint2D
    constexpr ContactPoint2D(UnityEngine::Vector2 m_Point_ = {}, UnityEngine::Vector2 m_Normal_ = {}, UnityEngine::Vector2 m_RelativeVelocity_ = {}, float m_Separation_ = {}, float m_NormalImpulse_ = {}, float m_TangentImpulse_ = {}, int m_Collider_ = {}, int m_OtherCollider_ = {}, int m_Rigidbody_ = {}, int m_OtherRigidbody_ = {}, int m_Enabled_ = {}) noexcept : m_Point{m_Point_}, m_Normal{m_Normal_}, m_RelativeVelocity{m_RelativeVelocity_}, m_Separation{m_Separation_}, m_NormalImpulse{m_NormalImpulse_}, m_TangentImpulse{m_TangentImpulse_}, m_Collider{m_Collider_}, m_OtherCollider{m_OtherCollider_}, m_Rigidbody{m_Rigidbody_}, m_OtherRigidbody{m_OtherRigidbody_}, m_Enabled{m_Enabled_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector2 m_Point
    UnityEngine::Vector2& dyn_m_Point();
    // Get instance field reference: private UnityEngine.Vector2 m_Normal
    UnityEngine::Vector2& dyn_m_Normal();
    // Get instance field reference: private UnityEngine.Vector2 m_RelativeVelocity
    UnityEngine::Vector2& dyn_m_RelativeVelocity();
    // Get instance field reference: private System.Single m_Separation
    float& dyn_m_Separation();
    // Get instance field reference: private System.Single m_NormalImpulse
    float& dyn_m_NormalImpulse();
    // Get instance field reference: private System.Single m_TangentImpulse
    float& dyn_m_TangentImpulse();
    // Get instance field reference: private System.Int32 m_Collider
    int& dyn_m_Collider();
    // Get instance field reference: private System.Int32 m_OtherCollider
    int& dyn_m_OtherCollider();
    // Get instance field reference: private System.Int32 m_Rigidbody
    int& dyn_m_Rigidbody();
    // Get instance field reference: private System.Int32 m_OtherRigidbody
    int& dyn_m_OtherRigidbody();
    // Get instance field reference: private System.Int32 m_Enabled
    int& dyn_m_Enabled();
  }; // UnityEngine.ContactPoint2D
  #pragma pack(pop)
  static check_size<sizeof(ContactPoint2D), 52 + sizeof(int)> __UnityEngine_ContactPoint2DSizeCheck;
  static_assert(sizeof(ContactPoint2D) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
