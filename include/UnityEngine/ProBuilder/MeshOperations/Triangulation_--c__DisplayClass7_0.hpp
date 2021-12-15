// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Triangulation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Triangulation::$$c__DisplayClass7_0 : public ::Il2CppObject {
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
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // Get instance field reference: public System.Int32 index
    int& dyn_index();
    // UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Triangulate>b__0(UnityEngine.Vector2 x)
    // Offset: 0x190B648
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* $Triangulate$b__0(UnityEngine::Vector2 x);
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__1(UnityEngine.Vector2 x)
    // Offset: 0x190B6D0
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__1(UnityEngine::Vector2 x);
    // public System.Void .ctor()
    // Offset: 0x190B638
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Triangulation::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Triangulation::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Triangulation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(Triangulation::$$c__DisplayClass7_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_MeshOperations_Triangulation_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(Triangulation::$$c__DisplayClass7_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::$Triangulate$b__0
// Il2CppName: <Triangulate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::$Triangulate$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0*), "<Triangulate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::$Triangulate$b__1
// Il2CppName: <Triangulate>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::$Triangulate$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0*), "<Triangulate>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
