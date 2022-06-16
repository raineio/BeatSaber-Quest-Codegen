// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationPoint : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> <Edges>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*) == 0x8);
    // public System.Double X
    // Size: 0x8
    // Offset: 0x18
    double X;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Y
    // Size: 0x8
    // Offset: 0x20
    double Y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x28
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> <Edges>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*& dyn_$Edges$k__BackingField();
    // Get instance field reference: public System.Double X
    [[deprecated("Use field access instead!")]] double& dyn_X();
    // Get instance field reference: public System.Double Y
    [[deprecated("Use field access instead!")]] double& dyn_Y();
    // Get instance field reference: public System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> get_Edges()
    // Offset: 0x2A89CF0
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges();
    // private System.Void set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> value)
    // Offset: 0x2A89CF8
    void set_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);
    // public System.Boolean get_HasEdges()
    // Offset: 0x2A841E8
    bool get_HasEdges();
    // public System.Void .ctor(System.Double x, System.Double y, System.Int32 index)
    // Offset: 0x2A88478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationPoint* New_ctor(double x, double y, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationPoint*, creationType>(x, y, index)));
    }
    // public System.Void AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint e)
    // Offset: 0x2A87D00
    void AddEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);
    // public override System.String ToString()
    // Offset: 0x2A89D00
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
  #pragma pack(pop)
  static check_size<sizeof(TriangulationPoint), 40 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationPointSizeCheck;
  static_assert(sizeof(TriangulationPoint) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Edges
// Il2CppName: get_Edges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* (UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Edges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*), "get_Edges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Edges
// Il2CppName: set_Edges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Edges)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*), "set_Edges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_HasEdges
// Il2CppName: get_HasEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_HasEdges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*), "get_HasEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::AddEdge
// Il2CppName: AddEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::AddEdge)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*), "AddEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
