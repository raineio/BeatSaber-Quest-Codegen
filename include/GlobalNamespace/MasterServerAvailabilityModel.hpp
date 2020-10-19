// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMasterServerAvailabilityModel
#include "GlobalNamespace/IMasterServerAvailabilityModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpClient
  class HttpClient;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MasterServerAvailabilityModel
  class MasterServerAvailabilityModel : public ::Il2CppObject, public GlobalNamespace::IMasterServerAvailabilityModel {
    public:
    // Nested type: GlobalNamespace::MasterServerAvailabilityModel::$GetAvailabilityAsyncInternal$d__9
    struct $GetAvailabilityAsyncInternal$d__9;
    // private readonly INetworkConfig _networkConfig
    // Offset: 0x10
    GlobalNamespace::INetworkConfig* networkConfig;
    // private System.Net.Http.HttpClient _client
    // Offset: 0x18
    System::Net::Http::HttpClient* client;
    // private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> _request
    // Offset: 0x20
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* request;
    // private System.DateTime _lastRequestTime
    // Offset: 0x28
    System::DateTime lastRequestTime;
    // static field const value: static private System.Single kRequestCacheTimeHours
    static constexpr const float kRequestCacheTimeHours = 1;
    // Get static field: static private System.Single kRequestCacheTimeHours
    static float _get_kRequestCacheTimeHours();
    // Set static field: static private System.Single kRequestCacheTimeHours
    static void _set_kRequestCacheTimeHours(float value);
    // private System.Void Init()
    // Offset: 0x1FC20C0
    void Init();
    // private System.Boolean IsAvailabilityTaskValid()
    // Offset: 0x1FC21BC
    bool IsAvailabilityTaskValid();
    // private System.Void StartRequest()
    // Offset: 0x1FC20C4
    void StartRequest();
    // private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsyncInternal()
    // Offset: 0x1FC22C8
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsyncInternal();
    // public System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1FC2148
    // Implemented from: IMasterServerAvailabilityModel
    // Base method: System.Threading.Tasks.Task`1<MasterServerAvailabilityData> IMasterServerAvailabilityModel::GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1FC23E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MasterServerAvailabilityModel* New_ctor();
  }; // MasterServerAvailabilityModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityModel*, "", "MasterServerAvailabilityModel");
#pragma pack(pop)
