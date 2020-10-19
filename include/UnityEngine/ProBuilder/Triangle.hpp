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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Triangle
  struct Triangle : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Triangle> {
    public:
    // private System.Int32 m_A
    // Offset: 0x0
    int m_A;
    // private System.Int32 m_B
    // Offset: 0x4
    int m_B;
    // private System.Int32 m_C
    // Offset: 0x8
    int m_C;
    // Creating value type constructor for type: Triangle
    constexpr Triangle(int m_A_ = {}, int m_B_ = {}, int m_C_ = {}) noexcept : m_A{m_A_}, m_B{m_B_}, m_C{m_C_} {}
    // public System.Int32 get_a()
    // Offset: 0xC88D60
    int get_a();
    // public System.Int32 get_b()
    // Offset: 0xC88D68
    int get_b();
    // public System.Int32 get_c()
    // Offset: 0xC88D70
    int get_c();
    // public System.Collections.Generic.IEnumerable`1<System.Int32> get_indices()
    // Offset: 0xC88D78
    System::Collections::Generic::IEnumerable_1<int>* get_indices();
    // public System.Void .ctor(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0xC88D80
    // ABORTED: conflicts with another method.  Triangle(int a, int b, int c);
    // public System.Boolean IsAdjacent(UnityEngine.ProBuilder.Triangle other)
    // Offset: 0xC88DE8
    bool IsAdjacent(UnityEngine::ProBuilder::Triangle other);
    // private System.Boolean ContainsEdge(UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xC88DF4
    bool ContainsEdge(UnityEngine::ProBuilder::Edge edge);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Triangle other)
    // Offset: 0xC88D8C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.Triangle other)
    bool Equals(UnityEngine::ProBuilder::Triangle other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC88DC0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC88DC8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Triangle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
#pragma pack(pop)
