// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ThreadSafeStore`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Skipping declaration: TypeNameKey because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: DefaultSerializationBinder
  class DefaultSerializationBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultSerializationBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class DefaultSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
    public:
    // Nested type: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey
    struct TypeNameKey;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey
    // [TokenAttribute] Offset: FFFFFFFF
    struct TypeNameKey/*, public ::System::ValueType*/ {
      public:
      public:
      // readonly System.String AssemblyName
      // Size: 0x8
      // Offset: 0x0
      ::StringW AssemblyName;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // readonly System.String TypeName
      // Size: 0x8
      // Offset: 0x8
      ::StringW TypeName;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: TypeNameKey
      constexpr TypeNameKey(::StringW AssemblyName_ = {}, ::StringW TypeName_ = {}) noexcept : AssemblyName{AssemblyName_}, TypeName{TypeName_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: readonly System.String AssemblyName
      [[deprecated("Use field access instead!")]] ::StringW& dyn_AssemblyName();
      // Get instance field reference: readonly System.String TypeName
      [[deprecated("Use field access instead!")]] ::StringW& dyn_TypeName();
      // public System.Void .ctor(System.String assemblyName, System.String typeName)
      // Offset: 0x1D5E330
      // ABORTED: conflicts with another method.  TypeNameKey(::StringW assemblyName, ::StringW typeName);
      // public System.Boolean Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey other)
      // Offset: 0x1D5E528
      bool Equals(::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey other);
      // public override System.Int32 GetHashCode()
      // Offset: 0x1D5E448
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0x1D5E49C
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
    }; // Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey
    #pragma pack(pop)
    static check_size<sizeof(DefaultSerializationBinder::TypeNameKey), 8 + sizeof(::StringW)> __Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKeySizeCheck;
    static_assert(sizeof(DefaultSerializationBinder::TypeNameKey) == 0x10);
    public:
    // private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey,System.Type> _typeCache
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>* typeCache;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>*
    constexpr operator ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>*() const noexcept {
      return typeCache;
    }
    // Get static field: static readonly Newtonsoft.Json.Serialization.DefaultSerializationBinder Instance
    static ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* _get_Instance();
    // Set static field: static readonly Newtonsoft.Json.Serialization.DefaultSerializationBinder Instance
    static void _set_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder* value);
    // Get instance field reference: private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey,System.Type> _typeCache
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>*& dyn__typeCache();
    // public System.Void .ctor()
    // Offset: 0x1D5E338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultSerializationBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::DefaultSerializationBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultSerializationBinder*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D5E3E8
    static void _cctor();
    // static private System.Type GetTypeFromTypeNameKey(Newtonsoft.Json.Serialization.DefaultSerializationBinder/Newtonsoft.Json.Serialization.TypeNameKey typeNameKey)
    // Offset: 0x1D5E074
    static ::System::Type* GetTypeFromTypeNameKey(::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey typeNameKey);
    // public override System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0x1D5E2C0
    // Implemented from: System.Runtime.Serialization.SerializationBinder
    // Base method: System.Type SerializationBinder::BindToType(System.String assemblyName, System.String typeName)
    ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);
  }; // Newtonsoft.Json.Serialization.DefaultSerializationBinder
  #pragma pack(pop)
  static check_size<sizeof(DefaultSerializationBinder), 16 + sizeof(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, ::System::Type*>*)> __Newtonsoft_Json_Serialization_DefaultSerializationBinderSizeCheck;
  static_assert(sizeof(DefaultSerializationBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder/TypeNameKey");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultSerializationBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultSerializationBinder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Serialization::DefaultSerializationBinder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultSerializationBinder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey
// Il2CppName: GetTypeFromTypeNameKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey)>(&Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey)> {
  static const MethodInfo* get() {
    static auto* typeNameKey = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "DefaultSerializationBinder/TypeNameKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultSerializationBinder*), "GetTypeFromTypeNameKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeNameKey});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType
// Il2CppName: BindToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultSerializationBinder*), "BindToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName, typeName});
  }
};
