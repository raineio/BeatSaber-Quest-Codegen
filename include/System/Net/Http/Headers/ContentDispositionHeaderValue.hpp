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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ContentDispositionHeaderValue
  class ContentDispositionHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.String dispositionType
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* dispositionType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: ContentDispositionHeaderValue
    ContentDispositionHeaderValue(::Il2CppString* dispositionType_ = {}, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : dispositionType{dispositionType_}, parameters{parameters_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // protected System.Void .ctor(System.Net.Http.Headers.ContentDispositionHeaderValue source)
    // Offset: 0x159060C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor(System::Net::Http::Headers::ContentDispositionHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>(source)));
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x1590804
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x15908B8
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.ContentDispositionHeaderValue parsedValue)
    // Offset: 0x1590ACC
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::ContentDispositionHeaderValue*& parsedValue);
    // private System.Void .ctor()
    // Offset: 0x1590604
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1590918
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15909E8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1590A6C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.ContentDispositionHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ContentDispositionHeaderValue), 24 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_ContentDispositionHeaderValueSizeCheck;
  static_assert(sizeof(ContentDispositionHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ContentDispositionHeaderValue*, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::get_Parameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Net::Http::Headers::ContentDispositionHeaderValue*&)>(&System::Net::Http::Headers::ContentDispositionHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::ContentDispositionHeaderValue*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ContentDispositionHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ContentDispositionHeaderValue::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
