// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.MeshUpdateFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MeshUpdateFlags/*, public System::Enum*/ {
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
    // Creating value type constructor for type: MeshUpdateFlags
    constexpr MeshUpdateFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.MeshUpdateFlags Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.Rendering.MeshUpdateFlags Default
    static UnityEngine::Rendering::MeshUpdateFlags _get_Default();
    // Set static field: static public UnityEngine.Rendering.MeshUpdateFlags Default
    static void _set_Default(UnityEngine::Rendering::MeshUpdateFlags value);
    // static field const value: static public UnityEngine.Rendering.MeshUpdateFlags DontValidateIndices
    static constexpr const int DontValidateIndices = 1;
    // Get static field: static public UnityEngine.Rendering.MeshUpdateFlags DontValidateIndices
    static UnityEngine::Rendering::MeshUpdateFlags _get_DontValidateIndices();
    // Set static field: static public UnityEngine.Rendering.MeshUpdateFlags DontValidateIndices
    static void _set_DontValidateIndices(UnityEngine::Rendering::MeshUpdateFlags value);
    // static field const value: static public UnityEngine.Rendering.MeshUpdateFlags DontResetBoneBounds
    static constexpr const int DontResetBoneBounds = 2;
    // Get static field: static public UnityEngine.Rendering.MeshUpdateFlags DontResetBoneBounds
    static UnityEngine::Rendering::MeshUpdateFlags _get_DontResetBoneBounds();
    // Set static field: static public UnityEngine.Rendering.MeshUpdateFlags DontResetBoneBounds
    static void _set_DontResetBoneBounds(UnityEngine::Rendering::MeshUpdateFlags value);
    // static field const value: static public UnityEngine.Rendering.MeshUpdateFlags DontNotifyMeshUsers
    static constexpr const int DontNotifyMeshUsers = 4;
    // Get static field: static public UnityEngine.Rendering.MeshUpdateFlags DontNotifyMeshUsers
    static UnityEngine::Rendering::MeshUpdateFlags _get_DontNotifyMeshUsers();
    // Set static field: static public UnityEngine.Rendering.MeshUpdateFlags DontNotifyMeshUsers
    static void _set_DontNotifyMeshUsers(UnityEngine::Rendering::MeshUpdateFlags value);
    // static field const value: static public UnityEngine.Rendering.MeshUpdateFlags DontRecalculateBounds
    static constexpr const int DontRecalculateBounds = 8;
    // Get static field: static public UnityEngine.Rendering.MeshUpdateFlags DontRecalculateBounds
    static UnityEngine::Rendering::MeshUpdateFlags _get_DontRecalculateBounds();
    // Set static field: static public UnityEngine.Rendering.MeshUpdateFlags DontRecalculateBounds
    static void _set_DontRecalculateBounds(UnityEngine::Rendering::MeshUpdateFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.MeshUpdateFlags
  #pragma pack(pop)
  static check_size<sizeof(MeshUpdateFlags), 0 + sizeof(int)> __UnityEngine_Rendering_MeshUpdateFlagsSizeCheck;
  static_assert(sizeof(MeshUpdateFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::MeshUpdateFlags, "UnityEngine.Rendering", "MeshUpdateFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
