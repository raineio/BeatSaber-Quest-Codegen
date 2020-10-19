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
  // Forward declaring type: Delegate
  class Delegate;
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
  // Autogenerated type: System.DelegateSerializationHolder
  class DelegateSerializationHolder : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IObjectReference {
    public:
    // Nested type: System::DelegateSerializationHolder::DelegateEntry
    class DelegateEntry;
    // private System.Delegate _delegate
    // Offset: 0x10
    System::Delegate* delegate;
    // Creating conversion operator: operator System::Delegate*
    constexpr operator System::Delegate*() const noexcept {
      return delegate;
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x176E854
    static DelegateSerializationHolder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext ctx);
    // static public System.Void GetDelegateData(System.Delegate instance, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x176E040
    static void GetDelegateData(System::Delegate* instance, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext ctx);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176EE68
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176EEC8
    // Implemented from: System.Runtime.Serialization.IObjectReference
    // Base method: System.Object IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext context)
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_IObjectReference_GetRealObject
    // Maps to method: GetRealObject
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
  }; // System.DelegateSerializationHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DelegateSerializationHolder*, "System", "DelegateSerializationHolder");
#pragma pack(pop)
