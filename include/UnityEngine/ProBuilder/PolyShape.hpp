// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Skipping declaration: PolyEditMode because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.PolyShape
  class PolyShape : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::ProBuilder::PolyShape::PolyEditMode
    struct PolyEditMode;
    // Autogenerated type: UnityEngine.ProBuilder.PolyShape/PolyEditMode
    struct PolyEditMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: PolyEditMode
      constexpr PolyEditMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode None
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_None();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode None
      static void _set_None(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Path
      static constexpr const int Path = 1;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Path
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Path();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Path
      static void _set_Path(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Height
      static constexpr const int Height = 2;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Height
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Height();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Height
      static void _set_Height(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Edit
      static constexpr const int Edit = 3;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Edit
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Edit();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/PolyEditMode Edit
      static void _set_Edit(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
    }; // UnityEngine.ProBuilder.PolyShape/PolyEditMode
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // System.Collections.Generic.List`1<UnityEngine.Vector3> m_Points
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Points;
    // private System.Single m_Extrude
    // Offset: 0x28
    float m_Extrude;
    // private UnityEngine.ProBuilder.PolyShape/PolyEditMode m_EditMode
    // Offset: 0x2C
    UnityEngine::ProBuilder::PolyShape::PolyEditMode m_EditMode;
    // private System.Boolean m_FlipNormals
    // Offset: 0x30
    bool m_FlipNormals;
    // System.Boolean isOnGrid
    // Offset: 0x31
    bool isOnGrid;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3> get_controlPoints()
    // Offset: 0x135E280
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector3>* get_controlPoints();
    // public System.Void SetControlPoints(System.Collections.Generic.IList`1<UnityEngine.Vector3> points)
    // Offset: 0x135E2F0
    void SetControlPoints(System::Collections::Generic::IList_1<UnityEngine::Vector3>* points);
    // public System.Single get_extrude()
    // Offset: 0x135E35C
    float get_extrude();
    // public System.Void set_extrude(System.Single value)
    // Offset: 0x135E364
    void set_extrude(float value);
    // UnityEngine.ProBuilder.PolyShape/PolyEditMode get_polyEditMode()
    // Offset: 0x135E36C
    UnityEngine::ProBuilder::PolyShape::PolyEditMode get_polyEditMode();
    // System.Void set_polyEditMode(UnityEngine.ProBuilder.PolyShape/PolyEditMode value)
    // Offset: 0x135E374
    void set_polyEditMode(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
    // public System.Boolean get_flipNormals()
    // Offset: 0x135E37C
    bool get_flipNormals();
    // public System.Void set_flipNormals(System.Boolean value)
    // Offset: 0x135E384
    void set_flipNormals(bool value);
    // UnityEngine.ProBuilder.ProBuilderMesh get_mesh()
    // Offset: 0x135E390
    UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();
    // System.Void set_mesh(UnityEngine.ProBuilder.ProBuilderMesh value)
    // Offset: 0x135E43C
    void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // private System.Boolean IsSnapEnabled()
    // Offset: 0x135E444
    bool IsSnapEnabled();
    // public System.Void .ctor()
    // Offset: 0x135E44C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PolyShape* New_ctor();
  }; // UnityEngine.ProBuilder.PolyShape
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PolyShape*, "UnityEngine.ProBuilder", "PolyShape");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PolyShape::PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
#pragma pack(pop)
