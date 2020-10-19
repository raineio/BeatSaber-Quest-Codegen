// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.InteropServices._MemberInfo
#include "System/Runtime/InteropServices/_MemberInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
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
  // Autogenerated type: System.Reflection.MemberInfo
  class MemberInfo : public ::Il2CppObject, public System::Reflection::ICustomAttributeProvider, public System::Runtime::InteropServices::_MemberInfo {
    public:
    // public System.Reflection.MemberTypes get_MemberType()
    // Offset: 0xFFFFFFFF
    System::Reflection::MemberTypes get_MemberType();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Type get_DeclaringType()
    // Offset: 0xFFFFFFFF
    System::Type* get_DeclaringType();
    // public System.Type get_ReflectedType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ReflectedType();
    // public System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x16732B0
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public System.Int32 get_MetadataToken()
    // Offset: 0x1673310
    int get_MetadataToken();
    // public System.Reflection.Module get_Module()
    // Offset: 0x1673314
    System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x1671CDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemberInfo* New_ctor();
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Object[] ICustomAttributeProvider::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Boolean ICustomAttributeProvider::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1673AE0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1671CF8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.MemberInfo
  // static public System.Boolean op_Equality(System.Reflection.MemberInfo left, System.Reflection.MemberInfo right)
  // Offset: 0x16733C8
  bool operator ==(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MemberInfo left, System.Reflection.MemberInfo right)
  // Offset: 0x1673AC4
  bool operator !=(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberInfo*, "System.Reflection", "MemberInfo");
#pragma pack(pop)
