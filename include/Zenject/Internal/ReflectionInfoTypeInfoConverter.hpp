// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenFactoryMethod
  class ZenFactoryMethod;
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
  // Forward declaring type: ZenMemberSetterMethod
  class ZenMemberSetterMethod;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter
  class ReflectionInfoTypeInfoConverter : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c
    class $$c;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1
    class $$c__DisplayClass8_1;
    // Nested type: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // static public Zenject.InjectTypeInfo/InjectMethodInfo ConvertMethod(Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo injectMethod)
    // Offset: 0x122D64C
    static Zenject::InjectTypeInfo::InjectMethodInfo* ConvertMethod(Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo* injectMethod);
    // static public Zenject.InjectTypeInfo/InjectConstructorInfo ConvertConstructor(Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo injectConstructor, System.Type type)
    // Offset: 0x122D828
    static Zenject::InjectTypeInfo::InjectConstructorInfo* ConvertConstructor(Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* injectConstructor, System::Type* type);
    // static public Zenject.InjectTypeInfo/InjectMemberInfo ConvertField(System.Type parentType, Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo injectField)
    // Offset: 0x122DB30
    static Zenject::InjectTypeInfo::InjectMemberInfo* ConvertField(System::Type* parentType, Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo* injectField);
    // static public Zenject.InjectTypeInfo/InjectMemberInfo ConvertProperty(System.Type parentType, Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo injectProperty)
    // Offset: 0x122DD84
    static Zenject::InjectTypeInfo::InjectMemberInfo* ConvertProperty(System::Type* parentType, Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo* injectProperty);
    // static private Zenject.ZenFactoryMethod TryCreateFactoryMethod(System.Type type, Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo reflectionInfo)
    // Offset: 0x122D988
    static Zenject::ZenFactoryMethod* TryCreateFactoryMethod(System::Type* type, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* reflectionInfo);
    // static private Zenject.ZenFactoryMethod TryCreateFactoryMethodCompiledLambdaExpression(System.Type type, System.Reflection.ConstructorInfo constructor)
    // Offset: 0x122DE20
    static Zenject::ZenFactoryMethod* TryCreateFactoryMethodCompiledLambdaExpression(System::Type* type, System::Reflection::ConstructorInfo* constructor);
    // static private Zenject.ZenInjectMethod TryCreateActionForMethod(System.Reflection.MethodInfo methodInfo)
    // Offset: 0x122D820
    static Zenject::ZenInjectMethod* TryCreateActionForMethod(System::Reflection::MethodInfo* methodInfo);
    // static private System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> GetAllFields(System.Type t, System.Reflection.BindingFlags flags)
    // Offset: 0x122DE28
    static System::Collections::Generic::IEnumerable_1<System::Reflection::FieldInfo*>* GetAllFields(System::Type* t, System::Reflection::BindingFlags flags);
    // static private Zenject.ZenMemberSetterMethod GetOnlyPropertySetter(System.Type parentType, System.String propertyName)
    // Offset: 0x122DFA8
    static Zenject::ZenMemberSetterMethod* GetOnlyPropertySetter(System::Type* parentType, ::Il2CppString* propertyName);
    // static private Zenject.ZenMemberSetterMethod GetSetter(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0x122DBC4
    static Zenject::ZenMemberSetterMethod* GetSetter(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
    // static private Zenject.ZenMemberSetterMethod TryGetSetterAsCompiledExpression(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0x122E2D8
    static Zenject::ZenMemberSetterMethod* TryGetSetterAsCompiledExpression(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter");
#pragma pack(pop)
