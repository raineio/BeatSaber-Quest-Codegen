// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderMeshConstructor
#include "GlobalNamespace/SliderMeshConstructor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VertexPath
  class VertexPath;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderMeshConstructorCrossedStrips
  class SliderMeshConstructorCrossedStrips;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructorCrossedStrips);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructorCrossedStrips*, "", "SliderMeshConstructorCrossedStrips");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SliderMeshConstructorCrossedStrips
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderMeshConstructorCrossedStrips : public ::GlobalNamespace::SliderMeshConstructor {
    public:
    public:
    // private readonly System.Int32[] _triangleMap
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> triangleMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int32[] _triangleMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__triangleMap();
    // public System.Void .ctor()
    // Offset: 0x147DCA8
    // Implemented from: SliderMeshConstructor
    // Base method: System.Void SliderMeshConstructor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderMeshConstructorCrossedStrips* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderMeshConstructorCrossedStrips::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderMeshConstructorCrossedStrips*, creationType>()));
    }
    // protected override System.Void CreateSliderMeshInternal(VertexPath path)
    // Offset: 0x147D7C8
    // Implemented from: SliderMeshConstructor
    // Base method: System.Void SliderMeshConstructor::CreateSliderMeshInternal(VertexPath path)
    void CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path);
    // protected override System.Int32 GetVertexCount(VertexPath path)
    // Offset: 0x147DC68
    // Implemented from: SliderMeshConstructor
    // Base method: System.Int32 SliderMeshConstructor::GetVertexCount(VertexPath path)
    int GetVertexCount(::GlobalNamespace::VertexPath* path);
    // protected override System.Int32 GetTrianglesCount(VertexPath path)
    // Offset: 0x147DC84
    // Implemented from: SliderMeshConstructor
    // Base method: System.Int32 SliderMeshConstructor::GetTrianglesCount(VertexPath path)
    int GetTrianglesCount(::GlobalNamespace::VertexPath* path);
  }; // SliderMeshConstructorCrossedStrips
  #pragma pack(pop)
  static check_size<sizeof(SliderMeshConstructorCrossedStrips), 72 + sizeof(::ArrayW<int>)> __GlobalNamespace_SliderMeshConstructorCrossedStripsSizeCheck;
  static_assert(sizeof(SliderMeshConstructorCrossedStrips) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshConstructorCrossedStrips::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal
// Il2CppName: CreateSliderMeshInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("", "VertexPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshConstructorCrossedStrips*), "CreateSliderMeshInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount
// Il2CppName: GetVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("", "VertexPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshConstructorCrossedStrips*), "GetVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount
// Il2CppName: GetTrianglesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("", "VertexPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshConstructorCrossedStrips*), "GetTrianglesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
