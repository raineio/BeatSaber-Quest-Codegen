// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Net.Security.AuthenticationLevel
#include "System/Net/Security/AuthenticationLevel.hpp"
// Including type: System.Security.Principal.TokenImpersonationLevel
#include "System/Security/Principal/TokenImpersonationLevel.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebProxy
  class IWebProxy;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequest : public System::MarshalByRefObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Nested type: System::Net::WebRequest::DesignerWebRequestCreate
    class DesignerWebRequestCreate;
    // Nested type: System::Net::WebRequest::WebProxyWrapperOpaque
    class WebProxyWrapperOpaque;
    // Nested type: System::Net::WebRequest::WebProxyWrapper
    class WebProxyWrapper;
    // Nested type: System::Net::WebRequest::$$c__DisplayClass78_0
    class $$c__DisplayClass78_0;
    // Nested type: System::Net::WebRequest::$$c__DisplayClass79_0
    class $$c__DisplayClass79_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Net.Security.AuthenticationLevel m_AuthenticationLevel
    // Size: 0x4
    // Offset: 0x18
    System::Net::Security::AuthenticationLevel m_AuthenticationLevel;
    // Field size check
    static_assert(sizeof(System::Net::Security::AuthenticationLevel) == 0x4);
    // private System.Security.Principal.TokenImpersonationLevel m_ImpersonationLevel
    // Size: 0x4
    // Offset: 0x1C
    System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel;
    // Field size check
    static_assert(sizeof(System::Security::Principal::TokenImpersonationLevel) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private System.Collections.ArrayList s_PrefixList
    static System::Collections::ArrayList* _get_s_PrefixList();
    // Set static field: static private System.Collections.ArrayList s_PrefixList
    static void _set_s_PrefixList(System::Collections::ArrayList* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // Get static field: static private System.Net.TimerThread/System.Net.Queue s_DefaultTimerQueue
    static System::Net::TimerThread::Queue* _get_s_DefaultTimerQueue();
    // Set static field: static private System.Net.TimerThread/System.Net.Queue s_DefaultTimerQueue
    static void _set_s_DefaultTimerQueue(System::Net::TimerThread::Queue* value);
    // Get static field: static private System.Net.WebRequest/System.Net.DesignerWebRequestCreate webRequestCreate
    static System::Net::WebRequest::DesignerWebRequestCreate* _get_webRequestCreate();
    // Set static field: static private System.Net.WebRequest/System.Net.DesignerWebRequestCreate webRequestCreate
    static void _set_webRequestCreate(System::Net::WebRequest::DesignerWebRequestCreate* value);
    // Get static field: static private System.Net.IWebProxy s_DefaultWebProxy
    static System::Net::IWebProxy* _get_s_DefaultWebProxy();
    // Set static field: static private System.Net.IWebProxy s_DefaultWebProxy
    static void _set_s_DefaultWebProxy(System::Net::IWebProxy* value);
    // Get static field: static private System.Boolean s_DefaultWebProxyInitialized
    static bool _get_s_DefaultWebProxyInitialized();
    // Set static field: static private System.Boolean s_DefaultWebProxyInitialized
    static void _set_s_DefaultWebProxyInitialized(bool value);
    // Get instance field reference: private System.Net.Security.AuthenticationLevel m_AuthenticationLevel
    System::Net::Security::AuthenticationLevel& dyn_m_AuthenticationLevel();
    // Get instance field reference: private System.Security.Principal.TokenImpersonationLevel m_ImpersonationLevel
    System::Security::Principal::TokenImpersonationLevel& dyn_m_ImpersonationLevel();
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x1786430
    static ::Il2CppObject* get_InternalSyncObject();
    // static System.Collections.ArrayList get_PrefixList()
    // Offset: 0x1786768
    static System::Collections::ArrayList* get_PrefixList();
    // public System.String get_Method()
    // Offset: 0x1786DB0
    ::Il2CppString* get_Method();
    // public System.Void set_Method(System.String value)
    // Offset: 0x1786DF8
    void set_Method(::Il2CppString* value);
    // public System.Uri get_RequestUri()
    // Offset: 0x1786E40
    System::Uri* get_RequestUri();
    // public System.Void set_ConnectionGroupName(System.String value)
    // Offset: 0x1786E88
    void set_ConnectionGroupName(::Il2CppString* value);
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x1786ED0
    System::Net::WebHeaderCollection* get_Headers();
    // public System.Int64 get_ContentLength()
    // Offset: 0x1786F18
    int64_t get_ContentLength();
    // public System.Void set_ContentLength(System.Int64 value)
    // Offset: 0x1786F60
    void set_ContentLength(int64_t value);
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x1786FA8
    System::Net::ICredentials* get_Credentials();
    // public System.Void set_Credentials(System.Net.ICredentials value)
    // Offset: 0x1786FF0
    void set_Credentials(System::Net::ICredentials* value);
    // public System.Boolean get_UseDefaultCredentials()
    // Offset: 0x1787038
    bool get_UseDefaultCredentials();
    // public System.Void set_UseDefaultCredentials(System.Boolean value)
    // Offset: 0x1787080
    void set_UseDefaultCredentials(bool value);
    // public System.Net.IWebProxy get_Proxy()
    // Offset: 0x17870C8
    System::Net::IWebProxy* get_Proxy();
    // public System.Void set_Proxy(System.Net.IWebProxy value)
    // Offset: 0x1787110
    void set_Proxy(System::Net::IWebProxy* value);
    // public System.Void set_PreAuthenticate(System.Boolean value)
    // Offset: 0x1787158
    void set_PreAuthenticate(bool value);
    // public System.Int32 get_Timeout()
    // Offset: 0x17871A0
    int get_Timeout();
    // static System.Net.IWebProxy get_InternalDefaultWebProxy()
    // Offset: 0x17878D0
    static System::Net::IWebProxy* get_InternalDefaultWebProxy();
    // static public System.Net.IWebProxy get_DefaultWebProxy()
    // Offset: 0x1787A9C
    static System::Net::IWebProxy* get_DefaultWebProxy();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1786D98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest*, creationType>(serializationInfo, streamingContext)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1787AF8
    static void _cctor();
    // static private System.Net.WebRequest Create(System.Uri requestUri, System.Boolean useUriBase)
    // Offset: 0x1786510
    static System::Net::WebRequest* Create(System::Uri* requestUri, bool useUriBase);
    // static public System.Net.WebRequest Create(System.String requestUriString)
    // Offset: 0x1778EDC
    static System::Net::WebRequest* Create(::Il2CppString* requestUriString);
    // static public System.Net.WebRequest Create(System.Uri requestUri)
    // Offset: 0x1786A98
    static System::Net::WebRequest* Create(System::Uri* requestUri);
    // static private System.Collections.ArrayList PopulatePrefixList()
    // Offset: 0x1786B70
    static System::Collections::ArrayList* PopulatePrefixList();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1786DA0
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1786DAC
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public System.Net.WebResponse GetResponse()
    // Offset: 0x17871E8
    System::Net::WebResponse* GetResponse();
    // public System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0x1787230
    System::IAsyncResult* BeginGetResponse(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0x1787278
    System::Net::WebResponse* EndGetResponse(System::IAsyncResult* asyncResult);
    // public System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0x17872C0
    System::IAsyncResult* BeginGetRequestStream(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0x1787308
    System::IO::Stream* EndGetRequestStream(System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task`1<System.IO.Stream> GetRequestStreamAsync()
    // Offset: 0x1787350
    System::Threading::Tasks::Task_1<System::IO::Stream*>* GetRequestStreamAsync();
    // public System.Threading.Tasks.Task`1<System.Net.WebResponse> GetResponseAsync()
    // Offset: 0x178761C
    System::Threading::Tasks::Task_1<System::Net::WebResponse*>* GetResponseAsync();
    // private System.Security.Principal.WindowsIdentity SafeCaptureIdenity()
    // Offset: 0x17875BC
    System::Security::Principal::WindowsIdentity* SafeCaptureIdenity();
    // public System.Void Abort()
    // Offset: 0x1787888
    void Abort();
    // private System.Threading.Tasks.Task`1<System.IO.Stream> <GetRequestStreamAsync>b__78_0()
    // Offset: 0x1787BA4
    System::Threading::Tasks::Task_1<System::IO::Stream*>* $GetRequestStreamAsync$b__78_0();
    // private System.Threading.Tasks.Task`1<System.Net.WebResponse> <GetResponseAsync>b__79_0()
    // Offset: 0x1787CAC
    System::Threading::Tasks::Task_1<System::Net::WebResponse*>* $GetResponseAsync$b__79_0();
    // protected System.Void .ctor()
    // Offset: 0x1786D68
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest*, creationType>()));
    }
  }; // System.Net.WebRequest
  #pragma pack(pop)
  static check_size<sizeof(WebRequest), 28 + sizeof(System::Security::Principal::TokenImpersonationLevel)> __System_Net_WebRequestSizeCheck;
  static_assert(sizeof(WebRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest*, "System.Net", "WebRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::get_InternalSyncObject
// Il2CppName: get_InternalSyncObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Net::WebRequest::get_InternalSyncObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_InternalSyncObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_PrefixList
// Il2CppName: get_PrefixList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (*)()>(&System::Net::WebRequest::get_PrefixList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_PrefixList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::Il2CppString*)>(&System::Net::WebRequest::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_RequestUri
// Il2CppName: get_RequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_RequestUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_RequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_ConnectionGroupName
// Il2CppName: set_ConnectionGroupName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::Il2CppString*)>(&System::Net::WebRequest::set_ConnectionGroupName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_ConnectionGroupName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_ContentLength
// Il2CppName: set_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(int64_t)>(&System::Net::WebRequest::set_ContentLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Credentials
// Il2CppName: set_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(System::Net::ICredentials*)>(&System::Net::WebRequest::set_Credentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_UseDefaultCredentials
// Il2CppName: get_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_UseDefaultCredentials
// Il2CppName: set_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(bool)>(&System::Net::WebRequest::set_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Proxy
// Il2CppName: get_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Proxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Proxy
// Il2CppName: set_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(System::Net::IWebProxy*)>(&System::Net::WebRequest::set_Proxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IWebProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_PreAuthenticate
// Il2CppName: set_PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(bool)>(&System::Net::WebRequest::set_PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_InternalDefaultWebProxy
// Il2CppName: get_InternalDefaultWebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy* (*)()>(&System::Net::WebRequest::get_InternalDefaultWebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_InternalDefaultWebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_DefaultWebProxy
// Il2CppName: get_DefaultWebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebProxy* (*)()>(&System::Net::WebRequest::get_DefaultWebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_DefaultWebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebRequest* (*)(System::Uri*, bool)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* useUriBase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri, useUriBase});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebRequest* (*)(::Il2CppString*)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUriString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUriString});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebRequest* (*)(System::Uri*)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::PopulatePrefixList
// Il2CppName: PopulatePrefixList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (*)()>(&System::Net::WebRequest::PopulatePrefixList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "PopulatePrefixList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebRequest::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::GetResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::WebRequest::*)(System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::WebRequest::BeginGetResponse)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "BeginGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::EndGetResponse
// Il2CppName: EndGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebResponse* (System::Net::WebRequest::*)(System::IAsyncResult*)>(&System::Net::WebRequest::EndGetResponse)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "EndGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::BeginGetRequestStream
// Il2CppName: BeginGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::WebRequest::*)(System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::WebRequest::BeginGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "BeginGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::EndGetRequestStream
// Il2CppName: EndGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::WebRequest::*)(System::IAsyncResult*)>(&System::Net::WebRequest::EndGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "EndGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetRequestStreamAsync
// Il2CppName: GetRequestStreamAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::IO::Stream*>* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::GetRequestStreamAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetRequestStreamAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetResponseAsync
// Il2CppName: GetResponseAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::WebResponse*>* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::GetResponseAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetResponseAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::SafeCaptureIdenity
// Il2CppName: SafeCaptureIdenity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Principal::WindowsIdentity* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::SafeCaptureIdenity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "SafeCaptureIdenity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)()>(&System::Net::WebRequest::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::$GetRequestStreamAsync$b__78_0
// Il2CppName: <GetRequestStreamAsync>b__78_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::IO::Stream*>* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::$GetRequestStreamAsync$b__78_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "<GetRequestStreamAsync>b__78_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::$GetResponseAsync$b__79_0
// Il2CppName: <GetResponseAsync>b__79_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::WebResponse*>* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::$GetResponseAsync$b__79_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "<GetResponseAsync>b__79_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
