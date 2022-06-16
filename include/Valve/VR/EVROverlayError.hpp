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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVROverlayError, "Valve.VR", "EVROverlayError");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVROverlayError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVROverlayError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVROverlayError
    constexpr EVROverlayError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVROverlayError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVROverlayError None
    static ::Valve::VR::EVROverlayError _get_None();
    // Set static field: static public Valve.VR.EVROverlayError None
    static void _set_None(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError UnknownOverlay
    static constexpr const int UnknownOverlay = 10;
    // Get static field: static public Valve.VR.EVROverlayError UnknownOverlay
    static ::Valve::VR::EVROverlayError _get_UnknownOverlay();
    // Set static field: static public Valve.VR.EVROverlayError UnknownOverlay
    static void _set_UnknownOverlay(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError InvalidHandle
    static constexpr const int InvalidHandle = 11;
    // Get static field: static public Valve.VR.EVROverlayError InvalidHandle
    static ::Valve::VR::EVROverlayError _get_InvalidHandle();
    // Set static field: static public Valve.VR.EVROverlayError InvalidHandle
    static void _set_InvalidHandle(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError PermissionDenied
    static constexpr const int PermissionDenied = 12;
    // Get static field: static public Valve.VR.EVROverlayError PermissionDenied
    static ::Valve::VR::EVROverlayError _get_PermissionDenied();
    // Set static field: static public Valve.VR.EVROverlayError PermissionDenied
    static void _set_PermissionDenied(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError OverlayLimitExceeded
    static constexpr const int OverlayLimitExceeded = 13;
    // Get static field: static public Valve.VR.EVROverlayError OverlayLimitExceeded
    static ::Valve::VR::EVROverlayError _get_OverlayLimitExceeded();
    // Set static field: static public Valve.VR.EVROverlayError OverlayLimitExceeded
    static void _set_OverlayLimitExceeded(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError WrongVisibilityType
    static constexpr const int WrongVisibilityType = 14;
    // Get static field: static public Valve.VR.EVROverlayError WrongVisibilityType
    static ::Valve::VR::EVROverlayError _get_WrongVisibilityType();
    // Set static field: static public Valve.VR.EVROverlayError WrongVisibilityType
    static void _set_WrongVisibilityType(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError KeyTooLong
    static constexpr const int KeyTooLong = 15;
    // Get static field: static public Valve.VR.EVROverlayError KeyTooLong
    static ::Valve::VR::EVROverlayError _get_KeyTooLong();
    // Set static field: static public Valve.VR.EVROverlayError KeyTooLong
    static void _set_KeyTooLong(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError NameTooLong
    static constexpr const int NameTooLong = 16;
    // Get static field: static public Valve.VR.EVROverlayError NameTooLong
    static ::Valve::VR::EVROverlayError _get_NameTooLong();
    // Set static field: static public Valve.VR.EVROverlayError NameTooLong
    static void _set_NameTooLong(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError KeyInUse
    static constexpr const int KeyInUse = 17;
    // Get static field: static public Valve.VR.EVROverlayError KeyInUse
    static ::Valve::VR::EVROverlayError _get_KeyInUse();
    // Set static field: static public Valve.VR.EVROverlayError KeyInUse
    static void _set_KeyInUse(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError WrongTransformType
    static constexpr const int WrongTransformType = 18;
    // Get static field: static public Valve.VR.EVROverlayError WrongTransformType
    static ::Valve::VR::EVROverlayError _get_WrongTransformType();
    // Set static field: static public Valve.VR.EVROverlayError WrongTransformType
    static void _set_WrongTransformType(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError InvalidTrackedDevice
    static constexpr const int InvalidTrackedDevice = 19;
    // Get static field: static public Valve.VR.EVROverlayError InvalidTrackedDevice
    static ::Valve::VR::EVROverlayError _get_InvalidTrackedDevice();
    // Set static field: static public Valve.VR.EVROverlayError InvalidTrackedDevice
    static void _set_InvalidTrackedDevice(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError InvalidParameter
    static constexpr const int InvalidParameter = 20;
    // Get static field: static public Valve.VR.EVROverlayError InvalidParameter
    static ::Valve::VR::EVROverlayError _get_InvalidParameter();
    // Set static field: static public Valve.VR.EVROverlayError InvalidParameter
    static void _set_InvalidParameter(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError ThumbnailCantBeDestroyed
    static constexpr const int ThumbnailCantBeDestroyed = 21;
    // Get static field: static public Valve.VR.EVROverlayError ThumbnailCantBeDestroyed
    static ::Valve::VR::EVROverlayError _get_ThumbnailCantBeDestroyed();
    // Set static field: static public Valve.VR.EVROverlayError ThumbnailCantBeDestroyed
    static void _set_ThumbnailCantBeDestroyed(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError ArrayTooSmall
    static constexpr const int ArrayTooSmall = 22;
    // Get static field: static public Valve.VR.EVROverlayError ArrayTooSmall
    static ::Valve::VR::EVROverlayError _get_ArrayTooSmall();
    // Set static field: static public Valve.VR.EVROverlayError ArrayTooSmall
    static void _set_ArrayTooSmall(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError RequestFailed
    static constexpr const int RequestFailed = 23;
    // Get static field: static public Valve.VR.EVROverlayError RequestFailed
    static ::Valve::VR::EVROverlayError _get_RequestFailed();
    // Set static field: static public Valve.VR.EVROverlayError RequestFailed
    static void _set_RequestFailed(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError InvalidTexture
    static constexpr const int InvalidTexture = 24;
    // Get static field: static public Valve.VR.EVROverlayError InvalidTexture
    static ::Valve::VR::EVROverlayError _get_InvalidTexture();
    // Set static field: static public Valve.VR.EVROverlayError InvalidTexture
    static void _set_InvalidTexture(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError UnableToLoadFile
    static constexpr const int UnableToLoadFile = 25;
    // Get static field: static public Valve.VR.EVROverlayError UnableToLoadFile
    static ::Valve::VR::EVROverlayError _get_UnableToLoadFile();
    // Set static field: static public Valve.VR.EVROverlayError UnableToLoadFile
    static void _set_UnableToLoadFile(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError KeyboardAlreadyInUse
    static constexpr const int KeyboardAlreadyInUse = 26;
    // Get static field: static public Valve.VR.EVROverlayError KeyboardAlreadyInUse
    static ::Valve::VR::EVROverlayError _get_KeyboardAlreadyInUse();
    // Set static field: static public Valve.VR.EVROverlayError KeyboardAlreadyInUse
    static void _set_KeyboardAlreadyInUse(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError NoNeighbor
    static constexpr const int NoNeighbor = 27;
    // Get static field: static public Valve.VR.EVROverlayError NoNeighbor
    static ::Valve::VR::EVROverlayError _get_NoNeighbor();
    // Set static field: static public Valve.VR.EVROverlayError NoNeighbor
    static void _set_NoNeighbor(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError TooManyMaskPrimitives
    static constexpr const int TooManyMaskPrimitives = 29;
    // Get static field: static public Valve.VR.EVROverlayError TooManyMaskPrimitives
    static ::Valve::VR::EVROverlayError _get_TooManyMaskPrimitives();
    // Set static field: static public Valve.VR.EVROverlayError TooManyMaskPrimitives
    static void _set_TooManyMaskPrimitives(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError BadMaskPrimitive
    static constexpr const int BadMaskPrimitive = 30;
    // Get static field: static public Valve.VR.EVROverlayError BadMaskPrimitive
    static ::Valve::VR::EVROverlayError _get_BadMaskPrimitive();
    // Set static field: static public Valve.VR.EVROverlayError BadMaskPrimitive
    static void _set_BadMaskPrimitive(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError TextureAlreadyLocked
    static constexpr const int TextureAlreadyLocked = 31;
    // Get static field: static public Valve.VR.EVROverlayError TextureAlreadyLocked
    static ::Valve::VR::EVROverlayError _get_TextureAlreadyLocked();
    // Set static field: static public Valve.VR.EVROverlayError TextureAlreadyLocked
    static void _set_TextureAlreadyLocked(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError TextureLockCapacityReached
    static constexpr const int TextureLockCapacityReached = 32;
    // Get static field: static public Valve.VR.EVROverlayError TextureLockCapacityReached
    static ::Valve::VR::EVROverlayError _get_TextureLockCapacityReached();
    // Set static field: static public Valve.VR.EVROverlayError TextureLockCapacityReached
    static void _set_TextureLockCapacityReached(::Valve::VR::EVROverlayError value);
    // static field const value: static public Valve.VR.EVROverlayError TextureNotLocked
    static constexpr const int TextureNotLocked = 33;
    // Get static field: static public Valve.VR.EVROverlayError TextureNotLocked
    static ::Valve::VR::EVROverlayError _get_TextureNotLocked();
    // Set static field: static public Valve.VR.EVROverlayError TextureNotLocked
    static void _set_TextureNotLocked(::Valve::VR::EVROverlayError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVROverlayError
  #pragma pack(pop)
  static check_size<sizeof(EVROverlayError), 0 + sizeof(int)> __Valve_VR_EVROverlayErrorSizeCheck;
  static_assert(sizeof(EVROverlayError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
