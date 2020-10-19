// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EdgeLookup
  struct EdgeLookup : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup> {
    public:
    // Nested type: UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // private UnityEngine.ProBuilder.Edge m_Local
    // Offset: 0x0
    UnityEngine::ProBuilder::Edge m_Local;
    // private UnityEngine.ProBuilder.Edge m_Common
    // Offset: 0x8
    UnityEngine::ProBuilder::Edge m_Common;
    // Creating value type constructor for type: EdgeLookup
    constexpr EdgeLookup(UnityEngine::ProBuilder::Edge m_Local_ = {}, UnityEngine::ProBuilder::Edge m_Common_ = {}) noexcept : m_Local{m_Local_}, m_Common{m_Common_} {}
    // public UnityEngine.ProBuilder.Edge get_local()
    // Offset: 0xC73F50
    UnityEngine::ProBuilder::Edge get_local();
    // public System.Void set_local(UnityEngine.ProBuilder.Edge value)
    // Offset: 0xC73F58
    void set_local(UnityEngine::ProBuilder::Edge value);
    // public UnityEngine.ProBuilder.Edge get_common()
    // Offset: 0xC73F60
    UnityEngine::ProBuilder::Edge get_common();
    // public System.Void set_common(UnityEngine.ProBuilder.Edge value)
    // Offset: 0xC73F68
    void set_common(UnityEngine::ProBuilder::Edge value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Edge common, UnityEngine.ProBuilder.Edge local)
    // Offset: 0xC73F70
    // ABORTED: conflicts with another method.  EdgeLookup(UnityEngine::ProBuilder::Edge common, UnityEngine::ProBuilder::Edge local);
    // public System.Void .ctor(System.Int32 cx, System.Int32 cy, System.Int32 x, System.Int32 y)
    // Offset: 0xC73F78
    EdgeLookup(int cx, int cy, int x, int y);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.EdgeLookup> GetEdgeLookup(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x16E0078
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookup(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.EdgeLookup> GetEdgeLookupHashSet(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x16E0148
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookupHashSet(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // public System.Boolean Equals(UnityEngine.ProBuilder.EdgeLookup other)
    // Offset: 0xC73F80
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.EdgeLookup other)
    bool Equals(UnityEngine::ProBuilder::EdgeLookup other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC73FB0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC73FB8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xC73FE4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.EdgeLookup
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.EdgeLookup a, UnityEngine.ProBuilder.EdgeLookup b)
  // Offset: 0x16DFD58
  bool operator ==(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.EdgeLookup a, UnityEngine.ProBuilder.EdgeLookup b)
  // Offset: 0x16DFDFC
  bool operator !=(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeLookup, "UnityEngine.ProBuilder", "EdgeLookup");
#pragma pack(pop)
