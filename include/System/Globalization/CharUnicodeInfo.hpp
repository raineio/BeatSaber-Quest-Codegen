// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: UnicodeCategory
  struct UnicodeCategory;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.CharUnicodeInfo
  class CharUnicodeInfo : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::CharUnicodeInfo::Debug
    class Debug;
    // Get static field: static private System.UInt16[] s_pCategoryLevel1Index
    static ::Array<uint16_t>* _get_s_pCategoryLevel1Index();
    // Set static field: static private System.UInt16[] s_pCategoryLevel1Index
    static void _set_s_pCategoryLevel1Index(::Array<uint16_t>* value);
    // Get static field: static private System.Byte[] s_pCategoriesValue
    static ::Array<uint8_t>* _get_s_pCategoriesValue();
    // Set static field: static private System.Byte[] s_pCategoriesValue
    static void _set_s_pCategoriesValue(::Array<uint8_t>* value);
    // Get static field: static private System.UInt16[] s_pNumericLevel1Index
    static ::Array<uint16_t>* _get_s_pNumericLevel1Index();
    // Set static field: static private System.UInt16[] s_pNumericLevel1Index
    static void _set_s_pNumericLevel1Index(::Array<uint16_t>* value);
    // Get static field: static private System.Byte[] s_pNumericValues
    static ::Array<uint8_t>* _get_s_pNumericValues();
    // Set static field: static private System.Byte[] s_pNumericValues
    static void _set_s_pNumericValues(::Array<uint8_t>* value);
    // Get static field: static private System.UInt16[] s_pDigitValues
    static ::Array<uint16_t>* _get_s_pDigitValues();
    // Set static field: static private System.UInt16[] s_pDigitValues
    static void _set_s_pDigitValues(::Array<uint16_t>* value);
    // static System.Int32 InternalConvertToUtf32(System.String s, System.Int32 index)
    // Offset: 0x10573A8
    static int InternalConvertToUtf32(::Il2CppString* s, int index);
    // static System.Boolean IsWhiteSpace(System.String s, System.Int32 index)
    // Offset: 0x105747C
    static bool IsWhiteSpace(::Il2CppString* s, int index);
    // static System.Boolean IsWhiteSpace(System.Char c)
    // Offset: 0x10575F8
    static bool IsWhiteSpace(::Il2CppChar c);
    // static public System.Globalization.UnicodeCategory GetUnicodeCategory(System.Char ch)
    // Offset: 0x105766C
    static System::Globalization::UnicodeCategory GetUnicodeCategory(::Il2CppChar ch);
    // static public System.Globalization.UnicodeCategory GetUnicodeCategory(System.String s, System.Int32 index)
    // Offset: 0x105750C
    static System::Globalization::UnicodeCategory GetUnicodeCategory(::Il2CppString* s, int index);
    // static System.Globalization.UnicodeCategory InternalGetUnicodeCategory(System.Int32 ch)
    // Offset: 0x10576D0
    static System::Globalization::UnicodeCategory InternalGetUnicodeCategory(int ch);
    // static System.Byte InternalGetCategoryValue(System.Int32 ch, System.Int32 offset)
    // Offset: 0x10577C0
    static uint8_t InternalGetCategoryValue(int ch, int offset);
    // static System.Globalization.UnicodeCategory InternalGetUnicodeCategory(System.String value, System.Int32 index)
    // Offset: 0x1057740
    static System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::Il2CppString* value, int index);
    // static private System.Void .cctor()
    // Offset: 0x10578B4
    static void _cctor();
  }; // System.Globalization.CharUnicodeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CharUnicodeInfo*, "System.Globalization", "CharUnicodeInfo");
#pragma pack(pop)
