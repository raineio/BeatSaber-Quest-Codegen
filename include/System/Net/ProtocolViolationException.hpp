// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.ProtocolViolationException
  class ProtocolViolationException : public System::InvalidOperationException {
    public:
    // public System.Void .ctor()
    // Offset: 0x119EF20
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static ProtocolViolationException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x119EF28
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static ProtocolViolationException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x119EF30
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    static ProtocolViolationException* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x119EF38
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x119EF40
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    // Skipping redundant proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
  }; // System.Net.ProtocolViolationException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ProtocolViolationException*, "System.Net", "ProtocolViolationException");
#pragma pack(pop)