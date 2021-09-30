// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinQuality
  struct SkinQuality;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinnedMeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E714C0
  class SkinnedMeshRenderer : public UnityEngine::Renderer {
    public:
    // public UnityEngine.SkinQuality get_quality()
    // Offset: 0x233E71C
    UnityEngine::SkinQuality get_quality();
    // public System.Void set_quality(UnityEngine.SkinQuality value)
    // Offset: 0x233E75C
    void set_quality(UnityEngine::SkinQuality value);
    // public System.Boolean get_updateWhenOffscreen()
    // Offset: 0x233E7AC
    bool get_updateWhenOffscreen();
    // public System.Void set_updateWhenOffscreen(System.Boolean value)
    // Offset: 0x233E7EC
    void set_updateWhenOffscreen(bool value);
    // public System.Boolean get_forceMatrixRecalculationPerRender()
    // Offset: 0x233E83C
    bool get_forceMatrixRecalculationPerRender();
    // public System.Void set_forceMatrixRecalculationPerRender(System.Boolean value)
    // Offset: 0x233E87C
    void set_forceMatrixRecalculationPerRender(bool value);
    // public UnityEngine.Transform get_rootBone()
    // Offset: 0x233E8CC
    UnityEngine::Transform* get_rootBone();
    // public System.Void set_rootBone(UnityEngine.Transform value)
    // Offset: 0x233E90C
    void set_rootBone(UnityEngine::Transform* value);
    // public UnityEngine.Transform[] get_bones()
    // Offset: 0x233E95C
    ::ArrayW<UnityEngine::Transform*> get_bones();
    // public System.Void set_bones(UnityEngine.Transform[] value)
    // Offset: 0x233E99C
    void set_bones(::ArrayW<UnityEngine::Transform*> value);
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x233E9EC
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x233EA2C
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Boolean get_skinnedMotionVectors()
    // Offset: 0x233EA7C
    bool get_skinnedMotionVectors();
    // public System.Void set_skinnedMotionVectors(System.Boolean value)
    // Offset: 0x233EABC
    void set_skinnedMotionVectors(bool value);
    // public UnityEngine.Bounds get_localBounds()
    // Offset: 0x233ED68
    UnityEngine::Bounds get_localBounds();
    // public System.Void set_localBounds(UnityEngine.Bounds value)
    // Offset: 0x233EDE8
    void set_localBounds(UnityEngine::Bounds value);
    // public System.Single GetBlendShapeWeight(System.Int32 index)
    // Offset: 0x233EB0C
    float GetBlendShapeWeight(int index);
    // public System.Void SetBlendShapeWeight(System.Int32 index, System.Single value)
    // Offset: 0x233EB5C
    void SetBlendShapeWeight(int index, float value);
    // public System.Void BakeMesh(UnityEngine.Mesh mesh)
    // Offset: 0x233EBBC
    void BakeMesh(UnityEngine::Mesh* mesh);
    // private UnityEngine.Bounds GetLocalAABB()
    // Offset: 0x233EC0C
    UnityEngine::Bounds GetLocalAABB();
    // private System.Void SetLocalAABB(UnityEngine.Bounds b)
    // Offset: 0x233ECC8
    void SetLocalAABB(UnityEngine::Bounds b);
    // private System.Void GetLocalAABB_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x233EC78
    void GetLocalAABB_Injected(ByRef<UnityEngine::Bounds> ret);
    // private System.Void SetLocalAABB_Injected(ref UnityEngine.Bounds b)
    // Offset: 0x233ED18
    void SetLocalAABB_Injected(ByRef<UnityEngine::Bounds> b);
    // public System.Void .ctor()
    // Offset: 0x233EE48
    // Implemented from: UnityEngine.Renderer
    // Base method: System.Void Renderer::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinnedMeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SkinnedMeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinnedMeshRenderer*, creationType>()));
    }
  }; // UnityEngine.SkinnedMeshRenderer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_quality
// Il2CppName: get_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SkinQuality (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_quality)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_quality
// Il2CppName: set_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::SkinQuality)>(&UnityEngine::SkinnedMeshRenderer::set_quality)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinQuality")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen
// Il2CppName: get_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen
// Il2CppName: set_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender
// Il2CppName: get_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender
// Il2CppName: set_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_rootBone
// Il2CppName: get_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_rootBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_rootBone
// Il2CppName: set_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Transform*)>(&UnityEngine::SkinnedMeshRenderer::set_rootBone)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_bones
// Il2CppName: get_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Transform*> (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_bones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_bones
// Il2CppName: set_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::ArrayW<UnityEngine::Transform*>)>(&UnityEngine::SkinnedMeshRenderer::set_bones)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_sharedMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::set_sharedMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors
// Il2CppName: get_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors
// Il2CppName: set_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_localBounds
// Il2CppName: get_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_localBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_localBounds
// Il2CppName: set_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::set_localBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight
// Il2CppName: GetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SkinnedMeshRenderer::*)(int)>(&UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight
// Il2CppName: SetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(int, float)>(&UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::BakeMesh
// Il2CppName: BakeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "BakeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetLocalAABB
// Il2CppName: GetLocalAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetLocalAABB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetLocalAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB
// Il2CppName: SetLocalAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetLocalAABB_Injected
// Il2CppName: GetLocalAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(ByRef<UnityEngine::Bounds>)>(&UnityEngine::SkinnedMeshRenderer::GetLocalAABB_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetLocalAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected
// Il2CppName: SetLocalAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(ByRef<UnityEngine::Bounds>)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
