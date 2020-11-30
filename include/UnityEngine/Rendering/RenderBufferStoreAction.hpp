// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderBufferStoreAction
  struct RenderBufferStoreAction : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: RenderBufferStoreAction
    constexpr RenderBufferStoreAction(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.RenderBufferStoreAction Store
    static constexpr const int Store = 0;
    // Get static field: static public UnityEngine.Rendering.RenderBufferStoreAction Store
    static UnityEngine::Rendering::RenderBufferStoreAction _get_Store();
    // Set static field: static public UnityEngine.Rendering.RenderBufferStoreAction Store
    static void _set_Store(UnityEngine::Rendering::RenderBufferStoreAction value);
    // static field const value: static public UnityEngine.Rendering.RenderBufferStoreAction Resolve
    static constexpr const int Resolve = 1;
    // Get static field: static public UnityEngine.Rendering.RenderBufferStoreAction Resolve
    static UnityEngine::Rendering::RenderBufferStoreAction _get_Resolve();
    // Set static field: static public UnityEngine.Rendering.RenderBufferStoreAction Resolve
    static void _set_Resolve(UnityEngine::Rendering::RenderBufferStoreAction value);
    // static field const value: static public UnityEngine.Rendering.RenderBufferStoreAction StoreAndResolve
    static constexpr const int StoreAndResolve = 2;
    // Get static field: static public UnityEngine.Rendering.RenderBufferStoreAction StoreAndResolve
    static UnityEngine::Rendering::RenderBufferStoreAction _get_StoreAndResolve();
    // Set static field: static public UnityEngine.Rendering.RenderBufferStoreAction StoreAndResolve
    static void _set_StoreAndResolve(UnityEngine::Rendering::RenderBufferStoreAction value);
    // static field const value: static public UnityEngine.Rendering.RenderBufferStoreAction DontCare
    static constexpr const int DontCare = 3;
    // Get static field: static public UnityEngine.Rendering.RenderBufferStoreAction DontCare
    static UnityEngine::Rendering::RenderBufferStoreAction _get_DontCare();
    // Set static field: static public UnityEngine.Rendering.RenderBufferStoreAction DontCare
    static void _set_DontCare(UnityEngine::Rendering::RenderBufferStoreAction value);
  }; // UnityEngine.Rendering.RenderBufferStoreAction
  check_size<sizeof(RenderBufferStoreAction), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __UnityEngine_Rendering_RenderBufferStoreActionSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderBufferStoreAction, "UnityEngine.Rendering", "RenderBufferStoreAction");
#pragma pack(pop)