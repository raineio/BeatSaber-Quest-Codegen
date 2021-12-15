// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: VertexPickerEntry
  struct VertexPickerEntry;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VertexPickerEntry, "UnityEngine.ProBuilder", "VertexPickerEntry");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.VertexPickerEntry
  // [TokenAttribute] Offset: FFFFFFFF
  struct VertexPickerEntry/*, public System::ValueType*/ {
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
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // public System.Int32 vertex
    // Size: 0x4
    // Offset: 0x8
    int vertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single screenDistance
    // Size: 0x4
    // Offset: 0xC
    float screenDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 worldPosition
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: VertexPickerEntry
    constexpr VertexPickerEntry(UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}, int vertex_ = {}, float screenDistance_ = {}, UnityEngine::Vector3 worldPosition_ = {}) noexcept : mesh{mesh_}, vertex{vertex_}, screenDistance{screenDistance_}, worldPosition{worldPosition_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.ProBuilder.ProBuilderMesh mesh
    UnityEngine::ProBuilder::ProBuilderMesh*& dyn_mesh();
    // Get instance field reference: public System.Int32 vertex
    int& dyn_vertex();
    // Get instance field reference: public System.Single screenDistance
    float& dyn_screenDistance();
    // Get instance field reference: public UnityEngine.Vector3 worldPosition
    UnityEngine::Vector3& dyn_worldPosition();
  }; // UnityEngine.ProBuilder.VertexPickerEntry
  #pragma pack(pop)
  static check_size<sizeof(VertexPickerEntry), 16 + sizeof(UnityEngine::Vector3)> __UnityEngine_ProBuilder_VertexPickerEntrySizeCheck;
  static_assert(sizeof(VertexPickerEntry) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
