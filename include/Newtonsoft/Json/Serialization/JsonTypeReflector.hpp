// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ThreadSafeStore`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2;
  // Forward declaring type: ReflectionObject
  class ReflectionObject;
  // Forward declaring type: ReflectionDelegateFactory
  class ReflectionDelegateFactory;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverter
  class JsonConverter;
  // Forward declaring type: MemberSerialization
  struct MemberSerialization;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DataContractAttribute
  class DataContractAttribute;
  // Forward declaring type: DataMemberAttribute
  class DataMemberAttribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonTypeReflector
  class JsonTypeReflector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonTypeReflector);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonTypeReflector*, "Newtonsoft.Json.Serialization", "JsonTypeReflector");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonTypeReflector
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonTypeReflector : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: ::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c
    class $$c;
    // Get static field: static private System.Nullable`1<System.Boolean> _fullyTrusted
    static ::System::Nullable_1<bool> _get__fullyTrusted();
    // Set static field: static private System.Nullable`1<System.Boolean> _fullyTrusted
    static void _set__fullyTrusted(::System::Nullable_1<bool> value);
    // Get static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Func`2<System.Object[],Newtonsoft.Json.JsonConverter>> JsonConverterCreatorCache
    static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::Il2CppObject*>, ::Newtonsoft::Json::JsonConverter*>*>* _get_JsonConverterCreatorCache();
    // Set static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Func`2<System.Object[],Newtonsoft.Json.JsonConverter>> JsonConverterCreatorCache
    static void _set_JsonConverterCreatorCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::Il2CppObject*>, ::Newtonsoft::Json::JsonConverter*>*>* value);
    // Get static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type> AssociatedMetadataTypesCache
    static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* _get_AssociatedMetadataTypesCache();
    // Set static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type> AssociatedMetadataTypesCache
    static void _set_AssociatedMetadataTypesCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value);
    // Get static field: static private Newtonsoft.Json.Utilities.ReflectionObject _metadataTypeAttributeReflectionObject
    static ::Newtonsoft::Json::Utilities::ReflectionObject* _get__metadataTypeAttributeReflectionObject();
    // Set static field: static private Newtonsoft.Json.Utilities.ReflectionObject _metadataTypeAttributeReflectionObject
    static void _set__metadataTypeAttributeReflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);
    // static public System.Boolean get_FullyTrusted()
    // Offset: 0x210E960
    static bool get_FullyTrusted();
    // static public Newtonsoft.Json.Utilities.ReflectionDelegateFactory get_ReflectionDelegateFactory()
    // Offset: 0x210E004
    static ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_ReflectionDelegateFactory();
    // static private System.Void .cctor()
    // Offset: 0x210EB24
    static void _cctor();
    // static public T GetCachedAttribute(System.Object attributeProvider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetCachedAttribute(::Il2CppObject* attributeProvider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::GetCachedAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Serialization", "JsonTypeReflector", "GetCachedAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(attributeProvider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, attributeProvider);
    }
    // static public System.Runtime.Serialization.DataContractAttribute GetDataContractAttribute(System.Type type)
    // Offset: 0x210D588
    static ::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* type);
    // static public System.Runtime.Serialization.DataMemberAttribute GetDataMemberAttribute(System.Reflection.MemberInfo memberInfo)
    // Offset: 0x210D650
    static ::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo);
    // static public Newtonsoft.Json.MemberSerialization GetObjectMemberSerialization(System.Type objectType, System.Boolean ignoreSerializableAttribute)
    // Offset: 0x210DB8C
    static ::Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(::System::Type* objectType, bool ignoreSerializableAttribute);
    // static public Newtonsoft.Json.JsonConverter GetJsonConverter(System.Object attributeProvider)
    // Offset: 0x210DC84
    static ::Newtonsoft::Json::JsonConverter* GetJsonConverter(::Il2CppObject* attributeProvider);
    // static public Newtonsoft.Json.JsonConverter CreateJsonConverterInstance(System.Type converterType, System.Object[] converterArgs)
    // Offset: 0x210DD58
    static ::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* converterType, ::ArrayW<::Il2CppObject*> converterArgs);
    // static private System.Func`2<System.Object[],Newtonsoft.Json.JsonConverter> GetJsonConverterCreator(System.Type converterType)
    // Offset: 0x210DE00
    static ::System::Func_2<::ArrayW<::Il2CppObject*>, ::Newtonsoft::Json::JsonConverter*>* GetJsonConverterCreator(::System::Type* converterType);
    // static public System.ComponentModel.TypeConverter GetTypeConverter(System.Type type)
    // Offset: 0x210E0A8
    static ::System::ComponentModel::TypeConverter* GetTypeConverter(::System::Type* type);
    // static private System.Type GetAssociatedMetadataType(System.Type type)
    // Offset: 0x210E110
    static ::System::Type* GetAssociatedMetadataType(::System::Type* type);
    // static private System.Type GetAssociateMetadataTypeFromAttribute(System.Type type)
    // Offset: 0x210E194
    static ::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* type);
    // static private T GetAttribute(System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetAttribute(::System::Type* type) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Serialization", "JsonTypeReflector", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type);
    }
    // static private T GetAttribute(System.Reflection.MemberInfo memberInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetAttribute(::System::Reflection::MemberInfo* memberInfo) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Serialization", "JsonTypeReflector", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(memberInfo)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, memberInfo);
    }
    // static public T GetAttribute(System.Object provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetAttribute(::Il2CppObject* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Serialization", "JsonTypeReflector", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
  }; // Newtonsoft.Json.Serialization.JsonTypeReflector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted
// Il2CppName: get_FullyTrusted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "get_FullyTrusted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory
// Il2CppName: get_ReflectionDelegateFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* (*)()>(&Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "get_ReflectionDelegateFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Serialization::JsonTypeReflector::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetCachedAttribute
// Il2CppName: GetCachedAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute
// Il2CppName: GetDataContractAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataContractAttribute* (*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetDataContractAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute
// Il2CppName: GetDataMemberAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataMemberAttribute* (*)(::System::Reflection::MemberInfo*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute)> {
  static const MethodInfo* get() {
    static auto* memberInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetDataMemberAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberInfo});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization
// Il2CppName: GetObjectMemberSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MemberSerialization (*)(::System::Type*, bool)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* ignoreSerializableAttribute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetObjectMemberSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, ignoreSerializableAttribute});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter
// Il2CppName: GetJsonConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter)> {
  static const MethodInfo* get() {
    static auto* attributeProvider = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetJsonConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeProvider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance
// Il2CppName: CreateJsonConverterInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Type*, ::ArrayW<::Il2CppObject*>)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance)> {
  static const MethodInfo* get() {
    static auto* converterType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* converterArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "CreateJsonConverterInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{converterType, converterArgs});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverterCreator
// Il2CppName: GetJsonConverterCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::ArrayW<::Il2CppObject*>, ::Newtonsoft::Json::JsonConverter*>* (*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverterCreator)> {
  static const MethodInfo* get() {
    static auto* converterType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetJsonConverterCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{converterType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetTypeConverter
// Il2CppName: GetTypeConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetTypeConverter)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetTypeConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType
// Il2CppName: GetAssociatedMetadataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetAssociatedMetadataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute
// Il2CppName: GetAssociateMetadataTypeFromAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector*), "GetAssociateMetadataTypeFromAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!
