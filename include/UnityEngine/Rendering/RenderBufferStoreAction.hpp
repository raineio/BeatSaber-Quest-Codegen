// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderBufferStoreAction
  struct RenderBufferStoreAction;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderBufferStoreAction, "UnityEngine.Rendering", "RenderBufferStoreAction");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderBufferStoreAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderBufferStoreAction/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderBufferStoreAction
    constexpr RenderBufferStoreAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
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
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.RenderBufferStoreAction
  #pragma pack(pop)
  static check_size<sizeof(RenderBufferStoreAction), 0 + sizeof(int)> __UnityEngine_Rendering_RenderBufferStoreActionSizeCheck;
  static_assert(sizeof(RenderBufferStoreAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
