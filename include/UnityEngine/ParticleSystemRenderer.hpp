// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EA38A8
  // [NativeHeaderAttribute] Offset: EA38A8
  // [NativeHeaderAttribute] Offset: EA38A8
  // [RequireComponent] Offset: EA38A8
  class ParticleSystemRenderer : public UnityEngine::Renderer {
    public:
    // public System.Int32 GetMeshes(out UnityEngine.Mesh[] meshes)
    // Offset: 0x261D744
    int GetMeshes(ByRef<::ArrayW<UnityEngine::Mesh*>> meshes);
  }; // UnityEngine.ParticleSystemRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystemRenderer::GetMeshes
// Il2CppName: GetMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystemRenderer::*)(ByRef<::ArrayW<UnityEngine::Mesh*>>)>(&UnityEngine::ParticleSystemRenderer::GetMeshes)> {
  static const MethodInfo* get() {
    static auto* meshes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystemRenderer*), "GetMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshes});
  }
};
