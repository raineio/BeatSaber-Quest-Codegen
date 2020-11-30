// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RollingAverage
  class RollingAverage;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Process
  class Process;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CPUMonitor
  class CPUMonitor : public ::Il2CppObject {
    public:
    // private readonly RollingAverage _utilization
    // Offset: 0x10
    GlobalNamespace::RollingAverage* utilization;
    // private readonly System.Diagnostics.Process _currentProcess
    // Offset: 0x18
    System::Diagnostics::Process* currentProcess;
    // private readonly System.Int32 _processorCount
    // Offset: 0x20
    int processorCount;
    // private System.Int64 _lastSampleTime
    // Offset: 0x28
    int64_t lastSampleTime;
    // private System.Int64 _lastSampleValue
    // Offset: 0x30
    int64_t lastSampleValue;
    // public System.Void PollUpdate()
    // Offset: 0x1B43E30
    void PollUpdate();
    // public System.Single get_utilization()
    // Offset: 0x1B43F38
    float get_utilization();
    // public System.Void .ctor()
    // Offset: 0x1B43F60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CPUMonitor* New_ctor();
  }; // CPUMonitor
  check_size<sizeof(CPUMonitor), 48 + sizeof(int64_t) + 8 - (48 + sizeof(int64_t)) % 8> __GlobalNamespace_CPUMonitorSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CPUMonitor*, "", "CPUMonitor");
#pragma pack(pop)