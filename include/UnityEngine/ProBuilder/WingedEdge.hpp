// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge
  // [TokenAttribute] Offset: FFFFFFFF
  class WingedEdge : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.ProBuilder.EdgeLookup <edge>k__BackingField
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::ProBuilder::EdgeLookup edge;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::EdgeLookup) == 0x10);
    // private UnityEngine.ProBuilder.Face <face>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // private UnityEngine.ProBuilder.WingedEdge <next>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ProBuilder::WingedEdge* next;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // private UnityEngine.ProBuilder.WingedEdge <previous>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::WingedEdge* previous;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // private UnityEngine.ProBuilder.WingedEdge <opposite>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ProBuilder::WingedEdge* opposite;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* _get_k_OppositeEdgeDictionary();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static void _set_k_OppositeEdgeDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* value);
    // Get instance field reference: private UnityEngine.ProBuilder.EdgeLookup <edge>k__BackingField
    UnityEngine::ProBuilder::EdgeLookup& dyn_$edge$k__BackingField();
    // Get instance field reference: private UnityEngine.ProBuilder.Face <face>k__BackingField
    UnityEngine::ProBuilder::Face*& dyn_$face$k__BackingField();
    // Get instance field reference: private UnityEngine.ProBuilder.WingedEdge <next>k__BackingField
    UnityEngine::ProBuilder::WingedEdge*& dyn_$next$k__BackingField();
    // Get instance field reference: private UnityEngine.ProBuilder.WingedEdge <previous>k__BackingField
    UnityEngine::ProBuilder::WingedEdge*& dyn_$previous$k__BackingField();
    // Get instance field reference: private UnityEngine.ProBuilder.WingedEdge <opposite>k__BackingField
    UnityEngine::ProBuilder::WingedEdge*& dyn_$opposite$k__BackingField();
    // public UnityEngine.ProBuilder.EdgeLookup get_edge()
    // Offset: 0x24F8D0C
    UnityEngine::ProBuilder::EdgeLookup get_edge();
    // private System.Void set_edge(UnityEngine.ProBuilder.EdgeLookup value)
    // Offset: 0x24F8D18
    void set_edge(UnityEngine::ProBuilder::EdgeLookup value);
    // public UnityEngine.ProBuilder.Face get_face()
    // Offset: 0x24F8D20
    UnityEngine::ProBuilder::Face* get_face();
    // private System.Void set_face(UnityEngine.ProBuilder.Face value)
    // Offset: 0x24F8D28
    void set_face(UnityEngine::ProBuilder::Face* value);
    // public UnityEngine.ProBuilder.WingedEdge get_next()
    // Offset: 0x24F8D30
    UnityEngine::ProBuilder::WingedEdge* get_next();
    // private System.Void set_next(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x24F8D38
    void set_next(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_previous()
    // Offset: 0x24F8D40
    UnityEngine::ProBuilder::WingedEdge* get_previous();
    // private System.Void set_previous(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x24F8D48
    void set_previous(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_opposite()
    // Offset: 0x24F8D50
    UnityEngine::ProBuilder::WingedEdge* get_opposite();
    // private System.Void set_opposite(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x24F8D58
    void set_opposite(UnityEngine::ProBuilder::WingedEdge* value);
    // static private System.Void .cctor()
    // Offset: 0x24F9E94
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.ProBuilder.WingedEdge other)
    // Offset: 0x24F8D68
    bool Equals(UnityEngine::ProBuilder::WingedEdge* other);
    // public System.Int32 Count()
    // Offset: 0x24F8EB0
    int Count();
    // static System.Int32[] MakeQuad(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right)
    // Offset: 0x24F90A8
    static ::ArrayW<int> MakeQuad(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right);
    // public UnityEngine.ProBuilder.WingedEdge GetAdjacentEdgeWithCommonIndex(System.Int32 common)
    // Offset: 0x24F94C4
    UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(int common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> SortEdgesByAdjacency(UnityEngine.ProBuilder.Face face)
    // Offset: 0x24F954C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(UnityEngine::ProBuilder::Face* face);
    // static public System.Void SortEdgesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x24F9644
    static void SortEdgesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge>> GetSpokes(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0x24F9804
    static System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*>* GetSpokes(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static System.Collections.Generic.List`1<System.Int32> SortCommonIndexesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings, System.Collections.Generic.HashSet`1<System.Int32> common)
    // Offset: 0x24F9B00
    static System::Collections::Generic::List_1<int>* SortCommonIndexesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings, System::Collections::Generic::HashSet_1<int>* common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Boolean oneWingPerFace)
    // Offset: 0x24F9DA0
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, bool oneWingPerFace);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean oneWingPerFace)
    // Offset: 0x24ED528
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool oneWingPerFace);
    // private System.Void .ctor()
    // Offset: 0x24F8D60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::WingedEdge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdge*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x24F8DAC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x24F8E84
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x24F8EE4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.WingedEdge
  #pragma pack(pop)
  static check_size<sizeof(WingedEdge), 56 + sizeof(UnityEngine::ProBuilder::WingedEdge*)> __UnityEngine_ProBuilder_WingedEdgeSizeCheck;
  static_assert(sizeof(WingedEdge) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge*, "UnityEngine.ProBuilder", "WingedEdge");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_edge
// Il2CppName: get_edge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::EdgeLookup (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::get_edge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "get_edge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_edge
// Il2CppName: set_edge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::WingedEdge::set_edge)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "set_edge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_face
// Il2CppName: get_face
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::get_face)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "get_face", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_face
// Il2CppName: set_face
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::WingedEdge::set_face)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "set_face", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_next
// Il2CppName: get_next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge* (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::get_next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "get_next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_next
// Il2CppName: set_next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::set_next)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "set_next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_previous
// Il2CppName: get_previous
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge* (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::get_previous)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "get_previous", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_previous
// Il2CppName: set_previous
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::set_previous)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "set_previous", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_opposite
// Il2CppName: get_opposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge* (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::get_opposite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "get_opposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_opposite
// Il2CppName: set_opposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::set_opposite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "set_opposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::WingedEdge::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::WingedEdge::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Count
// Il2CppName: Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::MakeQuad
// Il2CppName: MakeQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::MakeQuad)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "MakeQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex
// Il2CppName: GetAdjacentEdgeWithCommonIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge* (UnityEngine::ProBuilder::WingedEdge::*)(int)>(&UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex)> {
  static const MethodInfo* get() {
    static auto* common = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "GetAdjacentEdgeWithCommonIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{common});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency
// Il2CppName: SortEdgesByAdjacency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* (*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "SortEdgesByAdjacency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency
// Il2CppName: SortEdgesByAdjacency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "SortEdgesByAdjacency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetSpokes
// Il2CppName: GetSpokes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*>* (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*)>(&UnityEngine::ProBuilder::WingedEdge::GetSpokes)> {
  static const MethodInfo* get() {
    static auto* wings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "GetSpokes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency
// Il2CppName: SortCommonIndexesByAdjacency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int>* (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*, System::Collections::Generic::HashSet_1<int>*)>(&UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency)> {
  static const MethodInfo* get() {
    static auto* wings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")})->byval_arg;
    static auto* common = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "SortCommonIndexesByAdjacency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wings, common});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetWingedEdges
// Il2CppName: GetWingedEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, bool)>(&UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* oneWingPerFace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "GetWingedEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, oneWingPerFace});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetWingedEdges
// Il2CppName: GetWingedEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*, bool)>(&UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* oneWingPerFace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "GetWingedEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, oneWingPerFace});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::WingedEdge::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::WingedEdge::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::WingedEdge::*)()>(&UnityEngine::ProBuilder::WingedEdge::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
