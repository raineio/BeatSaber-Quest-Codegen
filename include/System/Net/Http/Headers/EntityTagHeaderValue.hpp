// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.EntityTagHeaderValue
  class EntityTagHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Boolean <IsWeak>k__BackingField
    // Offset: 0x10
    bool IsWeak;
    // private System.String <Tag>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Tag;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static System::Net::Http::Headers::EntityTagHeaderValue* _get_any();
    // Set static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static void _set_any(System::Net::Http::Headers::EntityTagHeaderValue* value);
    // public System.Boolean get_IsWeak()
    // Offset: 0x11FFDA4
    bool get_IsWeak();
    // System.Void set_IsWeak(System.Boolean value)
    // Offset: 0x11FFDAC
    void set_IsWeak(bool value);
    // public System.String get_Tag()
    // Offset: 0x11FFDB8
    ::Il2CppString* get_Tag();
    // System.Void set_Tag(System.String value)
    // Offset: 0x11FFDC0
    void set_Tag(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue)
    // Offset: 0x11FFEEC
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x11FFFF0
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.EntityTagHeaderValue> result)
    // Offset: 0x120025C
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue*>*& result);
    // static private System.Void .cctor()
    // Offset: 0x1200368
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x11FFD9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EntityTagHeaderValue* New_ctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x11FFDC8
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11FFDD0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11FFE98
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x12002FC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.EntityTagHeaderValue
  check_size<sizeof(EntityTagHeaderValue), 24 + sizeof(void*) + 8 - (24 + sizeof(void*)) % 8> __System_Net_Http_Headers_EntityTagHeaderValueSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::EntityTagHeaderValue*, "System.Net.Http.Headers", "EntityTagHeaderValue");
#pragma pack(pop)