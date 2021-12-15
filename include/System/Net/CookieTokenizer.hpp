// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.CookieToken
#include "System/Net/CookieToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CookieTokenizer
  class CookieTokenizer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::CookieTokenizer);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieTokenizer*, "System.Net", "CookieTokenizer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieTokenizer
  // [TokenAttribute] Offset: FFFFFFFF
  class CookieTokenizer : public ::Il2CppObject {
    public:
    // Nested type: System::Net::CookieTokenizer::RecognizedAttribute
    struct RecognizedAttribute;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Net.CookieTokenizer/System.Net.RecognizedAttribute
    // [TokenAttribute] Offset: FFFFFFFF
    struct RecognizedAttribute/*, public System::ValueType*/ {
      public:
      public:
      // private System.String m_name
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* m_name;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // private System.Net.CookieToken m_token
      // Size: 0x4
      // Offset: 0x8
      System::Net::CookieToken m_token;
      // Field size check
      static_assert(sizeof(System::Net::CookieToken) == 0x4);
      public:
      // Creating value type constructor for type: RecognizedAttribute
      constexpr RecognizedAttribute(::Il2CppString* m_name_ = {}, System::Net::CookieToken m_token_ = {}) noexcept : m_name{m_name_}, m_token{m_token_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: private System.String m_name
      ::Il2CppString*& dyn_m_name();
      // Get instance field reference: private System.Net.CookieToken m_token
      System::Net::CookieToken& dyn_m_token();
      // System.Net.CookieToken get_Token()
      // Offset: 0x15EBB28
      System::Net::CookieToken get_Token();
      // System.Void .ctor(System.String name, System.Net.CookieToken token)
      // Offset: 0x15EBB1C
      // ABORTED: conflicts with another method.  RecognizedAttribute(::Il2CppString* name, System::Net::CookieToken token);
      // System.Boolean IsEqualTo(System.String value)
      // Offset: 0x15EB8A0
      bool IsEqualTo(::Il2CppString* value);
    }; // System.Net.CookieTokenizer/System.Net.RecognizedAttribute
    #pragma pack(pop)
    static check_size<sizeof(CookieTokenizer::RecognizedAttribute), 8 + sizeof(System::Net::CookieToken)> __System_Net_CookieTokenizer_RecognizedAttributeSizeCheck;
    static_assert(sizeof(CookieTokenizer::RecognizedAttribute) == 0xC);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean m_eofCookie
    // Size: 0x1
    // Offset: 0x10
    bool m_eofCookie;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_eofCookie and: m_index
    char __padding0[0x3] = {};
    // private System.Int32 m_index
    // Size: 0x4
    // Offset: 0x14
    int m_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_length
    // Size: 0x4
    // Offset: 0x18
    int m_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_length and: m_name
    char __padding2[0x4] = {};
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_quoted
    // Size: 0x1
    // Offset: 0x28
    bool m_quoted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_quoted and: m_start
    char __padding4[0x3] = {};
    // private System.Int32 m_start
    // Size: 0x4
    // Offset: 0x2C
    int m_start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.CookieToken m_token
    // Size: 0x4
    // Offset: 0x30
    System::Net::CookieToken m_token;
    // Field size check
    static_assert(sizeof(System::Net::CookieToken) == 0x4);
    // private System.Int32 m_tokenLength
    // Size: 0x4
    // Offset: 0x34
    int m_tokenLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_tokenStream
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_tokenStream;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get static field: static private System.Net.CookieTokenizer/System.Net.RecognizedAttribute[] RecognizedAttributes
    static ::ArrayW<System::Net::CookieTokenizer::RecognizedAttribute> _get_RecognizedAttributes();
    // Set static field: static private System.Net.CookieTokenizer/System.Net.RecognizedAttribute[] RecognizedAttributes
    static void _set_RecognizedAttributes(::ArrayW<System::Net::CookieTokenizer::RecognizedAttribute> value);
    // Get static field: static private System.Net.CookieTokenizer/System.Net.RecognizedAttribute[] RecognizedServerAttributes
    static ::ArrayW<System::Net::CookieTokenizer::RecognizedAttribute> _get_RecognizedServerAttributes();
    // Set static field: static private System.Net.CookieTokenizer/System.Net.RecognizedAttribute[] RecognizedServerAttributes
    static void _set_RecognizedServerAttributes(::ArrayW<System::Net::CookieTokenizer::RecognizedAttribute> value);
    // Get instance field reference: private System.Boolean m_eofCookie
    bool& dyn_m_eofCookie();
    // Get instance field reference: private System.Int32 m_index
    int& dyn_m_index();
    // Get instance field reference: private System.Int32 m_length
    int& dyn_m_length();
    // Get instance field reference: private System.String m_name
    ::Il2CppString*& dyn_m_name();
    // Get instance field reference: private System.Boolean m_quoted
    bool& dyn_m_quoted();
    // Get instance field reference: private System.Int32 m_start
    int& dyn_m_start();
    // Get instance field reference: private System.Net.CookieToken m_token
    System::Net::CookieToken& dyn_m_token();
    // Get instance field reference: private System.Int32 m_tokenLength
    int& dyn_m_tokenLength();
    // Get instance field reference: private System.String m_tokenStream
    ::Il2CppString*& dyn_m_tokenStream();
    // Get instance field reference: private System.String m_value
    ::Il2CppString*& dyn_m_value();
    // System.Boolean get_EndOfCookie()
    // Offset: 0x15EB27C
    bool get_EndOfCookie();
    // System.Void set_EndOfCookie(System.Boolean value)
    // Offset: 0x15EB284
    void set_EndOfCookie(bool value);
    // System.Boolean get_Eof()
    // Offset: 0x15EB26C
    bool get_Eof();
    // System.String get_Name()
    // Offset: 0x15EB290
    ::Il2CppString* get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x15EB298
    void set_Name(::Il2CppString* value);
    // System.Boolean get_Quoted()
    // Offset: 0x15EB2A0
    bool get_Quoted();
    // System.Void set_Quoted(System.Boolean value)
    // Offset: 0x15EB2A8
    void set_Quoted(bool value);
    // System.Net.CookieToken get_Token()
    // Offset: 0x15EB2B4
    System::Net::CookieToken get_Token();
    // System.Void set_Token(System.Net.CookieToken value)
    // Offset: 0x15EB2BC
    void set_Token(System::Net::CookieToken value);
    // System.String get_Value()
    // Offset: 0x15EB2C4
    ::Il2CppString* get_Value();
    // System.Void set_Value(System.String value)
    // Offset: 0x15EB2CC
    void set_Value(::Il2CppString* value);
    // System.Void .ctor(System.String tokenStream)
    // Offset: 0x15EB12C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieTokenizer* New_ctor(::Il2CppString* tokenStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieTokenizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieTokenizer*, creationType>(tokenStream)));
    }
    // static private System.Void .cctor()
    // Offset: 0x15EB8C8
    static void _cctor();
    // System.String Extract()
    // Offset: 0x15EB2D4
    ::Il2CppString* Extract();
    // System.Net.CookieToken FindNext(System.Boolean ignoreComma, System.Boolean ignoreEquals)
    // Offset: 0x15EB364
    System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals);
    // System.Net.CookieToken Next(System.Boolean first, System.Boolean parseResponseCookies)
    // Offset: 0x15EB168
    System::Net::CookieToken Next(bool first, bool parseResponseCookies);
    // System.Void Reset()
    // Offset: 0x15EB620
    void Reset();
    // System.Net.CookieToken TokenFromName(System.Boolean parseResponseCookies)
    // Offset: 0x15EB698
    System::Net::CookieToken TokenFromName(bool parseResponseCookies);
  }; // System.Net.CookieTokenizer
  #pragma pack(pop)
  static check_size<sizeof(CookieTokenizer), 64 + sizeof(::Il2CppString*)> __System_Net_CookieTokenizerSizeCheck;
  static_assert(sizeof(CookieTokenizer) == 0x48);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieTokenizer::RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_EndOfCookie
// Il2CppName: get_EndOfCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_EndOfCookie)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_EndOfCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_EndOfCookie
// Il2CppName: set_EndOfCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::set_EndOfCookie)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_EndOfCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Eof
// Il2CppName: get_Eof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Eof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Eof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(::Il2CppString*)>(&System::Net::CookieTokenizer::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Quoted
// Il2CppName: get_Quoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Quoted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Quoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Quoted
// Il2CppName: set_Quoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::set_Quoted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Quoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Token
// Il2CppName: set_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(System::Net::CookieToken)>(&System::Net::CookieTokenizer::set_Token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "CookieToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(::Il2CppString*)>(&System::Net::CookieTokenizer::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CookieTokenizer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::CookieTokenizer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::Extract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::FindNext
// Il2CppName: FindNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool, bool)>(&System::Net::CookieTokenizer::FindNext)> {
  static const MethodInfo* get() {
    static auto* ignoreComma = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreEquals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "FindNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ignoreComma, ignoreEquals});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool, bool)>(&System::Net::CookieTokenizer::Next)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parseResponseCookies = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, parseResponseCookies});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::TokenFromName
// Il2CppName: TokenFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::TokenFromName)> {
  static const MethodInfo* get() {
    static auto* parseResponseCookies = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "TokenFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parseResponseCookies});
  }
};
