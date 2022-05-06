// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
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
  // Forward declaring type: WarningHeaderValue
  class WarningHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::WarningHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.WarningHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class WarningHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String <Agent>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Agent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <Code>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::System::DateTimeOffset> Date;
    // private System.String <Text>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String <Agent>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Agent$k__BackingField();
    // Get instance field reference: private System.Int32 <Code>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Code$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTimeOffset>& dyn_$Date$k__BackingField();
    // Get instance field reference: private System.String <Text>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Text$k__BackingField();
    // public System.String get_Agent()
    // Offset: 0x199A3D0
    ::StringW get_Agent();
    // private System.Void set_Agent(System.String value)
    // Offset: 0x199A3D8
    void set_Agent(::StringW value);
    // public System.Int32 get_Code()
    // Offset: 0x199A3E0
    int get_Code();
    // private System.Void set_Code(System.Int32 value)
    // Offset: 0x199A3E8
    void set_Code(int value);
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x199A3F0
    ::System::Nullable_1<::System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x199A404
    void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);
    // public System.String get_Text()
    // Offset: 0x199A418
    ::StringW get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x199A420
    void set_Text(::StringW value);
    // private System.Void .ctor()
    // Offset: 0x199A3C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WarningHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::WarningHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WarningHeaderValue*, creationType>()));
    }
    // static private System.Boolean IsCodeValid(System.Int32 code)
    // Offset: 0x199A428
    static bool IsCodeValid(int code);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x199A434
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue> result)
    // Offset: 0x199A668
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.WarningHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x199A708
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::WarningHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x199A43C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x199A580
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x199A9B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.WarningHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Agent
// Il2CppName: get_Agent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Agent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Agent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Agent
// Il2CppName: set_Agent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::WarningHeaderValue::set_Agent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Agent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Code
// Il2CppName: get_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Code
// Il2CppName: set_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(int)>(&System::Net::Http::Headers::WarningHeaderValue::set_Code)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Date
// Il2CppName: get_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Date)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Date
// Il2CppName: set_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&System::Net::Http::Headers::WarningHeaderValue::set_Date)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::WarningHeaderValue::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::IsCodeValid
// Il2CppName: IsCodeValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Net::Http::Headers::WarningHeaderValue::IsCodeValid)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "IsCodeValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*>)>(&System::Net::Http::Headers::WarningHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "WarningHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::WarningHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::WarningHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "WarningHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::WarningHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::WarningHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
