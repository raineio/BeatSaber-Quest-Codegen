// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureInfo::Data, "System.Globalization", "CultureInfo/Data");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x12
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.CultureInfo/System.Globalization.Data
  // [TokenAttribute] Offset: FFFFFFFF
  struct CultureInfo::Data/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 ansi
    // Size: 0x4
    // Offset: 0x0
    int ansi;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ebcdic
    // Size: 0x4
    // Offset: 0x4
    int ebcdic;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 mac
    // Size: 0x4
    // Offset: 0x8
    int mac;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 oem
    // Size: 0x4
    // Offset: 0xC
    int oem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean right_to_left
    // Size: 0x1
    // Offset: 0x10
    bool right_to_left;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Byte list_sep
    // Size: 0x1
    // Offset: 0x11
    uint8_t list_sep;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Data
    constexpr Data(int ansi_ = {}, int ebcdic_ = {}, int mac_ = {}, int oem_ = {}, bool right_to_left_ = {}, uint8_t list_sep_ = {}) noexcept : ansi{ansi_}, ebcdic{ebcdic_}, mac{mac_}, oem{oem_}, right_to_left{right_to_left_}, list_sep{list_sep_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 ansi
    [[deprecated("Use field access instead!")]] int& dyn_ansi();
    // Get instance field reference: public System.Int32 ebcdic
    [[deprecated("Use field access instead!")]] int& dyn_ebcdic();
    // Get instance field reference: public System.Int32 mac
    [[deprecated("Use field access instead!")]] int& dyn_mac();
    // Get instance field reference: public System.Int32 oem
    [[deprecated("Use field access instead!")]] int& dyn_oem();
    // Get instance field reference: public System.Boolean right_to_left
    [[deprecated("Use field access instead!")]] bool& dyn_right_to_left();
    // Get instance field reference: public System.Byte list_sep
    [[deprecated("Use field access instead!")]] uint8_t& dyn_list_sep();
  }; // System.Globalization.CultureInfo/System.Globalization.Data
  #pragma pack(pop)
  static check_size<sizeof(CultureInfo::Data), 17 + sizeof(uint8_t)> __System_Globalization_CultureInfo_DataSizeCheck;
  static_assert(sizeof(CultureInfo::Data) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
