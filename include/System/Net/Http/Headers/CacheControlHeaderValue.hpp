// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
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
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.CacheControlHeaderValue
  class CacheControlHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> extensions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* extensions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> no_cache_headers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* no_cache_headers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> private_headers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* private_headers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B30
    // private System.Nullable`1<System.TimeSpan> <MaxAge>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Nullable_1<System::TimeSpan> MaxAge;
    // [CompilerGeneratedAttribute] Offset: 0xDE5B40
    // private System.Boolean <MaxStale>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool MaxStale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B50
    // private System.Nullable`1<System.TimeSpan> <MaxStaleLimit>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Nullable_1<System::TimeSpan> MaxStaleLimit;
    // [CompilerGeneratedAttribute] Offset: 0xDE5B60
    // private System.Nullable`1<System.TimeSpan> <MinFresh>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Nullable_1<System::TimeSpan> MinFresh;
    // [CompilerGeneratedAttribute] Offset: 0xDE5B70
    // private System.Boolean <MustRevalidate>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool MustRevalidate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B80
    // private System.Boolean <NoCache>k__BackingField
    // Size: 0x1
    // Offset: 0x61
    bool NoCache;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B90
    // private System.Boolean <NoStore>k__BackingField
    // Size: 0x1
    // Offset: 0x62
    bool NoStore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BA0
    // private System.Boolean <NoTransform>k__BackingField
    // Size: 0x1
    // Offset: 0x63
    bool NoTransform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BB0
    // private System.Boolean <OnlyIfCached>k__BackingField
    // Size: 0x1
    // Offset: 0x64
    bool OnlyIfCached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BC0
    // private System.Boolean <Private>k__BackingField
    // Size: 0x1
    // Offset: 0x65
    bool Private;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BD0
    // private System.Boolean <ProxyRevalidate>k__BackingField
    // Size: 0x1
    // Offset: 0x66
    bool ProxyRevalidate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BE0
    // private System.Boolean <Public>k__BackingField
    // Size: 0x1
    // Offset: 0x67
    bool Public;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDE5BF0
    // private System.Nullable`1<System.TimeSpan> <SharedMaxAge>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    System::Nullable_1<System::TimeSpan> SharedMaxAge;
    // Creating value type constructor for type: CacheControlHeaderValue
    CacheControlHeaderValue(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* extensions_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* no_cache_headers_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* private_headers_ = {}, System::Nullable_1<System::TimeSpan> MaxAge_ = {}, bool MaxStale_ = {}, System::Nullable_1<System::TimeSpan> MaxStaleLimit_ = {}, System::Nullable_1<System::TimeSpan> MinFresh_ = {}, bool MustRevalidate_ = {}, bool NoCache_ = {}, bool NoStore_ = {}, bool NoTransform_ = {}, bool OnlyIfCached_ = {}, bool Private_ = {}, bool ProxyRevalidate_ = {}, bool Public_ = {}, System::Nullable_1<System::TimeSpan> SharedMaxAge_ = {}) noexcept : extensions{extensions_}, no_cache_headers{no_cache_headers_}, private_headers{private_headers_}, MaxAge{MaxAge_}, MaxStale{MaxStale_}, MaxStaleLimit{MaxStaleLimit_}, MinFresh{MinFresh_}, MustRevalidate{MustRevalidate_}, NoCache{NoCache_}, NoStore{NoStore_}, NoTransform{NoTransform_}, OnlyIfCached{OnlyIfCached_}, Private{Private_}, ProxyRevalidate{ProxyRevalidate_}, Public{Public_}, SharedMaxAge{SharedMaxAge_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Extensions()
    // Offset: 0x158E80C
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions();
    // public System.Nullable`1<System.TimeSpan> get_MaxAge()
    // Offset: 0x158E880
    System::Nullable_1<System::TimeSpan> get_MaxAge();
    // public System.Void set_MaxAge(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x158E88C
    void set_MaxAge(System::Nullable_1<System::TimeSpan> value);
    // public System.Boolean get_MaxStale()
    // Offset: 0x158E894
    bool get_MaxStale();
    // public System.Void set_MaxStale(System.Boolean value)
    // Offset: 0x158E89C
    void set_MaxStale(bool value);
    // public System.Nullable`1<System.TimeSpan> get_MaxStaleLimit()
    // Offset: 0x158E8A8
    System::Nullable_1<System::TimeSpan> get_MaxStaleLimit();
    // public System.Void set_MaxStaleLimit(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x158E8B4
    void set_MaxStaleLimit(System::Nullable_1<System::TimeSpan> value);
    // public System.Nullable`1<System.TimeSpan> get_MinFresh()
    // Offset: 0x158E8BC
    System::Nullable_1<System::TimeSpan> get_MinFresh();
    // public System.Void set_MinFresh(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x158E8C8
    void set_MinFresh(System::Nullable_1<System::TimeSpan> value);
    // public System.Boolean get_MustRevalidate()
    // Offset: 0x158E8D0
    bool get_MustRevalidate();
    // public System.Void set_MustRevalidate(System.Boolean value)
    // Offset: 0x158E8D8
    void set_MustRevalidate(bool value);
    // public System.Boolean get_NoCache()
    // Offset: 0x158E8E4
    bool get_NoCache();
    // public System.Void set_NoCache(System.Boolean value)
    // Offset: 0x158E8EC
    void set_NoCache(bool value);
    // public System.Collections.Generic.ICollection`1<System.String> get_NoCacheHeaders()
    // Offset: 0x158E8F8
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_NoCacheHeaders();
    // public System.Boolean get_NoStore()
    // Offset: 0x158E96C
    bool get_NoStore();
    // public System.Void set_NoStore(System.Boolean value)
    // Offset: 0x158E974
    void set_NoStore(bool value);
    // public System.Boolean get_NoTransform()
    // Offset: 0x158E980
    bool get_NoTransform();
    // public System.Void set_NoTransform(System.Boolean value)
    // Offset: 0x158E988
    void set_NoTransform(bool value);
    // public System.Boolean get_OnlyIfCached()
    // Offset: 0x158E994
    bool get_OnlyIfCached();
    // public System.Void set_OnlyIfCached(System.Boolean value)
    // Offset: 0x158E99C
    void set_OnlyIfCached(bool value);
    // public System.Boolean get_Private()
    // Offset: 0x158E9A8
    bool get_Private();
    // public System.Void set_Private(System.Boolean value)
    // Offset: 0x158E9B0
    void set_Private(bool value);
    // public System.Collections.Generic.ICollection`1<System.String> get_PrivateHeaders()
    // Offset: 0x158E9BC
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_PrivateHeaders();
    // public System.Boolean get_ProxyRevalidate()
    // Offset: 0x158EA30
    bool get_ProxyRevalidate();
    // public System.Void set_ProxyRevalidate(System.Boolean value)
    // Offset: 0x158EA38
    void set_ProxyRevalidate(bool value);
    // public System.Boolean get_Public()
    // Offset: 0x158EA44
    bool get_Public();
    // public System.Void set_Public(System.Boolean value)
    // Offset: 0x158EA4C
    void set_Public(bool value);
    // public System.Nullable`1<System.TimeSpan> get_SharedMaxAge()
    // Offset: 0x158EA58
    System::Nullable_1<System::TimeSpan> get_SharedMaxAge();
    // public System.Void set_SharedMaxAge(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x158EA64
    void set_SharedMaxAge(System::Nullable_1<System::TimeSpan> value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x158EA6C
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.CacheControlHeaderValue parsedValue)
    // Offset: 0x158F370
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::CacheControlHeaderValue*& parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x158EDF0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x158F178
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x158FDD4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x158FC5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheControlHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::CacheControlHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheControlHeaderValue*, creationType>()));
    }
  }; // System.Net.Http.Headers.CacheControlHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CacheControlHeaderValue*, "System.Net.Http.Headers", "CacheControlHeaderValue");
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge
// Il2CppName: get_MaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge
// Il2CppName: set_MaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Nullable_1<System::TimeSpan>>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale
// Il2CppName: get_MaxStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale
// Il2CppName: set_MaxStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit
// Il2CppName: get_MaxStaleLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxStaleLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit
// Il2CppName: set_MaxStaleLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxStaleLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Nullable_1<System::TimeSpan>>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh
// Il2CppName: get_MinFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MinFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh
// Il2CppName: set_MinFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MinFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Nullable_1<System::TimeSpan>>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate
// Il2CppName: get_MustRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MustRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate
// Il2CppName: set_MustRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MustRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache
// Il2CppName: get_NoCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache
// Il2CppName: set_NoCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders
// Il2CppName: get_NoCacheHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoCacheHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore
// Il2CppName: get_NoStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore
// Il2CppName: set_NoStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform
// Il2CppName: get_NoTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform
// Il2CppName: set_NoTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached
// Il2CppName: get_OnlyIfCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_OnlyIfCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached
// Il2CppName: set_OnlyIfCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_OnlyIfCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Private
// Il2CppName: get_Private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Private)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_Private
// Il2CppName: set_Private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_Private)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_Private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders
// Il2CppName: get_PrivateHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_PrivateHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate
// Il2CppName: get_ProxyRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_ProxyRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate
// Il2CppName: set_ProxyRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_ProxyRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Public
// Il2CppName: get_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Public)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_Public
// Il2CppName: set_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_Public)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge
// Il2CppName: get_SharedMaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_SharedMaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge
// Il2CppName: set_SharedMaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_SharedMaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Nullable_1<System::TimeSpan>>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Net::Http::Headers::CacheControlHeaderValue*&)>(&System::Net::Http::Headers::CacheControlHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::CacheControlHeaderValue*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::CacheControlHeaderValue::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
