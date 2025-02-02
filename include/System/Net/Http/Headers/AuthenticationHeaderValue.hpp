// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: AuthenticationHeaderValue
  class AuthenticationHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::AuthenticationHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::AuthenticationHeaderValue*, "System.Net.Http.Headers", "AuthenticationHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.AuthenticationHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticationHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String <Parameter>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Parameter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Scheme>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Scheme;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String <Parameter>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Parameter$k__BackingField();
    // Get instance field reference: private System.String <Scheme>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Scheme$k__BackingField();
    // public System.String get_Parameter()
    // Offset: 0x19ED594
    ::StringW get_Parameter();
    // private System.Void set_Parameter(System.String value)
    // Offset: 0x19ED59C
    void set_Parameter(::StringW value);
    // public System.String get_Scheme()
    // Offset: 0x19ED5A4
    ::StringW get_Scheme();
    // private System.Void set_Scheme(System.String value)
    // Offset: 0x19ED5AC
    void set_Scheme(::StringW value);
    // private System.Void .ctor()
    // Offset: 0x19ED58C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::AuthenticationHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationHeaderValue*, creationType>()));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19ED5B4
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue)
    // Offset: 0x19ED704
    static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.AuthenticationHeaderValue> result)
    // Offset: 0x19ED944
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x19ED7FC
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19ED5BC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19ED684
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19EDD60
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.AuthenticationHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationHeaderValue), 24 + sizeof(::StringW)> __System_Net_Http_Headers_AuthenticationHeaderValueSizeCheck;
  static_assert(sizeof(AuthenticationHeaderValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::get_Parameter
// Il2CppName: get_Parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::get_Parameter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "get_Parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::set_Parameter
// Il2CppName: set_Parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::AuthenticationHeaderValue::set_Parameter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "set_Parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::get_Scheme
// Il2CppName: get_Scheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::get_Scheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "get_Scheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::set_Scheme
// Il2CppName: set_Scheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::AuthenticationHeaderValue::set_Scheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "set_Scheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*>)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "AuthenticationHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*>)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "AuthenticationHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "AuthenticationHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::AuthenticationHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
