// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ArgInfo
  class ArgInfo;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodReturnMessage
  class CADMethodReturnMessage;
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodResponse
  // [CLSCompliantAttribute] Offset: D7E774
  // [ComVisibleAttribute] Offset: D7E774
  class MethodResponse : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Serialization::ISerializable, public System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.Object _returnValue
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x38
    System::Exception* exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x40
    ::Array<System::Type*>* methodSignature;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::ArgInfo*) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x50
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object[] _outArgs
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppObject*>* outArgs;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMethodCallMessage _callMsg
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMethodCallMessage*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Size: 0x8
    // Offset: 0x68
    System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // protected System.Collections.IDictionary ExternalProperties
    // Size: 0x8
    // Offset: 0x78
    System::Collections::IDictionary* ExternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // protected System.Collections.IDictionary InternalProperties
    // Size: 0x8
    // Offset: 0x80
    System::Collections::IDictionary* InternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // Creating value type constructor for type: MethodResponse
    MethodResponse(::Il2CppString* methodName_ = {}, ::Il2CppString* uri_ = {}, ::Il2CppString* typeName_ = {}, System::Reflection::MethodBase* methodBase_ = {}, ::Il2CppObject* returnValue_ = {}, System::Exception* exception_ = {}, ::Array<System::Type*>* methodSignature_ = {}, System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo_ = {}, ::Array<::Il2CppObject*>* args_ = {}, ::Array<::Il2CppObject*>* outArgs_ = {}, System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg_ = {}, System::Runtime::Remoting::Messaging::LogicalCallContext* callContext_ = {}, System::Runtime::Remoting::Identity* targetIdentity_ = {}, System::Collections::IDictionary* ExternalProperties_ = {}, System::Collections::IDictionary* InternalProperties_ = {}) noexcept : methodName{methodName_}, uri{uri_}, typeName{typeName_}, methodBase{methodBase_}, returnValue{returnValue_}, exception{exception_}, methodSignature{methodSignature_}, inArgInfo{inArgInfo_}, args{args_}, outArgs{outArgs_}, callMsg{callMsg_}, callContext{callContext_}, targetIdentity{targetIdentity_}, ExternalProperties{ExternalProperties_}, InternalProperties{InternalProperties_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodReturnMessage
    operator System::Runtime::Remoting::Messaging::IMethodReturnMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IInternalMessage
    operator System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x1A3CE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodResponse* New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodResponse*, creationType>(e, msg)));
    }
    // System.Void .ctor(System.Object returnValue, System.Object[] outArgs, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x1A3CD64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodResponse* New_ctor(::Il2CppObject* returnValue, ::Array<::Il2CppObject*>* outArgs, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodResponse*, creationType>(returnValue, outArgs, callCtx, msg)));
    }
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
    // Offset: 0x1A41808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodResponse* New_ctor(System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodResponse*, creationType>(msg, retmsg)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A3CF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodResponse*, creationType>(info, context)));
    }
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x1A41A5C
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Int32 get_ArgCount()
    // Offset: 0x1A41E20
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1A41E38
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Exception get_Exception()
    // Offset: 0x1A41E40
    System::Exception* get_Exception();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1A41E48
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1A41EB4
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1A41FC8
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1A42158
    ::Il2CppObject* get_MethodSignature();
    // public System.Object[] get_OutArgs()
    // Offset: 0x1A42254
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1A3CFE4
    System::Collections::IDictionary* get_Properties();
    // public System.Object get_ReturnValue()
    // Offset: 0x1A42430
    ::Il2CppObject* get_ReturnValue();
    // public System.String get_TypeName()
    // Offset: 0x1A42090
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1A42438
    ::Il2CppString* get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1A42500
    void set_Uri(::Il2CppString* value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1A42508
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1A4250C
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1A42514
    ::Il2CppObject* GetArg(int argNum);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A42550
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1A42904
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1A4290C
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.MethodResponse
  #pragma pack(pop)
  static check_size<sizeof(MethodResponse), 128 + sizeof(System::Collections::IDictionary*)> __System_Runtime_Remoting_Messaging_MethodResponseSizeCheck;
  static_assert(sizeof(MethodResponse) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodResponse*, "System.Runtime.Remoting.Messaging", "MethodResponse");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::InitMethodProperty
// Il2CppName: InitMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodResponse::*)(::Il2CppString*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MethodResponse::InitMethodProperty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "InitMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_ArgCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_Args)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_Exception)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_LogicalCallContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_MethodBase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_MethodName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_MethodSignature)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_OutArgs
// Il2CppName: get_OutArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_OutArgs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_OutArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_Properties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_ReturnValue
// Il2CppName: get_ReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_ReturnValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_ReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_TypeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::get_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::set_Uri
// Il2CppName: set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodResponse::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MethodResponse::set_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodResponse::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodResponse::*)(int)>(&System::Runtime::Remoting::Messaging::MethodResponse::GetArg)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodResponse::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::MethodResponse::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodResponse::*)(System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodResponse*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Identity*>()});
  }
};
