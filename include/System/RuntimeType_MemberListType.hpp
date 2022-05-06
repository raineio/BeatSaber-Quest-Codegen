// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeType::MemberListType, "System", "RuntimeType/MemberListType");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.RuntimeType/System.MemberListType
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeType::MemberListType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MemberListType
    constexpr MemberListType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.RuntimeType/System.MemberListType All
    static constexpr const int All = 0;
    // Get static field: static public System.RuntimeType/System.MemberListType All
    static ::System::RuntimeType::MemberListType _get_All();
    // Set static field: static public System.RuntimeType/System.MemberListType All
    static void _set_All(::System::RuntimeType::MemberListType value);
    // static field const value: static public System.RuntimeType/System.MemberListType CaseSensitive
    static constexpr const int CaseSensitive = 1;
    // Get static field: static public System.RuntimeType/System.MemberListType CaseSensitive
    static ::System::RuntimeType::MemberListType _get_CaseSensitive();
    // Set static field: static public System.RuntimeType/System.MemberListType CaseSensitive
    static void _set_CaseSensitive(::System::RuntimeType::MemberListType value);
    // static field const value: static public System.RuntimeType/System.MemberListType CaseInsensitive
    static constexpr const int CaseInsensitive = 2;
    // Get static field: static public System.RuntimeType/System.MemberListType CaseInsensitive
    static ::System::RuntimeType::MemberListType _get_CaseInsensitive();
    // Set static field: static public System.RuntimeType/System.MemberListType CaseInsensitive
    static void _set_CaseInsensitive(::System::RuntimeType::MemberListType value);
    // static field const value: static public System.RuntimeType/System.MemberListType HandleToInfo
    static constexpr const int HandleToInfo = 3;
    // Get static field: static public System.RuntimeType/System.MemberListType HandleToInfo
    static ::System::RuntimeType::MemberListType _get_HandleToInfo();
    // Set static field: static public System.RuntimeType/System.MemberListType HandleToInfo
    static void _set_HandleToInfo(::System::RuntimeType::MemberListType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.RuntimeType/System.MemberListType
  #pragma pack(pop)
  static check_size<sizeof(RuntimeType::MemberListType), 0 + sizeof(int)> __System_RuntimeType_MemberListTypeSizeCheck;
  static_assert(sizeof(RuntimeType::MemberListType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
