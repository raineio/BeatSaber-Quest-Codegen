// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeConstructorInfo
#include "System/Reflection/RuntimeConstructorInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodBody
  class MethodBody;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoCMethod
  class MonoCMethod : public System::Reflection::RuntimeConstructorInfo {
    public:
    // System.IntPtr mhandle
    // Offset: 0x10
    System::IntPtr mhandle;
    // private System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // private System.Type reftype
    // Offset: 0x20
    System::Type* reftype;
    // System.Object InternalInvoke(System.Object obj, System.Object[] parameters, out System.Exception exc)
    // Offset: 0x1676250
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters, System::Exception*& exc);
    // private System.Object DoInvoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x16763A8
    ::Il2CppObject* DoInvoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public System.Object InternalInvoke(System.Object obj, System.Object[] parameters)
    // Offset: 0x1676828
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters);
    // static private System.Int32 get_core_clr_security_level()
    // Offset: 0x1676EA4
    static int get_core_clr_security_level();
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x16761B4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x1676210
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // override System.Reflection.ParameterInfo[] GetParametersInternal()
    // Offset: 0x1676220
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParametersInternal()
    ::Array<System::Reflection::ParameterInfo*>* GetParametersInternal();
    // override System.Int32 GetParametersCount()
    // Offset: 0x167622C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetParametersCount()
    int GetParametersCount();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x1676254
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x1676A10
    // Implemented from: System.Reflection.ConstructorInfo
    // Base method: System.Object ConstructorInfo::Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x1676A28
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x1676A30
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    System::Reflection::MethodAttributes get_Attributes();
    // public override System.Reflection.CallingConventions get_CallingConvention()
    // Offset: 0x1676A3C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.CallingConventions MethodBase::get_CallingConvention()
    System::Reflection::CallingConventions get_CallingConvention();
    // public override System.Boolean get_ContainsGenericParameters()
    // Offset: 0x1676A98
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1676AC8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1676AD0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1676B2C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1676B58
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1676BD8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1676C50
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodBody GetMethodBody()
    // Offset: 0x1676CD0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodBody MethodBase::GetMethodBody()
    System::Reflection::MethodBody* GetMethodBody();
    // public override System.String ToString()
    // Offset: 0x1676CD8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x1676E9C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public override System.Boolean get_IsSecurityCritical()
    // Offset: 0x1676EAC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsSecurityCritical()
    bool get_IsSecurityCritical();
    // public System.Void .ctor()
    // Offset: 0x1676EB4
    // Implemented from: System.Reflection.RuntimeConstructorInfo
    // Base method: System.Void RuntimeConstructorInfo::.ctor()
    // Base method: System.Void ConstructorInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoCMethod* New_ctor();
  }; // System.Reflection.MonoCMethod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoCMethod*, "System.Reflection", "MonoCMethod");
#pragma pack(pop)
