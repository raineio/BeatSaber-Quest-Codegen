// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: InternalCodePageDataItem
  struct InternalCodePageDataItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalCodePageDataItem, "System.Globalization", "InternalCodePageDataItem");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.InternalCodePageDataItem
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalCodePageDataItem/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt16 codePage
    // Size: 0x2
    // Offset: 0x0
    uint16_t codePage;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 uiFamilyCodePage
    // Size: 0x2
    // Offset: 0x2
    uint16_t uiFamilyCodePage;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt32 flags
    // Size: 0x4
    // Offset: 0x4
    uint flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.String Names
    // Size: 0x8
    // Offset: 0x8
    ::StringW Names;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: InternalCodePageDataItem
    constexpr InternalCodePageDataItem(uint16_t codePage_ = {}, uint16_t uiFamilyCodePage_ = {}, uint flags_ = {}, ::StringW Names_ = {}) noexcept : codePage{codePage_}, uiFamilyCodePage{uiFamilyCodePage_}, flags{flags_}, Names{Names_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt16 codePage
    [[deprecated("Use field access instead!")]] uint16_t& dyn_codePage();
    // Get instance field reference: System.UInt16 uiFamilyCodePage
    [[deprecated("Use field access instead!")]] uint16_t& dyn_uiFamilyCodePage();
    // Get instance field reference: System.UInt32 flags
    [[deprecated("Use field access instead!")]] uint& dyn_flags();
    // Get instance field reference: System.String Names
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Names();
  }; // System.Globalization.InternalCodePageDataItem
  #pragma pack(pop)
  static check_size<sizeof(InternalCodePageDataItem), 8 + sizeof(::StringW)> __System_Globalization_InternalCodePageDataItemSizeCheck;
  static_assert(sizeof(InternalCodePageDataItem) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
