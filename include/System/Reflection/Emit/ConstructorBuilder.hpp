// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ConstructorInfo
#include "System/Reflection/ConstructorInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Autogenerated type: System.Reflection.Emit.ConstructorBuilder
  class ConstructorBuilder : public System::Reflection::ConstructorInfo {
    public:
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x185C0C0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    System::Reflection::MethodAttributes get_Attributes();
    // public override System.Type get_DeclaringType()
    // Offset: 0x185C11C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x185C178
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x185C1D4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x185C230
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Type get_ReflectedType()
    // Offset: 0x185C270
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x185C2B0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x185C2F0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x185C330
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x185C370
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x185C3B0
    // Implemented from: System.Reflection.ConstructorInfo
    // Base method: System.Object ConstructorInfo::Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x185C3F0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.Emit.ConstructorBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::ConstructorBuilder*, "System.Reflection.Emit", "ConstructorBuilder");
#pragma pack(pop)
