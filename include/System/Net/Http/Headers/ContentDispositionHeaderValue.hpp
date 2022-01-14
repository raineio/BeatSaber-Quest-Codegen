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
  // Forward declaring type: ContentDispositionHeaderValue
  class ContentDispositionHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::ContentDispositionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ContentDispositionHeaderValue*, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ContentDispositionHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentDispositionHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String dispositionType
    // Size: 0x8
    // Offset: 0x10
    ::StringW dispositionType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String dispositionType
    ::StringW& dyn_dispositionType();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*& dyn_parameters();
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x17BCE28
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // protected System.Void .ctor(System.Net.Http.Headers.ContentDispositionHeaderValue source)
    // Offset: 0x17BCC30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor(System::Net::Http::Headers::ContentDispositionHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>(source)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x17BCEDC
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.ContentDispositionHeaderValue parsedValue)
    // Offset: 0x17BD0F0
    static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::ContentDispositionHeaderValue*> parsedValue);
    // private System.Void .ctor()
    // Offset: 0x17BCC28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17BCF3C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17BD00C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17BD090
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.ContentDispositionHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ContentDispositionHeaderValue), 24 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_ContentDispositionHeaderValueSizeCheck;
  static_assert(sizeof(ContentDispositionHeaderValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<System::Net::Http::Headers::ContentDispositionHeaderValue*>)>(&System::Net::Http::Headers::ContentDispositionHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ContentDispositionHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
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
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ContentDispositionHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ContentDispositionHeaderValue::*)()>(&System::Net::Http::Headers::ContentDispositionHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ContentDispositionHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
