// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: TimeSpanFormat
  class TimeSpanFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSpanFormat : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::TimeSpanFormat::Pattern
    struct Pattern;
    // Nested type: ::System::Globalization::TimeSpanFormat::FormatLiterals
    struct FormatLiterals;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals
    // [TokenAttribute] Offset: FFFFFFFF
    struct FormatLiterals/*, public ::System::ValueType*/ {
      public:
      public:
      // System.String AppCompatLiteral
      // Size: 0x8
      // Offset: 0x0
      ::StringW AppCompatLiteral;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // System.Int32 dd
      // Size: 0x4
      // Offset: 0x8
      int dd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 hh
      // Size: 0x4
      // Offset: 0xC
      int hh;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 mm
      // Size: 0x4
      // Offset: 0x10
      int mm;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ss
      // Size: 0x4
      // Offset: 0x14
      int ss;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ff
      // Size: 0x4
      // Offset: 0x18
      int ff;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: ff and: literals
      char __padding5[0x4] = {};
      // private System.String[] literals
      // Size: 0x8
      // Offset: 0x20
      ::ArrayW<::StringW> literals;
      // Field size check
      static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
      public:
      // Creating value type constructor for type: FormatLiterals
      constexpr FormatLiterals(::StringW AppCompatLiteral_ = {}, int dd_ = {}, int hh_ = {}, int mm_ = {}, int ss_ = {}, int ff_ = {}, ::ArrayW<::StringW> literals_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr))) noexcept : AppCompatLiteral{AppCompatLiteral_}, dd{dd_}, hh{hh_}, mm{mm_}, ss{ss_}, ff{ff_}, literals{literals_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.String AppCompatLiteral
      [[deprecated("Use field access instead!")]] ::StringW& dyn_AppCompatLiteral();
      // Get instance field reference: System.Int32 dd
      [[deprecated("Use field access instead!")]] int& dyn_dd();
      // Get instance field reference: System.Int32 hh
      [[deprecated("Use field access instead!")]] int& dyn_hh();
      // Get instance field reference: System.Int32 mm
      [[deprecated("Use field access instead!")]] int& dyn_mm();
      // Get instance field reference: System.Int32 ss
      [[deprecated("Use field access instead!")]] int& dyn_ss();
      // Get instance field reference: System.Int32 ff
      [[deprecated("Use field access instead!")]] int& dyn_ff();
      // Get instance field reference: private System.String[] literals
      [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_literals();
      // System.String get_Start()
      // Offset: 0x21470E4
      ::StringW get_Start();
      // System.String get_DayHourSep()
      // Offset: 0x2147118
      ::StringW get_DayHourSep();
      // System.String get_HourMinuteSep()
      // Offset: 0x2147150
      ::StringW get_HourMinuteSep();
      // System.String get_MinuteSecondSep()
      // Offset: 0x2147188
      ::StringW get_MinuteSecondSep();
      // System.String get_SecondFractionSep()
      // Offset: 0x21471C0
      ::StringW get_SecondFractionSep();
      // System.String get_End()
      // Offset: 0x21471F8
      ::StringW get_End();
      // static System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals InitInvariant(System.Boolean isNegative)
      // Offset: 0x21472CC
      static ::System::Globalization::TimeSpanFormat::FormatLiterals InitInvariant(bool isNegative);
      // System.Void Init(System.String format, System.Boolean useInvariantFieldLengths)
      // Offset: 0x2146CB4
      void Init(::StringW format, bool useInvariantFieldLengths);
    }; // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanFormat::FormatLiterals), 32 + sizeof(::ArrayW<::StringW>)> __System_Globalization_TimeSpanFormat_FormatLiteralsSizeCheck;
    static_assert(sizeof(TimeSpanFormat::FormatLiterals) == 0x28);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals PositiveInvariantFormatLiterals
    static ::System::Globalization::TimeSpanFormat::FormatLiterals _get_PositiveInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals PositiveInvariantFormatLiterals
    static void _set_PositiveInvariantFormatLiterals(::System::Globalization::TimeSpanFormat::FormatLiterals value);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals NegativeInvariantFormatLiterals
    static ::System::Globalization::TimeSpanFormat::FormatLiterals _get_NegativeInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals NegativeInvariantFormatLiterals
    static void _set_NegativeInvariantFormatLiterals(::System::Globalization::TimeSpanFormat::FormatLiterals value);
    // static private System.Void .cctor()
    // Offset: 0x2147230
    static void _cctor();
    // static private System.String IntToString(System.Int32 n, System.Int32 digits)
    // Offset: 0x2145DA0
    static ::StringW IntToString(int n, int digits);
    // static System.String Format(System.TimeSpan value, System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x2145DB8
    static ::StringW Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider);
    // static private System.String FormatStandard(System.TimeSpan value, System.Boolean isInvariant, System.String format, System.Globalization.TimeSpanFormat/System.Globalization.Pattern pattern)
    // Offset: 0x2145FFC
    static ::StringW FormatStandard(::System::TimeSpan value, bool isInvariant, ::StringW format, ::System::Globalization::TimeSpanFormat::Pattern pattern);
    // static System.String FormatCustomized(System.TimeSpan value, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x2146514
    static ::StringW FormatCustomized(::System::TimeSpan value, ::StringW format, ::System::Globalization::DateTimeFormatInfo* dtfi);
  }; // System.Globalization.TimeSpanFormat
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat::FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::TimeSpanFormat::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::IntToString
// Il2CppName: IntToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int, int)>(&System::Globalization::TimeSpanFormat::IntToString)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "IntToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, digits});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanFormat::Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatStandard
// Il2CppName: FormatStandard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, bool, ::StringW, ::System::Globalization::TimeSpanFormat::Pattern)>(&System::Globalization::TimeSpanFormat::FormatStandard)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* isInvariant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/Pattern")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatStandard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, isInvariant, format, pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatCustomized
// Il2CppName: FormatCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::Globalization::DateTimeFormatInfo*)>(&System::Globalization::TimeSpanFormat::FormatCustomized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, dtfi});
  }
};
