// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Quaternion
  // [NativeTypeAttribute] Offset: D8F7E8
  // [DefaultMemberAttribute] Offset: D8F7E8
  // [NativeHeaderAttribute] Offset: D8F7E8
  // [UsedByNativeCodeAttribute] Offset: D8F7E8
  struct Quaternion/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Quaternion>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Quaternion
    constexpr Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Quaternion>
    operator System::IEquatable_1<UnityEngine::Quaternion>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Quaternion>*>(this);
    }
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
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0x1B2538C
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0x1B25494
    static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1B25588
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1B256B0
    static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1B257D8
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0x1B25900
    static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0x1B259F4
    static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
    // static private System.Void Internal_ToAxisAngleRad(UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1B25AEC
    static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0x1B25BF0
    static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0x1B25D04
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0x1B25E0C
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xF05ED0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Quaternion(float x, float y, float z, float w)
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0x1B24AD8
    static UnityEngine::Quaternion get_identity();
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0x1B25F58
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1B25F6C
    static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xF05EDC
    void SetLookRotation(UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xF05EE4
    void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1B261A8
    static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0x1B262B8
    static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xF05EEC
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xF05EF4
    void set_eulerAngles(UnityEngine::Vector3 value);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1B26504
    static UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0x1B265F8
    static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler);
    // public System.Void ToAngleAxis(out System.Single angle, out UnityEngine.Vector3 axis)
    // Offset: 0xF05EFC
    void ToAngleAxis(float& angle, UnityEngine::Vector3& axis);
    // static public UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
    // Offset: 0x1B2677C
    static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x1B268EC
    static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
    // public System.Void Normalize()
    // Offset: 0xF05F04
    void Normalize();
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xF05F1C
    bool Equals(UnityEngine::Quaternion other);
    // static private System.Void .cctor()
    // Offset: 0x1B26BBC
    static void _cctor();
    // static private System.Void FromToRotation_Injected(ref UnityEngine.Vector3 fromDirection, ref UnityEngine.Vector3 toDirection, out UnityEngine.Quaternion ret)
    // Offset: 0x1B2543C
    static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25538
    static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
    // static private System.Void Slerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25648
    static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void SlerpUnclamped_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25770
    static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Lerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25898
    static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_FromEulerRad_Injected(ref UnityEngine.Vector3 euler, out UnityEngine.Quaternion ret)
    // Offset: 0x1B259A4
    static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_ToEulerRad_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Vector3 ret)
    // Offset: 0x1B25A9C
    static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
    // static private System.Void Internal_ToAxisAngleRad_Injected(ref UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1B25B98
    static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle);
    // static private System.Void AngleAxis_Injected(System.Single angle, ref UnityEngine.Vector3 axis, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25CA4
    static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
    // static private System.Void LookRotation_Injected(ref UnityEngine.Vector3 forward, ref UnityEngine.Vector3 upwards, out UnityEngine.Quaternion ret)
    // Offset: 0x1B25DB4
    static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF05F0C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF05F14
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xF05F24
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Quaternion
  #pragma pack(pop)
  static check_size<sizeof(Quaternion), 12 + sizeof(float)> __UnityEngine_QuaternionSizeCheck;
  static_assert(sizeof(Quaternion) == 0x10);
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1B25EE4
  UnityEngine::Quaternion operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0x1B24638
  UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point);
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1B248B0
  bool operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1B25F8C
  bool operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
// Writing MetadataGetter for method: UnityEngine::Quaternion::FromToRotation
// Il2CppName: FromToRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Quaternion::FromToRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "FromToRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Inverse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::Slerp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SlerpUnclamped
// Il2CppName: SlerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::SlerpUnclamped)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SlerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::Lerp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_FromEulerRad
// Il2CppName: Internal_FromEulerRad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::Internal_FromEulerRad)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_FromEulerRad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToEulerRad
// Il2CppName: Internal_ToEulerRad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Internal_ToEulerRad)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToEulerRad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToAxisAngleRad
// Il2CppName: Internal_ToAxisAngleRad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion, UnityEngine::Vector3&, float&)>(&UnityEngine::Quaternion::Internal_ToAxisAngleRad)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToAxisAngleRad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::AngleAxis
// Il2CppName: AngleAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(float, UnityEngine::Vector3)>(&UnityEngine::Quaternion::AngleAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "AngleAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation
// Il2CppName: LookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Quaternion::LookRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation
// Il2CppName: LookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::LookRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Quaternion
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Quaternion::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)()>(&UnityEngine::Quaternion::get_identity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::IsEqualUsingDot
// Il2CppName: IsEqualUsingDot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&UnityEngine::Quaternion::IsEqualUsingDot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "IsEqualUsingDot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Dot
// Il2CppName: Dot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Dot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SetLookRotation
// Il2CppName: SetLookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::SetLookRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SetLookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SetLookRotation
// Il2CppName: SetLookRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Quaternion::SetLookRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SetLookRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Angle
// Il2CppName: Angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Angle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_MakePositive
// Il2CppName: Internal_MakePositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::Internal_MakePositive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_MakePositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::get_eulerAngles
// Il2CppName: get_eulerAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::get_eulerAngles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "get_eulerAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::set_eulerAngles
// Il2CppName: set_eulerAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::set_eulerAngles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "set_eulerAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Euler
// Il2CppName: Euler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(float, float, float)>(&UnityEngine::Quaternion::Euler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Euler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Euler
// Il2CppName: Euler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Vector3)>(&UnityEngine::Quaternion::Euler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Euler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::ToAngleAxis
// Il2CppName: ToAngleAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)(float&, UnityEngine::Vector3&)>(&UnityEngine::Quaternion::ToAngleAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "ToAngleAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::RotateTowards
// Il2CppName: RotateTowards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, float)>(&UnityEngine::Quaternion::RotateTowards)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "RotateTowards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Normalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::Normalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Quaternion::*)(UnityEngine::Quaternion)>(&UnityEngine::Quaternion::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Quaternion::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::FromToRotation_Injected
// Il2CppName: FromToRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::FromToRotation_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "FromToRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Inverse_Injected
// Il2CppName: Inverse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::Inverse_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Inverse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Slerp_Injected
// Il2CppName: Slerp_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::Slerp_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Slerp_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::SlerpUnclamped_Injected
// Il2CppName: SlerpUnclamped_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::SlerpUnclamped_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "SlerpUnclamped_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Lerp_Injected
// Il2CppName: Lerp_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::Lerp_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Lerp_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_FromEulerRad_Injected
// Il2CppName: Internal_FromEulerRad_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::Internal_FromEulerRad_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_FromEulerRad_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToEulerRad_Injected
// Il2CppName: Internal_ToEulerRad_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Vector3&)>(&UnityEngine::Quaternion::Internal_ToEulerRad_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToEulerRad_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Internal_ToAxisAngleRad_Injected
// Il2CppName: Internal_ToAxisAngleRad_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion&, UnityEngine::Vector3&, float&)>(&UnityEngine::Quaternion::Internal_ToAxisAngleRad_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Internal_ToAxisAngleRad_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::AngleAxis_Injected
// Il2CppName: AngleAxis_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::AngleAxis_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "AngleAxis_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::LookRotation_Injected
// Il2CppName: LookRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&UnityEngine::Quaternion::LookRotation_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "LookRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Quaternion::*)(::Il2CppObject*)>(&UnityEngine::Quaternion::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Quaternion::*)()>(&UnityEngine::Quaternion::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Quaternion), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Quaternion::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
