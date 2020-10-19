// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
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
    // Autogenerated type: System.Security.Util.Tokenizer/TokenSource
    struct TokenSource : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: TokenSource
      constexpr TokenSource(int value_ = {}) noexcept : value{value_} {}
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
    // public System.Int32 LineNo
    // Offset: 0x10
    int LineNo;
    // private System.Int32 _inProcessingTag
    // Offset: 0x14
    int inProcessingTag;
    // private System.Byte[] _inBytes
    // Offset: 0x18
    ::Array<uint8_t>* inBytes;
    // private System.Char[] _inChars
    // Offset: 0x20
    ::Array<::Il2CppChar>* inChars;
    // private System.String _inString
    // Offset: 0x28
    ::Il2CppString* inString;
    // private System.Int32 _inIndex
    // Offset: 0x30
    int inIndex;
    // private System.Int32 _inSize
    // Offset: 0x34
    int inSize;
    // private System.Int32 _inSavedCharacter
    // Offset: 0x38
    int inSavedCharacter;
    // private System.Security.Util.Tokenizer/TokenSource _inTokenSource
    // Offset: 0x3C
    System::Security::Util::Tokenizer::TokenSource inTokenSource;
    // private System.Security.Util.Tokenizer/ITokenReader _inTokenReader
    // Offset: 0x40
    System::Security::Util::Tokenizer::ITokenReader* inTokenReader;
    // private System.Security.Util.Tokenizer/StringMaker _maker
    // Offset: 0x48
    System::Security::Util::Tokenizer::StringMaker* maker;
    // private System.String[] _searchStrings
    // Offset: 0x50
    ::Array<::Il2CppString*>* searchStrings;
    // private System.String[] _replaceStrings
    // Offset: 0x58
    ::Array<::Il2CppString*>* replaceStrings;
    // private System.Int32 _inNestedIndex
    // Offset: 0x60
    int inNestedIndex;
    // private System.Int32 _inNestedSize
    // Offset: 0x64
    int inNestedSize;
    // private System.String _inNestedString
    // Offset: 0x68
    ::Il2CppString* inNestedString;
    // System.Void BasicInitialization()
    // Offset: 0x1213244
    void BasicInitialization();
    // public System.Void Recycle()
    // Offset: 0x1213114
    void Recycle();
    // System.Void .ctor(System.String input)
    // Offset: 0x12131EC
    static Tokenizer* New_ctor(::Il2CppString* input);
    // System.Void ChangeFormat(System.Text.Encoding encoding)
    // Offset: 0x12126C0
    void ChangeFormat(System::Text::Encoding* encoding);
    // System.Void GetTokens(System.Security.Util.TokenizerStream stream, System.Int32 maxNum, System.Boolean endAfterKet)
    // Offset: 0x1211E30
    void GetTokens(System::Security::Util::TokenizerStream* stream, int maxNum, bool endAfterKet);
    // private System.String GetStringToken()
    // Offset: 0x1213924
    ::Il2CppString* GetStringToken();
  }; // System.Security.Util.Tokenizer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer*, "System.Security.Util", "Tokenizer");
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer::TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
#pragma pack(pop)
