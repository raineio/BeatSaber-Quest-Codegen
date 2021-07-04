// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerStream
  class TokenizerStream;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Tokenizer
  class Tokenizer : public ::Il2CppObject {
    public:
    // Nested type: System::Security::Util::Tokenizer::TokenSource
    struct TokenSource;
    // Nested type: System::Security::Util::Tokenizer::StringMaker
    class StringMaker;
    // Nested type: System::Security::Util::Tokenizer::ITokenReader
    class ITokenReader;
    // Nested type: System::Security::Util::Tokenizer::StreamTokenReader
    class StreamTokenReader;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Security.Util.Tokenizer/TokenSource
    struct TokenSource/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TokenSource
      constexpr TokenSource(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource UnicodeByteArray
      static constexpr const int UnicodeByteArray = 0;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource UnicodeByteArray
      static System::Security::Util::Tokenizer::TokenSource _get_UnicodeByteArray();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource UnicodeByteArray
      static void _set_UnicodeByteArray(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource UTF8ByteArray
      static constexpr const int UTF8ByteArray = 1;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource UTF8ByteArray
      static System::Security::Util::Tokenizer::TokenSource _get_UTF8ByteArray();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource UTF8ByteArray
      static void _set_UTF8ByteArray(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource ASCIIByteArray
      static constexpr const int ASCIIByteArray = 2;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource ASCIIByteArray
      static System::Security::Util::Tokenizer::TokenSource _get_ASCIIByteArray();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource ASCIIByteArray
      static void _set_ASCIIByteArray(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource CharArray
      static constexpr const int CharArray = 3;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource CharArray
      static System::Security::Util::Tokenizer::TokenSource _get_CharArray();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource CharArray
      static void _set_CharArray(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource String
      static constexpr const int String = 4;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource String
      static System::Security::Util::Tokenizer::TokenSource _get_String();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource String
      static void _set_String(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource NestedStrings
      static constexpr const int NestedStrings = 5;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource NestedStrings
      static System::Security::Util::Tokenizer::TokenSource _get_NestedStrings();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource NestedStrings
      static void _set_NestedStrings(System::Security::Util::Tokenizer::TokenSource value);
      // static field const value: static public System.Security.Util.Tokenizer/TokenSource Other
      static constexpr const int Other = 6;
      // Get static field: static public System.Security.Util.Tokenizer/TokenSource Other
      static System::Security::Util::Tokenizer::TokenSource _get_Other();
      // Set static field: static public System.Security.Util.Tokenizer/TokenSource Other
      static void _set_Other(System::Security::Util::Tokenizer::TokenSource value);
    }; // System.Security.Util.Tokenizer/TokenSource
    #pragma pack(pop)
    static check_size<sizeof(Tokenizer::TokenSource), 0 + sizeof(int)> __System_Security_Util_Tokenizer_TokenSourceSizeCheck;
    static_assert(sizeof(Tokenizer::TokenSource) == 0x4);
    // public System.Int32 LineNo
    // Size: 0x4
    // Offset: 0x10
    int LineNo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inProcessingTag
    // Size: 0x4
    // Offset: 0x14
    int inProcessingTag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] _inBytes
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* inBytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] _inChars
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* inChars;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.String _inString
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* inString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _inIndex
    // Size: 0x4
    // Offset: 0x30
    int inIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inSize
    // Size: 0x4
    // Offset: 0x34
    int inSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inSavedCharacter
    // Size: 0x4
    // Offset: 0x38
    int inSavedCharacter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Util.Tokenizer/TokenSource _inTokenSource
    // Size: 0x4
    // Offset: 0x3C
    System::Security::Util::Tokenizer::TokenSource inTokenSource;
    // Field size check
    static_assert(sizeof(System::Security::Util::Tokenizer::TokenSource) == 0x4);
    // private System.Security.Util.Tokenizer/ITokenReader _inTokenReader
    // Size: 0x8
    // Offset: 0x40
    System::Security::Util::Tokenizer::ITokenReader* inTokenReader;
    // Field size check
    static_assert(sizeof(System::Security::Util::Tokenizer::ITokenReader*) == 0x8);
    // private System.Security.Util.Tokenizer/StringMaker _maker
    // Size: 0x8
    // Offset: 0x48
    System::Security::Util::Tokenizer::StringMaker* maker;
    // Field size check
    static_assert(sizeof(System::Security::Util::Tokenizer::StringMaker*) == 0x8);
    // private System.String[] _searchStrings
    // Size: 0x8
    // Offset: 0x50
    ::Array<::Il2CppString*>* searchStrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _replaceStrings
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* replaceStrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 _inNestedIndex
    // Size: 0x4
    // Offset: 0x60
    int inNestedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inNestedSize
    // Size: 0x4
    // Offset: 0x64
    int inNestedSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _inNestedString
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* inNestedString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Tokenizer
    Tokenizer(int LineNo_ = {}, int inProcessingTag_ = {}, ::Array<uint8_t>* inBytes_ = {}, ::Array<::Il2CppChar>* inChars_ = {}, ::Il2CppString* inString_ = {}, int inIndex_ = {}, int inSize_ = {}, int inSavedCharacter_ = {}, System::Security::Util::Tokenizer::TokenSource inTokenSource_ = {}, System::Security::Util::Tokenizer::ITokenReader* inTokenReader_ = {}, System::Security::Util::Tokenizer::StringMaker* maker_ = {}, ::Array<::Il2CppString*>* searchStrings_ = {}, ::Array<::Il2CppString*>* replaceStrings_ = {}, int inNestedIndex_ = {}, int inNestedSize_ = {}, ::Il2CppString* inNestedString_ = {}) noexcept : LineNo{LineNo_}, inProcessingTag{inProcessingTag_}, inBytes{inBytes_}, inChars{inChars_}, inString{inString_}, inIndex{inIndex_}, inSize{inSize_}, inSavedCharacter{inSavedCharacter_}, inTokenSource{inTokenSource_}, inTokenReader{inTokenReader_}, maker{maker_}, searchStrings{searchStrings_}, replaceStrings{replaceStrings_}, inNestedIndex{inNestedIndex_}, inNestedSize{inNestedSize_}, inNestedString{inNestedString_} {}
    // System.Void BasicInitialization()
    // Offset: 0x1B4E770
    void BasicInitialization();
    // public System.Void Recycle()
    // Offset: 0x1B4E964
    void Recycle();
    // System.Void .ctor(System.String input)
    // Offset: 0x1B4EAE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tokenizer* New_ctor(::Il2CppString* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::Tokenizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tokenizer*, creationType>(input)));
    }
    // System.Void ChangeFormat(System.Text.Encoding encoding)
    // Offset: 0x1B4EB30
    void ChangeFormat(System::Text::Encoding* encoding);
    // System.Void GetTokens(System.Security.Util.TokenizerStream stream, System.Int32 maxNum, System.Boolean endAfterKet)
    // Offset: 0x1B4EE58
    void GetTokens(System::Security::Util::TokenizerStream* stream, int maxNum, bool endAfterKet);
    // private System.String GetStringToken()
    // Offset: 0x1B4FD9C
    ::Il2CppString* GetStringToken();
  }; // System.Security.Util.Tokenizer
  #pragma pack(pop)
  static check_size<sizeof(Tokenizer), 104 + sizeof(::Il2CppString*)> __System_Security_Util_TokenizerSizeCheck;
  static_assert(sizeof(Tokenizer) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer*, "System.Security.Util", "Tokenizer");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer::TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::BasicInitialization
// Il2CppName: BasicInitialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::BasicInitialization)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer*), "BasicInitialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::Recycle
// Il2CppName: Recycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::Recycle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer*), "Recycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::ChangeFormat
// Il2CppName: ChangeFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)(System::Text::Encoding*)>(&System::Security::Util::Tokenizer::ChangeFormat)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer*), "ChangeFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::Encoding*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::GetTokens
// Il2CppName: GetTokens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)(System::Security::Util::TokenizerStream*, int, bool)>(&System::Security::Util::Tokenizer::GetTokens)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer*), "GetTokens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Util::TokenizerStream*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::GetStringToken
// Il2CppName: GetStringToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::GetStringToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer*), "GetStringToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
