// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMasterServerAvailabilityModel
#include "GlobalNamespace/IMasterServerAvailabilityModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
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
  // Autogenerated type: MockMasterServerAvailabilityModel
  class MockMasterServerAvailabilityModel : public ::Il2CppObject, public GlobalNamespace::IMasterServerAvailabilityModel {
    public:
    // private readonly MultiplayerMockSettings _mockSettings
    // Offset: 0x10
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // Creating conversion operator: operator GlobalNamespace::MultiplayerMockSettings*
    constexpr operator GlobalNamespace::MultiplayerMockSettings*() const noexcept {
      return mockSettings;
    }
    // public System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x2054D68
    // Implemented from: IMasterServerAvailabilityModel
    // Base method: System.Threading.Tasks.Task`1<MasterServerAvailabilityData> IMasterServerAvailabilityModel::GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x2054DE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MockMasterServerAvailabilityModel* New_ctor();
  }; // MockMasterServerAvailabilityModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMasterServerAvailabilityModel*, "", "MockMasterServerAvailabilityModel");
#pragma pack(pop)
