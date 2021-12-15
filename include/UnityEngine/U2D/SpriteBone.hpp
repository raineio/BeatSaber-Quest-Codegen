// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteBone
  struct SpriteBone;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteBone, "UnityEngine.U2D", "SpriteBone");
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.U2D.SpriteBone
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EB5874
  // [RequiredByNativeCodeAttribute] Offset: EB5874
  // [NativeHeaderAttribute] Offset: EB5874
  // [NativeTypeAttribute] Offset: EB5874
  // [MovedFromAttribute] Offset: EB5874
  struct SpriteBone/*, public System::ValueType*/ {
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
    // [NativeNameAttribute] Offset: 0xEB887C
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xEB88C8
    // private UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x8
    UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xEB8914
    // private UnityEngine.Quaternion m_Rotation
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Quaternion m_Rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [NativeNameAttribute] Offset: 0xEB8960
    // private System.Single m_Length
    // Size: 0x4
    // Offset: 0x24
    float m_Length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEB89AC
    // private System.Int32 m_ParentId
    // Size: 0x4
    // Offset: 0x28
    int m_ParentId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpriteBone
    constexpr SpriteBone(::Il2CppString* m_Name_ = {}, UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Quaternion m_Rotation_ = {}, float m_Length_ = {}, int m_ParentId_ = {}) noexcept : m_Name{m_Name_}, m_Position{m_Position_}, m_Rotation{m_Rotation_}, m_Length{m_Length_}, m_ParentId{m_ParentId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_Name
    ::Il2CppString*& dyn_m_Name();
    // Get instance field reference: private UnityEngine.Vector3 m_Position
    UnityEngine::Vector3& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Quaternion m_Rotation
    UnityEngine::Quaternion& dyn_m_Rotation();
    // Get instance field reference: private System.Single m_Length
    float& dyn_m_Length();
    // Get instance field reference: private System.Int32 m_ParentId
    int& dyn_m_ParentId();
  }; // UnityEngine.U2D.SpriteBone
  #pragma pack(pop)
  static check_size<sizeof(SpriteBone), 40 + sizeof(int)> __UnityEngine_U2D_SpriteBoneSizeCheck;
  static_assert(sizeof(SpriteBone) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
