// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GridLayout
#include "UnityEngine/GridLayout.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Grid
  class Grid;
  // Forward declaring type: BoundsInt
  struct BoundsInt;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TileBase
  class TileBase;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.Tilemap
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ED2994
  // [NativeHeaderAttribute] Offset: ED2994
  // [NativeTypeAttribute] Offset: ED2994
  // [NativeHeaderAttribute] Offset: ED2994
  // [NativeHeaderAttribute] Offset: ED2994
  // [NativeHeaderAttribute] Offset: ED2994
  // [NativeHeaderAttribute] Offset: ED2994
  class Tilemap : public UnityEngine::GridLayout {
    public:
    // public UnityEngine.Grid get_layoutGrid()
    // Offset: 0x26229AC
    UnityEngine::Grid* get_layoutGrid();
    // public UnityEngine.BoundsInt get_cellBounds()
    // Offset: 0x26229EC
    UnityEngine::BoundsInt get_cellBounds();
    // public UnityEngine.Vector3Int get_origin()
    // Offset: 0x2622A78
    UnityEngine::Vector3Int get_origin();
    // public UnityEngine.Vector3Int get_size()
    // Offset: 0x2622AD8
    UnityEngine::Vector3Int get_size();
    // public UnityEngine.Vector3 get_tileAnchor()
    // Offset: 0x2622BD8
    UnityEngine::Vector3 get_tileAnchor();
    // public UnityEngine.Matrix4x4 get_orientationMatrix()
    // Offset: 0x2622C88
    UnityEngine::Matrix4x4 get_orientationMatrix();
    // UnityEngine.Object GetTileAsset(UnityEngine.Vector3Int position)
    // Offset: 0x2622D50
    UnityEngine::Object* GetTileAsset(UnityEngine::Vector3Int position);
    // public T GetTile(UnityEngine.Vector3Int position)
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetTile(UnityEngine::Vector3Int position) {
      static_assert(std::is_convertible_v<T, UnityEngine::Tilemaps::TileBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Tilemaps::Tilemap::GetTile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetTile", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(position)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___generic__method, position);
    }
    // UnityEngine.Object[] GetTileAssetsBlock(UnityEngine.Vector3Int position, UnityEngine.Vector3Int blockDimensions)
    // Offset: 0x2622DF8
    ::ArrayW<UnityEngine::Object*> GetTileAssetsBlock(UnityEngine::Vector3Int position, UnityEngine::Vector3Int blockDimensions);
    // public UnityEngine.Tilemaps.TileBase[] GetTilesBlock(UnityEngine.BoundsInt bounds)
    // Offset: 0x2622EB4
    ::ArrayW<UnityEngine::Tilemaps::TileBase*> GetTilesBlock(UnityEngine::BoundsInt bounds);
    // public System.Boolean HasTile(UnityEngine.Vector3Int position)
    // Offset: 0x2623054
    bool HasTile(UnityEngine::Vector3Int position);
    // public System.Void RefreshTile(UnityEngine.Vector3Int position)
    // Offset: 0x2622640
    void RefreshTile(UnityEngine::Vector3Int position);
    // public System.Int32 GetUsedTilesCount()
    // Offset: 0x2623138
    int GetUsedTilesCount();
    // public System.Int32 GetUsedTilesNonAlloc(UnityEngine.Tilemaps.TileBase[] usedTiles)
    // Offset: 0x2623178
    int GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Tilemaps::TileBase*> usedTiles);
    // System.Int32 Internal_GetUsedTilesNonAlloc(UnityEngine.Object[] usedTiles)
    // Offset: 0x26231C8
    int Internal_GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Object*> usedTiles);
    // private System.Void get_origin_Injected(out UnityEngine.Vector3Int ret)
    // Offset: 0x2622B38
    void get_origin_Injected(ByRef<UnityEngine::Vector3Int> ret);
    // private System.Void get_size_Injected(out UnityEngine.Vector3Int ret)
    // Offset: 0x2622B88
    void get_size_Injected(ByRef<UnityEngine::Vector3Int> ret);
    // private System.Void get_tileAnchor_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2622C38
    void get_tileAnchor_Injected(ByRef<UnityEngine::Vector3> ret);
    // private System.Void get_orientationMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x2622D00
    void get_orientationMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret);
    // private UnityEngine.Object GetTileAsset_Injected(ref UnityEngine.Vector3Int position)
    // Offset: 0x2622DA8
    UnityEngine::Object* GetTileAsset_Injected(ByRef<UnityEngine::Vector3Int> position);
    // private UnityEngine.Object[] GetTileAssetsBlock_Injected(ref UnityEngine.Vector3Int position, ref UnityEngine.Vector3Int blockDimensions)
    // Offset: 0x2622E5C
    ::ArrayW<UnityEngine::Object*> GetTileAssetsBlock_Injected(ByRef<UnityEngine::Vector3Int> position, ByRef<UnityEngine::Vector3Int> blockDimensions);
    // private System.Void RefreshTile_Injected(ref UnityEngine.Vector3Int position)
    // Offset: 0x26230E8
    void RefreshTile_Injected(ByRef<UnityEngine::Vector3Int> position);
  }; // UnityEngine.Tilemaps.Tilemap
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_layoutGrid
// Il2CppName: get_layoutGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Grid* (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_layoutGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_layoutGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_cellBounds
// Il2CppName: get_cellBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::BoundsInt (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_cellBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_cellBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_origin
// Il2CppName: get_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3Int (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_origin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3Int (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_tileAnchor
// Il2CppName: get_tileAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_tileAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_tileAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_orientationMatrix
// Il2CppName: get_orientationMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::get_orientationMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_orientationMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTileAsset
// Il2CppName: GetTileAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Tilemaps::Tilemap::*)(UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::GetTileAsset)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetTileAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTile
// Il2CppName: GetTile
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock
// Il2CppName: GetTileAssetsBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Object*> (UnityEngine::Tilemaps::Tilemap::*)(UnityEngine::Vector3Int, UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* blockDimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetTileAssetsBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, blockDimensions});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTilesBlock
// Il2CppName: GetTilesBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Tilemaps::TileBase*> (UnityEngine::Tilemaps::Tilemap::*)(UnityEngine::BoundsInt)>(&UnityEngine::Tilemaps::Tilemap::GetTilesBlock)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "BoundsInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetTilesBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::HasTile
// Il2CppName: HasTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Tilemaps::Tilemap::*)(UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::HasTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "HasTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile
// Il2CppName: RefreshTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetUsedTilesCount
// Il2CppName: GetUsedTilesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Tilemaps::Tilemap::*)()>(&UnityEngine::Tilemaps::Tilemap::GetUsedTilesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetUsedTilesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetUsedTilesNonAlloc
// Il2CppName: GetUsedTilesNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<UnityEngine::Tilemaps::TileBase*>)>(&UnityEngine::Tilemaps::Tilemap::GetUsedTilesNonAlloc)> {
  static const MethodInfo* get() {
    static auto* usedTiles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileBase"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetUsedTilesNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usedTiles});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::Internal_GetUsedTilesNonAlloc
// Il2CppName: Internal_GetUsedTilesNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<UnityEngine::Object*>)>(&UnityEngine::Tilemaps::Tilemap::Internal_GetUsedTilesNonAlloc)> {
  static const MethodInfo* get() {
    static auto* usedTiles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "Internal_GetUsedTilesNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usedTiles});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_origin_Injected
// Il2CppName: get_origin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::get_origin_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_origin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_size_Injected
// Il2CppName: get_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::get_size_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_tileAnchor_Injected
// Il2CppName: get_tileAnchor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::Tilemaps::Tilemap::get_tileAnchor_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_tileAnchor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::get_orientationMatrix_Injected
// Il2CppName: get_orientationMatrix_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Matrix4x4>)>(&UnityEngine::Tilemaps::Tilemap::get_orientationMatrix_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "get_orientationMatrix_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTileAsset_Injected
// Il2CppName: GetTileAsset_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::GetTileAsset_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetTileAsset_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock_Injected
// Il2CppName: GetTileAssetsBlock_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Object*> (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3Int>, ByRef<UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    static auto* blockDimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "GetTileAssetsBlock_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, blockDimensions});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected
// Il2CppName: RefreshTile_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
