// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: ExceptionType
  struct ExceptionType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlConvert
  class XmlConvert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::XmlConvert);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlConvert
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlConvert : public ::Il2CppObject {
    public:
    // Get static field: static private System.Xml.XmlCharType xmlCharType
    static System::Xml::XmlCharType _get_xmlCharType();
    // Set static field: static private System.Xml.XmlCharType xmlCharType
    static void _set_xmlCharType(System::Xml::XmlCharType value);
    // Get static field: static System.Char[] crt
    static ::ArrayW<::Il2CppChar> _get_crt();
    // Set static field: static System.Char[] crt
    static void _set_crt(::ArrayW<::Il2CppChar> value);
    // Get static field: static private readonly System.Int32 c_EncodedCharLength
    static int _get_c_EncodedCharLength();
    // Set static field: static private readonly System.Int32 c_EncodedCharLength
    static void _set_c_EncodedCharLength(int value);
    // Get static field: static readonly System.Char[] WhitespaceChars
    static ::ArrayW<::Il2CppChar> _get_WhitespaceChars();
    // Set static field: static readonly System.Char[] WhitespaceChars
    static void _set_WhitespaceChars(::ArrayW<::Il2CppChar> value);
    // static private System.Void .cctor()
    // Offset: 0x1B655B0
    static void _cctor();
    // static System.String VerifyQName(System.String name, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1B646F0
    static ::StringW VerifyQName(::StringW name, System::Xml::ExceptionType exceptionType);
    // static System.String TrimString(System.String value)
    // Offset: 0x1B64968
    static ::StringW TrimString(::StringW value);
    // static System.String TrimStringStart(System.String value)
    // Offset: 0x1B649E4
    static ::StringW TrimStringStart(::StringW value);
    // static System.String TrimStringEnd(System.String value)
    // Offset: 0x1B64A60
    static ::StringW TrimStringEnd(::StringW value);
    // static System.Exception CreateException(System.String res, System.String arg, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1B64ADC
    static System::Exception* CreateException(::StringW res, ::StringW arg, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateException(System.String res, System.String[] args, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1B64CFC
    static System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateException(System.String res, System.String[] args, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1B648A0
    static System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi)
    // Offset: 0x1B5A5A0
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1B64DFC
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1B64E80
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi)
    // Offset: 0x1B65028
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1B65090
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1B6510C
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidCharException(System.Char invChar, System.Char nextChar)
    // Offset: 0x1B651FC
    static System::Exception* CreateInvalidCharException(::Il2CppChar invChar, ::Il2CppChar nextChar);
    // static System.Exception CreateInvalidCharException(System.Char invChar, System.Char nextChar, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1B65274
    static System::Exception* CreateInvalidCharException(::Il2CppChar invChar, ::Il2CppChar nextChar, System::Xml::ExceptionType exceptionType);
  }; // System.Xml.XmlConvert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlConvert::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlConvert::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::VerifyQName
// Il2CppName: VerifyQName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, System::Xml::ExceptionType)>(&System::Xml::XmlConvert::VerifyQName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "VerifyQName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, exceptionType});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::TrimString
// Il2CppName: TrimString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlConvert::TrimString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "TrimString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::TrimStringStart
// Il2CppName: TrimStringStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlConvert::TrimStringStart)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "TrimStringStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::TrimStringEnd
// Il2CppName: TrimStringEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlConvert::TrimStringEnd)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "TrimStringEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::StringW, ::StringW, System::Xml::ExceptionType, int, int)>(&System::Xml::XmlConvert::CreateException)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, arg, exceptionType, lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::StringW, ::ArrayW<::StringW>, System::Xml::ExceptionType)>(&System::Xml::XmlConvert::CreateException)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, args, exceptionType});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::StringW, ::ArrayW<::StringW>, System::Xml::ExceptionType, int, int)>(&System::Xml::XmlConvert::CreateException)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, args, exceptionType, lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidSurrogatePairException
// Il2CppName: CreateInvalidSurrogatePairException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  static const MethodInfo* get() {
    static auto* low = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidSurrogatePairException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{low, hi});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidSurrogatePairException
// Il2CppName: CreateInvalidSurrogatePairException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, ::Il2CppChar, System::Xml::ExceptionType)>(&System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  static const MethodInfo* get() {
    static auto* low = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidSurrogatePairException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{low, hi, exceptionType});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidSurrogatePairException
// Il2CppName: CreateInvalidSurrogatePairException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, ::Il2CppChar, System::Xml::ExceptionType, int, int)>(&System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  static const MethodInfo* get() {
    static auto* low = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidSurrogatePairException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{low, hi, exceptionType, lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException
// Il2CppName: CreateInvalidHighSurrogateCharException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar)>(&System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  static const MethodInfo* get() {
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidHighSurrogateCharException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hi});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException
// Il2CppName: CreateInvalidHighSurrogateCharException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, System::Xml::ExceptionType)>(&System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  static const MethodInfo* get() {
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidHighSurrogateCharException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hi, exceptionType});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException
// Il2CppName: CreateInvalidHighSurrogateCharException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, System::Xml::ExceptionType, int, int)>(&System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  static const MethodInfo* get() {
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidHighSurrogateCharException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hi, exceptionType, lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidCharException
// Il2CppName: CreateInvalidCharException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlConvert::CreateInvalidCharException)> {
  static const MethodInfo* get() {
    static auto* invChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* nextChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidCharException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invChar, nextChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConvert::CreateInvalidCharException
// Il2CppName: CreateInvalidCharException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppChar, ::Il2CppChar, System::Xml::ExceptionType)>(&System::Xml::XmlConvert::CreateInvalidCharException)> {
  static const MethodInfo* get() {
    static auto* invChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* nextChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System.Xml", "ExceptionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConvert*), "CreateInvalidCharException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invChar, nextChar, exceptionType});
  }
};
