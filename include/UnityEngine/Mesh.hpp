// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IndexFormat
  struct IndexFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshTopology
  struct MeshTopology;
  // Forward declaring type: BoneWeight
  struct BoneWeight;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Mesh
  class Mesh : public UnityEngine::Object {
    public:
    // static private System.Void Internal_Create(UnityEngine.Mesh mono)
    // Offset: 0x1937A98
    static void Internal_Create(UnityEngine::Mesh* mono);
    // public System.Void set_indexFormat(UnityEngine.Rendering.IndexFormat value)
    // Offset: 0x1937B70
    void set_indexFormat(UnityEngine::Rendering::IndexFormat value);
    // private System.UInt32 GetIndexCountImpl(System.Int32 submesh)
    // Offset: 0x1937BC0
    uint GetIndexCountImpl(int submesh);
    // private System.Int32[] GetTrianglesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1937C10
    ::Array<int>* GetTrianglesImpl(int submesh, bool applyBaseVertex);
    // private System.Int32[] GetIndicesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1937C68
    ::Array<int>* GetIndicesImpl(int submesh, bool applyBaseVertex);
    // private System.Void SetIndicesImpl(System.Int32 submesh, UnityEngine.MeshTopology topology, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array indices, System.Int32 arrayStart, System.Int32 arraySize, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1937CC0
    void SetIndicesImpl(int submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);
    // private System.Void PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute ch)
    // Offset: 0x1937D60
    void PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch);
    // public System.Boolean HasVertexAttribute(UnityEngine.Rendering.VertexAttribute attr)
    // Offset: 0x1937DB0
    bool HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr);
    // private System.Void SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x1937E00
    void SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int arraySize, int valuesStart, int valuesCount);
    // private System.Array GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0x1937E98
    System::Array* GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim);
    // private System.Void GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values)
    // Offset: 0x1937F00
    void GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values);
    // private System.Void SetBoneWeightsImpl(UnityEngine.BoneWeight[] weights)
    // Offset: 0x1937F70
    void SetBoneWeightsImpl(::Array<UnityEngine::BoneWeight>* weights);
    // public System.Void set_bindposes(UnityEngine.Matrix4x4[] value)
    // Offset: 0x1937FC0
    void set_bindposes(::Array<UnityEngine::Matrix4x4>* value);
    // System.Boolean get_canAccess()
    // Offset: 0x1938010
    bool get_canAccess();
    // public System.Int32 get_vertexCount()
    // Offset: 0x1938050
    int get_vertexCount();
    // public System.Int32 get_subMeshCount()
    // Offset: 0x1938090
    int get_subMeshCount();
    // public System.Void set_subMeshCount(System.Int32 value)
    // Offset: 0x19380D0
    void set_subMeshCount(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1938120
    UnityEngine::Bounds get_bounds();
    // public System.Void set_bounds(UnityEngine.Bounds value)
    // Offset: 0x19381DC
    void set_bounds(UnityEngine::Bounds value);
    // private System.Void ClearImpl(System.Boolean keepVertexLayout)
    // Offset: 0x193827C
    void ClearImpl(bool keepVertexLayout);
    // private System.Void RecalculateBoundsImpl()
    // Offset: 0x19382CC
    void RecalculateBoundsImpl();
    // private System.Void MarkDynamicImpl()
    // Offset: 0x193830C
    void MarkDynamicImpl();
    // private UnityEngine.MeshTopology GetTopologyImpl(System.Int32 submesh)
    // Offset: 0x193834C
    UnityEngine::MeshTopology GetTopologyImpl(int submesh);
    // UnityEngine.Rendering.VertexAttribute GetUVChannel(System.Int32 uvIndex)
    // Offset: 0x193839C
    UnityEngine::Rendering::VertexAttribute GetUVChannel(int uvIndex);
    // static System.Int32 DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0x1938430
    static int DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel);
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetAllocArrayFromChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim)));
    }
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetAllocArrayFromChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel)));
    }
    // private System.Void SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x19384EC
    void SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int valuesArrayLength, int valuesStart, int valuesCount);
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, ::Array<T>* values) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetArrayForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim, values));
    }
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::Array<T>* values) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetArrayForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, values));
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Collections::Generic::List_1<T>* values, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim, values, start, length));
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T>* values, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, values, start, length));
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, buffer, capacity, channel, dim));
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim, UnityEngine.Rendering.VertexAttributeFormat channelType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim, UnityEngine::Rendering::VertexAttributeFormat channelType) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, buffer, capacity, channel, dim, channelType));
    }
    // public UnityEngine.Vector3[] get_vertices()
    // Offset: 0x1938778
    ::Array<UnityEngine::Vector3>* get_vertices();
    // public System.Void set_vertices(UnityEngine.Vector3[] value)
    // Offset: 0x19387CC
    void set_vertices(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector3[] get_normals()
    // Offset: 0x1938830
    ::Array<UnityEngine::Vector3>* get_normals();
    // public System.Void set_normals(UnityEngine.Vector3[] value)
    // Offset: 0x1938884
    void set_normals(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector4[] get_tangents()
    // Offset: 0x19388E8
    ::Array<UnityEngine::Vector4>* get_tangents();
    // public System.Void set_tangents(UnityEngine.Vector4[] value)
    // Offset: 0x193893C
    void set_tangents(::Array<UnityEngine::Vector4>* value);
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x19389A0
    ::Array<UnityEngine::Vector2>* get_uv();
    // public System.Void set_uv(UnityEngine.Vector2[] value)
    // Offset: 0x19389F4
    void set_uv(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv2()
    // Offset: 0x1938A58
    ::Array<UnityEngine::Vector2>* get_uv2();
    // public System.Void set_uv2(UnityEngine.Vector2[] value)
    // Offset: 0x1938AAC
    void set_uv2(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv3()
    // Offset: 0x1938B10
    ::Array<UnityEngine::Vector2>* get_uv3();
    // public System.Void set_uv3(UnityEngine.Vector2[] value)
    // Offset: 0x1938B64
    void set_uv3(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv4()
    // Offset: 0x1938BC8
    ::Array<UnityEngine::Vector2>* get_uv4();
    // public UnityEngine.Color[] get_colors()
    // Offset: 0x1938C1C
    ::Array<UnityEngine::Color>* get_colors();
    // public System.Void set_colors(UnityEngine.Color[] value)
    // Offset: 0x1938C70
    void set_colors(::Array<UnityEngine::Color>* value);
    // public UnityEngine.Color32[] get_colors32()
    // Offset: 0x1938CD4
    ::Array<UnityEngine::Color32>* get_colors32();
    // public System.Void set_colors32(UnityEngine.Color32[] value)
    // Offset: 0x1938D30
    void set_colors32(::Array<UnityEngine::Color32>* value);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices)
    // Offset: 0x1938D9C
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length)
    // Offset: 0x1938E0C
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices, int start, int length);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals)
    // Offset: 0x1938E88
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length)
    // Offset: 0x1938EF8
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals, int start, int length);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents)
    // Offset: 0x1938F74
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length)
    // Offset: 0x1938FE4
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents, int start, int length);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors)
    // Offset: 0x1939060
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length)
    // Offset: 0x19390D0
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors, int start, int length);
    // private System.Void SetUvsImpl(System.Int32 uvIndex, System.Int32 dim, System.Collections.Generic.List`1<T> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetUvsImpl(int uvIndex, int dim, System::Collections::Generic::List_1<T>* uvs, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetUvsImpl", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, uvIndex, dim, uvs, start, length));
    }
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
    // Offset: 0x1939154
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs)
    // Offset: 0x1939250
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x193934C
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x19391CC
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x19392C8
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x19393C4
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs, int start, int length);
    // private System.Void GetUVsImpl(System.Int32 uvIndex, System.Collections.Generic.List`1<T> uvs, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetUVsImpl(int uvIndex, System::Collections::Generic::List_1<T>* uvs, int dim) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetUVsImpl", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, uvIndex, uvs, dim));
    }
    // public System.Void GetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x1939448
    void GetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // private System.Void PrintErrorCantAccessIndices()
    // Offset: 0x19394B4
    void PrintErrorCantAccessIndices();
    // private System.Boolean CheckCanAccessSubmesh(System.Int32 submesh, System.Boolean errorAboutTriangles)
    // Offset: 0x19395CC
    bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles);
    // private System.Boolean CheckCanAccessSubmeshTriangles(System.Int32 submesh)
    // Offset: 0x19396FC
    bool CheckCanAccessSubmeshTriangles(int submesh);
    // private System.Boolean CheckCanAccessSubmeshIndices(System.Int32 submesh)
    // Offset: 0x1939704
    bool CheckCanAccessSubmeshIndices(int submesh);
    // public System.Int32[] get_triangles()
    // Offset: 0x193970C
    ::Array<int>* get_triangles();
    // public System.Void set_triangles(System.Int32[] value)
    // Offset: 0x19397C8
    void set_triangles(::Array<int>* value);
    // public System.Int32[] GetTriangles(System.Int32 submesh)
    // Offset: 0x193994C
    ::Array<int>* GetTriangles(int submesh);
    // public System.Int32[] GetTriangles(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1939954
    ::Array<int>* GetTriangles(int submesh, bool applyBaseVertex);
    // public System.Int32[] GetIndices(System.Int32 submesh)
    // Offset: 0x1939A04
    ::Array<int>* GetIndices(int submesh);
    // public System.Int32[] GetIndices(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1939A0C
    ::Array<int>* GetIndices(int submesh, bool applyBaseVertex);
    // public System.UInt32 GetIndexCount(System.Int32 submesh)
    // Offset: 0x1939ABC
    uint GetIndexCount(int submesh);
    // private System.Void CheckIndicesArrayRange(System.Int32 valuesLength, System.Int32 start, System.Int32 length)
    // Offset: 0x1939BA0
    void CheckIndicesArrayRange(int valuesLength, int start, int length);
    // private System.Void SetTrianglesImpl(System.Int32 submesh, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array triangles, System.Int32 trianglesArrayLength, System.Int32 start, System.Int32 length, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x19398A0
    void SetTrianglesImpl(int submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh)
    // Offset: 0x1939D50
    void SetTriangles(::Array<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1939D5C
    void SetTriangles(::Array<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1939DCC
    void SetTriangles(::Array<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh)
    // Offset: 0x1939E70
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1939E7C
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1939F0C
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh)
    // Offset: 0x193A040
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds)
    // Offset: 0x193A0D0
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x193A04C
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x193A0DC
    void SetIndices(::Array<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x193A1CC
    void SetIndices(System::Collections::Generic::List_1<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x193A278
    void SetIndices(System::Collections::Generic::List_1<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void set_boneWeights(UnityEngine.BoneWeight[] value)
    // Offset: 0x193A3B8
    void set_boneWeights(::Array<UnityEngine::BoneWeight>* value);
    // public System.Void Clear()
    // Offset: 0x193A408
    void Clear();
    // public System.Void RecalculateBounds()
    // Offset: 0x193A44C
    void RecalculateBounds();
    // public System.Void MarkDynamic()
    // Offset: 0x193A53C
    void MarkDynamic();
    // public UnityEngine.MeshTopology GetTopology(System.Int32 submesh)
    // Offset: 0x193A5B4
    UnityEngine::MeshTopology GetTopology(int submesh);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x193818C
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void set_bounds_Injected(ref UnityEngine.Bounds value)
    // Offset: 0x193822C
    void set_bounds_Injected(UnityEngine::Bounds& value);
    // public System.Void .ctor()
    // Offset: 0x1937AD8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Mesh* New_ctor();
  }; // UnityEngine.Mesh
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mesh*, "UnityEngine", "Mesh");
#pragma pack(pop)
