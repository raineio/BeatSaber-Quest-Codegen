// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: EndPoint
  class EndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.TcpListener
  // [TokenAttribute] Offset: FFFFFFFF
  class TcpListener : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Net.IPEndPoint m_ServerSocketEP
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPEndPoint* m_ServerSocketEP;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.Sockets.Socket m_ServerSocket
    // Size: 0x8
    // Offset: 0x18
    System::Net::Sockets::Socket* m_ServerSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x20
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_ExclusiveAddressUse
    // Size: 0x1
    // Offset: 0x21
    bool m_ExclusiveAddressUse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Net.IPEndPoint m_ServerSocketEP
    System::Net::IPEndPoint*& dyn_m_ServerSocketEP();
    // Get instance field reference: private System.Net.Sockets.Socket m_ServerSocket
    System::Net::Sockets::Socket*& dyn_m_ServerSocket();
    // Get instance field reference: private System.Boolean m_Active
    bool& dyn_m_Active();
    // Get instance field reference: private System.Boolean m_ExclusiveAddressUse
    bool& dyn_m_ExclusiveAddressUse();
    // public System.Net.EndPoint get_LocalEndpoint()
    // Offset: 0x17757B8
    System::Net::EndPoint* get_LocalEndpoint();
    // public System.Void .ctor(System.Net.IPAddress localaddr, System.Int32 port)
    // Offset: 0x1775648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpListener* New_ctor(System::Net::IPAddress* localaddr, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::TcpListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpListener*, creationType>(localaddr, port)));
    }
    // public System.Void Start()
    // Offset: 0x17757E4
    void Start();
    // public System.Void Start(System.Int32 backlog)
    // Offset: 0x17757EC
    void Start(int backlog);
    // public System.Void Stop()
    // Offset: 0x177597C
    void Stop();
    // public System.IAsyncResult BeginAcceptTcpClient(System.AsyncCallback callback, System.Object state)
    // Offset: 0x1775A50
    System::IAsyncResult* BeginAcceptTcpClient(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.Sockets.TcpClient EndAcceptTcpClient(System.IAsyncResult asyncResult)
    // Offset: 0x1775B10
    System::Net::Sockets::TcpClient* EndAcceptTcpClient(System::IAsyncResult* asyncResult);
  }; // System.Net.Sockets.TcpListener
  #pragma pack(pop)
  static check_size<sizeof(TcpListener), 33 + sizeof(bool)> __System_Net_Sockets_TcpListenerSizeCheck;
  static_assert(sizeof(TcpListener) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::TcpListener*, "System.Net.Sockets", "TcpListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::get_LocalEndpoint
// Il2CppName: get_LocalEndpoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint* (System::Net::Sockets::TcpListener::*)()>(&System::Net::Sockets::TcpListener::get_LocalEndpoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "get_LocalEndpoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpListener::*)()>(&System::Net::Sockets::TcpListener::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpListener::*)(int)>(&System::Net::Sockets::TcpListener::Start)> {
  static const MethodInfo* get() {
    static auto* backlog = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backlog});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpListener::*)()>(&System::Net::Sockets::TcpListener::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::BeginAcceptTcpClient
// Il2CppName: BeginAcceptTcpClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::Sockets::TcpListener::*)(System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Sockets::TcpListener::BeginAcceptTcpClient)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "BeginAcceptTcpClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::TcpListener::EndAcceptTcpClient
// Il2CppName: EndAcceptTcpClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::TcpClient* (System::Net::Sockets::TcpListener::*)(System::IAsyncResult*)>(&System::Net::Sockets::TcpListener::EndAcceptTcpClient)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::TcpListener*), "EndAcceptTcpClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
