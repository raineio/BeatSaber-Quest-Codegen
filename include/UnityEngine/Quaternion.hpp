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
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Quaternion
  struct Quaternion : public System::ValueType, public System::IEquatable_1<UnityEngine::Quaternion> {
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
    // Get static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static UnityEngine::Quaternion _get_identityQuaternion();
    // Set static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static void _set_identityQuaternion(UnityEngine::Quaternion value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-06;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Creating value type constructor for type: Quaternion
    Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) : x{x_}, y{y_}, z{z_}, w{w_} {}
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0x141F000
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0x141F108
    static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x141F1FC
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x141F324
    static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x141F44C
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0x141F574
    static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0x141F668
    static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
    // static private System.Void Internal_ToAxisAngleRad(UnityEngine.Quaternion q, UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x141F760
    static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0x141F864
    static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0x141F978
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0x141FA80
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xA49088
    static Quaternion* New_ctor(float x, float y, float z, float w);
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0x141FB58
    static UnityEngine::Quaternion get_identity();
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0x141FCDC
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x141FDB8
    static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xA49094
    void SetLookRotation(UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xA4909C
    void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x141FFF4
    static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0x1420100
    static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xA490A4
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xA490AC
    void set_eulerAngles(UnityEngine::Vector3 value);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0x142034C
    static UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0x1420440
    static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler);
    // public System.Void ToAngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0xA490B4
    void ToAngleAxis(float& angle, UnityEngine::Vector3& axis);
    // static public UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
    // Offset: 0x14205C4
    static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x142072C
    static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
    // static private System.Void .cctor()
    // Offset: 0x1420BA4
    static void _cctor();
    // static private System.Void FromToRotation_Injected(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, UnityEngine.Quaternion ret)
    // Offset: 0x141F0B0
    static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
    // static private System.Void Inverse_Injected(UnityEngine.Quaternion rotation, UnityEngine.Quaternion ret)
    // Offset: 0x141F1AC
    static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
    // static private System.Void Slerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x141F2BC
    static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void SlerpUnclamped_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x141F3E4
    static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Lerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x141F50C
    static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_FromEulerRad_Injected(UnityEngine.Vector3 euler, UnityEngine.Quaternion ret)
    // Offset: 0x141F618
    static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_ToEulerRad_Injected(UnityEngine.Quaternion rotation, UnityEngine.Vector3 ret)
    // Offset: 0x141F710
    static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
    // static private System.Void Internal_ToAxisAngleRad_Injected(UnityEngine.Quaternion q, UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x141F80C
    static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle);
    // static private System.Void AngleAxis_Injected(System.Single angle, UnityEngine.Vector3 axis, UnityEngine.Quaternion ret)
    // Offset: 0x141F918
    static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
    // static private System.Void LookRotation_Injected(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards, UnityEngine.Quaternion ret)
    // Offset: 0x141FA28
    static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA490BC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA490C4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xA490CC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Quaternion other)
    bool Equals(UnityEngine::Quaternion other);
    // public override System.String ToString()
    // Offset: 0xA490D4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Quaternion
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x141FBC4
  inline UnityEngine::Quaternion operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "op_Multiply", lhs, rhs));
  }
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0x141FC38
  inline UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Quaternion", "op_Multiply", rotation, point));
  }
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x141FCF0
  inline bool operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Quaternion", "op_Equality", lhs, rhs));
  }
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x141FDD8
  inline bool operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Quaternion", "op_Inequality", lhs, rhs));
  }
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
#pragma pack(pop)
