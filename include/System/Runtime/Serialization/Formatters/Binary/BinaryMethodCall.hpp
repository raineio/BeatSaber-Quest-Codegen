// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
  class BinaryMethodCall : public ::Il2CppObject {
    public:
    // private System.String methodName
    // Offset: 0x10
    ::Il2CppString* methodName;
    // private System.String typeName
    // Offset: 0x18
    ::Il2CppString* typeName;
    // private System.Object[] args
    // Offset: 0x20
    ::Array<::Il2CppObject*>* args;
    // private System.Object callContext
    // Offset: 0x28
    ::Il2CppObject* callContext;
    // private System.Type[] argTypes
    // Offset: 0x30
    ::Array<System::Type*>* argTypes;
    // private System.Boolean bArgsPrimitive
    // Offset: 0x38
    bool bArgsPrimitive;
    // private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    // Offset: 0x3C
    System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
    // System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x12E2C7C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // System.Void Dump()
    // Offset: 0x12E2DE4
    void Dump();
    // public System.Void .ctor()
    // Offset: 0x12E2DE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryMethodCall* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
#pragma pack(pop)
