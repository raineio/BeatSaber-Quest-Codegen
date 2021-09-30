// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpHeaders::HeaderBucket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Object Parsed
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Parsed;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> values
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public readonly System.Func`2<System.Object,System.String> CustomToString
    // Size: 0x8
    // Offset: 0x20
    System::Func_2<::Il2CppObject*, ::Il2CppString*>* CustomToString;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppObject*, ::Il2CppString*>*) == 0x8);
    public:
    // Get instance field reference: public System.Object Parsed
    ::Il2CppObject*& dyn_Parsed();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> values
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_values();
    // Get instance field reference: public readonly System.Func`2<System.Object,System.String> CustomToString
    System::Func_2<::Il2CppObject*, ::Il2CppString*>*& dyn_CustomToString();
    // public System.Boolean get_HasStringValues()
    // Offset: 0x1751890
    bool get_HasStringValues();
    // public System.Collections.Generic.List`1<System.String> get_Values()
    // Offset: 0x1750CCC
    System::Collections::Generic::List_1<::Il2CppString*>* get_Values();
    // public System.Void set_Values(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x1751D80
    void set_Values(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public System.Void .ctor(System.Object parsed, System.Func`2<System.Object,System.String> converter)
    // Offset: 0x1750C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaders::HeaderBucket* New_ctor(::Il2CppObject* parsed, System::Func_2<::Il2CppObject*, ::Il2CppString*>* converter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::HeaderBucket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaders::HeaderBucket*, creationType>(parsed, converter)));
    }
    // public System.String ParsedToString()
    // Offset: 0x175180C
    ::Il2CppString* ParsedToString();
  }; // System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket
  #pragma pack(pop)
  static check_size<sizeof(HttpHeaders::HeaderBucket), 32 + sizeof(System::Func_2<::Il2CppObject*, ::Il2CppString*>*)> __System_Net_Http_Headers_HttpHeaders_HeaderBucketSizeCheck;
  static_assert(sizeof(HttpHeaders::HeaderBucket) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaders::HeaderBucket*, "System.Net.Http.Headers", "HttpHeaders/HeaderBucket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::HeaderBucket::get_HasStringValues
// Il2CppName: get_HasStringValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::HeaderBucket::*)()>(&System::Net::Http::Headers::HttpHeaders::HeaderBucket::get_HasStringValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::HeaderBucket*), "get_HasStringValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::HeaderBucket::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (System::Net::Http::Headers::HttpHeaders::HeaderBucket::*)()>(&System::Net::Http::Headers::HttpHeaders::HeaderBucket::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::HeaderBucket*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::HeaderBucket::set_Values
// Il2CppName: set_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpHeaders::HeaderBucket::*)(System::Collections::Generic::List_1<::Il2CppString*>*)>(&System::Net::Http::Headers::HttpHeaders::HeaderBucket::set_Values)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::HeaderBucket*), "set_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::HeaderBucket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::HeaderBucket::ParsedToString
// Il2CppName: ParsedToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::HttpHeaders::HeaderBucket::*)()>(&System::Net::Http::Headers::HttpHeaders::HeaderBucket::ParsedToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::HeaderBucket*), "ParsedToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
