// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
#include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonProperty
  class JsonProperty;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JsonSerializerInternalReader::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.<>c <>9
    static ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c* _get_$$9();
    // Set static field: static public readonly Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.<>c <>9
    static void _set_$$9(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c* value);
    // Get static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> <>9__36_0
    static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* _get_$$9__36_0();
    // Set static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> <>9__36_0
    static void _set_$$9__36_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);
    // Get static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> <>9__36_2
    static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* _get_$$9__36_2();
    // Set static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> <>9__36_2
    static void _set_$$9__36_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);
    // Get static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> <>9__41_0
    static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* _get_$$9__41_0();
    // Set static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> <>9__41_0
    static void _set_$$9__41_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value);
    // Get static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.PropertyPresence> <>9__41_1
    static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>* _get_$$9__41_1();
    // Set static field: static public System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.PropertyPresence> <>9__41_1
    static void _set_$$9__41_1(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D6EE74
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D6EED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializerInternalReader::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializerInternalReader::$$c*, creationType>()));
    }
    // System.String <CreateObjectUsingCreatorWithParameters>b__36_0(Newtonsoft.Json.Serialization.JsonProperty p)
    // Offset: 0x1D6EEE0
    ::StringW $CreateObjectUsingCreatorWithParameters$b__36_0(::Newtonsoft::Json::Serialization::JsonProperty* p);
    // System.String <CreateObjectUsingCreatorWithParameters>b__36_2(Newtonsoft.Json.Serialization.JsonProperty p)
    // Offset: 0x1D6EEF8
    ::StringW $CreateObjectUsingCreatorWithParameters$b__36_2(::Newtonsoft::Json::Serialization::JsonProperty* p);
    // Newtonsoft.Json.Serialization.JsonProperty <PopulateObject>b__41_0(Newtonsoft.Json.Serialization.JsonProperty m)
    // Offset: 0x1D6EF10
    ::Newtonsoft::Json::Serialization::JsonProperty* $PopulateObject$b__41_0(::Newtonsoft::Json::Serialization::JsonProperty* m);
    // Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.PropertyPresence <PopulateObject>b__41_1(Newtonsoft.Json.Serialization.JsonProperty m)
    // Offset: 0x1D6EF18
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence $PopulateObject$b__41_1(::Newtonsoft::Json::Serialization::JsonProperty* m);
  }; // Newtonsoft.Json.Serialization.JsonSerializerInternalReader/Newtonsoft.Json.Serialization.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$CreateObjectUsingCreatorWithParameters$b__36_0
// Il2CppName: <CreateObjectUsingCreatorWithParameters>b__36_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$CreateObjectUsingCreatorWithParameters$b__36_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*), "<CreateObjectUsingCreatorWithParameters>b__36_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$CreateObjectUsingCreatorWithParameters$b__36_2
// Il2CppName: <CreateObjectUsingCreatorWithParameters>b__36_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$CreateObjectUsingCreatorWithParameters$b__36_2)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*), "<CreateObjectUsingCreatorWithParameters>b__36_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$PopulateObject$b__41_0
// Il2CppName: <PopulateObject>b__41_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$PopulateObject$b__41_0)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*), "<PopulateObject>b__41_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$PopulateObject$b__41_1
// Il2CppName: <PopulateObject>b__41_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c::$PopulateObject$b__41_1)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalReader::$$c*), "<PopulateObject>b__41_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
