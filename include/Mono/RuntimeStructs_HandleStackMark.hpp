// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs::HandleStackMark, "Mono", "RuntimeStructs/HandleStackMark");
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.HandleStackMark
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::HandleStackMark/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 interior_size
    // Size: 0x4
    // Offset: 0x4
    int interior_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr chunk
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr chunk;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: HandleStackMark
    constexpr HandleStackMark(int size_ = {}, int interior_size_ = {}, ::System::IntPtr chunk_ = {}) noexcept : size{size_}, interior_size{interior_size_}, chunk{chunk_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: private System.Int32 interior_size
    [[deprecated("Use field access instead!")]] int& dyn_interior_size();
    // Get instance field reference: private System.IntPtr chunk
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_chunk();
  }; // Mono.RuntimeStructs/Mono.HandleStackMark
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::HandleStackMark), 8 + sizeof(::System::IntPtr)> __Mono_RuntimeStructs_HandleStackMarkSizeCheck;
  static_assert(sizeof(RuntimeStructs::HandleStackMark) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
