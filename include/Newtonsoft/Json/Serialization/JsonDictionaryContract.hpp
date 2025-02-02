// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContainerContract
#include "Newtonsoft/Json/Serialization/JsonContainerContract.hpp"
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
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Skipping declaration: JsonContract because it is already included!
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: IWrappedDictionary
  class IWrappedDictionary;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonDictionaryContract
  class JsonDictionaryContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonDictionaryContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonDictionaryContract*, "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonDictionaryContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonDictionaryContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
    public:
    public:
    // private System.Func`2<System.String,System.String> <DictionaryKeyResolver>k__BackingField
    // Size: 0x8
    // Offset: 0xC0
    ::System::Func_2<::StringW, ::StringW>* DictionaryKeyResolver;
    // Field size check
    static_assert(sizeof(::System::Func_2<::StringW, ::StringW>*) == 0x8);
    // private System.Type <DictionaryKeyType>k__BackingField
    // Size: 0x8
    // Offset: 0xC8
    ::System::Type* DictionaryKeyType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type <DictionaryValueType>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::System::Type* DictionaryValueType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private Newtonsoft.Json.Serialization.JsonContract <KeyContract>k__BackingField
    // Size: 0x8
    // Offset: 0xD8
    ::Newtonsoft::Json::Serialization::JsonContract* KeyContract;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonContract*) == 0x8);
    // private readonly System.Type _genericCollectionDefinitionType
    // Size: 0x8
    // Offset: 0xE0
    ::System::Type* genericCollectionDefinitionType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type _genericWrapperType
    // Size: 0x8
    // Offset: 0xE8
    ::System::Type* genericWrapperType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _genericWrapperCreator
    // Size: 0x8
    // Offset: 0xF0
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* genericWrapperCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private System.Func`1<System.Object> _genericTemporaryDictionaryCreator
    // Size: 0x8
    // Offset: 0xF8
    ::System::Func_1<::Il2CppObject*>* genericTemporaryDictionaryCreator;
    // Field size check
    static_assert(sizeof(::System::Func_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean <ShouldCreateWrapper>k__BackingField
    // Size: 0x1
    // Offset: 0x100
    bool ShouldCreateWrapper;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Reflection.ConstructorInfo _parameterizedConstructor
    // Size: 0x8
    // Offset: 0x108
    ::System::Reflection::ConstructorInfo* parameterizedConstructor;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    // Size: 0x8
    // Offset: 0x110
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* overrideCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    // Size: 0x8
    // Offset: 0x118
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* parameterizedCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean <HasParameterizedCreator>k__BackingField
    // Size: 0x1
    // Offset: 0x120
    bool HasParameterizedCreator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Func`2<System.String,System.String> <DictionaryKeyResolver>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_2<::StringW, ::StringW>*& dyn_$DictionaryKeyResolver$k__BackingField();
    // Get instance field reference: private System.Type <DictionaryKeyType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$DictionaryKeyType$k__BackingField();
    // Get instance field reference: private System.Type <DictionaryValueType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$DictionaryValueType$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Serialization.JsonContract <KeyContract>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonContract*& dyn_$KeyContract$k__BackingField();
    // Get instance field reference: private readonly System.Type _genericCollectionDefinitionType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__genericCollectionDefinitionType();
    // Get instance field reference: private System.Type _genericWrapperType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__genericWrapperType();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _genericWrapperCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__genericWrapperCreator();
    // Get instance field reference: private System.Func`1<System.Object> _genericTemporaryDictionaryCreator
    [[deprecated("Use field access instead!")]] ::System::Func_1<::Il2CppObject*>*& dyn__genericTemporaryDictionaryCreator();
    // Get instance field reference: private System.Boolean <ShouldCreateWrapper>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ShouldCreateWrapper$k__BackingField();
    // Get instance field reference: private readonly System.Reflection.ConstructorInfo _parameterizedConstructor
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn__parameterizedConstructor();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__overrideCreator();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__parameterizedCreator();
    // Get instance field reference: private System.Boolean <HasParameterizedCreator>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasParameterizedCreator$k__BackingField();
    // public System.Func`2<System.String,System.String> get_DictionaryKeyResolver()
    // Offset: 0x1E03BE8
    ::System::Func_2<::StringW, ::StringW>* get_DictionaryKeyResolver();
    // public System.Void set_DictionaryKeyResolver(System.Func`2<System.String,System.String> value)
    // Offset: 0x1E03BF0
    void set_DictionaryKeyResolver(::System::Func_2<::StringW, ::StringW>* value);
    // public System.Type get_DictionaryKeyType()
    // Offset: 0x1E03BF8
    ::System::Type* get_DictionaryKeyType();
    // private System.Void set_DictionaryKeyType(System.Type value)
    // Offset: 0x1E03C00
    void set_DictionaryKeyType(::System::Type* value);
    // public System.Type get_DictionaryValueType()
    // Offset: 0x1E03C08
    ::System::Type* get_DictionaryValueType();
    // private System.Void set_DictionaryValueType(System.Type value)
    // Offset: 0x1E03C10
    void set_DictionaryValueType(::System::Type* value);
    // Newtonsoft.Json.Serialization.JsonContract get_KeyContract()
    // Offset: 0x1E03C18
    ::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract();
    // System.Void set_KeyContract(Newtonsoft.Json.Serialization.JsonContract value)
    // Offset: 0x1E03C20
    void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* value);
    // System.Boolean get_ShouldCreateWrapper()
    // Offset: 0x1E03C28
    bool get_ShouldCreateWrapper();
    // private System.Void set_ShouldCreateWrapper(System.Boolean value)
    // Offset: 0x1E03C30
    void set_ShouldCreateWrapper(bool value);
    // Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_ParameterizedCreator()
    // Offset: 0x1E03C3C
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_ParameterizedCreator();
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_OverrideCreator()
    // Offset: 0x1E03CC8
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_OverrideCreator();
    // public System.Void set_OverrideCreator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> value)
    // Offset: 0x1E03CD0
    void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* value);
    // public System.Boolean get_HasParameterizedCreator()
    // Offset: 0x1E03CD8
    bool get_HasParameterizedCreator();
    // public System.Void set_HasParameterizedCreator(System.Boolean value)
    // Offset: 0x1E03CE0
    void set_HasParameterizedCreator(bool value);
    // System.Boolean get_HasParameterizedCreatorInternal()
    // Offset: 0x1E03CEC
    bool get_HasParameterizedCreatorInternal();
    // Newtonsoft.Json.Utilities.IWrappedDictionary CreateWrapper(System.Object dictionary)
    // Offset: 0x1E042E8
    ::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::Il2CppObject* dictionary);
    // System.Collections.IDictionary CreateTemporaryDictionary()
    // Offset: 0x1E04558
    ::System::Collections::IDictionary* CreateTemporaryDictionary();
    // public System.Void .ctor(System.Type underlyingType)
    // Offset: 0x1E03D14
    // Implemented from: Newtonsoft.Json.Serialization.JsonContainerContract
    // Base method: System.Void JsonContainerContract::.ctor(System.Type underlyingType)
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonDictionaryContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonDictionaryContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonDictionaryContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonDictionaryContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryKeyResolver
// Il2CppName: get_DictionaryKeyResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::StringW, ::StringW>* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryKeyResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_DictionaryKeyResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryKeyResolver
// Il2CppName: set_DictionaryKeyResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::System::Func_2<::StringW, ::StringW>*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryKeyResolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_DictionaryKeyResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryKeyType
// Il2CppName: get_DictionaryKeyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryKeyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_DictionaryKeyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryKeyType
// Il2CppName: set_DictionaryKeyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryKeyType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_DictionaryKeyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryValueType
// Il2CppName: get_DictionaryValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_DictionaryValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_DictionaryValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryValueType
// Il2CppName: set_DictionaryValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_DictionaryValueType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_DictionaryValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_KeyContract
// Il2CppName: get_KeyContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_KeyContract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_KeyContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_KeyContract
// Il2CppName: set_KeyContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::Newtonsoft::Json::Serialization::JsonContract*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_KeyContract)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonContract")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_KeyContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_ShouldCreateWrapper
// Il2CppName: get_ShouldCreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_ShouldCreateWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_ShouldCreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_ShouldCreateWrapper
// Il2CppName: set_ShouldCreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_ShouldCreateWrapper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_ShouldCreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_ParameterizedCreator
// Il2CppName: get_ParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_ParameterizedCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_ParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_OverrideCreator
// Il2CppName: get_OverrideCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_OverrideCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_OverrideCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_OverrideCreator
// Il2CppName: set_OverrideCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_OverrideCreator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ObjectConstructor`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_OverrideCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_HasParameterizedCreator
// Il2CppName: get_HasParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_HasParameterizedCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_HasParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::set_HasParameterizedCreator
// Il2CppName: set_HasParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::set_HasParameterizedCreator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "set_HasParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::get_HasParameterizedCreatorInternal
// Il2CppName: get_HasParameterizedCreatorInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::get_HasParameterizedCreatorInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "get_HasParameterizedCreatorInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::CreateWrapper
// Il2CppName: CreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::IWrappedDictionary* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::CreateWrapper)> {
  static const MethodInfo* get() {
    static auto* dictionary = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "CreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dictionary});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::CreateTemporaryDictionary
// Il2CppName: CreateTemporaryDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (Newtonsoft::Json::Serialization::JsonDictionaryContract::*)()>(&Newtonsoft::Json::Serialization::JsonDictionaryContract::CreateTemporaryDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonDictionaryContract*), "CreateTemporaryDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonDictionaryContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
