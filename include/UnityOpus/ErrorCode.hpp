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
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.ErrorCode
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
    // static field const value: static public UnityOpus.ErrorCode OK
    static constexpr const int OK = 0;
    // Get static field: static public UnityOpus.ErrorCode OK
    static UnityOpus::ErrorCode _get_OK();
    // Set static field: static public UnityOpus.ErrorCode OK
    static void _set_OK(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode BadArg
    static constexpr const int BadArg = -1;
    // Get static field: static public UnityOpus.ErrorCode BadArg
    static UnityOpus::ErrorCode _get_BadArg();
    // Set static field: static public UnityOpus.ErrorCode BadArg
    static void _set_BadArg(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode BufferTooSmall
    static constexpr const int BufferTooSmall = -2;
    // Get static field: static public UnityOpus.ErrorCode BufferTooSmall
    static UnityOpus::ErrorCode _get_BufferTooSmall();
    // Set static field: static public UnityOpus.ErrorCode BufferTooSmall
    static void _set_BufferTooSmall(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode InternalError
    static constexpr const int InternalError = -3;
    // Get static field: static public UnityOpus.ErrorCode InternalError
    static UnityOpus::ErrorCode _get_InternalError();
    // Set static field: static public UnityOpus.ErrorCode InternalError
    static void _set_InternalError(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode InvalidPacket
    static constexpr const int InvalidPacket = -4;
    // Get static field: static public UnityOpus.ErrorCode InvalidPacket
    static UnityOpus::ErrorCode _get_InvalidPacket();
    // Set static field: static public UnityOpus.ErrorCode InvalidPacket
    static void _set_InvalidPacket(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode Unimplemented
    static constexpr const int Unimplemented = -5;
    // Get static field: static public UnityOpus.ErrorCode Unimplemented
    static UnityOpus::ErrorCode _get_Unimplemented();
    // Set static field: static public UnityOpus.ErrorCode Unimplemented
    static void _set_Unimplemented(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode InvalidState
    static constexpr const int InvalidState = -6;
    // Get static field: static public UnityOpus.ErrorCode InvalidState
    static UnityOpus::ErrorCode _get_InvalidState();
    // Set static field: static public UnityOpus.ErrorCode InvalidState
    static void _set_InvalidState(UnityOpus::ErrorCode value);
    // static field const value: static public UnityOpus.ErrorCode AllocFail
    static constexpr const int AllocFail = -7;
    // Get static field: static public UnityOpus.ErrorCode AllocFail
    static UnityOpus::ErrorCode _get_AllocFail();
    // Set static field: static public UnityOpus.ErrorCode AllocFail
    static void _set_AllocFail(UnityOpus::ErrorCode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityOpus.ErrorCode
  #pragma pack(pop)
  static check_size<sizeof(ErrorCode), 0 + sizeof(int)> __UnityOpus_ErrorCodeSizeCheck;
  static_assert(sizeof(ErrorCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::ErrorCode, "UnityOpus", "ErrorCode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"