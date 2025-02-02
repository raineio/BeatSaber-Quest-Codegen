// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Skipping declaration: TTT because it is already included!
  // Skipping declaration: TimeSpanToken because it is already included!
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
  // Forward declaring type: TimeSpanParse
  class TimeSpanParse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanParse
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSpanParse : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle
    struct TimeSpanThrowStyle;
    // Nested type: ::System::Globalization::TimeSpanParse::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles
    struct TimeSpanStandardStyles;
    // Nested type: ::System::Globalization::TimeSpanParse::TTT
    struct TTT;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanToken
    struct TimeSpanToken;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanTokenizer
    struct TimeSpanTokenizer;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanRawInfo
    struct TimeSpanRawInfo;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanResult
    struct TimeSpanResult;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TTT
    // [TokenAttribute] Offset: FFFFFFFF
    struct TTT/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TTT
      constexpr TTT(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TTT None
      static constexpr const int None = 0;
      // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT None
      static ::System::Globalization::TimeSpanParse::TTT _get_None();
      // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT None
      static void _set_None(::System::Globalization::TimeSpanParse::TTT value);
      // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TTT End
      static constexpr const int End = 1;
      // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT End
      static ::System::Globalization::TimeSpanParse::TTT _get_End();
      // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT End
      static void _set_End(::System::Globalization::TimeSpanParse::TTT value);
      // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Num
      static constexpr const int Num = 2;
      // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Num
      static ::System::Globalization::TimeSpanParse::TTT _get_Num();
      // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Num
      static void _set_Num(::System::Globalization::TimeSpanParse::TTT value);
      // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Sep
      static constexpr const int Sep = 3;
      // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Sep
      static ::System::Globalization::TimeSpanParse::TTT _get_Sep();
      // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT Sep
      static void _set_Sep(::System::Globalization::TimeSpanParse::TTT value);
      // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TTT NumOverflow
      static constexpr const int NumOverflow = 4;
      // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT NumOverflow
      static ::System::Globalization::TimeSpanParse::TTT _get_NumOverflow();
      // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TTT NumOverflow
      static void _set_NumOverflow(::System::Globalization::TimeSpanParse::TTT value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Globalization.TimeSpanParse/System.Globalization.TTT
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanParse::TTT), 0 + sizeof(int)> __System_Globalization_TimeSpanParse_TTTSizeCheck;
    static_assert(sizeof(TimeSpanParse::TTT) == 0x4);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken
    // [TokenAttribute] Offset: FFFFFFFF
    struct TimeSpanToken/*, public ::System::ValueType*/ {
      public:
      public:
      // System.Globalization.TimeSpanParse/System.Globalization.TTT ttt
      // Size: 0x4
      // Offset: 0x0
      ::System::Globalization::TimeSpanParse::TTT ttt;
      // Field size check
      static_assert(sizeof(::System::Globalization::TimeSpanParse::TTT) == 0x4);
      // System.Int32 num
      // Size: 0x4
      // Offset: 0x4
      int num;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 zeroes
      // Size: 0x4
      // Offset: 0x8
      int zeroes;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: zeroes and: sep
      char __padding2[0x4] = {};
      // System.String sep
      // Size: 0x8
      // Offset: 0x10
      ::StringW sep;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: TimeSpanToken
      constexpr TimeSpanToken(::System::Globalization::TimeSpanParse::TTT ttt_ = {}, int num_ = {}, int zeroes_ = {}, ::StringW sep_ = {}) noexcept : ttt{ttt_}, num{num_}, zeroes{zeroes_}, sep{sep_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.Globalization.TimeSpanParse/System.Globalization.TTT ttt
      [[deprecated("Use field access instead!")]] ::System::Globalization::TimeSpanParse::TTT& dyn_ttt();
      // Get instance field reference: System.Int32 num
      [[deprecated("Use field access instead!")]] int& dyn_num();
      // Get instance field reference: System.Int32 zeroes
      [[deprecated("Use field access instead!")]] int& dyn_zeroes();
      // Get instance field reference: System.String sep
      [[deprecated("Use field access instead!")]] ::StringW& dyn_sep();
      // public System.Void .ctor(System.Int32 number)
      // Offset: 0x2072DF0
      TimeSpanToken(int number);
      // public System.Boolean IsInvalidNumber(System.Int32 maxValue, System.Int32 maxPrecision)
      // Offset: 0x2072E04
      bool IsInvalidNumber(int maxValue, int maxPrecision);
    }; // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanParse::TimeSpanToken), 16 + sizeof(::StringW)> __System_Globalization_TimeSpanParse_TimeSpanTokenSizeCheck;
    static_assert(sizeof(TimeSpanParse::TimeSpanToken) == 0x18);
    // Get static field: static private readonly System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken zero
    static ::System::Globalization::TimeSpanParse::TimeSpanToken _get_zero();
    // Set static field: static private readonly System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken zero
    static void _set_zero(::System::Globalization::TimeSpanParse::TimeSpanToken value);
    // static private System.Void .cctor()
    // Offset: 0x21CF7B0
    static void _cctor();
    // static private System.Boolean TryTimeToTicks(System.Boolean positive, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken days, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken hours, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken minutes, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken seconds, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken fraction, out System.Int64 result)
    // Offset: 0x21CB1B4
    static bool TryTimeToTicks(bool positive, ::System::Globalization::TimeSpanParse::TimeSpanToken days, ::System::Globalization::TimeSpanParse::TimeSpanToken hours, ::System::Globalization::TimeSpanParse::TimeSpanToken minutes, ::System::Globalization::TimeSpanParse::TimeSpanToken seconds, ::System::Globalization::TimeSpanParse::TimeSpanToken fraction, ByRef<int64_t> result);
    // static System.TimeSpan Parse(System.String input, System.IFormatProvider formatProvider)
    // Offset: 0x21CB3C4
    static ::System::TimeSpan Parse(::StringW input, ::System::IFormatProvider* formatProvider);
    // static private System.Boolean TryParseTimeSpan(System.String input, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, System.IFormatProvider formatProvider, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CB490
    static bool TryParseTimeSpan(::StringW input, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ::System::IFormatProvider* formatProvider, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminalState(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CBA84
    static bool ProcessTerminalState(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_DHMSF(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CEA08
    static bool ProcessTerminal_DHMSF(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HMS_F_D(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CD694
    static bool ProcessTerminal_HMS_F_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HM_S_D(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CC3C0
    static bool ProcessTerminal_HM_S_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HM(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CC018
    static bool ProcessTerminal_HM(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_D(ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/System.Globalization.TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult result)
    // Offset: 0x21CBC78
    static bool ProcessTerminal_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
  }; // System.Globalization.TimeSpanParse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TTT, "System.Globalization", "TimeSpanParse/TTT");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::TimeSpanParse::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryTimeToTicks
// Il2CppName: TryTimeToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ByRef<int64_t>)>(&System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  static const MethodInfo* get() {
    static auto* positive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* days = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* hours = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* minutes = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* fraction = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryTimeToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positive, days, hours, minutes, seconds, fraction, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::StringW, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanParse::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseTimeSpan
// Il2CppName: TryParseTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ::System::IFormatProvider*, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, style, formatProvider, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminalState
// Il2CppName: ProcessTerminalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF
// Il2CppName: ProcessTerminal_DHMSF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_DHMSF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D
// Il2CppName: ProcessTerminal_HMS_F_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HMS_F_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D
// Il2CppName: ProcessTerminal_HM_S_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HM_S_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HM
// Il2CppName: ProcessTerminal_HM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_D
// Il2CppName: ProcessTerminal_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
