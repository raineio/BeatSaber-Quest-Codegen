// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainCollider
  class TerrainCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCollider*, "UnityEngine", "TerrainCollider");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 109A158
  // [NativeHeaderAttribute] Offset: 109A158
  class TerrainCollider : public ::UnityEngine::Collider {
    public:
    // public System.Void set_terrainData(UnityEngine.TerrainData value)
    // Offset: 0x2AE9438
    void set_terrainData(::UnityEngine::TerrainData* value);
  }; // UnityEngine.TerrainCollider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainCollider::set_terrainData
// Il2CppName: set_terrainData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainCollider::*)(::UnityEngine::TerrainData*)>(&UnityEngine::TerrainCollider::set_terrainData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainCollider*), "set_terrainData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
