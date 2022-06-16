// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DTSubStringType
#include "System/DTSubStringType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: DTSubString
  struct DTSubString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DTSubString, "System", "DTSubString");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DTSubString
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 102EB28
  struct DTSubString/*, public ::System::ValueType*/ {
    public:
    public:
    // System.String s
    // Size: 0x8
    // Offset: 0x0
    ::StringW s;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 index
    // Size: 0x4
    // Offset: 0x8
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 length
    // Size: 0x4
    // Offset: 0xC
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.DTSubStringType type
    // Size: 0x4
    // Offset: 0x10
    ::System::DTSubStringType type;
    // Field size check
    static_assert(sizeof(::System::DTSubStringType) == 0x4);
    // System.Int32 value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DTSubString
    constexpr DTSubString(::StringW s_ = {}, int index_ = {}, int length_ = {}, ::System::DTSubStringType type_ = {}, int value_ = {}) noexcept : s{s_}, index{index_}, length{length_}, type{type_}, value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.String s
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s();
    // Get instance field reference: System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: System.DTSubStringType type
    [[deprecated("Use field access instead!")]] ::System::DTSubStringType& dyn_type();
    // Get instance field reference: System.Int32 value
    [[deprecated("Use field access instead!")]] int& dyn_value();
    // System.Char get_Item(System.Int32 relativeIndex)
    // Offset: 0x1D06374
    ::Il2CppChar get_Item(int relativeIndex);
  }; // System.DTSubString
  #pragma pack(pop)
  static check_size<sizeof(DTSubString), 20 + sizeof(int)> __System_DTSubStringSizeCheck;
  static_assert(sizeof(DTSubString) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DTSubString::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::DTSubString::*)(int)>(&System::DTSubString::get_Item)> {
  static const MethodInfo* get() {
    static auto* relativeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DTSubString), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativeIndex});
  }
};
