// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerPrefixCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerPrefixCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<::Il2CppString*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.Generic.List`1<System.String> prefixes
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* prefixes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Net.HttpListener listener
    // Size: 0x8
    // Offset: 0x18
    System::Net::HttpListener* listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<::Il2CppString*>
    operator System::Collections::Generic::ICollection_1<::Il2CppString*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> prefixes
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_prefixes();
    // Get instance field reference: private System.Net.HttpListener listener
    System::Net::HttpListener*& dyn_listener();
    // public System.Int32 get_Count()
    // Offset: 0x1841B38
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x184242C
    bool get_IsReadOnly();
    // System.Void .ctor(System.Net.HttpListener listener)
    // Offset: 0x183FD7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerPrefixCollection* New_ctor(System::Net::HttpListener* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerPrefixCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerPrefixCollection*, creationType>(listener)));
    }
    // public System.Void Add(System.String uriPrefix)
    // Offset: 0x1842434
    void Add(::Il2CppString* uriPrefix);
    // public System.Void Clear()
    // Offset: 0x1842814
    void Clear();
    // public System.Boolean Contains(System.String uriPrefix)
    // Offset: 0x18428C0
    bool Contains(::Il2CppString* uriPrefix);
    // public System.Void CopyTo(System.String[] array, System.Int32 offset)
    // Offset: 0x1842934
    void CopyTo(::ArrayW<::Il2CppString*> array, int offset);
    // public System.Collections.Generic.IEnumerator`1<System.String> GetEnumerator()
    // Offset: 0x18429B0
    System::Collections::Generic::IEnumerator_1<::Il2CppString*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1842A3C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.String uriPrefix)
    // Offset: 0x1842AC8
    bool Remove(::Il2CppString* uriPrefix);
  }; // System.Net.HttpListenerPrefixCollection
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerPrefixCollection), 24 + sizeof(System::Net::HttpListener*)> __System_Net_HttpListenerPrefixCollectionSizeCheck;
  static_assert(sizeof(HttpListenerPrefixCollection) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerPrefixCollection*, "System.Net", "HttpListenerPrefixCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::HttpListenerPrefixCollection::*)()>(&System::Net::HttpListenerPrefixCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerPrefixCollection::*)()>(&System::Net::HttpListenerPrefixCollection::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerPrefixCollection::*)(::Il2CppString*)>(&System::Net::HttpListenerPrefixCollection::Add)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerPrefixCollection::*)()>(&System::Net::HttpListenerPrefixCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerPrefixCollection::*)(::Il2CppString*)>(&System::Net::HttpListenerPrefixCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerPrefixCollection::*)(::ArrayW<::Il2CppString*>, int)>(&System::Net::HttpListenerPrefixCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::Il2CppString*>* (System::Net::HttpListenerPrefixCollection::*)()>(&System::Net::HttpListenerPrefixCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Net::HttpListenerPrefixCollection::*)()>(&System::Net::HttpListenerPrefixCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerPrefixCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerPrefixCollection::*)(::Il2CppString*)>(&System::Net::HttpListenerPrefixCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerPrefixCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix});
  }
};
