// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMockBeatmapDataProvider
  class IMockBeatmapDataProvider/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IMockBeatmapDataProvider
    IMockBeatmapDataProvider() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Threading.Tasks.Task`1<MockBeatmapData> GetBeatmapData(BeatmapIdentifierNetSerializable beatmap, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData*>* GetBeatmapData(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap, System::Threading::CancellationToken cancellationToken);
  }; // IMockBeatmapDataProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMockBeatmapDataProvider*, "", "IMockBeatmapDataProvider");
// Writing MetadataGetter for method: GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData
// Il2CppName: GetBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData*>* (GlobalNamespace::IMockBeatmapDataProvider::*)(GlobalNamespace::BeatmapIdentifierNetSerializable*, System::Threading::CancellationToken)>(&GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMockBeatmapDataProvider*), "GetBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapIdentifierNetSerializable*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
