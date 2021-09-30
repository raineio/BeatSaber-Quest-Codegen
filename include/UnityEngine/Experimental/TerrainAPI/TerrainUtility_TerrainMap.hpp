// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Skipping declaration: ErrorCode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainUtility::TerrainMap : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter
    class TerrainFilter;
    // Nested type: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord
    struct TileCoord;
    // Nested type: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode
    struct ErrorCode;
    // Nested type: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TileCoord
    // [TokenAttribute] Offset: FFFFFFFF
    struct TileCoord/*, public System::ValueType*/ {
      public:
      // public readonly System.Int32 tileX
      // Size: 0x4
      // Offset: 0x0
      int tileX;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 tileZ
      // Size: 0x4
      // Offset: 0x4
      int tileZ;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TileCoord
      constexpr TileCoord(int tileX_ = {}, int tileZ_ = {}) noexcept : tileX{tileX_}, tileZ{tileZ_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Int32 tileX
      int& dyn_tileX();
      // Get instance field reference: public readonly System.Int32 tileZ
      int& dyn_tileZ();
      // public System.Void .ctor(System.Int32 tileX, System.Int32 tileZ)
      // Offset: 0x25E8F30
      // ABORTED: conflicts with another method.  TileCoord(int tileX, int tileZ);
    }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TileCoord
    #pragma pack(pop)
    static check_size<sizeof(TerrainUtility::TerrainMap::TileCoord), 4 + sizeof(int)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoordSizeCheck;
    static_assert(sizeof(TerrainUtility::TerrainMap::TileCoord) == 0x8);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode
    // [TokenAttribute] Offset: FFFFFFFF
    struct ErrorCode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ErrorCode
      constexpr ErrorCode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode OK
      static constexpr const int OK = 0;
      // Get static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode OK
      static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode _get_OK();
      // Set static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode OK
      static void _set_OK(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode value);
      // static field const value: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode Overlapping
      static constexpr const int Overlapping = 1;
      // Get static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode Overlapping
      static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode _get_Overlapping();
      // Set static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode Overlapping
      static void _set_Overlapping(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode value);
      // static field const value: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode SizeMismatch
      static constexpr const int SizeMismatch = 4;
      // Get static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode SizeMismatch
      static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode _get_SizeMismatch();
      // Set static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode SizeMismatch
      static void _set_SizeMismatch(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode value);
      // static field const value: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode EdgeAlignmentMismatch
      static constexpr const int EdgeAlignmentMismatch = 8;
      // Get static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode EdgeAlignmentMismatch
      static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode _get_EdgeAlignmentMismatch();
      // Set static field: static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode EdgeAlignmentMismatch
      static void _set_EdgeAlignmentMismatch(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode
    #pragma pack(pop)
    static check_size<sizeof(TerrainUtility::TerrainMap::ErrorCode), 0 + sizeof(int)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ErrorCodeSizeCheck;
    static_assert(sizeof(TerrainUtility::TerrainMap::ErrorCode) == 0x4);
    // private UnityEngine.Vector3 m_patchSize
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 m_patchSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode m_errorCode
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode m_errorCode;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode) == 0x4);
    // public System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TileCoord,UnityEngine.Terrain> m_terrainTiles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord, UnityEngine::Terrain*>* m_terrainTiles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord, UnityEngine::Terrain*>*) == 0x8);
    // Get instance field reference: private UnityEngine.Vector3 m_patchSize
    UnityEngine::Vector3& dyn_m_patchSize();
    // Get instance field reference: public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode m_errorCode
    UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode& dyn_m_errorCode();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TileCoord,UnityEngine.Terrain> m_terrainTiles
    System::Collections::Generic::Dictionary_2<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord, UnityEngine::Terrain*>*& dyn_m_terrainTiles();
    // public UnityEngine.Terrain GetTerrain(System.Int32 tileX, System.Int32 tileZ)
    // Offset: 0x25E8DBC
    UnityEngine::Terrain* GetTerrain(int tileX, int tileZ);
    // static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap CreateFromPlacement(UnityEngine.Terrain originTerrain, UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TerrainFilter filter, System.Boolean fullValidation)
    // Offset: 0x25E87E4
    static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap* CreateFromPlacement(UnityEngine::Terrain* originTerrain, UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter* filter, bool fullValidation);
    // static public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap CreateFromPlacement(UnityEngine.Vector2 gridOrigin, UnityEngine.Vector2 gridSize, UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TerrainFilter filter, System.Boolean fullValidation)
    // Offset: 0x25E8FE0
    static UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap* CreateFromPlacement(UnityEngine::Vector2 gridOrigin, UnityEngine::Vector2 gridSize, UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter* filter, bool fullValidation);
    // private System.Void AddTerrainInternal(System.Int32 x, System.Int32 z, UnityEngine.Terrain terrain)
    // Offset: 0x25E98E8
    void AddTerrainInternal(int x, int z, UnityEngine::Terrain* terrain);
    // private System.Boolean TryToAddTerrain(System.Int32 tileX, System.Int32 tileZ, UnityEngine.Terrain terrain)
    // Offset: 0x25E96B0
    bool TryToAddTerrain(int tileX, int tileZ, UnityEngine::Terrain* terrain);
    // private System.Void ValidateTerrain(System.Int32 tileX, System.Int32 tileZ)
    // Offset: 0x25E9A44
    void ValidateTerrain(int tileX, int tileZ);
    // private UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.ErrorCode Validate()
    // Offset: 0x25E97E4
    UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode Validate();
    // public System.Void .ctor()
    // Offset: 0x25E9298
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::TerrainMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::TerrainMap*, creationType>()));
    }
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap
  #pragma pack(pop)
  static check_size<sizeof(TerrainUtility::TerrainMap), 32 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord, UnityEngine::Terrain*>*)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMapSizeCheck;
  static_assert(sizeof(TerrainUtility::TerrainMap) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TileCoord, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/TileCoord");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/ErrorCode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::GetTerrain
// Il2CppName: GetTerrain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Terrain* (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::*)(int, int)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::GetTerrain)> {
  static const MethodInfo* get() {
    static auto* tileX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tileZ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "GetTerrain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tileX, tileZ});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::CreateFromPlacement
// Il2CppName: CreateFromPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap* (*)(UnityEngine::Terrain*, UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::CreateFromPlacement)> {
  static const MethodInfo* get() {
    static auto* originTerrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/TerrainFilter")->byval_arg;
    static auto* fullValidation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "CreateFromPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originTerrain, filter, fullValidation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::CreateFromPlacement
// Il2CppName: CreateFromPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap* (*)(UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::CreateFromPlacement)> {
  static const MethodInfo* get() {
    static auto* gridOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* gridSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/TerrainFilter")->byval_arg;
    static auto* fullValidation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "CreateFromPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gridOrigin, gridSize, filter, fullValidation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::AddTerrainInternal
// Il2CppName: AddTerrainInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::*)(int, int, UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::AddTerrainInternal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "AddTerrainInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, terrain});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TryToAddTerrain
// Il2CppName: TryToAddTerrain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::*)(int, int, UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TryToAddTerrain)> {
  static const MethodInfo* get() {
    static auto* tileX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tileZ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "TryToAddTerrain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tileX, tileZ, terrain});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ValidateTerrain
// Il2CppName: ValidateTerrain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::*)(int, int)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ValidateTerrain)> {
  static const MethodInfo* get() {
    static auto* tileX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tileZ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "ValidateTerrain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tileX, tileZ});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::ErrorCode (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::*)()>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!