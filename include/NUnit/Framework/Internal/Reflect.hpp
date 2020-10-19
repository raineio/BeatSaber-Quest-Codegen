// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.Reflect
  class Reflect : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer
    class BaseTypesFirstComparer;
    // Nested type: NUnit::Framework::Internal::Reflect::$$c__DisplayClass2
    class $$c__DisplayClass2;
    // Get static field: static private readonly System.Reflection.BindingFlags AllMembers
    static System::Reflection::BindingFlags _get_AllMembers();
    // Set static field: static private readonly System.Reflection.BindingFlags AllMembers
    static void _set_AllMembers(System::Reflection::BindingFlags value);
    // Get static field: static private readonly System.Type[] EmptyTypes
    static ::Array<System::Type*>* _get_EmptyTypes();
    // Set static field: static private readonly System.Type[] EmptyTypes
    static void _set_EmptyTypes(::Array<System::Type*>* value);
    // Get static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
    static System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* _get_$MethodCallWrapper$k__BackingField();
    // Set static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
    static void _set_$MethodCallWrapper$k__BackingField(System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* value);
    // Get static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
    static System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* _get_$ConstructorCallWrapper$k__BackingField();
    // Set static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
    static void _set_$ConstructorCallWrapper$k__BackingField(System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* value);
    // static public System.Reflection.MethodInfo[] GetMethodsWithAttribute(System.Type fixtureType, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1ECAA68
    static ::Array<System::Reflection::MethodInfo*>* GetMethodsWithAttribute(System::Type* fixtureType, System::Type* attributeType, bool inherit);
    // static public System.Boolean HasMethodWithAttribute(System.Type fixtureType, System.Type attributeType)
    // Offset: 0x1ECAC18
    static bool HasMethodWithAttribute(System::Type* fixtureType, System::Type* attributeType);
    // static public System.Object Construct(System.Type type)
    // Offset: 0x1ECAD1C
    static ::Il2CppObject* Construct(System::Type* type);
    // static public System.Object Construct(System.Type type, System.Object[] arguments)
    // Offset: 0x1ECAED8
    static ::Il2CppObject* Construct(System::Type* type, ::Array<::Il2CppObject*>* arguments);
    // static System.Type[] GetTypeArray(System.Object[] objects)
    // Offset: 0x1ECB0E8
    static ::Array<System::Type*>* GetTypeArray(::Array<::Il2CppObject*>* objects);
    // static public System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture)
    // Offset: 0x1ECB248
    static ::Il2CppObject* InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture);
    // static public System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture, params System.Object[] args)
    // Offset: 0x1EC90D8
    static ::Il2CppObject* InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture, params System.Object[] args)
    static ::Il2CppObject* InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, TParams&&... args) {
      return InvokeMethod(method, fixture, {args...});
    }
    // static public System.Func`2<System.Func`1<System.Object>,System.Object> get_MethodCallWrapper()
    // Offset: 0x1ECB2C8
    static System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* get_MethodCallWrapper();
    // static public System.Func`3<System.Type,System.Object[],System.Object> get_ConstructorCallWrapper()
    // Offset: 0x1ECAE70
    static System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* get_ConstructorCallWrapper();
    // static private System.Void .cctor()
    // Offset: 0x1ECB330
    static void _cctor();
  }; // NUnit.Framework.Internal.Reflect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Reflect*, "NUnit.Framework.Internal", "Reflect");
#pragma pack(pop)
