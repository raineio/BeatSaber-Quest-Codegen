// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
#include "Newtonsoft/Json/Utilities/ReflectionDelegateFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: LateBoundReflectionDelegateFactory
  class LateBoundReflectionDelegateFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory*, "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F8DAC
  class LateBoundReflectionDelegateFactory : public ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass4_0_1<T>
    template<typename T>
    class $$c__DisplayClass4_0_1;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass5_0_1<T>
    template<typename T>
    class $$c__DisplayClass5_0_1;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass6_0_1<T>
    template<typename T>
    class $$c__DisplayClass6_0_1;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass7_0_1<T>
    template<typename T>
    class $$c__DisplayClass7_0_1;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass8_0_1<T>
    template<typename T>
    class $$c__DisplayClass8_0_1;
    // Nested type: ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::$$c__DisplayClass9_0_1<T>
    template<typename T>
    class $$c__DisplayClass9_0_1;
    // Get static field: static private readonly Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory _instance
    static ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* _get__instance();
    // Set static field: static private readonly Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory _instance
    static void _set__instance(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* value);
    // static Newtonsoft.Json.Utilities.ReflectionDelegateFactory get_Instance()
    // Offset: 0x211C6A4
    static ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_Instance();
    // static private System.Void .cctor()
    // Offset: 0x211C83C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x211C82C
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Void ReflectionDelegateFactory::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LateBoundReflectionDelegateFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LateBoundReflectionDelegateFactory*, creationType>()));
    }
    // public override Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> CreateParameterizedConstructor(System.Reflection.MethodBase method)
    // Offset: 0x211C70C
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase method)
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* method);
    // public override Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> CreateMethodCall(System.Reflection.MethodBase method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> ReflectionDelegateFactory::CreateMethodCall(System.Reflection.MethodBase method)
    template<class T>
    ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::Il2CppObject*>* CreateMethodCall(::System::Reflection::MethodBase* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateMethodCall");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateMethodCall", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Newtonsoft::Json::Utilities::MethodCall_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, method);
    }
    // public override System.Func`1<T> CreateDefaultConstructor(System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Func`1<T> ReflectionDelegateFactory::CreateDefaultConstructor(System.Type type)
    template<class T>
    ::System::Func_1<T>* CreateDefaultConstructor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateDefaultConstructor");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateDefaultConstructor", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Func_1<T>*, false>(this, ___generic__method, type);
    }
    // public override System.Func`2<T,System.Object> CreateGet(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Func`2<T,System.Object> ReflectionDelegateFactory::CreateGet(System.Reflection.PropertyInfo propertyInfo)
    template<class T>
    ::System::Func_2<T, ::Il2CppObject*>* CreateGet(::System::Reflection::PropertyInfo* propertyInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateGet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Func_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, propertyInfo);
    }
    // public override System.Func`2<T,System.Object> CreateGet(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Func`2<T,System.Object> ReflectionDelegateFactory::CreateGet(System.Reflection.FieldInfo fieldInfo)
    template<class T>
    ::System::Func_2<T, ::Il2CppObject*>* CreateGet(::System::Reflection::FieldInfo* fieldInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateGet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Func_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, fieldInfo);
    }
    // public override System.Action`2<T,System.Object> CreateSet(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Action`2<T,System.Object> ReflectionDelegateFactory::CreateSet(System.Reflection.FieldInfo fieldInfo)
    template<class T>
    ::System::Action_2<T, ::Il2CppObject*>* CreateSet(::System::Reflection::FieldInfo* fieldInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateSet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Action_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, fieldInfo);
    }
    // public override System.Action`2<T,System.Object> CreateSet(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
    // Base method: System.Action`2<T,System.Object> ReflectionDelegateFactory::CreateSet(System.Reflection.PropertyInfo propertyInfo)
    template<class T>
    ::System::Action_2<T, ::Il2CppObject*>* CreateSet(::System::Reflection::PropertyInfo* propertyInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateSet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Action_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, propertyInfo);
    }
  }; // Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* (*)()>(&Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateParameterizedConstructor
// Il2CppName: CreateParameterizedConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::*)(::System::Reflection::MethodBase*)>(&Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateParameterizedConstructor)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory*), "CreateParameterizedConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateMethodCall
// Il2CppName: CreateMethodCall
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateDefaultConstructor
// Il2CppName: CreateDefaultConstructor
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateGet
// Il2CppName: CreateGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateGet
// Il2CppName: CreateGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateSet
// Il2CppName: CreateSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::CreateSet
// Il2CppName: CreateSet
// Cannot write MetadataGetter for generic methods!
