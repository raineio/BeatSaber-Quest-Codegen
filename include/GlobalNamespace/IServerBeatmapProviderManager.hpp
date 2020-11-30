// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IServerBeatmapProviderManager
  class IServerBeatmapProviderManager : public System::IDisposable {
    public:
    // public IServerBeatmapProvider GetServerBeatmapProvider()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider();
    // public System.Threading.Tasks.Task RefreshAsync()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task* RefreshAsync();
  }; // IServerBeatmapProviderManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
#pragma pack(pop)