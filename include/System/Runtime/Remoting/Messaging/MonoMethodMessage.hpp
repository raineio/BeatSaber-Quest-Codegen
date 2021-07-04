// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Messaging.MonoMethodMessage
  class MonoMethodMessage : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    // private System.Reflection.MonoMethod method
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MonoMethod* method;
    // Field size check
    static_assert(sizeof(System::Reflection::MonoMethod*) == 0x8);
    // private System.Object[] args
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.String[] names
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* names;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Byte[] arg_types
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* arg_types;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Runtime.Remoting.Messaging.LogicalCallContext ctx
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Remoting::Messaging::LogicalCallContext* ctx;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // public System.Object rval
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* rval;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Exception exc
    // Size: 0x8
    // Offset: 0x40
    System::Exception* exc;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Runtime.Remoting.Messaging.AsyncResult asyncResult
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Remoting::Messaging::AsyncResult* asyncResult;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::AsyncResult*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CallType call_type
    // Size: 0x4
    // Offset: 0x50
    System::Runtime::Remoting::Messaging::CallType call_type;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::CallType) == 0x4);
    // Padding between fields: call_type and: uri
    char __padding8[0x4] = {};
    // private System.String uri
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.Remoting.Messaging.MCMDictionary properties
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::MCMDictionary* properties;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::MCMDictionary*) == 0x8);
    // private System.Type[] methodSignature
    // Size: 0x8
    // Offset: 0x68
    ::Array<System::Type*>* methodSignature;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Runtime.Remoting.Identity identity
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Remoting::Identity* identity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // Creating value type constructor for type: MonoMethodMessage
    MonoMethodMessage(System::Reflection::MonoMethod* method_ = {}, ::Array<::Il2CppObject*>* args_ = {}, ::Array<::Il2CppString*>* names_ = {}, ::Array<uint8_t>* arg_types_ = {}, System::Runtime::Remoting::Messaging::LogicalCallContext* ctx_ = {}, ::Il2CppObject* rval_ = {}, System::Exception* exc_ = {}, System::Runtime::Remoting::Messaging::AsyncResult* asyncResult_ = {}, System::Runtime::Remoting::Messaging::CallType call_type_ = {}, ::Il2CppString* uri_ = {}, System::Runtime::Remoting::Messaging::MCMDictionary* properties_ = {}, ::Array<System::Type*>* methodSignature_ = {}, System::Runtime::Remoting::Identity* identity_ = {}) noexcept : method{method_}, args{args_}, names{names_}, arg_types{arg_types_}, ctx{ctx_}, rval{rval_}, exc{exc_}, asyncResult{asyncResult_}, call_type{call_type_}, uri{uri_}, properties{properties_}, methodSignature{methodSignature_}, identity{identity_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodReturnMessage
    operator System::Runtime::Remoting::Messaging::IMethodReturnMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IInternalMessage
    operator System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // Get static field: static System.String CallContextKey
    static ::Il2CppString* _get_CallContextKey();
    // Set static field: static System.String CallContextKey
    static void _set_CallContextKey(::Il2CppString* value);
    // Get static field: static System.String UriKey
    static ::Il2CppString* _get_UriKey();
    // Set static field: static System.String UriKey
    static void _set_UriKey(::Il2CppString* value);
    // System.Void InitMessage(System.Reflection.MonoMethod method, System.Object[] out_args)
    // Offset: 0x1A42B54
    void InitMessage(System::Reflection::MonoMethod* method, ::Array<::Il2CppObject*>* out_args);
    // public System.Void .ctor(System.Reflection.MethodBase method, System.Object[] out_args)
    // Offset: 0x1A42DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMethodMessage* New_ctor(System::Reflection::MethodBase* method, ::Array<::Il2CppObject*>* out_args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MonoMethodMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMethodMessage*, creationType>(method, out_args)));
    }
    // System.Void .ctor(System.Reflection.MethodInfo minfo, System.Object[] in_args, System.Object[] out_args)
    // Offset: 0x1A42EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMethodMessage* New_ctor(System::Reflection::MethodInfo* minfo, ::Array<::Il2CppObject*>* in_args, ::Array<::Il2CppObject*>* out_args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MonoMethodMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMethodMessage*, creationType>(minfo, in_args, out_args)));
    }
    // static private System.Reflection.MethodInfo GetMethodInfo(System.Type type, System.String methodName)
    // Offset: 0x1A42FE8
    static System::Reflection::MethodInfo* GetMethodInfo(System::Type* type, ::Il2CppString* methodName);
    // public System.Void .ctor(System.Type type, System.String methodName, System.Object[] in_args)
    // Offset: 0x1A430C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMethodMessage* New_ctor(System::Type* type, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* in_args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MonoMethodMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMethodMessage*, creationType>(type, methodName, in_args)));
    }
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1A43160
    System::Collections::IDictionary* get_Properties();
    // public System.Int32 get_ArgCount()
    // Offset: 0x1A431CC
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1A43298
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1A432A0
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Void set_LogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext value)
    // Offset: 0x1A432A8
    void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value);
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1A432B0
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1A432B8
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1A43340
    ::Il2CppObject* get_MethodSignature();
    // public System.String get_TypeName()
    // Offset: 0x1A4346C
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1A43508
    ::Il2CppString* get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1A43510
    void set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 arg_num)
    // Offset: 0x1A43518
    ::Il2CppObject* GetArg(int arg_num);
    // public System.Exception get_Exception()
    // Offset: 0x1A43554
    System::Exception* get_Exception();
    // public System.Int32 get_OutArgCount()
    // Offset: 0x1A4355C
    int get_OutArgCount();
    // public System.Object[] get_OutArgs()
    // Offset: 0x1A435D4
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0x1A43714
    ::Il2CppObject* get_ReturnValue();
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1A4371C
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1A43724
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
    // public System.Runtime.Remoting.Messaging.AsyncResult get_AsyncResult()
    // Offset: 0x1A4372C
    System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult();
    // System.Runtime.Remoting.Messaging.CallType get_CallType()
    // Offset: 0x1A43210
    System::Runtime::Remoting::Messaging::CallType get_CallType();
    // public System.Boolean NeedsOutProcessing(out System.Int32 outCount)
    // Offset: 0x1A437C8
    bool NeedsOutProcessing(int& outCount);
    // static private System.Void .cctor()
    // Offset: 0x1A43864
    static void _cctor();
  }; // System.Runtime.Remoting.Messaging.MonoMethodMessage
  #pragma pack(pop)
  static check_size<sizeof(MonoMethodMessage), 112 + sizeof(System::Runtime::Remoting::Identity*)> __System_Runtime_Remoting_Messaging_MonoMethodMessageSizeCheck;
  static_assert(sizeof(MonoMethodMessage) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MonoMethodMessage*, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage
// Il2CppName: InitMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(System::Reflection::MonoMethod*, ::Array<::Il2CppObject*>*)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "InitMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MonoMethod*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo
// Il2CppName: GetMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Type*, ::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "GetMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext
// Il2CppName: set_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "set_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::LogicalCallContext*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri
// Il2CppName: set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(int)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount
// Il2CppName: get_OutArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_OutArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs
// Il2CppName: get_OutArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_OutArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue
// Il2CppName: get_ReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_ReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Identity*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult
// Il2CppName: get_AsyncResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::AsyncResult* (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_AsyncResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType
// Il2CppName: get_CallType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::CallType (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "get_CallType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing
// Il2CppName: NeedsOutProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(int&)>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), "NeedsOutProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MonoMethodMessage::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::MonoMethodMessage::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MonoMethodMessage*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
