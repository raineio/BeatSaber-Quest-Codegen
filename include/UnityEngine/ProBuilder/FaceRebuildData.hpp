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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::FaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::FaceRebuildData*, "UnityEngine.ProBuilder", "FaceRebuildData");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.FaceRebuildData
  // [TokenAttribute] Offset: FFFFFFFF
  class FaceRebuildData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.ProBuilder.Face face
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.Int32> sharedIndexes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<int>* sharedIndexes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // public System.Collections.Generic.List`1<System.Int32> sharedIndexesUV
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<int>* sharedIndexesUV;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Int32 _appliedOffset
    // Size: 0x4
    // Offset: 0x30
    int appliedOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Face face
    UnityEngine::ProBuilder::Face*& dyn_face();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*& dyn_vertices();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Int32> sharedIndexes
    System::Collections::Generic::List_1<int>*& dyn_sharedIndexes();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Int32> sharedIndexesUV
    System::Collections::Generic::List_1<int>*& dyn_sharedIndexesUV();
    // Get instance field reference: private System.Int32 _appliedOffset
    int& dyn__appliedOffset();
    // public System.Int32 Offset()
    // Offset: 0x1CC7700
    int Offset();
    // static public System.Void Apply(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.FaceRebuildData> newFaces, UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1CC77A4
    static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>* newFaces, UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Void Apply(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.FaceRebuildData> newFaces, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedVertexLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedTextureLookup)
    // Offset: 0x1CC7904
    static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>* newFaces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* sharedVertexLookup, System::Collections::Generic::Dictionary_2<int, int>* sharedTextureLookup);
    // public System.Void .ctor()
    // Offset: 0x1CC7DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FaceRebuildData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::FaceRebuildData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FaceRebuildData*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1CC7708
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.FaceRebuildData
  #pragma pack(pop)
  static check_size<sizeof(FaceRebuildData), 48 + sizeof(int)> __UnityEngine_ProBuilder_FaceRebuildDataSizeCheck;
  static_assert(sizeof(FaceRebuildData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::FaceRebuildData::Offset
// Il2CppName: Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::FaceRebuildData::*)()>(&UnityEngine::ProBuilder::FaceRebuildData::Offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::FaceRebuildData*), "Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::FaceRebuildData::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>*, UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::FaceRebuildData::Apply)> {
  static const MethodInfo* get() {
    static auto* newFaces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "FaceRebuildData")})->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::FaceRebuildData*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newFaces, mesh, vertices, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::FaceRebuildData::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*, System::Collections::Generic::Dictionary_2<int, int>*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::FaceRebuildData::Apply)> {
  static const MethodInfo* get() {
    static auto* newFaces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "FaceRebuildData")})->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* sharedVertexLookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* sharedTextureLookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::FaceRebuildData*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newFaces, vertices, faces, sharedVertexLookup, sharedTextureLookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::FaceRebuildData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::FaceRebuildData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::FaceRebuildData::*)()>(&UnityEngine::ProBuilder::FaceRebuildData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::FaceRebuildData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
