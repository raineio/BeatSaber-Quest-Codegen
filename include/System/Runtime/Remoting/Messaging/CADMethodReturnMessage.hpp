// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CADMessageBase
#include "System/Runtime/Remoting/Messaging/CADMessageBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADArgHolder
  class CADArgHolder;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
  class CADMethodReturnMessage : public System::Runtime::Remoting::Messaging::CADMessageBase {
    public:
    // private System.Object _returnValue
    // Offset: 0x38
    ::Il2CppObject* returnValue;
    // private System.Runtime.Remoting.Messaging.CADArgHolder _exception
    // Offset: 0x40
    System::Runtime::Remoting::Messaging::CADArgHolder* exception;
    // private System.Type[] _sig
    // Offset: 0x48
    ::Array<System::Type*>* sig;
    // static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(System.Runtime.Remoting.Messaging.IMessage callMsg)
    // Offset: 0x10A396C
    static System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(System::Runtime::Remoting::Messaging::IMessage* callMsg);
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage retMsg)
    // Offset: 0x10A39F0
    static CADMethodReturnMessage* New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);
    // System.Collections.ArrayList GetArguments()
    // Offset: 0x10A3DAC
    System::Collections::ArrayList* GetArguments();
    // System.Object[] GetArgs(System.Collections.ArrayList args)
    // Offset: 0x10A3E94
    ::Array<::Il2CppObject*>* GetArgs(System::Collections::ArrayList* args);
    // System.Object GetReturnValue(System.Collections.ArrayList args)
    // Offset: 0x10A3EA4
    ::Il2CppObject* GetReturnValue(System::Collections::ArrayList* args);
    // System.Exception GetException(System.Collections.ArrayList args)
    // Offset: 0x10A3EB4
    System::Exception* GetException(System::Collections::ArrayList* args);
    // System.Int32 get_PropertiesCount()
    // Offset: 0x10A3F68
    int get_PropertiesCount();
  }; // System.Runtime.Remoting.Messaging.CADMethodReturnMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
#pragma pack(pop)
