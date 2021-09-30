// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IHealthCheckService
#include "GlobalNamespace/IHealthCheckService.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HealthCheckService
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthCheckService : public ::Il2CppObject/*, public GlobalNamespace::IHealthCheckService*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.Int32 _port
    // Size: 0x4
    // Offset: 0x10
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: runThread
    char __padding0[0x4] = {};
    // private readonly System.Threading.Thread _runThread
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Thread* runThread;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x20
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: manualResetEvent
    char __padding2[0x7] = {};
    // private System.Threading.ManualResetEvent _manualResetEvent
    // Size: 0x8
    // Offset: 0x28
    System::Threading::ManualResetEvent* manualResetEvent;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Net.HttpListener _listener
    // Size: 0x8
    // Offset: 0x30
    System::Net::HttpListener* listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IHealthCheckService
    operator GlobalNamespace::IHealthCheckService() noexcept {
      return *reinterpret_cast<GlobalNamespace::IHealthCheckService*>(this);
    }
    // static field const value: static private System.Int32 kTimeoutLengthMs
    static constexpr const int kTimeoutLengthMs = 1000;
    // Get static field: static private System.Int32 kTimeoutLengthMs
    static int _get_kTimeoutLengthMs();
    // Set static field: static private System.Int32 kTimeoutLengthMs
    static void _set_kTimeoutLengthMs(int value);
    // Get instance field reference: private readonly System.Int32 _port
    int& dyn__port();
    // Get instance field reference: private readonly System.Threading.Thread _runThread
    System::Threading::Thread*& dyn__runThread();
    // Get instance field reference: private System.Boolean _disposed
    bool& dyn__disposed();
    // Get instance field reference: private System.Threading.ManualResetEvent _manualResetEvent
    System::Threading::ManualResetEvent*& dyn__manualResetEvent();
    // Get instance field reference: private System.Net.HttpListener _listener
    System::Net::HttpListener*& dyn__listener();
    // public System.Void .ctor(System.Int32 port)
    // Offset: 0x145A5E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthCheckService* New_ctor(int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthCheckService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthCheckService*, creationType>(port)));
    }
    // public System.Void Dispose()
    // Offset: 0x145A6C0
    void Dispose();
    // public System.Void PollUpdate()
    // Offset: 0x145A798
    void PollUpdate();
    // private System.Void Run()
    // Offset: 0x145A860
    void Run();
  }; // HealthCheckService
  #pragma pack(pop)
  static check_size<sizeof(HealthCheckService), 48 + sizeof(System::Net::HttpListener*)> __GlobalNamespace_HealthCheckServiceSizeCheck;
  static_assert(sizeof(HealthCheckService) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthCheckService*, "", "HealthCheckService");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthCheckService::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthCheckService::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthCheckService::*)()>(&GlobalNamespace::HealthCheckService::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthCheckService*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthCheckService::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthCheckService::*)()>(&GlobalNamespace::HealthCheckService::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthCheckService*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthCheckService::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthCheckService::*)()>(&GlobalNamespace::HealthCheckService::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthCheckService*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
