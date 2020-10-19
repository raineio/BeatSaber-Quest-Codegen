// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Net.Http.Headers.HttpHeaderKind
#include "System/Net/Http/Headers/HttpHeaderKind.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HeaderInfo
  class HeaderInfo;
  // Forward declaring type: HttpHeaderValueCollection`1<T>
  template<typename T>
  class HttpHeaderValueCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.HttpHeaders
  class HttpHeaders : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>> {
    public:
    // Nested type: System::Net::Http::Headers::HttpHeaders::HeaderBucket
    class HeaderBucket;
    // Nested type: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19
    class $GetEnumerator$d__19;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> headers
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>* headers;
    // private readonly System.Net.Http.Headers.HttpHeaderKind HeaderKind
    // Offset: 0x18
    System::Net::Http::Headers::HttpHeaderKind HeaderKind;
    // System.Nullable`1<System.Boolean> connectionclose
    // Offset: 0x1C
    System::Nullable_1<bool> connectionclose;
    // System.Nullable`1<System.Boolean> transferEncodingChunked
    // Offset: 0x1E
    System::Nullable_1<bool> transferEncodingChunked;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HeaderInfo*>* _get_known_headers();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
    static void _set_known_headers(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HeaderInfo*>* value);
    // static private System.Void .cctor()
    // Offset: 0x11763B0
    static void _cctor();
    // System.Void .ctor(System.Net.Http.Headers.HttpHeaderKind headerKind)
    // Offset: 0x11761B0
    static HttpHeaders* New_ctor(System::Net::Http::Headers::HttpHeaderKind headerKind);
    // private System.Boolean AddInternal(System.String name, System.Collections.Generic.IEnumerable`1<System.String> values, System.Net.Http.Headers.HeaderInfo headerInfo, System.Boolean ignoreInvalid)
    // Offset: 0x1178154
    bool AddInternal(::Il2CppString* name, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values, System::Net::Http::Headers::HeaderInfo* headerInfo, bool ignoreInvalid);
    // public System.Boolean TryAddWithoutValidation(System.String name, System.Collections.Generic.IEnumerable`1<System.String> values)
    // Offset: 0x1178728
    bool TryAddWithoutValidation(::Il2CppString* name, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values);
    // private System.Boolean TryCheckName(System.String name, out System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0x1178800
    bool TryCheckName(::Il2CppString* name, System::Net::Http::Headers::HeaderInfo*& headerInfo);
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>> GetEnumerator()
    // Offset: 0x1178964
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>* GetEnumerator();
    // static System.String GetSingleHeaderString(System.String key, System.Collections.Generic.IEnumerable`1<System.String> values)
    // Offset: 0x1178A10
    static ::Il2CppString* GetSingleHeaderString(::Il2CppString* key, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values);
    // private System.Collections.Generic.List`1<System.String> GetAllHeaderValues(System.Net.Http.Headers.HttpHeaders/HeaderBucket bucket, System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0x11790A4
    System::Collections::Generic::List_1<::Il2CppString*>* GetAllHeaderValues(System::Net::Http::Headers::HttpHeaders::HeaderBucket* bucket, System::Net::Http::Headers::HeaderInfo* headerInfo);
    // static System.Net.Http.Headers.HttpHeaderKind GetKnownHeaderKind(System.String name)
    // Offset: 0x1179304
    static System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::Il2CppString* name);
    // T GetValue(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetValue(::Il2CppString* name) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetValue", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name)));
    }
    // System.Net.Http.Headers.HttpHeaderValueCollection`1<T> GetValues(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* GetValues(::Il2CppString* name) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(this, "GetValues", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name)));
    }
    // System.Void SetValue(System.String name, T value, System.Func`2<System.Object,System.String> toStringConverter)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetValue(::Il2CppString* name, T value, System::Func_2<::Il2CppObject*, ::Il2CppString*>* toStringConverter) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetValue", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name, value, toStringConverter));
    }
    // protected System.Void .ctor()
    // Offset: 0x1178064
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HttpHeaders* New_ctor();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1178A0C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.String ToString()
    // Offset: 0x1178DCC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.HttpHeaders
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaders*, "System.Net.Http.Headers", "HttpHeaders");
#pragma pack(pop)
