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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EIOBufferError, "OVR.OpenVR", "EIOBufferError");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EIOBufferError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EIOBufferError/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EIOBufferError
    constexpr EIOBufferError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_Success
    static constexpr const int IOBuffer_Success = 0;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_Success
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_Success();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_Success
    static void _set_IOBuffer_Success(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_OperationFailed
    static constexpr const int IOBuffer_OperationFailed = 100;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_OperationFailed
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_OperationFailed();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_OperationFailed
    static void _set_IOBuffer_OperationFailed(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidHandle
    static constexpr const int IOBuffer_InvalidHandle = 101;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidHandle
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_InvalidHandle();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidHandle
    static void _set_IOBuffer_InvalidHandle(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidArgument
    static constexpr const int IOBuffer_InvalidArgument = 102;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidArgument
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_InvalidArgument();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_InvalidArgument
    static void _set_IOBuffer_InvalidArgument(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_PathExists
    static constexpr const int IOBuffer_PathExists = 103;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_PathExists
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_PathExists();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_PathExists
    static void _set_IOBuffer_PathExists(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_PathDoesNotExist
    static constexpr const int IOBuffer_PathDoesNotExist = 104;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_PathDoesNotExist
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_PathDoesNotExist();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_PathDoesNotExist
    static void _set_IOBuffer_PathDoesNotExist(OVR::OpenVR::EIOBufferError value);
    // static field const value: static public OVR.OpenVR.EIOBufferError IOBuffer_Permission
    static constexpr const int IOBuffer_Permission = 105;
    // Get static field: static public OVR.OpenVR.EIOBufferError IOBuffer_Permission
    static OVR::OpenVR::EIOBufferError _get_IOBuffer_Permission();
    // Set static field: static public OVR.OpenVR.EIOBufferError IOBuffer_Permission
    static void _set_IOBuffer_Permission(OVR::OpenVR::EIOBufferError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EIOBufferError
  #pragma pack(pop)
  static check_size<sizeof(EIOBufferError), 0 + sizeof(int)> __OVR_OpenVR_EIOBufferErrorSizeCheck;
  static_assert(sizeof(EIOBufferError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
