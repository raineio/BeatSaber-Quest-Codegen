// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Triangulation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Triangulation::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: $$9__1
    char __padding0[0x4] = {};
    // public System.Func`2<UnityEngine.Vector2,UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> <>9__1
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 index
    int& dyn_index();
    // Get instance field reference: public System.Func`2<UnityEngine.Vector2,UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> <>9__1
    System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*& dyn_$$9__1();
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__0(UnityEngine.Vector2 x)
    // Offset: 0x18FFBD0
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__0(UnityEngine::Vector2 x);
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__1(UnityEngine.Vector2 x)
    // Offset: 0x18FFC58
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__1(UnityEngine::Vector2 x);
    // public System.Void .ctor()
    // Offset: 0x18FFAB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Triangulation::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Triangulation::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Triangulation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(Triangulation::$$c__DisplayClass8_0), 24 + sizeof(System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)> __UnityEngine_ProBuilder_MeshOperations_Triangulation_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(Triangulation::$$c__DisplayClass8_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::$Triangulate$b__0
// Il2CppName: <Triangulate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::$Triangulate$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0*), "<Triangulate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::$Triangulate$b__1
// Il2CppName: <Triangulate>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::$Triangulate$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0*), "<Triangulate>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
