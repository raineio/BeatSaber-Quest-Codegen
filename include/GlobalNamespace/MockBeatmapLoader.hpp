// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMockBeatmapDataProvider
#include "GlobalNamespace/IMockBeatmapDataProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapLoader
  class MockBeatmapLoader : public ::Il2CppObject/*, public GlobalNamespace::IMockBeatmapDataProvider*/ {
    public:
    // Nested type: GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::MockBeatmapLoader::$$c
    class $$c;
    // Nested type: GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2
    struct $GetBeatmapData$d__2;
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // Creating value type constructor for type: MockBeatmapLoader
    MockBeatmapLoader(GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}) noexcept : beatmapLevelsModel{beatmapLevelsModel_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMockBeatmapDataProvider
    operator GlobalNamespace::IMockBeatmapDataProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMockBeatmapDataProvider*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::BeatmapLevelsModel*
    constexpr operator GlobalNamespace::BeatmapLevelsModel*() const noexcept {
      return beatmapLevelsModel;
    }
    // public System.Void .ctor(BeatmapLevelsModel beatmapLevelsModel)
    // Offset: 0x109E56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapLoader* New_ctor(GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockBeatmapLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapLoader*, creationType>(beatmapLevelsModel)));
    }
    // public System.Threading.Tasks.Task`1<MockBeatmapData> GetBeatmapData(BeatmapIdentifierNetSerializable beatmap, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x109E598
    System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData*>* GetBeatmapData(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap, System::Threading::CancellationToken cancellationToken);
    // public System.Void Dispose()
    // Offset: 0x109E6B0
    void Dispose();
  }; // MockBeatmapLoader
  #pragma pack(pop)
  static check_size<sizeof(MockBeatmapLoader), 16 + sizeof(GlobalNamespace::BeatmapLevelsModel*)> __GlobalNamespace_MockBeatmapLoaderSizeCheck;
  static_assert(sizeof(MockBeatmapLoader) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapLoader*, "", "MockBeatmapLoader");
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::GetBeatmapData
// Il2CppName: GetBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData*>* (GlobalNamespace::MockBeatmapLoader::*)(GlobalNamespace::BeatmapIdentifierNetSerializable*, System::Threading::CancellationToken)>(&GlobalNamespace::MockBeatmapLoader::GetBeatmapData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader*), "GetBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapIdentifierNetSerializable*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapLoader::*)()>(&GlobalNamespace::MockBeatmapLoader::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
