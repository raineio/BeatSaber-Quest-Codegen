// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.FormatException
#include "System/FormatException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
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
  // Autogenerated type: System.Net.CookieException
  class CookieException : public System::FormatException {
    public:
    // public System.Void .ctor()
    // Offset: 0x12B4E0C
    // Implemented from: System.FormatException
    // Base method: System.Void FormatException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static CookieException* New_ctor();
    // System.Void .ctor(System.String message)
    // Offset: 0x12AE12C
    // Implemented from: System.FormatException
    // Base method: System.Void FormatException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static CookieException* New_ctor(::Il2CppString* message);
    // System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x12B2C50
    // Implemented from: System.FormatException
    // Base method: System.Void FormatException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    static CookieException* New_ctor(::Il2CppString* message, System::Exception* inner);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x12B4E14
    // Implemented from: System.FormatException
    // Base method: System.Void FormatException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    static CookieException* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x12B4E1C
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x12B4E24
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    // Skipping redundant proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
  }; // System.Net.CookieException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieException*, "System.Net", "CookieException");
#pragma pack(pop)
