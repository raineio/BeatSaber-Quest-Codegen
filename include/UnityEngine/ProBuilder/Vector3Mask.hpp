// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Vector3Mask
  struct Vector3Mask : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask> {
    public:
    // private System.Byte m_Mask
    // Offset: 0x0
    uint8_t m_Mask;
    // static field const value: static private System.Byte X
    static constexpr const uint8_t X = 1u;
    // Get static field: static private System.Byte X
    static uint8_t _get_X();
    // Set static field: static private System.Byte X
    static void _set_X(uint8_t value);
    // static field const value: static private System.Byte Y
    static constexpr const uint8_t Y = 2u;
    // Get static field: static private System.Byte Y
    static uint8_t _get_Y();
    // Set static field: static private System.Byte Y
    static void _set_Y(uint8_t value);
    // static field const value: static private System.Byte Z
    static constexpr const uint8_t Z = 4u;
    // Get static field: static private System.Byte Z
    static uint8_t _get_Z();
    // Set static field: static private System.Byte Z
    static void _set_Z(uint8_t value);
    // Get static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static UnityEngine::ProBuilder::Vector3Mask _get_XYZ();
    // Set static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static void _set_XYZ(UnityEngine::ProBuilder::Vector3Mask value);
    // Creating value type constructor for type: Vector3Mask
    Vector3Mask(uint8_t m_Mask_ = {}) : m_Mask{m_Mask_} {}
    // public System.Single get_x()
    // Offset: 0xA5790C
    float get_x();
    // public System.Single get_y()
    // Offset: 0xA57924
    float get_y();
    // public System.Single get_z()
    // Offset: 0xA5793C
    float get_z();
    // public System.Void .ctor(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0xA57954
    static Vector3Mask* New_ctor(UnityEngine::Vector3 v, float epsilon);
    // public System.Void .ctor(System.Byte mask)
    // Offset: 0xA5795C
    static Vector3Mask* New_ctor(uint8_t mask);
    // public System.Int32 get_active()
    // Offset: 0xA5796C
    int get_active();
    // public System.Single get_Item(System.Int32 i)
    // Offset: 0xA57988
    float get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Single value)
    // Offset: 0xA57990
    void set_Item(int i, float value);
    // static private System.Void .cctor()
    // Offset: 0x18D5E78
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xA57964
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.Vector3Mask other)
    // Offset: 0xA57998
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.ProBuilder.Vector3Mask other)
    bool Equals(UnityEngine::ProBuilder::Vector3Mask other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA579A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA579B0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Vector3Mask
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x18D59BC
  inline UnityEngine::ProBuilder::Vector3Mask operator|(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Vector3Mask>("UnityEngine.ProBuilder", "Vector3Mask", "op_BitwiseOr", left, right));
  }
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseAnd(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x18D59C8
  inline UnityEngine::ProBuilder::Vector3Mask operator&(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Vector3Mask>("UnityEngine.ProBuilder", "Vector3Mask", "op_BitwiseAnd", left, right));
  }
  // static public UnityEngine.ProBuilder.Vector3Mask op_ExclusiveOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x18D59D4
  inline UnityEngine::ProBuilder::Vector3Mask operator^(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Vector3Mask>("UnityEngine.ProBuilder", "Vector3Mask", "op_ExclusiveOr", left, right));
  }
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.ProBuilder.Vector3Mask mask, System.Single value)
  // Offset: 0x18D59E0
  inline UnityEngine::Vector3 operator*(const UnityEngine::ProBuilder::Vector3Mask& mask, const float& value) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "Vector3Mask", "op_Multiply", mask, value));
  }
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.ProBuilder.Vector3Mask mask)
  // Offset: 0x18D5A44
  inline UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::ProBuilder::Vector3Mask& mask) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "Vector3Mask", "op_Multiply", rotation, mask));
  }
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x18D5C08
  inline bool operator ==(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "Vector3Mask", "op_Equality", left, right));
  }
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x18D5C18
  inline bool operator !=(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "Vector3Mask", "op_Inequality", left, right));
  }
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vector3Mask, "UnityEngine.ProBuilder", "Vector3Mask");
#pragma pack(pop)
