// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
#include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonProperty
  class JsonProperty;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreatorPropertyContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreatorPropertyContext*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/CreatorPropertyContext");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.CreatorPropertyContext
  // [TokenAttribute] Offset: FFFFFFFF
  class JsonSerializerInternalReader::CreatorPropertyContext : public ::Il2CppObject {
    public:
    public:
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Newtonsoft.Json.Serialization.JsonProperty Property
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Serialization::JsonProperty* Property;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonProperty*) == 0x8);
    // public Newtonsoft.Json.Serialization.JsonProperty ConstructorProperty
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonProperty*) == 0x8);
    // public System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.PropertyPresence> Presence
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence> Presence;
    // public System.Object Value
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean Used
    // Size: 0x1
    // Offset: 0x38
    bool Used;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public Newtonsoft.Json.Serialization.JsonProperty Property
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonProperty*& dyn_Property();
    // Get instance field reference: public Newtonsoft.Json.Serialization.JsonProperty ConstructorProperty
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonProperty*& dyn_ConstructorProperty();
    // Get instance field reference: public System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.PropertyPresence> Presence
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>& dyn_Presence();
    // Get instance field reference: public System.Object Value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Value();
    // Get instance field reference: public System.Boolean Used
    [[deprecated("Use field access instead!")]] bool& dyn_Used();
    // public System.Void .ctor()
    // Offset: 0x1D6E3FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializerInternalReader::CreatorPropertyContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreatorPropertyContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializerInternalReader::CreatorPropertyContext*, creationType>()));
    }
  }; // Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.CreatorPropertyContext
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreatorPropertyContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
