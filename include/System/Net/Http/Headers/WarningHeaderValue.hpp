// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.WarningHeaderValue
  class WarningHeaderValue : public ::Il2CppObject, public System::ICloneable {
    public:
    // private System.String <Agent>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Agent;
    // private System.Int32 <Code>k__BackingField
    // Offset: 0x18
    int Code;
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Offset: 0x20
    System::Nullable_1<System::DateTimeOffset> Date;
    // private System.String <Text>k__BackingField
    // Offset: 0x38
    ::Il2CppString* Text;
    // public System.String get_Agent()
    // Offset: 0x1180B20
    ::Il2CppString* get_Agent();
    // private System.Void set_Agent(System.String value)
    // Offset: 0x1180B28
    void set_Agent(::Il2CppString* value);
    // public System.Int32 get_Code()
    // Offset: 0x1180B30
    int get_Code();
    // private System.Void set_Code(System.Int32 value)
    // Offset: 0x1180B38
    void set_Code(int value);
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x1180B40
    System::Nullable_1<System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x1180B54
    void set_Date(System::Nullable_1<System::DateTimeOffset> value);
    // public System.String get_Text()
    // Offset: 0x1180B68
    ::Il2CppString* get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x1180B70
    void set_Text(::Il2CppString* value);
    // static private System.Boolean IsCodeValid(System.Int32 code)
    // Offset: 0x1180B78
    static bool IsCodeValid(int code);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue> result)
    // Offset: 0x1180DB8
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::WarningHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.WarningHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x1180E58
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::WarningHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x1180B18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WarningHeaderValue* New_ctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1180B84
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1180B8C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1180CD0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1181138
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.WarningHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
#pragma pack(pop)
