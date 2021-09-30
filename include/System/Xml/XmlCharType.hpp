// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.XmlCharType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlCharType/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // System.Byte[] charProperties
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> charProperties;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: XmlCharType
    constexpr XmlCharType(::ArrayW<uint8_t> charProperties_ = ::ArrayW<uint8_t>(nullptr)) noexcept : charProperties{charProperties_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return charProperties;
    }
    // Get static field: static private System.Object s_Lock
    static ::Il2CppObject* _get_s_Lock();
    // Set static field: static private System.Object s_Lock
    static void _set_s_Lock(::Il2CppObject* value);
    // Get static field: static private System.Byte[] s_CharProperties
    static ::ArrayW<uint8_t> _get_s_CharProperties();
    // Set static field: static private System.Byte[] s_CharProperties
    static void _set_s_CharProperties(::ArrayW<uint8_t> value);
    // Get instance field reference: System.Byte[] charProperties
    ::ArrayW<uint8_t>& dyn_charProperties();
    // static private System.Object get_StaticLock()
    // Offset: 0x1AFFBA8
    static ::Il2CppObject* get_StaticLock();
    // static public System.Xml.XmlCharType get_Instance()
    // Offset: 0x1AFDFDC
    static System::Xml::XmlCharType get_Instance();
    // private System.Void .ctor(System.Byte[] charProperties)
    // Offset: 0x1AFFEC8
    // ABORTED: conflicts with another method.  XmlCharType(::ArrayW<uint8_t> charProperties);
    // static private System.Void InitInstance()
    // Offset: 0x1AFFC38
    static void InitInstance();
    // static private System.Void SetProperties(System.String ranges, System.Byte value)
    // Offset: 0x1AFFDBC
    static void SetProperties(::Il2CppString* ranges, uint8_t value);
    // public System.Boolean IsWhiteSpace(System.Char ch)
    // Offset: 0x1AFFED0
    bool IsWhiteSpace(::Il2CppChar ch);
    // public System.Boolean IsCharData(System.Char ch)
    // Offset: 0x1AFFF14
    bool IsCharData(::Il2CppChar ch);
    // public System.Boolean IsPubidChar(System.Char ch)
    // Offset: 0x1AFFF58
    bool IsPubidChar(::Il2CppChar ch);
    // System.Boolean IsTextChar(System.Char ch)
    // Offset: 0x1AFFFE4
    bool IsTextChar(::Il2CppChar ch);
    // static System.Boolean IsHighSurrogate(System.Int32 ch)
    // Offset: 0x1B00028
    static bool IsHighSurrogate(int ch);
    // static System.Boolean IsLowSurrogate(System.Int32 ch)
    // Offset: 0x1B0004C
    static bool IsLowSurrogate(int ch);
    // static System.Boolean IsSurrogate(System.Int32 ch)
    // Offset: 0x1B0005C
    static bool IsSurrogate(int ch);
    // static System.Int32 CombineSurrogateChar(System.Int32 lowChar, System.Int32 highChar)
    // Offset: 0x1AF6248
    static int CombineSurrogateChar(int lowChar, int highChar);
    // System.Boolean IsOnlyWhitespace(System.String str)
    // Offset: 0x1AFF4EC
    bool IsOnlyWhitespace(::Il2CppString* str);
    // System.Int32 IsOnlyWhitespaceWithPos(System.String str)
    // Offset: 0x1B0006C
    int IsOnlyWhitespaceWithPos(::Il2CppString* str);
    // System.Int32 IsOnlyCharData(System.String str)
    // Offset: 0x1B00104
    int IsOnlyCharData(::Il2CppString* str);
    // System.Int32 IsPublicId(System.String str)
    // Offset: 0x1B001EC
    int IsPublicId(::Il2CppString* str);
    // static private System.Boolean InRange(System.Int32 value, System.Int32 start, System.Int32 end)
    // Offset: 0x1B00038
    static bool InRange(int value, int start, int end);
  }; // System.Xml.XmlCharType
  #pragma pack(pop)
  static check_size<sizeof(XmlCharType), 0 + sizeof(::ArrayW<uint8_t>)> __System_Xml_XmlCharTypeSizeCheck;
  static_assert(sizeof(XmlCharType) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCharType, "System.Xml", "XmlCharType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlCharType::get_StaticLock
// Il2CppName: get_StaticLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Xml::XmlCharType::get_StaticLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "get_StaticLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlCharType (*)()>(&System::Xml::XmlCharType::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::XmlCharType
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlCharType::InitInstance
// Il2CppName: InitInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlCharType::InitInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "InitInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::SetProperties
// Il2CppName: SetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, uint8_t)>(&System::Xml::XmlCharType::SetProperties)> {
  static const MethodInfo* get() {
    static auto* ranges = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "SetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ranges, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsWhiteSpace
// Il2CppName: IsWhiteSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsWhiteSpace)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsWhiteSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsCharData
// Il2CppName: IsCharData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsCharData)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsCharData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsPubidChar
// Il2CppName: IsPubidChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsPubidChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsPubidChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsTextChar
// Il2CppName: IsTextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsTextChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsTextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsHighSurrogate
// Il2CppName: IsHighSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsHighSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsHighSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsLowSurrogate
// Il2CppName: IsLowSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsLowSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsLowSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsSurrogate
// Il2CppName: IsSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::CombineSurrogateChar
// Il2CppName: CombineSurrogateChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Xml::XmlCharType::CombineSurrogateChar)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "CombineSurrogateChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyWhitespace
// Il2CppName: IsOnlyWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppString*)>(&System::Xml::XmlCharType::IsOnlyWhitespace)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyWhitespaceWithPos
// Il2CppName: IsOnlyWhitespaceWithPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::Il2CppString*)>(&System::Xml::XmlCharType::IsOnlyWhitespaceWithPos)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyWhitespaceWithPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyCharData
// Il2CppName: IsOnlyCharData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::Il2CppString*)>(&System::Xml::XmlCharType::IsOnlyCharData)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyCharData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsPublicId
// Il2CppName: IsPublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::Il2CppString*)>(&System::Xml::XmlCharType::IsPublicId)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsPublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::InRange
// Il2CppName: InRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int)>(&System::Xml::XmlCharType::InRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "InRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, start, end});
  }
};
