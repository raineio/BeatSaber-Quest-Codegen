// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: NativeOverlapped
  struct NativeOverlapped;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::NativeOverlapped, "System.Threading", "NativeOverlapped");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.NativeOverlapped
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA01E4
  struct NativeOverlapped/*, public System::ValueType*/ {
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
    // public System.IntPtr InternalLow
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr InternalLow;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr InternalHigh
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr InternalHigh;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 OffsetLow
    // Size: 0x4
    // Offset: 0x10
    int OffsetLow;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OffsetHigh
    // Size: 0x4
    // Offset: 0x14
    int OffsetHigh;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IntPtr EventHandle
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr EventHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: NativeOverlapped
    constexpr NativeOverlapped(System::IntPtr InternalLow_ = {}, System::IntPtr InternalHigh_ = {}, int OffsetLow_ = {}, int OffsetHigh_ = {}, System::IntPtr EventHandle_ = {}) noexcept : InternalLow{InternalLow_}, InternalHigh{InternalHigh_}, OffsetLow{OffsetLow_}, OffsetHigh{OffsetHigh_}, EventHandle{EventHandle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr InternalLow
    System::IntPtr& dyn_InternalLow();
    // Get instance field reference: public System.IntPtr InternalHigh
    System::IntPtr& dyn_InternalHigh();
    // Get instance field reference: public System.Int32 OffsetLow
    int& dyn_OffsetLow();
    // Get instance field reference: public System.Int32 OffsetHigh
    int& dyn_OffsetHigh();
    // Get instance field reference: public System.IntPtr EventHandle
    System::IntPtr& dyn_EventHandle();
  }; // System.Threading.NativeOverlapped
  #pragma pack(pop)
  static check_size<sizeof(NativeOverlapped), 24 + sizeof(System::IntPtr)> __System_Threading_NativeOverlappedSizeCheck;
  static_assert(sizeof(NativeOverlapped) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
