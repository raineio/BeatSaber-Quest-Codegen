// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: Missing
  class Missing;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.UnitySerializationHolder
  class UnitySerializationHolder : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IObjectReference {
    public:
    // private System.Type[] m_instantiation
    // Offset: 0x10
    ::Array<System::Type*>* m_instantiation;
    // private System.Int32[] m_elementTypes
    // Offset: 0x18
    ::Array<int>* m_elementTypes;
    // private System.Int32 m_genericParameterPosition
    // Offset: 0x20
    int m_genericParameterPosition;
    // private System.Type m_declaringType
    // Offset: 0x28
    System::Type* m_declaringType;
    // private System.Reflection.MethodBase m_declaringMethod
    // Offset: 0x30
    System::Reflection::MethodBase* m_declaringMethod;
    // private System.String m_data
    // Offset: 0x38
    ::Il2CppString* m_data;
    // private System.String m_assemblyName
    // Offset: 0x40
    ::Il2CppString* m_assemblyName;
    // private System.Int32 m_unityType
    // Offset: 0x48
    int m_unityType;
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.Reflection.Missing missing)
    // Offset: 0x170D708
    static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo* info, System::Reflection::Missing* missing);
    // static System.RuntimeType AddElementTypes(System.Runtime.Serialization.SerializationInfo info, System.RuntimeType type)
    // Offset: 0x170D7AC
    static System::RuntimeType* AddElementTypes(System::Runtime::Serialization::SerializationInfo* info, System::RuntimeType* type);
    // System.Type MakeElementTypes(System.Type type)
    // Offset: 0x170D9FC
    System::Type* MakeElementTypes(System::Type* type);
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.RuntimeType type)
    // Offset: 0x170DAFC
    static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo* info, System::RuntimeType* type);
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.Int32 unityType, System.String data, System.Reflection.RuntimeAssembly assembly)
    // Offset: 0x170DE0C
    static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo* info, int unityType, ::Il2CppString* data, System::Reflection::RuntimeAssembly* assembly);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x170DF58
    static UnitySerializationHolder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void ThrowInsufficientInformation(System.String field)
    // Offset: 0x170E2B4
    void ThrowInsufficientInformation(::Il2CppString* field);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x170E374
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x170E3F4
    // Implemented from: System.Runtime.Serialization.IObjectReference
    // Base method: System.Object IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext context)
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_IObjectReference_GetRealObject
    // Maps to method: GetRealObject
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
  }; // System.UnitySerializationHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UnitySerializationHolder*, "System", "UnitySerializationHolder");
#pragma pack(pop)
