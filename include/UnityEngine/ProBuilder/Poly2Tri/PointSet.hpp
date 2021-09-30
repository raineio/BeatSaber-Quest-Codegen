// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
#include "UnityEngine/ProBuilder/Poly2Tri/Triangulatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.PointSet
  // [TokenAttribute] Offset: FFFFFFFF
  class PointSet : public ::Il2CppObject/*, public UnityEngine::ProBuilder::Poly2Tri::Triangulatable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> <Points>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> <Triangles>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable
    operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> <Points>k__BackingField
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& dyn_$Points$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> <Triangles>k__BackingField
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& dyn_$Triangles$k__BackingField();
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> get_Points()
    // Offset: 0x25CEA48
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();
    // private System.Void set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> value)
    // Offset: 0x25CEA50
    void set_Points(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0x25CEA58
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // private System.Void set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> value)
    // Offset: 0x25CEA60
    void set_Triangles(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x25CEAEC
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> points)
    // Offset: 0x25CEA68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointSet* New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::PointSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointSet*, creationType>(points)));
    }
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x25CEAF4
    void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0x25CEBB8
    void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0x25CEE98
    void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
  }; // UnityEngine.ProBuilder.Poly2Tri.PointSet
  #pragma pack(pop)
  static check_size<sizeof(PointSet), 24 + sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)> __UnityEngine_ProBuilder_Poly2Tri_PointSetSizeCheck;
  static_assert(sizeof(PointSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PointSet*, "UnityEngine.ProBuilder.Poly2Tri", "PointSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Points
// Il2CppName: get_Points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Points)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "get_Points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Points
// Il2CppName: set_Points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*)>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Points)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "set_Points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Triangles
// Il2CppName: get_Triangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Triangles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "get_Triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Triangles
// Il2CppName: set_Triangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Triangles)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "set_Triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::get_TriangulationMode
// Il2CppName: get_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::get_TriangulationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangle
// Il2CppName: AddTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangle)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "AddTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangles
// Il2CppName: AddTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangles)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "AddTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointSet::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&UnityEngine::ProBuilder::Poly2Tri::PointSet::Prepare)> {
  static const MethodInfo* get() {
    static auto* tcx = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::PointSet*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tcx});
  }
};
