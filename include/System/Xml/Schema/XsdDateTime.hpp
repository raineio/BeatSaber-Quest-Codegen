// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Xml.Schema.XmlTypeCode
#include "System/Xml/Schema/XmlTypeCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XsdDateTimeFlags
  struct XsdDateTimeFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XsdDateTime
  struct XsdDateTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime, "System.Xml.Schema", "XsdDateTime");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Schema.XsdDateTime
  // [TokenAttribute] Offset: FFFFFFFF
  struct XsdDateTime/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode
    struct DateTimeTypeCode;
    // Nested type: ::System::Xml::Schema::XsdDateTime::XsdDateTimeKind
    struct XsdDateTimeKind;
    // Nested type: ::System::Xml::Schema::XsdDateTime::Parser
    struct Parser;
    public:
    // private System.DateTime dt
    // Size: 0x8
    // Offset: 0x0
    ::System::DateTime dt;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.UInt32 extra
    // Size: 0x4
    // Offset: 0x8
    uint extra;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: XsdDateTime
    constexpr XsdDateTime(::System::DateTime dt_ = {}, uint extra_ = {}) noexcept : dt{dt_}, extra{extra_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
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
    // Get static field: static private readonly System.Int32 Lz_zz_
    static int _get_Lz_zz_();
    // Set static field: static private readonly System.Int32 Lz_zz_
    static void _set_Lz_zz_(int value);
    // Get static field: static private readonly System.Int32 Lz_zz_zz
    static int _get_Lz_zz_zz();
    // Set static field: static private readonly System.Int32 Lz_zz_zz
    static void _set_Lz_zz_zz(int value);
    // Get static field: static private readonly System.Int32 Lz__
    static int _get_Lz__();
    // Set static field: static private readonly System.Int32 Lz__
    static void _set_Lz__(int value);
    // Get static field: static private readonly System.Int32 Lz__mm
    static int _get_Lz__mm();
    // Set static field: static private readonly System.Int32 Lz__mm
    static void _set_Lz__mm(int value);
    // Get static field: static private readonly System.Int32 Lz__mm_
    static int _get_Lz__mm_();
    // Set static field: static private readonly System.Int32 Lz__mm_
    static void _set_Lz__mm_(int value);
    // Get static field: static private readonly System.Int32 Lz__mm__
    static int _get_Lz__mm__();
    // Set static field: static private readonly System.Int32 Lz__mm__
    static void _set_Lz__mm__(int value);
    // Get static field: static private readonly System.Int32 Lz__mm_dd
    static int _get_Lz__mm_dd();
    // Set static field: static private readonly System.Int32 Lz__mm_dd
    static void _set_Lz__mm_dd(int value);
    // Get static field: static private readonly System.Int32 Lz___
    static int _get_Lz___();
    // Set static field: static private readonly System.Int32 Lz___
    static void _set_Lz___(int value);
    // Get static field: static private readonly System.Int32 Lz___dd
    static int _get_Lz___dd();
    // Set static field: static private readonly System.Int32 Lz___dd
    static void _set_Lz___dd(int value);
    // Get static field: static private readonly System.Xml.Schema.XmlTypeCode[] typeCodes
    static ::ArrayW<::System::Xml::Schema::XmlTypeCode> _get_typeCodes();
    // Set static field: static private readonly System.Xml.Schema.XmlTypeCode[] typeCodes
    static void _set_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode> value);
    // Get instance field reference: private System.DateTime dt
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_dt();
    // Get instance field reference: private System.UInt32 extra
    [[deprecated("Use field access instead!")]] uint& dyn_extra();
    // private System.Xml.Schema.XsdDateTime/System.Xml.Schema.DateTimeTypeCode get_InternalTypeCode()
    // Offset: 0x2107C34
    ::System::Xml::Schema::XsdDateTime::DateTimeTypeCode get_InternalTypeCode();
    // private System.Xml.Schema.XsdDateTime/System.Xml.Schema.XsdDateTimeKind get_InternalKind()
    // Offset: 0x2107C3C
    ::System::Xml::Schema::XsdDateTime::XsdDateTimeKind get_InternalKind();
    // public System.Int32 get_Year()
    // Offset: 0x2107C44
    int get_Year();
    // public System.Int32 get_Month()
    // Offset: 0x2107C4C
    int get_Month();
    // public System.Int32 get_Day()
    // Offset: 0x2107C54
    int get_Day();
    // public System.Int32 get_Hour()
    // Offset: 0x2107C5C
    int get_Hour();
    // public System.Int32 get_Minute()
    // Offset: 0x2107C64
    int get_Minute();
    // public System.Int32 get_Second()
    // Offset: 0x2107C6C
    int get_Second();
    // public System.Int32 get_Fraction()
    // Offset: 0x2107C74
    int get_Fraction();
    // public System.Int32 get_ZoneHour()
    // Offset: 0x2107D58
    int get_ZoneHour();
    // public System.Int32 get_ZoneMinute()
    // Offset: 0x2107D60
    int get_ZoneMinute();
    // public System.Void .ctor(System.String text, System.Xml.Schema.XsdDateTimeFlags kinds)
    // Offset: 0x2106D28
    XsdDateTime(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds);
    // private System.Void .ctor(System.Xml.Schema.XsdDateTime/System.Xml.Schema.Parser parser)
    // Offset: 0x2107910
    XsdDateTime(::System::Xml::Schema::XsdDateTime::Parser parser);
    // public System.Void .ctor(System.DateTime dateTime, System.Xml.Schema.XsdDateTimeFlags kinds)
    // Offset: 0x21079C0
    XsdDateTime(::System::DateTime dateTime, ::System::Xml::Schema::XsdDateTimeFlags kinds);
    // public System.Void .ctor(System.DateTimeOffset dateTimeOffset)
    // Offset: 0x2107B08
    XsdDateTime(::System::DateTimeOffset dateTimeOffset);
    // public System.Void .ctor(System.DateTimeOffset dateTimeOffset, System.Xml.Schema.XsdDateTimeFlags kinds)
    // Offset: 0x2107B10
    XsdDateTime(::System::DateTimeOffset dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags kinds);
    // static private System.Void .cctor()
    // Offset: 0x2108F50
    static void _cctor();
    // private System.Void InitiateXsdDateTime(System.Xml.Schema.XsdDateTime/System.Xml.Schema.Parser parser)
    // Offset: 0x2107888
    void InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime::Parser parser);
    // static System.Boolean TryParse(System.String text, System.Xml.Schema.XsdDateTimeFlags kinds, out System.Xml.Schema.XsdDateTime result)
    // Offset: 0x2107944
    static bool TryParse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds, ByRef<::System::Xml::Schema::XsdDateTime> result);
    // private System.Void PrintDate(System.Text.StringBuilder sb)
    // Offset: 0x2108910
    void PrintDate(::System::Text::StringBuilder* sb);
    // private System.Void PrintTime(System.Text.StringBuilder sb)
    // Offset: 0x2108A7C
    void PrintTime(::System::Text::StringBuilder* sb);
    // private System.Void PrintZone(System.Text.StringBuilder sb)
    // Offset: 0x2108D9C
    void PrintZone(::System::Text::StringBuilder* sb);
    // private System.Void IntToCharArray(System.Char[] text, System.Int32 start, System.Int32 value, System.Int32 digits)
    // Offset: 0x2108CB0
    void IntToCharArray(::ArrayW<::Il2CppChar> text, int start, int value, int digits);
    // private System.Void ShortToCharArray(System.Char[] text, System.Int32 start, System.Int32 value)
    // Offset: 0x2108D24
    void ShortToCharArray(::ArrayW<::Il2CppChar> text, int start, int value);
    // public override System.String ToString()
    // Offset: 0x2108468
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Xml.Schema.XsdDateTime
  #pragma pack(pop)
  static check_size<sizeof(XsdDateTime), 8 + sizeof(uint)> __System_Xml_Schema_XsdDateTimeSizeCheck;
  static_assert(sizeof(XsdDateTime) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_InternalTypeCode
// Il2CppName: get_InternalTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XsdDateTime::DateTimeTypeCode (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_InternalTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_InternalTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_InternalKind
// Il2CppName: get_InternalKind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XsdDateTime::XsdDateTimeKind (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_InternalKind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_InternalKind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Year
// Il2CppName: get_Year
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Year)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Year", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Month
// Il2CppName: get_Month
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Month)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Month", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Day
// Il2CppName: get_Day
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Day)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Day", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Hour
// Il2CppName: get_Hour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Hour)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Hour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Minute
// Il2CppName: get_Minute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Minute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Minute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Second
// Il2CppName: get_Second
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Second)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Second", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_Fraction
// Il2CppName: get_Fraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_Fraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_Fraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_ZoneHour
// Il2CppName: get_ZoneHour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_ZoneHour)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_ZoneHour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::get_ZoneMinute
// Il2CppName: get_ZoneMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::get_ZoneMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "get_ZoneMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::XsdDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::XsdDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::XsdDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::XsdDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::XsdDateTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::XsdDateTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::InitiateXsdDateTime
// Il2CppName: InitiateXsdDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::System::Xml::Schema::XsdDateTime::Parser)>(&System::Xml::Schema::XsdDateTime::InitiateXsdDateTime)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDateTime/Parser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "InitiateXsdDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags, ByRef<::System::Xml::Schema::XsdDateTime>)>(&System::Xml::Schema::XsdDateTime::TryParse)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* kinds = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDateTimeFlags")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, kinds, result});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::PrintDate
// Il2CppName: PrintDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&System::Xml::Schema::XsdDateTime::PrintDate)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "PrintDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::PrintTime
// Il2CppName: PrintTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&System::Xml::Schema::XsdDateTime::PrintTime)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "PrintTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::PrintZone
// Il2CppName: PrintZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&System::Xml::Schema::XsdDateTime::PrintZone)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "PrintZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::IntToCharArray
// Il2CppName: IntToCharArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::ArrayW<::Il2CppChar>, int, int, int)>(&System::Xml::Schema::XsdDateTime::IntToCharArray)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "IntToCharArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, start, value, digits});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::ShortToCharArray
// Il2CppName: ShortToCharArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdDateTime::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::Schema::XsdDateTime::ShortToCharArray)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "ShortToCharArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, start, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDateTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XsdDateTime::*)()>(&System::Xml::Schema::XsdDateTime::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDateTime), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
