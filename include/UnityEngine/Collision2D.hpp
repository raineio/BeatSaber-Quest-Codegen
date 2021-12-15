// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ContactPoint2D
#include "UnityEngine/ContactPoint2D.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision2D
  class Collision2D;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Collision2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collision2D*, "UnityEngine", "Collision2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Collision2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: ED7A64
  class Collision2D : public ::Il2CppObject {
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
    // System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x10
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_OtherCollider
    // Size: 0x4
    // Offset: 0x14
    int m_OtherCollider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Rigidbody
    // Size: 0x4
    // Offset: 0x18
    int m_Rigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_OtherRigidbody
    // Size: 0x4
    // Offset: 0x1C
    int m_OtherRigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Vector2 m_RelativeVelocity
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 m_RelativeVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // System.Int32 m_Enabled
    // Size: 0x4
    // Offset: 0x28
    int m_Enabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_ContactCount
    // Size: 0x4
    // Offset: 0x2C
    int m_ContactCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.ContactPoint2D[] m_ReusedContacts
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<UnityEngine::ContactPoint2D> m_ReusedContacts;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::ContactPoint2D>) == 0x8);
    // UnityEngine.ContactPoint2D[] m_LegacyContacts
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<UnityEngine::ContactPoint2D> m_LegacyContacts;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::ContactPoint2D>) == 0x8);
    public:
    // Get instance field reference: System.Int32 m_Collider
    int& dyn_m_Collider();
    // Get instance field reference: System.Int32 m_OtherCollider
    int& dyn_m_OtherCollider();
    // Get instance field reference: System.Int32 m_Rigidbody
    int& dyn_m_Rigidbody();
    // Get instance field reference: System.Int32 m_OtherRigidbody
    int& dyn_m_OtherRigidbody();
    // Get instance field reference: UnityEngine.Vector2 m_RelativeVelocity
    UnityEngine::Vector2& dyn_m_RelativeVelocity();
    // Get instance field reference: System.Int32 m_Enabled
    int& dyn_m_Enabled();
    // Get instance field reference: System.Int32 m_ContactCount
    int& dyn_m_ContactCount();
    // Get instance field reference: UnityEngine.ContactPoint2D[] m_ReusedContacts
    ::ArrayW<UnityEngine::ContactPoint2D>& dyn_m_ReusedContacts();
    // Get instance field reference: UnityEngine.ContactPoint2D[] m_LegacyContacts
    ::ArrayW<UnityEngine::ContactPoint2D>& dyn_m_LegacyContacts();
  }; // UnityEngine.Collision2D
  #pragma pack(pop)
  static check_size<sizeof(Collision2D), 56 + sizeof(::ArrayW<UnityEngine::ContactPoint2D>)> __UnityEngine_Collision2DSizeCheck;
  static_assert(sizeof(Collision2D) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
