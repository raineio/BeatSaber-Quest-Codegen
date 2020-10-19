// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.CallType
#include "System/Runtime/Remoting/Messaging/CallType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MonoMethod
  class MonoMethod;
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: AsyncResult
  class AsyncResult;
  // Forward declaring type: MCMDictionary
  class MCMDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MonoMethodMessage
  class MonoMethodMessage : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Remoting::Messaging::IInternalMessage {
    public:
    // private System.Reflection.MonoMethod method
    // Offset: 0x10
    System::Reflection::MonoMethod* method;
    // private System.Object[] args
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // private System.String[] names
    // Offset: 0x20
    ::Array<::Il2CppString*>* names;
    // private System.Byte[] arg_types
    // Offset: 0x28
    ::Array<uint8_t>* arg_types;
    // public System.Runtime.Remoting.Messaging.LogicalCallContext ctx
    // Offset: 0x30
    System::Runtime::Remoting::Messaging::LogicalCallContext* ctx;
    // public System.Object rval
    // Offset: 0x38
    ::Il2CppObject* rval;
    // public System.Exception exc
    // Offset: 0x40
    System::Exception* exc;
    // private System.Runtime.Remoting.Messaging.AsyncResult asyncResult
    // Offset: 0x48
    System::Runtime::Remoting::Messaging::AsyncResult* asyncResult;
    // private System.Runtime.Remoting.Messaging.CallType call_type
    // Offset: 0x50
    System::Runtime::Remoting::Messaging::CallType call_type;
    // private System.String uri
    // Offset: 0x58
    ::Il2CppString* uri;
    // private System.Runtime.Remoting.Messaging.MCMDictionary properties
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::MCMDictionary* properties;
    // private System.Type[] methodSignature
    // Offset: 0x68
    ::Array<System::Type*>* methodSignature;
    // private System.Runtime.Remoting.Identity identity
    // Offset: 0x70
    System::Runtime::Remoting::Identity* identity;
    // Get static field: static System.String CallContextKey
    static ::Il2CppString* _get_CallContextKey();
    // Set static field: static System.String CallContextKey
    static void _set_CallContextKey(::Il2CppString* value);
    // Get static field: static System.String UriKey
    static ::Il2CppString* _get_UriKey();
    // Set static field: static System.String UriKey
    static void _set_UriKey(::Il2CppString* value);
    // System.Void InitMessage(System.Reflection.MonoMethod method, System.Object[] out_args)
    // Offset: 0x12CD248
    void InitMessage(System::Reflection::MonoMethod* method, ::Array<::Il2CppObject*>* out_args);
    // public System.Void .ctor(System.Reflection.MethodBase method, System.Object[] out_args)
    // Offset: 0x12CD524
    static MonoMethodMessage* New_ctor(System::Reflection::MethodBase* method, ::Array<::Il2CppObject*>* out_args);
    // System.Void .ctor(System.Reflection.MethodInfo minfo, System.Object[] in_args, System.Object[] out_args)
    // Offset: 0x12CD5FC
    static MonoMethodMessage* New_ctor(System::Reflection::MethodInfo* minfo, ::Array<::Il2CppObject*>* in_args, ::Array<::Il2CppObject*>* out_args);
    // static private System.Reflection.MethodInfo GetMethodInfo(System.Type type, System.String methodName)
    // Offset: 0x12CD75C
    static System::Reflection::MethodInfo* GetMethodInfo(System::Type* type, ::Il2CppString* methodName);
    // public System.Void .ctor(System.Type type, System.String methodName, System.Object[] in_args)
    // Offset: 0x12CD83C
    static MonoMethodMessage* New_ctor(System::Type* type, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* in_args);
    // public System.Void set_LogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext value)
    // Offset: 0x12CDA34
    void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value);
    // public System.Int32 get_OutArgCount()
    // Offset: 0x12CDD00
    int get_OutArgCount();
    // public System.Runtime.Remoting.Messaging.AsyncResult get_AsyncResult()
    // Offset: 0x12CDEDC
    System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult();
    // System.Runtime.Remoting.Messaging.CallType get_CallType()
    // Offset: 0x12CD99C
    System::Runtime::Remoting::Messaging::CallType get_CallType();
    // public System.Boolean NeedsOutProcessing(out System.Int32 outCount)
    // Offset: 0x12CDF78
    bool NeedsOutProcessing(int& outCount);
    // static private System.Void .cctor()
    // Offset: 0x12CE014
    static void _cctor();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x12CD8D4
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.Int32 get_ArgCount()
    // Offset: 0x12CD958
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x12CDA24
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x12CDA2C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x12CDA3C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x12CDA44
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x12CDACC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.String get_TypeName()
    // Offset: 0x12CDC10
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x12CDCAC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    // Base method: System.String IInternalMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // Creating proxy method: System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
    // Maps to method: get_Uri
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x12CDCB4
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_Uri(System.String value)
    void set_Uri(::Il2CppString* value);
    // Creating proxy method: System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
    // Maps to method: set_Uri
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 arg_num)
    // Offset: 0x12CDCBC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 arg_num)
    ::Il2CppObject* GetArg(int arg_num);
    // public System.Exception get_Exception()
    // Offset: 0x12CDCF8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Exception IMethodReturnMessage::get_Exception()
    System::Exception* get_Exception();
    // public System.Object[] get_OutArgs()
    // Offset: 0x12CDD78
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object[] IMethodReturnMessage::get_OutArgs()
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0x12CDEC4
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object IMethodReturnMessage::get_ReturnValue()
    ::Il2CppObject* get_ReturnValue();
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x12CDECC
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Runtime.Remoting.Identity IInternalMessage::get_TargetIdentity()
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x12CDED4
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_TargetIdentity(System.Runtime.Remoting.Identity value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.MonoMethodMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MonoMethodMessage*, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
#pragma pack(pop)
