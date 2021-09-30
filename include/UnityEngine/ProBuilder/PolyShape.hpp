// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.PolyShape
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: F255A8
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  // [ProGridsConditionalSnapAttribute] Offset: F255A8
  class PolyShape : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::ProBuilder::PolyShape::PolyEditMode
    struct PolyEditMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct PolyEditMode/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      private:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PolyEditMode
      constexpr PolyEditMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode None
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_None();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode None
      static void _set_None(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Path
      static constexpr const int Path = 1;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Path
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Path();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Path
      static void _set_Path(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Height
      static constexpr const int Height = 2;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Height
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Height();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Height
      static void _set_Height(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // static field const value: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Edit
      static constexpr const int Edit = 3;
      // Get static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Edit
      static UnityEngine::ProBuilder::PolyShape::PolyEditMode _get_Edit();
      // Set static field: static public UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode Edit
      static void _set_Edit(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode
    #pragma pack(pop)
    static check_size<sizeof(PolyShape::PolyEditMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_PolyShape_PolyEditModeSizeCheck;
    static_assert(sizeof(PolyShape::PolyEditMode) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF26250
    // System.Collections.Generic.List`1<UnityEngine.Vector3> m_Points
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF2629C
    // private System.Single m_Extrude
    // Size: 0x4
    // Offset: 0x28
    float m_Extrude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xF262E8
    // private UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode m_EditMode
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::ProBuilder::PolyShape::PolyEditMode m_EditMode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::PolyShape::PolyEditMode) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xF26334
    // private System.Boolean m_FlipNormals
    // Size: 0x1
    // Offset: 0x30
    bool m_FlipNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isOnGrid
    // Size: 0x1
    // Offset: 0x31
    bool isOnGrid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    UnityEngine::ProBuilder::ProBuilderMesh*& dyn_m_Mesh();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.Vector3> m_Points
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn_m_Points();
    // Get instance field reference: private System.Single m_Extrude
    float& dyn_m_Extrude();
    // Get instance field reference: private UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode m_EditMode
    UnityEngine::ProBuilder::PolyShape::PolyEditMode& dyn_m_EditMode();
    // Get instance field reference: private System.Boolean m_FlipNormals
    bool& dyn_m_FlipNormals();
    // Get instance field reference: System.Boolean isOnGrid
    bool& dyn_isOnGrid();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3> get_controlPoints()
    // Offset: 0x190AD58
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector3>* get_controlPoints();
    // public System.Single get_extrude()
    // Offset: 0x190AE2C
    float get_extrude();
    // public System.Void set_extrude(System.Single value)
    // Offset: 0x190AE34
    void set_extrude(float value);
    // UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode get_polyEditMode()
    // Offset: 0x190AE3C
    UnityEngine::ProBuilder::PolyShape::PolyEditMode get_polyEditMode();
    // System.Void set_polyEditMode(UnityEngine.ProBuilder.PolyShape/UnityEngine.ProBuilder.PolyEditMode value)
    // Offset: 0x190AE44
    void set_polyEditMode(UnityEngine::ProBuilder::PolyShape::PolyEditMode value);
    // public System.Boolean get_flipNormals()
    // Offset: 0x190AE4C
    bool get_flipNormals();
    // public System.Void set_flipNormals(System.Boolean value)
    // Offset: 0x190AE54
    void set_flipNormals(bool value);
    // UnityEngine.ProBuilder.ProBuilderMesh get_mesh()
    // Offset: 0x190AE60
    UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();
    // System.Void set_mesh(UnityEngine.ProBuilder.ProBuilderMesh value)
    // Offset: 0x190AEF8
    void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // public System.Void SetControlPoints(System.Collections.Generic.IList`1<UnityEngine.Vector3> points)
    // Offset: 0x190ADC8
    void SetControlPoints(System::Collections::Generic::IList_1<UnityEngine::Vector3>* points);
    // private System.Boolean IsSnapEnabled()
    // Offset: 0x190AF00
    bool IsSnapEnabled();
    // public System.Void .ctor()
    // Offset: 0x190AF08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PolyShape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::PolyShape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PolyShape*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.PolyShape
  #pragma pack(pop)
  static check_size<sizeof(PolyShape), 49 + sizeof(bool)> __UnityEngine_ProBuilder_PolyShapeSizeCheck;
  static_assert(sizeof(PolyShape) == 0x32);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PolyShape*, "UnityEngine.ProBuilder", "PolyShape");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PolyShape::PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::get_controlPoints
// Il2CppName: get_controlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector3>* (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::get_controlPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "get_controlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::get_extrude
// Il2CppName: get_extrude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::get_extrude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "get_extrude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::set_extrude
// Il2CppName: set_extrude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PolyShape::*)(float)>(&UnityEngine::ProBuilder::PolyShape::set_extrude)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "set_extrude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::get_polyEditMode
// Il2CppName: get_polyEditMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::PolyShape::PolyEditMode (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::get_polyEditMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "get_polyEditMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::set_polyEditMode
// Il2CppName: set_polyEditMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PolyShape::*)(UnityEngine::ProBuilder::PolyShape::PolyEditMode)>(&UnityEngine::ProBuilder::PolyShape::set_polyEditMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PolyShape/PolyEditMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "set_polyEditMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::get_flipNormals
// Il2CppName: get_flipNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::get_flipNormals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "get_flipNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::set_flipNormals
// Il2CppName: set_flipNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PolyShape::*)(bool)>(&UnityEngine::ProBuilder::PolyShape::set_flipNormals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "set_flipNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ProBuilderMesh* (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PolyShape::*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::PolyShape::set_mesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::SetControlPoints
// Il2CppName: SetControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PolyShape::*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*)>(&UnityEngine::ProBuilder::PolyShape::SetControlPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "SetControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::IsSnapEnabled
// Il2CppName: IsSnapEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PolyShape::*)()>(&UnityEngine::ProBuilder::PolyShape::IsSnapEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PolyShape*), "IsSnapEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PolyShape::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
