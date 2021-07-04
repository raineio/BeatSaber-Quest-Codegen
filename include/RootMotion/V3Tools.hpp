// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.V3Tools
  class V3Tools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: V3Tools
    V3Tools() noexcept {}
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 fromVector, UnityEngine.Vector3 toVector, System.Single weight)
    // Offset: 0x1AB3EA0
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 fromVector, UnityEngine::Vector3 toVector, float weight);
    // static public UnityEngine.Vector3 Slerp(UnityEngine.Vector3 fromVector, UnityEngine.Vector3 toVector, System.Single weight)
    // Offset: 0x1AB3F98
    static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 fromVector, UnityEngine::Vector3 toVector, float weight);
    // static public UnityEngine.Vector3 ExtractVertical(UnityEngine.Vector3 v, UnityEngine.Vector3 verticalAxis, System.Single weight)
    // Offset: 0x1AB4090
    static UnityEngine::Vector3 ExtractVertical(UnityEngine::Vector3 v, UnityEngine::Vector3 verticalAxis, float weight);
    // static public UnityEngine.Vector3 ExtractHorizontal(UnityEngine.Vector3 v, UnityEngine.Vector3 normal, System.Single weight)
    // Offset: 0x1AB4188
    static UnityEngine::Vector3 ExtractHorizontal(UnityEngine::Vector3 v, UnityEngine::Vector3 normal, float weight);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x1AB4288
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing, out System.Boolean changed)
    // Offset: 0x1AB44AC
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing, bool& changed);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing, out System.Single clampValue)
    // Offset: 0x1AB46E8
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing, float& clampValue);
    // static public UnityEngine.Vector3 LineToPlane(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.Vector3 planeNormal, UnityEngine.Vector3 planePoint)
    // Offset: 0x1AB4938
    static UnityEngine::Vector3 LineToPlane(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint);
    // static public UnityEngine.Vector3 PointToPlane(UnityEngine.Vector3 point, UnityEngine.Vector3 planePosition, UnityEngine.Vector3 planeNormal)
    // Offset: 0x1AB4B38
    static UnityEngine::Vector3 PointToPlane(UnityEngine::Vector3 point, UnityEngine::Vector3 planePosition, UnityEngine::Vector3 planeNormal);
    // static public UnityEngine.Vector3 TransformPointUnscaled(UnityEngine.Transform t, UnityEngine.Vector3 point)
    // Offset: 0x1AB4D14
    static UnityEngine::Vector3 TransformPointUnscaled(UnityEngine::Transform* t, UnityEngine::Vector3 point);
    // static public UnityEngine.Vector3 InverseTransformPointUnscaled(UnityEngine.Transform t, UnityEngine.Vector3 point)
    // Offset: 0x1AB4E48
    static UnityEngine::Vector3 InverseTransformPointUnscaled(UnityEngine::Transform* t, UnityEngine::Vector3 point);
  }; // RootMotion.V3Tools
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::V3Tools*, "RootMotion", "V3Tools");
// Writing MetadataGetter for method: RootMotion::V3Tools::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::V3Tools::Lerp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::V3Tools::Slerp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::ExtractVertical
// Il2CppName: ExtractVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::V3Tools::ExtractVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "ExtractVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::ExtractHorizontal
// Il2CppName: ExtractHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::V3Tools::ExtractHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "ExtractHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::ClampDirection
// Il2CppName: ClampDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float, int)>(&RootMotion::V3Tools::ClampDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "ClampDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::ClampDirection
// Il2CppName: ClampDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float, int, bool&)>(&RootMotion::V3Tools::ClampDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "ClampDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::ClampDirection
// Il2CppName: ClampDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float, int, float&)>(&RootMotion::V3Tools::ClampDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "ClampDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::LineToPlane
// Il2CppName: LineToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::V3Tools::LineToPlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "LineToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::PointToPlane
// Il2CppName: PointToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::V3Tools::PointToPlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "PointToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::TransformPointUnscaled
// Il2CppName: TransformPointUnscaled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::V3Tools::TransformPointUnscaled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "TransformPointUnscaled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::V3Tools::InverseTransformPointUnscaled
// Il2CppName: InverseTransformPointUnscaled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::V3Tools::InverseTransformPointUnscaled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::V3Tools*), "InverseTransformPointUnscaled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
