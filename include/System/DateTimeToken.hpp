// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/System.DTT
#include "System/DateTimeParse_DTT.hpp"
// Including type: System.TokenType
#include "System/TokenType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: DateTimeToken
  struct DateTimeToken;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeToken, "System", "DateTimeToken");
// Type namespace: System
namespace System {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DateTimeToken
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeToken/*, public System::ValueType*/ {
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
    // System.DateTimeParse/System.DTT dtt
    // Size: 0x4
    // Offset: 0x0
    System::DateTimeParse::DTT dtt;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::DTT) == 0x4);
    // System.TokenType suffix
    // Size: 0x4
    // Offset: 0x4
    System::TokenType suffix;
    // Field size check
    static_assert(sizeof(System::TokenType) == 0x4);
    // System.Int32 num
    // Size: 0x4
    // Offset: 0x8
    int num;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeToken
    constexpr DateTimeToken(System::DateTimeParse::DTT dtt_ = {}, System::TokenType suffix_ = {}, int num_ = {}) noexcept : dtt{dtt_}, suffix{suffix_}, num{num_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.DateTimeParse/System.DTT dtt
    System::DateTimeParse::DTT& dyn_dtt();
    // Get instance field reference: System.TokenType suffix
    System::TokenType& dyn_suffix();
    // Get instance field reference: System.Int32 num
    int& dyn_num();
  }; // System.DateTimeToken
  #pragma pack(pop)
  static check_size<sizeof(DateTimeToken), 8 + sizeof(int)> __System_DateTimeTokenSizeCheck;
  static_assert(sizeof(DateTimeToken) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
