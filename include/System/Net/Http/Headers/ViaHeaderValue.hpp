// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ViaHeaderValue
  class ViaHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5D50
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5D60
    // private System.String <ProtocolName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ProtocolName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5D70
    // private System.String <ProtocolVersion>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ProtocolVersion;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5D80
    // private System.String <ReceivedBy>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* ReceivedBy;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ViaHeaderValue
    ViaHeaderValue(::Il2CppString* Comment_ = {}, ::Il2CppString* ProtocolName_ = {}, ::Il2CppString* ProtocolVersion_ = {}, ::Il2CppString* ReceivedBy_ = {}) noexcept : Comment{Comment_}, ProtocolName{ProtocolName_}, ProtocolVersion{ProtocolVersion_}, ReceivedBy{ReceivedBy_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.String get_Comment()
    // Offset: 0x159BB74
    ::Il2CppString* get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x159BB7C
    void set_Comment(::Il2CppString* value);
    // public System.String get_ProtocolName()
    // Offset: 0x159BB84
    ::Il2CppString* get_ProtocolName();
    // private System.Void set_ProtocolName(System.String value)
    // Offset: 0x159BB8C
    void set_ProtocolName(::Il2CppString* value);
    // public System.String get_ProtocolVersion()
    // Offset: 0x159BB94
    ::Il2CppString* get_ProtocolVersion();
    // private System.Void set_ProtocolVersion(System.String value)
    // Offset: 0x159BB9C
    void set_ProtocolVersion(::Il2CppString* value);
    // public System.String get_ReceivedBy()
    // Offset: 0x159BBA4
    ::Il2CppString* get_ReceivedBy();
    // private System.Void set_ReceivedBy(System.String value)
    // Offset: 0x159BBAC
    void set_ReceivedBy(::Il2CppString* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x159BBB4
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ViaHeaderValue> result)
    // Offset: 0x159BD88
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::ViaHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ViaHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x159BE28
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::ViaHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x159BB6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViaHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ViaHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViaHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x159BBBC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x159BCB8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x159C0A8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.ViaHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ViaHeaderValue), 40 + sizeof(::Il2CppString*)> __System_Net_Http_Headers_ViaHeaderValueSizeCheck;
  static_assert(sizeof(ViaHeaderValue) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ViaHeaderValue*, "System.Net.Http.Headers", "ViaHeaderValue");
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_Comment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ViaHeaderValue::set_Comment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ProtocolName
// Il2CppName: get_ProtocolName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ProtocolName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ProtocolName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ProtocolName
// Il2CppName: set_ProtocolName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ViaHeaderValue::set_ProtocolName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ProtocolName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ProtocolVersion)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ProtocolVersion
// Il2CppName: set_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ViaHeaderValue::set_ProtocolVersion)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::get_ReceivedBy
// Il2CppName: get_ReceivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::get_ReceivedBy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "get_ReceivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::set_ReceivedBy
// Il2CppName: set_ReceivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ViaHeaderValue::set_ReceivedBy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "set_ReceivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::ViaHeaderValue*>*&)>(&System::Net::Http::Headers::ViaHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<System::Net::Http::Headers::ViaHeaderValue*>*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::ViaHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::ViaHeaderValue::TryParseElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Lexer*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::ViaHeaderValue*&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ViaHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ViaHeaderValue::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ViaHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ViaHeaderValue::*)()>(&System::Net::Http::Headers::ViaHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ViaHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
