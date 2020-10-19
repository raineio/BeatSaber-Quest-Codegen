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
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Vector4
  struct Vector4 : public System::ValueType, public System::IEquatable_1<UnityEngine::Vector4> {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // public System.Single w
    // Offset: 0xC
    float w;
    // Creating value type constructor for type: Vector4
    constexpr Vector4(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Get static field: static private readonly UnityEngine.Vector4 zeroVector
    static UnityEngine::Vector4 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector4 zeroVector
    static void _set_zeroVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 oneVector
    static UnityEngine::Vector4 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector4 oneVector
    static void _set_oneVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static UnityEngine::Vector4 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static UnityEngine::Vector4 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector4 value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xC75894
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xC7589C
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xC758A4
    // ABORTED: conflicts with another method.  Vector4(float x, float y, float z, float w);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0xC758B0
    Vector4(float x, float y, float z);
    // public System.Void Normalize()
    // Offset: 0xC7590C
    void Normalize();
    // static public System.Single Dot(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x17428C0
    static float Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b);
    // static public System.Single Magnitude(UnityEngine.Vector4 a)
    // Offset: 0x1742764
    static float Magnitude(UnityEngine::Vector4 a);
    // public System.Single get_magnitude()
    // Offset: 0xC75914
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0xC7591C
    float get_sqrMagnitude();
    // static public UnityEngine.Vector4 get_zero()
    // Offset: 0x1742854
    static UnityEngine::Vector4 get_zero();
    // static public UnityEngine.Vector4 get_one()
    // Offset: 0x1742A4C
    static UnityEngine::Vector4 get_one();
    // public System.String ToString(System.String format)
    // Offset: 0xC7592C
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Void .cctor()
    // Offset: 0x1743060
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xC758C0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xC758C8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Vector4 other)
    // Offset: 0xC758D0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Vector4 other)
    bool Equals(UnityEngine::Vector4 other);
    // public override System.String ToString()
    // Offset: 0xC75924
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector4
  // static public UnityEngine.Vector4 op_Addition(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x1742AB8
  UnityEngine::Vector4 operator+(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Subtraction(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x1742ACC
  UnityEngine::Vector4 operator-(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x1742AE0
  UnityEngine::Vector4 operator*(const UnityEngine::Vector4& a, const float& d);
  // static public UnityEngine.Vector4 op_Division(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x1742840
  UnityEngine::Vector4 operator/(const UnityEngine::Vector4& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x1742AF4
  bool operator ==(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x1742B34
  bool operator !=(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector4, "UnityEngine", "Vector4");
#pragma pack(pop)
