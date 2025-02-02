// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Newtonsoft.Json.Utilities.ParserTimeZone
#include "Newtonsoft/Json/Utilities/ParserTimeZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: DateTimeParser
  struct DateTimeParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DateTimeParser, "Newtonsoft.Json.Utilities", "DateTimeParser");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Newtonsoft.Json.Utilities.DateTimeParser
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F8D5C
  struct DateTimeParser/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 Year
    // Size: 0x4
    // Offset: 0x0
    int Year;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Month
    // Size: 0x4
    // Offset: 0x4
    int Month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Day
    // Size: 0x4
    // Offset: 0x8
    int Day;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Hour
    // Size: 0x4
    // Offset: 0xC
    int Hour;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Minute
    // Size: 0x4
    // Offset: 0x10
    int Minute;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Second
    // Size: 0x4
    // Offset: 0x14
    int Second;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Fraction
    // Size: 0x4
    // Offset: 0x18
    int Fraction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ZoneHour
    // Size: 0x4
    // Offset: 0x1C
    int ZoneHour;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ZoneMinute
    // Size: 0x4
    // Offset: 0x20
    int ZoneMinute;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Newtonsoft.Json.Utilities.ParserTimeZone Zone
    // Size: 0x4
    // Offset: 0x24
    ::Newtonsoft::Json::Utilities::ParserTimeZone Zone;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::ParserTimeZone) == 0x4);
    // private System.Char[] _text
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppChar> text;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 _end
    // Size: 0x4
    // Offset: 0x30
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeParser
    constexpr DateTimeParser(int Year_ = {}, int Month_ = {}, int Day_ = {}, int Hour_ = {}, int Minute_ = {}, int Second_ = {}, int Fraction_ = {}, int ZoneHour_ = {}, int ZoneMinute_ = {}, ::Newtonsoft::Json::Utilities::ParserTimeZone Zone_ = {}, ::ArrayW<::Il2CppChar> text_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), int end_ = {}) noexcept : Year{Year_}, Month{Month_}, Day{Day_}, Hour{Hour_}, Minute{Minute_}, Second{Second_}, Fraction{Fraction_}, ZoneHour{ZoneHour_}, ZoneMinute{ZoneMinute_}, Zone{Zone_}, text{text_}, end{end_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Int32[] Power10
    static ::ArrayW<int> _get_Power10();
    // Set static field: static private readonly System.Int32[] Power10
    static void _set_Power10(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32 Lzyyyy
    static int _get_Lzyyyy();
    // Set static field: static private readonly System.Int32 Lzyyyy
    static void _set_Lzyyyy(int value);
    // Get static field: static private readonly System.Int32 Lzyyyy_
    static int _get_Lzyyyy_();
    // Set static field: static private readonly System.Int32 Lzyyyy_
    static void _set_Lzyyyy_(int value);
    // Get static field: static private readonly System.Int32 Lzyyyy_MM
    static int _get_Lzyyyy_MM();
    // Set static field: static private readonly System.Int32 Lzyyyy_MM
    static void _set_Lzyyyy_MM(int value);
    // Get static field: static private readonly System.Int32 Lzyyyy_MM_
    static int _get_Lzyyyy_MM_();
    // Set static field: static private readonly System.Int32 Lzyyyy_MM_
    static void _set_Lzyyyy_MM_(int value);
    // Get static field: static private readonly System.Int32 Lzyyyy_MM_dd
    static int _get_Lzyyyy_MM_dd();
    // Set static field: static private readonly System.Int32 Lzyyyy_MM_dd
    static void _set_Lzyyyy_MM_dd(int value);
    // Get static field: static private readonly System.Int32 Lzyyyy_MM_ddT
    static int _get_Lzyyyy_MM_ddT();
    // Set static field: static private readonly System.Int32 Lzyyyy_MM_ddT
    static void _set_Lzyyyy_MM_ddT(int value);
    // Get static field: static private readonly System.Int32 LzHH
    static int _get_LzHH();
    // Set static field: static private readonly System.Int32 LzHH
    static void _set_LzHH(int value);
    // Get static field: static private readonly System.Int32 LzHH_
    static int _get_LzHH_();
    // Set static field: static private readonly System.Int32 LzHH_
    static void _set_LzHH_(int value);
    // Get static field: static private readonly System.Int32 LzHH_mm
    static int _get_LzHH_mm();
    // Set static field: static private readonly System.Int32 LzHH_mm
    static void _set_LzHH_mm(int value);
    // Get static field: static private readonly System.Int32 LzHH_mm_
    static int _get_LzHH_mm_();
    // Set static field: static private readonly System.Int32 LzHH_mm_
    static void _set_LzHH_mm_(int value);
    // Get static field: static private readonly System.Int32 LzHH_mm_ss
    static int _get_LzHH_mm_ss();
    // Set static field: static private readonly System.Int32 LzHH_mm_ss
    static void _set_LzHH_mm_ss(int value);
    // Get static field: static private readonly System.Int32 Lz_
    static int _get_Lz_();
    // Set static field: static private readonly System.Int32 Lz_
    static void _set_Lz_(int value);
    // Get static field: static private readonly System.Int32 Lz_zz
    static int _get_Lz_zz();
    // Set static field: static private readonly System.Int32 Lz_zz
    static void _set_Lz_zz(int value);
    // Get instance field reference: public System.Int32 Year
    [[deprecated("Use field access instead!")]] int& dyn_Year();
    // Get instance field reference: public System.Int32 Month
    [[deprecated("Use field access instead!")]] int& dyn_Month();
    // Get instance field reference: public System.Int32 Day
    [[deprecated("Use field access instead!")]] int& dyn_Day();
    // Get instance field reference: public System.Int32 Hour
    [[deprecated("Use field access instead!")]] int& dyn_Hour();
    // Get instance field reference: public System.Int32 Minute
    [[deprecated("Use field access instead!")]] int& dyn_Minute();
    // Get instance field reference: public System.Int32 Second
    [[deprecated("Use field access instead!")]] int& dyn_Second();
    // Get instance field reference: public System.Int32 Fraction
    [[deprecated("Use field access instead!")]] int& dyn_Fraction();
    // Get instance field reference: public System.Int32 ZoneHour
    [[deprecated("Use field access instead!")]] int& dyn_ZoneHour();
    // Get instance field reference: public System.Int32 ZoneMinute
    [[deprecated("Use field access instead!")]] int& dyn_ZoneMinute();
    // Get instance field reference: public Newtonsoft.Json.Utilities.ParserTimeZone Zone
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::ParserTimeZone& dyn_Zone();
    // Get instance field reference: private System.Char[] _text
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__text();
    // Get instance field reference: private System.Int32 _end
    [[deprecated("Use field access instead!")]] int& dyn__end();
    // static private System.Void .cctor()
    // Offset: 0x21166A4
    static void _cctor();
    // public System.Boolean Parse(System.Char[] text, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x2116894
    bool Parse(::ArrayW<::Il2CppChar> text, int startIndex, int length);
    // private System.Boolean ParseDate(System.Int32 start)
    // Offset: 0x211698C
    bool ParseDate(int start);
    // private System.Boolean ParseTimeAndZoneAndWhitespace(System.Int32 start)
    // Offset: 0x2116BA0
    bool ParseTimeAndZoneAndWhitespace(int start);
    // private System.Boolean ParseTime(ref System.Int32 start)
    // Offset: 0x2116D88
    bool ParseTime(ByRef<int> start);
    // private System.Boolean ParseZone(System.Int32 start)
    // Offset: 0x2117094
    bool ParseZone(int start);
    // private System.Boolean Parse4Digit(System.Int32 start, out System.Int32 num)
    // Offset: 0x2116BE4
    bool Parse4Digit(int start, ByRef<int> num);
    // private System.Boolean Parse2Digit(System.Int32 start, out System.Int32 num)
    // Offset: 0x2116CE0
    bool Parse2Digit(int start, ByRef<int> num);
    // private System.Boolean ParseChar(System.Int32 start, System.Char ch)
    // Offset: 0x2116B48
    bool ParseChar(int start, ::Il2CppChar ch);
  }; // Newtonsoft.Json.Utilities.DateTimeParser
  #pragma pack(pop)
  static check_size<sizeof(DateTimeParser), 48 + sizeof(int)> __Newtonsoft_Json_Utilities_DateTimeParserSizeCheck;
  static_assert(sizeof(DateTimeParser) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::DateTimeParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(::ArrayW<::Il2CppChar>, int, int)>(&Newtonsoft::Json::Utilities::DateTimeParser::Parse)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, startIndex, length});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::ParseDate
// Il2CppName: ParseDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int)>(&Newtonsoft::Json::Utilities::DateTimeParser::ParseDate)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "ParseDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::ParseTimeAndZoneAndWhitespace
// Il2CppName: ParseTimeAndZoneAndWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int)>(&Newtonsoft::Json::Utilities::DateTimeParser::ParseTimeAndZoneAndWhitespace)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "ParseTimeAndZoneAndWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::ParseTime
// Il2CppName: ParseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(ByRef<int>)>(&Newtonsoft::Json::Utilities::DateTimeParser::ParseTime)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "ParseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::ParseZone
// Il2CppName: ParseZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int)>(&Newtonsoft::Json::Utilities::DateTimeParser::ParseZone)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "ParseZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::Parse4Digit
// Il2CppName: Parse4Digit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int, ByRef<int>)>(&Newtonsoft::Json::Utilities::DateTimeParser::Parse4Digit)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "Parse4Digit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, num});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::Parse2Digit
// Il2CppName: Parse2Digit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int, ByRef<int>)>(&Newtonsoft::Json::Utilities::DateTimeParser::Parse2Digit)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "Parse2Digit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, num});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DateTimeParser::ParseChar
// Il2CppName: ParseChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::DateTimeParser::*)(int, ::Il2CppChar)>(&Newtonsoft::Json::Utilities::DateTimeParser::ParseChar)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DateTimeParser), "ParseChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, ch});
  }
};
