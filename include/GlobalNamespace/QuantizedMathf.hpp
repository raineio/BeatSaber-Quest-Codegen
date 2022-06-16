// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuantizedMathf
  class QuantizedMathf;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuantizedMathf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuantizedMathf*, "", "QuantizedMathf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: QuantizedMathf
  // [TokenAttribute] Offset: FFFFFFFF
  class QuantizedMathf : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 kQuaternionSerializableScaleFactor
    static constexpr const int kQuaternionSerializableScaleFactor = 16383;
    // Get static field: static public System.Int32 kQuaternionSerializableScaleFactor
    static int _get_kQuaternionSerializableScaleFactor();
    // Set static field: static public System.Int32 kQuaternionSerializableScaleFactor
    static void _set_kQuaternionSerializableScaleFactor(int value);
    // static field const value: static private System.Single kQuaternionSerializableEpsilon
    static constexpr const float kQuaternionSerializableEpsilon = 6.103888e-05;
    // Get static field: static private System.Single kQuaternionSerializableEpsilon
    static float _get_kQuaternionSerializableEpsilon();
    // Set static field: static private System.Single kQuaternionSerializableEpsilon
    static void _set_kQuaternionSerializableEpsilon(float value);
    // static field const value: static private System.Int32 kVectorSerializableScaleInt
    static constexpr const int kVectorSerializableScaleInt = 1000;
    // Get static field: static private System.Int32 kVectorSerializableScaleInt
    static int _get_kVectorSerializableScaleInt();
    // Set static field: static private System.Int32 kVectorSerializableScaleInt
    static void _set_kVectorSerializableScaleInt(int value);
    // static field const value: static public System.Single kVectorSerializableScale
    static constexpr const float kVectorSerializableScale = 1000;
    // Get static field: static public System.Single kVectorSerializableScale
    static float _get_kVectorSerializableScale();
    // Set static field: static public System.Single kVectorSerializableScale
    static void _set_kVectorSerializableScale(float value);
    // static field const value: static private System.Single kVectorSerializableEpsilon
    static constexpr const float kVectorSerializableEpsilon = 0.001;
    // Get static field: static private System.Single kVectorSerializableEpsilon
    static float _get_kVectorSerializableEpsilon();
    // Set static field: static private System.Single kVectorSerializableEpsilon
    static void _set_kVectorSerializableEpsilon(float value);
    // static public System.Boolean Approximately(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x2A01E4C
    static bool Approximately(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);
    // static public System.Boolean Approximately(System.Single a, System.Single b, System.Single epsilon)
    // Offset: 0x2A02004
    static bool Approximately(float a, float b, float epsilon);
    // static public System.Boolean Approximately(System.Int32 a, System.Int32 b, System.Int32 epsilon)
    // Offset: 0x2A02088
    static bool Approximately(int a, int b, int epsilon);
    // static public System.Boolean Approximately(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x2A0210C
    static bool Approximately(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);
    // static public System.Boolean Approximately(UnityEngine.Pose a, UnityEngine.Pose b)
    // Offset: 0x2A02194
    static bool Approximately(::UnityEngine::Pose a, ::UnityEngine::Pose b);
    // static public System.String QuantizedVectorComponentToString(System.Int32 v)
    // Offset: 0x2A021EC
    static ::StringW QuantizedVectorComponentToString(int v);
  }; // QuantizedMathf
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&GlobalNamespace::QuantizedMathf::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, float)>(&GlobalNamespace::QuantizedMathf::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int)>(&GlobalNamespace::QuantizedMathf::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::QuantizedMathf::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&GlobalNamespace::QuantizedMathf::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuantizedMathf::QuantizedVectorComponentToString
// Il2CppName: QuantizedVectorComponentToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&GlobalNamespace::QuantizedMathf::QuantizedVectorComponentToString)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuantizedMathf*), "QuantizedVectorComponentToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
