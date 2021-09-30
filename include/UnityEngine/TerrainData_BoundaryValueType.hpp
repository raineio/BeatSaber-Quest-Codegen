// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TerrainData
#include "UnityEngine/TerrainData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainData/UnityEngine.BoundaryValueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TerrainData::BoundaryValueType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: BoundaryValueType
    constexpr BoundaryValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxHeightmapRes
    static constexpr const int MaxHeightmapRes = 0;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxHeightmapRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxHeightmapRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxHeightmapRes
    static void _set_MaxHeightmapRes(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinDetailResPerPatch
    static constexpr const int MinDetailResPerPatch = 1;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinDetailResPerPatch
    static UnityEngine::TerrainData::BoundaryValueType _get_MinDetailResPerPatch();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinDetailResPerPatch
    static void _set_MinDetailResPerPatch(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailResPerPatch
    static constexpr const int MaxDetailResPerPatch = 2;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailResPerPatch
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxDetailResPerPatch();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailResPerPatch
    static void _set_MaxDetailResPerPatch(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailPatchCount
    static constexpr const int MaxDetailPatchCount = 3;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailPatchCount
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxDetailPatchCount();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailPatchCount
    static void _set_MaxDetailPatchCount(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailsPerRes
    static constexpr const int MaxDetailsPerRes = 4;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailsPerRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxDetailsPerRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxDetailsPerRes
    static void _set_MaxDetailsPerRes(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinAlphamapRes
    static constexpr const int MinAlphamapRes = 5;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinAlphamapRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MinAlphamapRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinAlphamapRes
    static void _set_MinAlphamapRes(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxAlphamapRes
    static constexpr const int MaxAlphamapRes = 6;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxAlphamapRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxAlphamapRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxAlphamapRes
    static void _set_MaxAlphamapRes(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinBaseMapRes
    static constexpr const int MinBaseMapRes = 7;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinBaseMapRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MinBaseMapRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MinBaseMapRes
    static void _set_MinBaseMapRes(UnityEngine::TerrainData::BoundaryValueType value);
    // static field const value: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxBaseMapRes
    static constexpr const int MaxBaseMapRes = 8;
    // Get static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxBaseMapRes
    static UnityEngine::TerrainData::BoundaryValueType _get_MaxBaseMapRes();
    // Set static field: static public UnityEngine.TerrainData/UnityEngine.BoundaryValueType MaxBaseMapRes
    static void _set_MaxBaseMapRes(UnityEngine::TerrainData::BoundaryValueType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TerrainData/UnityEngine.BoundaryValueType
  #pragma pack(pop)
  static check_size<sizeof(TerrainData::BoundaryValueType), 0 + sizeof(int)> __UnityEngine_TerrainData_BoundaryValueTypeSizeCheck;
  static_assert(sizeof(TerrainData::BoundaryValueType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainData::BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
