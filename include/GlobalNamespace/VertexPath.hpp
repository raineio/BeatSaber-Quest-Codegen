// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierPath
  class BezierPath;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VertexPath
  class VertexPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VertexPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexPath*, "", "VertexPath");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VertexPath
  // [TokenAttribute] Offset: FFFFFFFF
  class VertexPath : public ::Il2CppObject {
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
    // private readonly UnityEngine.Vector3[] localPoints
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> localPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private readonly UnityEngine.Vector3[] localTangents
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> localTangents;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private readonly UnityEngine.Vector3[] localNormals
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> localNormals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x28
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: length and: cumulativeLengthAtEachVertex
    char __padding3[0x4] = {};
    // private readonly System.Single[] _cumulativeLengthAtEachVertex
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> cumulativeLengthAtEachVertex;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private readonly System.Int32[] _anchorVertexMap
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> anchorVertexMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private UnityEngine.Vector3[] _segmentPoints
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector3> segmentPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10C52F0
    // Get static field: static private readonly UnityEngine.Vector3 _back
    static ::UnityEngine::Vector3 _get__back();
    // Set static field: static private readonly UnityEngine.Vector3 _back
    static void _set__back(::UnityEngine::Vector3 value);
    // Get instance field reference: private readonly UnityEngine.Vector3[] localPoints
    ::ArrayW<::UnityEngine::Vector3>& dyn_localPoints();
    // Get instance field reference: private readonly UnityEngine.Vector3[] localTangents
    ::ArrayW<::UnityEngine::Vector3>& dyn_localTangents();
    // Get instance field reference: private readonly UnityEngine.Vector3[] localNormals
    ::ArrayW<::UnityEngine::Vector3>& dyn_localNormals();
    // Get instance field reference: private System.Single _length
    float& dyn__length();
    // Get instance field reference: private readonly System.Single[] _cumulativeLengthAtEachVertex
    ::ArrayW<float>& dyn__cumulativeLengthAtEachVertex();
    // Get instance field reference: private readonly System.Int32[] _anchorVertexMap
    ::ArrayW<int>& dyn__anchorVertexMap();
    // Get instance field reference: private UnityEngine.Vector3[] _segmentPoints
    ::ArrayW<::UnityEngine::Vector3>& dyn__segmentPoints();
    // public System.Single get_length()
    // Offset: 0x1A95A28
    float get_length();
    // public System.Int32 get_numPoints()
    // Offset: 0x1A95A30
    int get_numPoints();
    // public System.Void .ctor(System.Int32 numberOfPathSegments)
    // Offset: 0x1A95A4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexPath* New_ctor(int numberOfPathSegments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VertexPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexPath*, creationType>(numberOfPathSegments)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A96A8C
    static void _cctor();
    // public System.Void UpdateByBezierPath(BezierPath bezierPath)
    // Offset: 0x1A95B48
    void UpdateByBezierPath(::GlobalNamespace::BezierPath* bezierPath);
    // public System.Single TimeAtPoint(System.Int32 pointIndex)
    // Offset: 0x1A96970
    float TimeAtPoint(int pointIndex);
    // public UnityEngine.Vector3 GetTangent(System.Int32 index)
    // Offset: 0x1A969B4
    ::UnityEngine::Vector3 GetTangent(int index);
    // public UnityEngine.Vector3 GetNormal(System.Int32 index)
    // Offset: 0x1A969FC
    ::UnityEngine::Vector3 GetNormal(int index);
    // public UnityEngine.Vector3 GetPoint(System.Int32 index)
    // Offset: 0x1A96A44
    ::UnityEngine::Vector3 GetPoint(int index);
    // private System.Void SplitBezierPathIntoFixNumberOfSegments(BezierPath bezierPath, System.Int32 numberOfVertexSegments)
    // Offset: 0x1A9637C
    void SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath* bezierPath, int numberOfVertexSegments);
  }; // VertexPath
  #pragma pack(pop)
  static check_size<sizeof(VertexPath), 64 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __GlobalNamespace_VertexPathSizeCheck;
  static_assert(sizeof(VertexPath) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VertexPath::*)()>(&GlobalNamespace::VertexPath::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::get_numPoints
// Il2CppName: get_numPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::VertexPath::*)()>(&GlobalNamespace::VertexPath::get_numPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "get_numPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::VertexPath::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::UpdateByBezierPath
// Il2CppName: UpdateByBezierPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*)>(&GlobalNamespace::VertexPath::UpdateByBezierPath)> {
  static const MethodInfo* get() {
    static auto* bezierPath = &::il2cpp_utils::GetClassFromName("", "BezierPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "UpdateByBezierPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bezierPath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::TimeAtPoint
// Il2CppName: TimeAtPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::TimeAtPoint)> {
  static const MethodInfo* get() {
    static auto* pointIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "TimeAtPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::GetTangent
// Il2CppName: GetTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::GetTangent)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "GetTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::GetNormal
// Il2CppName: GetNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::GetNormal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "GetNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::GetPoint)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments
// Il2CppName: SplitBezierPathIntoFixNumberOfSegments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*, int)>(&GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments)> {
  static const MethodInfo* get() {
    static auto* bezierPath = &::il2cpp_utils::GetClassFromName("", "BezierPath")->byval_arg;
    static auto* numberOfVertexSegments = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "SplitBezierPathIntoFixNumberOfSegments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bezierPath, numberOfVertexSegments});
  }
};