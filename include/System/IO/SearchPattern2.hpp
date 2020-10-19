// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.SearchPattern2
  class SearchPattern2 : public ::Il2CppObject {
    public:
    // Nested type: System::IO::SearchPattern2::Op
    class Op;
    // Nested type: System::IO::SearchPattern2::OpCode
    struct OpCode;
    // private System.IO.SearchPattern2/Op ops
    // Offset: 0x10
    System::IO::SearchPattern2::Op* ops;
    // private System.Boolean ignore
    // Offset: 0x18
    bool ignore;
    // private System.Boolean hasWildcard
    // Offset: 0x19
    bool hasWildcard;
    // private System.String pattern
    // Offset: 0x20
    ::Il2CppString* pattern;
    // Get static field: static readonly System.Char[] WildcardChars
    static ::Array<::Il2CppChar>* _get_WildcardChars();
    // Set static field: static readonly System.Char[] WildcardChars
    static void _set_WildcardChars(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] InvalidChars
    static ::Array<::Il2CppChar>* _get_InvalidChars();
    // Set static field: static readonly System.Char[] InvalidChars
    static void _set_InvalidChars(::Array<::Il2CppChar>* value);
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x14F0748
    static SearchPattern2* New_ctor(::Il2CppString* pattern);
    // public System.Void .ctor(System.String pattern, System.Boolean ignore)
    // Offset: 0x14F14D0
    static SearchPattern2* New_ctor(::Il2CppString* pattern, bool ignore);
    // public System.Boolean get_HasWildcard()
    // Offset: 0x14F1840
    bool get_HasWildcard();
    // private System.Void Compile(System.String pattern)
    // Offset: 0x14F1524
    void Compile(::Il2CppString* pattern);
    // static private System.Void .cctor()
    // Offset: 0x14F1890
    static void _cctor();
  }; // System.IO.SearchPattern2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchPattern2*, "System.IO", "SearchPattern2");
#pragma pack(pop)
