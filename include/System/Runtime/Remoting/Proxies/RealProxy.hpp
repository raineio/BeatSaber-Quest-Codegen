// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
  // Forward declaring type: ClientIdentity
  class ClientIdentity;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
  // Forward declaring type: MonoMethodMessage
  class MonoMethodMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RealProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RealProxy*, "System.Runtime.Remoting.Proxies", "RealProxy");
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Proxies.RealProxy
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1031D54
  class RealProxy : public ::Il2CppObject {
    public:
    public:
    // private System.Type class_to_proxy
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* class_to_proxy;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Runtime.Remoting.Contexts.Context _targetContext
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Contexts::Context* targetContext;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Contexts::Context*) == 0x8);
    // System.MarshalByRefObject _server
    // Size: 0x8
    // Offset: 0x20
    ::System::MarshalByRefObject* server;
    // Field size check
    static_assert(sizeof(::System::MarshalByRefObject*) == 0x8);
    // private System.Int32 _targetDomainId
    // Size: 0x4
    // Offset: 0x28
    int targetDomainId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: targetDomainId and: targetUri
    char __padding3[0x4] = {};
    // System.String _targetUri
    // Size: 0x8
    // Offset: 0x30
    ::StringW targetUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Runtime.Remoting.Identity _objectIdentity
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::Remoting::Identity* objectIdentity;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Object _objTP
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* objTP;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _stubData
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* stubData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Type class_to_proxy
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_class_to_proxy();
    // Get instance field reference: System.Runtime.Remoting.Contexts.Context _targetContext
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Contexts::Context*& dyn__targetContext();
    // Get instance field reference: System.MarshalByRefObject _server
    [[deprecated("Use field access instead!")]] ::System::MarshalByRefObject*& dyn__server();
    // Get instance field reference: private System.Int32 _targetDomainId
    [[deprecated("Use field access instead!")]] int& dyn__targetDomainId();
    // Get instance field reference: System.String _targetUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__targetUri();
    // Get instance field reference: System.Runtime.Remoting.Identity _objectIdentity
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Identity*& dyn__objectIdentity();
    // Get instance field reference: private System.Object _objTP
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__objTP();
    // Get instance field reference: private System.Object _stubData
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__stubData();
    // System.Runtime.Remoting.Identity get_ObjectIdentity()
    // Offset: 0x18E2A80
    ::System::Runtime::Remoting::Identity* get_ObjectIdentity();
    // System.Void set_ObjectIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x18E2A88
    void set_ObjectIdentity(::System::Runtime::Remoting::Identity* value);
    // protected System.Void .ctor(System.Type classToProxy)
    // Offset: 0x18E2644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(::System::Type* classToProxy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy)));
    }
    // System.Void .ctor(System.Type classToProxy, System.Runtime.Remoting.ClientIdentity identity)
    // Offset: 0x18E27A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy, identity)));
    }
    // protected System.Void .ctor(System.Type classToProxy, System.IntPtr stub, System.Object stubData)
    // Offset: 0x18E269C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::Il2CppObject* stubData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy, stub, stubData)));
    }
    // static private System.Type InternalGetProxyType(System.Object transparentProxy)
    // Offset: 0x18E280C
    static ::System::Type* InternalGetProxyType(::Il2CppObject* transparentProxy);
    // public System.Type GetProxiedType()
    // Offset: 0x18E2810
    ::System::Type* GetProxiedType();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18E28BC
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Runtime.Remoting.Messaging.IMessage Invoke(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Object PrivateInvoke(System.Runtime.Remoting.Proxies.RealProxy rp, System.Runtime.Remoting.Messaging.IMessage msg, out System.Exception exc, out System.Object[] out_args)
    // Offset: 0x18E2A90
    static ::Il2CppObject* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* rp, ::System::Runtime::Remoting::Messaging::IMessage* msg, ByRef<::System::Exception*> exc, ByRef<::ArrayW<::Il2CppObject*>> out_args);
    // System.Object InternalGetTransparentProxy(System.String className)
    // Offset: 0x18E3B10
    ::Il2CppObject* InternalGetTransparentProxy(::StringW className);
    // public System.Object GetTransparentProxy()
    // Offset: 0x18E3B14
    ::Il2CppObject* GetTransparentProxy();
    // protected System.Void AttachServer(System.MarshalByRefObject s)
    // Offset: 0x18E3C80
    void AttachServer(::System::MarshalByRefObject* s);
    // System.Void SetTargetDomain(System.Int32 domainId)
    // Offset: 0x18E3C88
    void SetTargetDomain(int domainId);
    // System.Object GetAppDomainTarget()
    // Offset: 0x18E3C90
    ::Il2CppObject* GetAppDomainTarget();
    // static private System.Object[] ProcessResponse(System.Runtime.Remoting.Messaging.IMethodReturnMessage mrm, System.Runtime.Remoting.Messaging.MonoMethodMessage call)
    // Offset: 0x18E3428
    static ::ArrayW<::Il2CppObject*> ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call);
    // protected System.Void .ctor()
    // Offset: 0x18E2634
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>()));
    }
  }; // System.Runtime.Remoting.Proxies.RealProxy
  #pragma pack(pop)
  static check_size<sizeof(RealProxy), 72 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Proxies_RealProxySizeCheck;
  static_assert(sizeof(RealProxy) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity
// Il2CppName: get_ObjectIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Proxies::RealProxy::*)()>(&System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "get_ObjectIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity
// Il2CppName: set_ObjectIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "Identity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "set_ObjectIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType
// Il2CppName: InternalGetProxyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType)> {
  static const MethodInfo* get() {
    static auto* transparentProxy = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "InternalGetProxyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transparentProxy});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType
// Il2CppName: GetProxiedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::Proxies::RealProxy::*)()>(&System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "GetProxiedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Proxies::RealProxy::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Proxies::RealProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke
// Il2CppName: PrivateInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*, ByRef<::System::Exception*>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke)> {
  static const MethodInfo* get() {
    static auto* rp = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Proxies", "RealProxy")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->this_arg;
    static auto* out_args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "PrivateInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rp, msg, exc, out_args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy
// Il2CppName: InternalGetTransparentProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Proxies::RealProxy::*)(::StringW)>(&System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy)> {
  static const MethodInfo* get() {
    static auto* className = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "InternalGetTransparentProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{className});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy
// Il2CppName: GetTransparentProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Proxies::RealProxy::*)()>(&System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "GetTransparentProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::AttachServer
// Il2CppName: AttachServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RealProxy::*)(::System::MarshalByRefObject*)>(&System::Runtime::Remoting::Proxies::RealProxy::AttachServer)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "MarshalByRefObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "AttachServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain
// Il2CppName: SetTargetDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RealProxy::*)(int)>(&System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain)> {
  static const MethodInfo* get() {
    static auto* domainId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "SetTargetDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{domainId});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget
// Il2CppName: GetAppDomainTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Proxies::RealProxy::*)()>(&System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "GetAppDomainTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse
// Il2CppName: ProcessResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse)> {
  static const MethodInfo* get() {
    static auto* mrm = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodReturnMessage")->byval_arg;
    static auto* call = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "MonoMethodMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RealProxy*), "ProcessResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mrm, call});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RealProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
