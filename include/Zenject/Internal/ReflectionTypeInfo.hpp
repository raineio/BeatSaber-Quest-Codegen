// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Forward declaring type: ReflectionTypeInfo
  class ReflectionTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo*, "Zenject.Internal", "ReflectionTypeInfo");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ReflectionTypeInfo : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo
    class InjectFieldInfo;
    // Nested type: ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo
    class InjectParameterInfo;
    // Nested type: ::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo
    class InjectPropertyInfo;
    // Nested type: ::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo
    class InjectMethodInfo;
    // Nested type: ::Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo
    class InjectConstructorInfo;
    public:
    // public readonly System.Type Type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Type BaseType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* BaseType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo> InjectProperties
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* InjectProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo> InjectFields
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* InjectFields;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>*) == 0x8);
    // public readonly Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectConstructorInfo InjectConstructor
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* InjectConstructor;
    // Field size check
    static_assert(sizeof(::Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectMethodInfo> InjectMethods
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* InjectMethods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Type Type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_Type();
    // Get instance field reference: public readonly System.Type BaseType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_BaseType();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo> InjectProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>*& dyn_InjectProperties();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo> InjectFields
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>*& dyn_InjectFields();
    // Get instance field reference: public readonly Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectConstructorInfo InjectConstructor
    [[deprecated("Use field access instead!")]] ::Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*& dyn_InjectConstructor();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectMethodInfo> InjectMethods
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>*& dyn_InjectMethods();
    // public System.Void .ctor(System.Type type, System.Type baseType, Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectConstructorInfo injectConstructor, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectMethodInfo> injectMethods, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo> injectFields, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo> injectProperties)
    // Offset: 0x1C0F0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo* New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* injectConstructor, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* injectMethods, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* injectFields, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* injectProperties) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo*, creationType>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeInfo), 56 + sizeof(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>*)> __Zenject_Internal_ReflectionTypeInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
