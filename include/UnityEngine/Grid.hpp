// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GridLayout
#include "UnityEngine/GridLayout.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Grid
  class Grid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Grid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Grid*, "UnityEngine", "Grid");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Grid
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 10BCC7C
  // [RequireComponent] Offset: 10BCC7C
  // [NativeHeaderAttribute] Offset: 10BCC7C
  class Grid : public ::UnityEngine::GridLayout {
    public:
    // public UnityEngine.Vector3 get_cellSize()
    // Offset: 0x2BA3558
    ::UnityEngine::Vector3 get_cellSize();
    // private System.Void get_cellSize_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2BA35B8
    void get_cellSize_Injected(ByRef<::UnityEngine::Vector3> ret);
    // public System.Void .ctor()
    // Offset: 0x2BA3608
    // Implemented from: UnityEngine.GridLayout
    // Base method: System.Void GridLayout::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Grid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grid*, creationType>()));
    }
  }; // UnityEngine.Grid
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Grid::get_cellSize
// Il2CppName: get_cellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Grid::*)()>(&UnityEngine::Grid::get_cellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Grid*), "get_cellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Grid::get_cellSize_Injected
// Il2CppName: get_cellSize_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Grid::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Grid::get_cellSize_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Grid*), "get_cellSize_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Grid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
