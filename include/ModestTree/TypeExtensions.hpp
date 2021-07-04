// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree
namespace ModestTree {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeExtensions : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::TypeExtensions::$GetParentTypes$d__28
    class $GetParentTypes$d__28;
    // Nested type: ModestTree::TypeExtensions::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    // Nested type: ModestTree::TypeExtensions::$$c__DisplayClass35_1
    class $$c__DisplayClass35_1;
    // Nested type: ModestTree::TypeExtensions::$$c__DisplayClass39_0
    class $$c__DisplayClass39_0;
    // Nested type: ModestTree::TypeExtensions::$$c__DisplayClass39_1
    class $$c__DisplayClass39_1;
    // Creating value type constructor for type: TypeExtensions
    TypeExtensions() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isClosedGenericType
    static System::Collections::Generic::Dictionary_2<System::Type*, bool>* _get__isClosedGenericType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isClosedGenericType
    static void _set__isClosedGenericType(System::Collections::Generic::Dictionary_2<System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isOpenGenericType
    static System::Collections::Generic::Dictionary_2<System::Type*, bool>* _get__isOpenGenericType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isOpenGenericType
    static void _set__isOpenGenericType(System::Collections::Generic::Dictionary_2<System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isValueType
    static System::Collections::Generic::Dictionary_2<System::Type*, bool>* _get__isValueType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isValueType
    static void _set__isValueType(System::Collections::Generic::Dictionary_2<System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> _interfaces
    static System::Collections::Generic::Dictionary_2<System::Type*, ::Array<System::Type*>*>* _get__interfaces();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> _interfaces
    static void _set__interfaces(System::Collections::Generic::Dictionary_2<System::Type*, ::Array<System::Type*>*>* value);
    // static public System.Boolean DerivesFrom(System.Type a)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool DerivesFrom(System::Type* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::DerivesFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "DerivesFrom", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, a);
    }
    // static public System.Boolean DerivesFrom(System.Type a, System.Type b)
    // Offset: 0x1380AA8
    static bool DerivesFrom(System::Type* a, System::Type* b);
    // static public System.Boolean DerivesFromOrEqual(System.Type a)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool DerivesFromOrEqual(System::Type* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::DerivesFromOrEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "DerivesFromOrEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, a);
    }
    // static public System.Boolean DerivesFromOrEqual(System.Type a, System.Type b)
    // Offset: 0x1380D20
    static bool DerivesFromOrEqual(System::Type* a, System::Type* b);
    // static public System.Boolean IsAssignableToGenericType(System.Type givenType, System.Type genericType)
    // Offset: 0x1382F40
    static bool IsAssignableToGenericType(System::Type* givenType, System::Type* genericType);
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x1383258
    static bool IsEnum(System::Type* type);
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0x1383278
    static bool IsValueType(System::Type* type);
    // static public System.Reflection.MethodInfo[] DeclaredInstanceMethods(System.Type type)
    // Offset: 0x1383374
    static ::Array<System::Reflection::MethodInfo*>* DeclaredInstanceMethods(System::Type* type);
    // static public System.Reflection.PropertyInfo[] DeclaredInstanceProperties(System.Type type)
    // Offset: 0x1383398
    static ::Array<System::Reflection::PropertyInfo*>* DeclaredInstanceProperties(System::Type* type);
    // static public System.Reflection.FieldInfo[] DeclaredInstanceFields(System.Type type)
    // Offset: 0x13833BC
    static ::Array<System::Reflection::FieldInfo*>* DeclaredInstanceFields(System::Type* type);
    // static public System.Type BaseType(System.Type type)
    // Offset: 0x13833E0
    static System::Type* BaseType(System::Type* type);
    // static public System.Boolean IsGenericType(System.Type type)
    // Offset: 0x1383400
    static bool IsGenericType(System::Type* type);
    // static public System.Boolean IsGenericTypeDefinition(System.Type type)
    // Offset: 0x1383420
    static bool IsGenericTypeDefinition(System::Type* type);
    // static public System.Boolean IsPrimitive(System.Type type)
    // Offset: 0x1383440
    static bool IsPrimitive(System::Type* type);
    // static public System.Boolean IsInterface(System.Type type)
    // Offset: 0x1383458
    static bool IsInterface(System::Type* type);
    // static public System.Boolean ContainsGenericParameters(System.Type type)
    // Offset: 0x1383470
    static bool ContainsGenericParameters(System::Type* type);
    // static public System.Boolean IsAbstract(System.Type type)
    // Offset: 0x1383490
    static bool IsAbstract(System::Type* type);
    // static public System.Boolean IsSealed(System.Type type)
    // Offset: 0x13834A8
    static bool IsSealed(System::Type* type);
    // static public System.Reflection.MethodInfo Method(System.Delegate del)
    // Offset: 0x13834C0
    static System::Reflection::MethodInfo* Method(System::Delegate* del);
    // static public System.Type[] GenericArguments(System.Type type)
    // Offset: 0x13834D8
    static ::Array<System::Type*>* GenericArguments(System::Type* type);
    // static public System.Type[] Interfaces(System.Type type)
    // Offset: 0x1383158
    static ::Array<System::Type*>* Interfaces(System::Type* type);
    // static public System.Reflection.ConstructorInfo[] Constructors(System.Type type)
    // Offset: 0x13834F8
    static ::Array<System::Reflection::ConstructorInfo*>* Constructors(System::Type* type);
    // static public System.Object GetDefaultValue(System.Type type)
    // Offset: 0x138351C
    static ::Il2CppObject* GetDefaultValue(System::Type* type);
    // static public System.Boolean IsClosedGenericType(System.Type type)
    // Offset: 0x13835A0
    static bool IsClosedGenericType(System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Type> GetParentTypes(System.Type type)
    // Offset: 0x1383710
    static System::Collections::Generic::IEnumerable_1<System::Type*>* GetParentTypes(System::Type* type);
    // static public System.Boolean IsOpenGenericType(System.Type type)
    // Offset: 0x13837C8
    static bool IsOpenGenericType(System::Type* type);
    // static public T GetAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetAttribute(System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public T TryGetAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T TryGetAttribute(System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::TryGetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "TryGetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public System.Boolean HasAttribute(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x1383938
    static bool HasAttribute(System::Reflection::MemberInfo* provider, ::Array<System::Type*>* attributeTypes);
    // Creating initializer_list -> params proxy for: System.Boolean HasAttribute(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    static bool HasAttribute(System::Reflection::MemberInfo* provider, std::initializer_list<System::Type*> attributeTypes);
    // Creating TArgs -> initializer_list proxy for: System.Boolean HasAttribute(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    template<class ...TParams>
    static bool HasAttribute(System::Reflection::MemberInfo* provider, TParams&&... attributeTypes) {
      return HasAttribute(provider, {attributeTypes...});
    }
    // static public System.Boolean HasAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasAttribute(System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::HasAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "HasAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> AllAttributes(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* AllAttributes(System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::AllAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "AllAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x13839BC
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::MemberInfo* provider, ::Array<System::Type*>* attributeTypes);
    // Creating initializer_list -> params proxy for: System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::MemberInfo* provider, std::initializer_list<System::Type*> attributeTypes);
    // Creating TArgs -> initializer_list proxy for: System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    template<class ...TParams>
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::MemberInfo* provider, TParams&&... attributeTypes) {
      return AllAttributes(provider, {attributeTypes...});
    }
    // static public System.Boolean HasAttribute(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x1383AF4
    static bool HasAttribute(System::Reflection::ParameterInfo* provider, ::Array<System::Type*>* attributeTypes);
    // Creating initializer_list -> params proxy for: System.Boolean HasAttribute(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    static bool HasAttribute(System::Reflection::ParameterInfo* provider, std::initializer_list<System::Type*> attributeTypes);
    // Creating TArgs -> initializer_list proxy for: System.Boolean HasAttribute(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    template<class ...TParams>
    static bool HasAttribute(System::Reflection::ParameterInfo* provider, TParams&&... attributeTypes) {
      return HasAttribute(provider, {attributeTypes...});
    }
    // static public System.Boolean HasAttribute(System.Reflection.ParameterInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasAttribute(System::Reflection::ParameterInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::HasAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "HasAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> AllAttributes(System.Reflection.ParameterInfo provider)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* AllAttributes(System::Reflection::ParameterInfo* provider) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::AllAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "AllAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x1383B78
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::ParameterInfo* provider, ::Array<System::Type*>* attributeTypes);
    // Creating initializer_list -> params proxy for: System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::ParameterInfo* provider, std::initializer_list<System::Type*> attributeTypes);
    // Creating TArgs -> initializer_list proxy for: System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    template<class ...TParams>
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* AllAttributes(System::Reflection::ParameterInfo* provider, TParams&&... attributeTypes) {
      return AllAttributes(provider, {attributeTypes...});
    }
    // static private System.Void .cctor()
    // Offset: 0x1383CB0
    static void _cctor();
  }; // ModestTree.TypeExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions*, "ModestTree", "TypeExtensions");
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFrom
// Il2CppName: DerivesFrom
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFrom
// Il2CppName: DerivesFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&ModestTree::TypeExtensions::DerivesFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DerivesFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&ModestTree::TypeExtensions::DerivesFromOrEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DerivesFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsAssignableToGenericType
// Il2CppName: IsAssignableToGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&ModestTree::TypeExtensions::IsAssignableToGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsAssignableToGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsEnum
// Il2CppName: IsEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsEnum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsValueType
// Il2CppName: IsValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsValueType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceMethods
// Il2CppName: DeclaredInstanceMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceMethods)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceProperties
// Il2CppName: DeclaredInstanceProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::PropertyInfo*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceProperties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceFields
// Il2CppName: DeclaredInstanceFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::FieldInfo*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceFields)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::BaseType
// Il2CppName: BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Type*)>(&ModestTree::TypeExtensions::BaseType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsGenericType
// Il2CppName: IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsGenericTypeDefinition
// Il2CppName: IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsGenericTypeDefinition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsPrimitive
// Il2CppName: IsPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsPrimitive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsInterface
// Il2CppName: IsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsInterface)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::ContainsGenericParameters
// Il2CppName: ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::ContainsGenericParameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsAbstract
// Il2CppName: IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsAbstract)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsSealed
// Il2CppName: IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsSealed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Method
// Il2CppName: Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Delegate*)>(&ModestTree::TypeExtensions::Method)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GenericArguments
// Il2CppName: GenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::GenericArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Interfaces
// Il2CppName: Interfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::Interfaces)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Interfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Constructors
// Il2CppName: Constructors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::ConstructorInfo*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::Constructors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Constructors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetDefaultValue
// Il2CppName: GetDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*)>(&ModestTree::TypeExtensions::GetDefaultValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GetDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsClosedGenericType
// Il2CppName: IsClosedGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsClosedGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsClosedGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetParentTypes
// Il2CppName: GetParentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Type*>* (*)(System::Type*)>(&ModestTree::TypeExtensions::GetParentTypes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GetParentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsOpenGenericType
// Il2CppName: IsOpenGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&ModestTree::TypeExtensions::IsOpenGenericType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsOpenGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::TryGetAttribute
// Il2CppName: TryGetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo*, ::Array<System::Type*>*)>(&ModestTree::TypeExtensions::HasAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "HasAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MemberInfo*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Attribute*>* (*)(System::Reflection::MemberInfo*, ::Array<System::Type*>*)>(&ModestTree::TypeExtensions::AllAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "AllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MemberInfo*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ParameterInfo*, ::Array<System::Type*>*)>(&ModestTree::TypeExtensions::HasAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "HasAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::ParameterInfo*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Attribute*>* (*)(System::Reflection::ParameterInfo*, ::Array<System::Type*>*)>(&ModestTree::TypeExtensions::AllAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "AllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::ParameterInfo*>(), ::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::TypeExtensions::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
