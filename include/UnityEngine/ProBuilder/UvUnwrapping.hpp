// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.AutoUnwrapSettings
#include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.UvUnwrapping
  class UvUnwrapping : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Vector2 s_TempVector2
    static UnityEngine::Vector2 _get_s_TempVector2();
    // Set static field: static private UnityEngine.Vector2 s_TempVector2
    static void _set_s_TempVector2(UnityEngine::Vector2 value);
    // Get static field: static private readonly System.Collections.Generic.List`1<System.Int32> s_IndexBuffer
    static System::Collections::Generic::List_1<int>* _get_s_IndexBuffer();
    // Set static field: static private readonly System.Collections.Generic.List`1<System.Int32> s_IndexBuffer
    static void _set_s_IndexBuffer(System::Collections::Generic::List_1<int>* value);
    // static System.Void Unwrap(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3 projection)
    // Offset: 0x1E79EBC
    static void Unwrap(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face, UnityEngine::Vector3 projection);
    // static System.Void CopyUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face source, UnityEngine.ProBuilder.Face dest)
    // Offset: 0x1E7A894
    static void CopyUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* source, UnityEngine::ProBuilder::Face* dest);
    // static System.Void ProjectTextureGroup(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 group, UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x1E7A9B8
    static void ProjectTextureGroup(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int group, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static private System.Void ApplyUVSettings(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.ProBuilder.AutoUnwrapSettings uvSettings)
    // Offset: 0x1E7A028
    static void ApplyUVSettings(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings);
    // static private System.Void StretchUVs(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1E7ADD4
    static void StretchUVs(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void FitUVs(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1E7AB68
    static void FitUVs(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void ApplyUVAnchor(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor anchor)
    // Offset: 0x1E7B008
    static void ApplyUVAnchor(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor anchor);
    // static private System.Void .cctor()
    // Offset: 0x1E7B418
    static void _cctor();
  }; // UnityEngine.ProBuilder.UvUnwrapping
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UvUnwrapping*, "UnityEngine.ProBuilder", "UvUnwrapping");
#pragma pack(pop)
