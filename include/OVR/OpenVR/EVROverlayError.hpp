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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVROverlayError, "OVR.OpenVR", "EVROverlayError");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVROverlayError
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
    // static field const value: static public OVR.OpenVR.EVROverlayError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVROverlayError None
    static ::OVR::OpenVR::EVROverlayError _get_None();
    // Set static field: static public OVR.OpenVR.EVROverlayError None
    static void _set_None(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError UnknownOverlay
    static constexpr const int UnknownOverlay = 10;
    // Get static field: static public OVR.OpenVR.EVROverlayError UnknownOverlay
    static ::OVR::OpenVR::EVROverlayError _get_UnknownOverlay();
    // Set static field: static public OVR.OpenVR.EVROverlayError UnknownOverlay
    static void _set_UnknownOverlay(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError InvalidHandle
    static constexpr const int InvalidHandle = 11;
    // Get static field: static public OVR.OpenVR.EVROverlayError InvalidHandle
    static ::OVR::OpenVR::EVROverlayError _get_InvalidHandle();
    // Set static field: static public OVR.OpenVR.EVROverlayError InvalidHandle
    static void _set_InvalidHandle(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError PermissionDenied
    static constexpr const int PermissionDenied = 12;
    // Get static field: static public OVR.OpenVR.EVROverlayError PermissionDenied
    static ::OVR::OpenVR::EVROverlayError _get_PermissionDenied();
    // Set static field: static public OVR.OpenVR.EVROverlayError PermissionDenied
    static void _set_PermissionDenied(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError OverlayLimitExceeded
    static constexpr const int OverlayLimitExceeded = 13;
    // Get static field: static public OVR.OpenVR.EVROverlayError OverlayLimitExceeded
    static ::OVR::OpenVR::EVROverlayError _get_OverlayLimitExceeded();
    // Set static field: static public OVR.OpenVR.EVROverlayError OverlayLimitExceeded
    static void _set_OverlayLimitExceeded(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError WrongVisibilityType
    static constexpr const int WrongVisibilityType = 14;
    // Get static field: static public OVR.OpenVR.EVROverlayError WrongVisibilityType
    static ::OVR::OpenVR::EVROverlayError _get_WrongVisibilityType();
    // Set static field: static public OVR.OpenVR.EVROverlayError WrongVisibilityType
    static void _set_WrongVisibilityType(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError KeyTooLong
    static constexpr const int KeyTooLong = 15;
    // Get static field: static public OVR.OpenVR.EVROverlayError KeyTooLong
    static ::OVR::OpenVR::EVROverlayError _get_KeyTooLong();
    // Set static field: static public OVR.OpenVR.EVROverlayError KeyTooLong
    static void _set_KeyTooLong(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError NameTooLong
    static constexpr const int NameTooLong = 16;
    // Get static field: static public OVR.OpenVR.EVROverlayError NameTooLong
    static ::OVR::OpenVR::EVROverlayError _get_NameTooLong();
    // Set static field: static public OVR.OpenVR.EVROverlayError NameTooLong
    static void _set_NameTooLong(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError KeyInUse
    static constexpr const int KeyInUse = 17;
    // Get static field: static public OVR.OpenVR.EVROverlayError KeyInUse
    static ::OVR::OpenVR::EVROverlayError _get_KeyInUse();
    // Set static field: static public OVR.OpenVR.EVROverlayError KeyInUse
    static void _set_KeyInUse(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError WrongTransformType
    static constexpr const int WrongTransformType = 18;
    // Get static field: static public OVR.OpenVR.EVROverlayError WrongTransformType
    static ::OVR::OpenVR::EVROverlayError _get_WrongTransformType();
    // Set static field: static public OVR.OpenVR.EVROverlayError WrongTransformType
    static void _set_WrongTransformType(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError InvalidTrackedDevice
    static constexpr const int InvalidTrackedDevice = 19;
    // Get static field: static public OVR.OpenVR.EVROverlayError InvalidTrackedDevice
    static ::OVR::OpenVR::EVROverlayError _get_InvalidTrackedDevice();
    // Set static field: static public OVR.OpenVR.EVROverlayError InvalidTrackedDevice
    static void _set_InvalidTrackedDevice(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError InvalidParameter
    static constexpr const int InvalidParameter = 20;
    // Get static field: static public OVR.OpenVR.EVROverlayError InvalidParameter
    static ::OVR::OpenVR::EVROverlayError _get_InvalidParameter();
    // Set static field: static public OVR.OpenVR.EVROverlayError InvalidParameter
    static void _set_InvalidParameter(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError ThumbnailCantBeDestroyed
    static constexpr const int ThumbnailCantBeDestroyed = 21;
    // Get static field: static public OVR.OpenVR.EVROverlayError ThumbnailCantBeDestroyed
    static ::OVR::OpenVR::EVROverlayError _get_ThumbnailCantBeDestroyed();
    // Set static field: static public OVR.OpenVR.EVROverlayError ThumbnailCantBeDestroyed
    static void _set_ThumbnailCantBeDestroyed(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError ArrayTooSmall
    static constexpr const int ArrayTooSmall = 22;
    // Get static field: static public OVR.OpenVR.EVROverlayError ArrayTooSmall
    static ::OVR::OpenVR::EVROverlayError _get_ArrayTooSmall();
    // Set static field: static public OVR.OpenVR.EVROverlayError ArrayTooSmall
    static void _set_ArrayTooSmall(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError RequestFailed
    static constexpr const int RequestFailed = 23;
    // Get static field: static public OVR.OpenVR.EVROverlayError RequestFailed
    static ::OVR::OpenVR::EVROverlayError _get_RequestFailed();
    // Set static field: static public OVR.OpenVR.EVROverlayError RequestFailed
    static void _set_RequestFailed(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError InvalidTexture
    static constexpr const int InvalidTexture = 24;
    // Get static field: static public OVR.OpenVR.EVROverlayError InvalidTexture
    static ::OVR::OpenVR::EVROverlayError _get_InvalidTexture();
    // Set static field: static public OVR.OpenVR.EVROverlayError InvalidTexture
    static void _set_InvalidTexture(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError UnableToLoadFile
    static constexpr const int UnableToLoadFile = 25;
    // Get static field: static public OVR.OpenVR.EVROverlayError UnableToLoadFile
    static ::OVR::OpenVR::EVROverlayError _get_UnableToLoadFile();
    // Set static field: static public OVR.OpenVR.EVROverlayError UnableToLoadFile
    static void _set_UnableToLoadFile(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError KeyboardAlreadyInUse
    static constexpr const int KeyboardAlreadyInUse = 26;
    // Get static field: static public OVR.OpenVR.EVROverlayError KeyboardAlreadyInUse
    static ::OVR::OpenVR::EVROverlayError _get_KeyboardAlreadyInUse();
    // Set static field: static public OVR.OpenVR.EVROverlayError KeyboardAlreadyInUse
    static void _set_KeyboardAlreadyInUse(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError NoNeighbor
    static constexpr const int NoNeighbor = 27;
    // Get static field: static public OVR.OpenVR.EVROverlayError NoNeighbor
    static ::OVR::OpenVR::EVROverlayError _get_NoNeighbor();
    // Set static field: static public OVR.OpenVR.EVROverlayError NoNeighbor
    static void _set_NoNeighbor(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError TooManyMaskPrimitives
    static constexpr const int TooManyMaskPrimitives = 29;
    // Get static field: static public OVR.OpenVR.EVROverlayError TooManyMaskPrimitives
    static ::OVR::OpenVR::EVROverlayError _get_TooManyMaskPrimitives();
    // Set static field: static public OVR.OpenVR.EVROverlayError TooManyMaskPrimitives
    static void _set_TooManyMaskPrimitives(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError BadMaskPrimitive
    static constexpr const int BadMaskPrimitive = 30;
    // Get static field: static public OVR.OpenVR.EVROverlayError BadMaskPrimitive
    static ::OVR::OpenVR::EVROverlayError _get_BadMaskPrimitive();
    // Set static field: static public OVR.OpenVR.EVROverlayError BadMaskPrimitive
    static void _set_BadMaskPrimitive(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError TextureAlreadyLocked
    static constexpr const int TextureAlreadyLocked = 31;
    // Get static field: static public OVR.OpenVR.EVROverlayError TextureAlreadyLocked
    static ::OVR::OpenVR::EVROverlayError _get_TextureAlreadyLocked();
    // Set static field: static public OVR.OpenVR.EVROverlayError TextureAlreadyLocked
    static void _set_TextureAlreadyLocked(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError TextureLockCapacityReached
    static constexpr const int TextureLockCapacityReached = 32;
    // Get static field: static public OVR.OpenVR.EVROverlayError TextureLockCapacityReached
    static ::OVR::OpenVR::EVROverlayError _get_TextureLockCapacityReached();
    // Set static field: static public OVR.OpenVR.EVROverlayError TextureLockCapacityReached
    static void _set_TextureLockCapacityReached(::OVR::OpenVR::EVROverlayError value);
    // static field const value: static public OVR.OpenVR.EVROverlayError TextureNotLocked
    static constexpr const int TextureNotLocked = 33;
    // Get static field: static public OVR.OpenVR.EVROverlayError TextureNotLocked
    static ::OVR::OpenVR::EVROverlayError _get_TextureNotLocked();
    // Set static field: static public OVR.OpenVR.EVROverlayError TextureNotLocked
    static void _set_TextureNotLocked(::OVR::OpenVR::EVROverlayError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EVROverlayError
  #pragma pack(pop)
  static check_size<sizeof(EVROverlayError), 0 + sizeof(int)> __OVR_OpenVR_EVROverlayErrorSizeCheck;
  static_assert(sizeof(EVROverlayError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
