// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ConnectFaceRebuildData
  class ConnectFaceRebuildData;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c
  // [CompilerGeneratedAttribute] Offset: E3A43C
  class ConnectElements::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge>> <>9__0_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge>> <>9__0_0
    static void _set_$$9__0_0(System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__2_1
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,UnityEngine.ProBuilder.FaceRebuildData> <>9__2_2
    static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, UnityEngine::ProBuilder::FaceRebuildData*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,UnityEngine.ProBuilder.FaceRebuildData> <>9__2_2
    static void _set_$$9__2_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, UnityEngine::ProBuilder::FaceRebuildData*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,UnityEngine.ProBuilder.FaceRebuildData> <>9__3_1
    static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, UnityEngine::ProBuilder::FaceRebuildData*>* _get_$$9__3_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,UnityEngine.ProBuilder.FaceRebuildData> <>9__3_1
    static void _set_$$9__3_1(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, UnityEngine::ProBuilder::FaceRebuildData*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge>> <>9__3_2
    static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>* _get_$$9__3_2();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge>> <>9__3_2
    static void _set_$$9__3_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.EdgeLookup,UnityEngine.ProBuilder.Edge> <>9__3_4
    static System::Func_2<UnityEngine::ProBuilder::EdgeLookup, UnityEngine::ProBuilder::Edge>* _get_$$9__3_4();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.EdgeLookup,UnityEngine.ProBuilder.Edge> <>9__3_4
    static void _set_$$9__3_4(System::Func_2<UnityEngine::ProBuilder::EdgeLookup, UnityEngine::ProBuilder::Edge>* value);
    // Get static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex>> <>9__5_0
    static System::Func_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex>> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*>* value);
    // Get static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__5_1
    static System::Func_2<int, System::Collections::Generic::List_1<int>*>* _get_$$9__5_1();
    // Set static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__5_1
    static void _set_$$9__5_1(System::Func_2<int, System::Collections::Generic::List_1<int>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__5_2
    static System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* _get_$$9__5_2();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__5_2
    static void _set_$$9__5_2(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__6_0
    static System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* value);
    // Get static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex>> <>9__8_0
    static System::Func_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex>> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*>* value);
    // Get static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__8_1
    static System::Func_2<int, System::Collections::Generic::List_1<int>*>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__8_1
    static void _set_$$9__8_1(System::Func_2<int, System::Collections::Generic::List_1<int>*>* value);
    // Get static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__8_2
    static System::Func_2<int, System::Collections::Generic::List_1<int>*>* _get_$$9__8_2();
    // Set static field: static public System.Func`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> <>9__8_2
    static void _set_$$9__8_2(System::Func_2<int, System::Collections::Generic::List_1<int>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x154C7BC
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> <Connect>b__0_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x154C828
    System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* $Connect$b__0_0(UnityEngine::ProBuilder::Face* x);
    // System.Int32 <Connect>b__2_1(UnityEngine.ProBuilder.Face x)
    // Offset: 0x154C844
    int $Connect$b__2_1(UnityEngine::ProBuilder::Face* x);
    // UnityEngine.ProBuilder.FaceRebuildData <Connect>b__2_2(UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData x)
    // Offset: 0x154C85C
    UnityEngine::ProBuilder::FaceRebuildData* $Connect$b__2_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);
    // System.Int32 <Connect>b__3_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x154C874
    int $Connect$b__3_0(UnityEngine::ProBuilder::Face* x);
    // UnityEngine.ProBuilder.FaceRebuildData <Connect>b__3_1(UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData x)
    // Offset: 0x154C88C
    UnityEngine::ProBuilder::FaceRebuildData* $Connect$b__3_1(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> <Connect>b__3_2(UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData x)
    // Offset: 0x154C8A4
    System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* $Connect$b__3_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);
    // UnityEngine.ProBuilder.Edge <Connect>b__3_4(UnityEngine.ProBuilder.EdgeLookup x)
    // Offset: 0x154C8D0
    UnityEngine::ProBuilder::Edge $Connect$b__3_4(UnityEngine::ProBuilder::EdgeLookup x);
    // System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> <ConnectEdgesInFace>b__5_0(System.Int32 x)
    // Offset: 0x154C8D8
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* $ConnectEdgesInFace$b__5_0(int x);
    // System.Collections.Generic.List`1<System.Int32> <ConnectEdgesInFace>b__5_1(System.Int32 x)
    // Offset: 0x154C93C
    System::Collections::Generic::List_1<int>* $ConnectEdgesInFace$b__5_1(int x);
    // UnityEngine.ProBuilder.Edge <ConnectEdgesInFace>b__5_2(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x154C9A0
    UnityEngine::ProBuilder::Edge $ConnectEdgesInFace$b__5_2(UnityEngine::ProBuilder::WingedEdge* x);
    // UnityEngine.ProBuilder.Edge <InsertVertices>b__6_0(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x154C9B8
    UnityEngine::ProBuilder::Edge $InsertVertices$b__6_0(UnityEngine::ProBuilder::WingedEdge* x);
    // System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> <ConnectIndexesPerFace>b__8_0(System.Int32 x)
    // Offset: 0x154C9D0
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* $ConnectIndexesPerFace$b__8_0(int x);
    // System.Collections.Generic.List`1<System.Int32> <ConnectIndexesPerFace>b__8_1(System.Int32 x)
    // Offset: 0x154CA34
    System::Collections::Generic::List_1<int>* $ConnectIndexesPerFace$b__8_1(int x);
    // System.Collections.Generic.List`1<System.Int32> <ConnectIndexesPerFace>b__8_2(System.Int32 x)
    // Offset: 0x154CA98
    System::Collections::Generic::List_1<int>* $ConnectIndexesPerFace$b__8_2(int x);
    // public System.Void .ctor()
    // Offset: 0x154C820
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectElements::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectElements::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__0_0
// Il2CppName: <Connect>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__0_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__2_1
// Il2CppName: <Connect>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__2_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__2_2
// Il2CppName: <Connect>b__2_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::FaceRebuildData* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__2_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__2_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_0
// Il2CppName: <Connect>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_1
// Il2CppName: <Connect>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::FaceRebuildData* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_2
// Il2CppName: <Connect>b__3_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__3_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_4
// Il2CppName: <Connect>b__3_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$Connect$b__3_4)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<Connect>b__3_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::EdgeLookup>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_0
// Il2CppName: <ConnectEdgesInFace>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectEdgesInFace>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_1
// Il2CppName: <ConnectEdgesInFace>b__5_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectEdgesInFace>b__5_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_2
// Il2CppName: <ConnectEdgesInFace>b__5_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectEdgesInFace$b__5_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectEdgesInFace>b__5_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$InsertVertices$b__6_0
// Il2CppName: <InsertVertices>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$InsertVertices$b__6_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<InsertVertices>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::WingedEdge*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_0
// Il2CppName: <ConnectIndexesPerFace>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectIndexesPerFace>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_1
// Il2CppName: <ConnectIndexesPerFace>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectIndexesPerFace>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_2
// Il2CppName: <ConnectIndexesPerFace>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int>* (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::$ConnectIndexesPerFace$b__8_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c*), "<ConnectIndexesPerFace>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
