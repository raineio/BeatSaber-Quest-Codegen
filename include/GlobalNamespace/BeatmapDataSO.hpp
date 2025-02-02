// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapDataBasicInfo
  class IBeatmapDataBasicInfo;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataSO
  class BeatmapDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO*, "", "BeatmapDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$GetBeatmapDataBasicInfoAsync$d__1
    struct $GetBeatmapDataBasicInfoAsync$d__1;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$GetBeatmapDataAsync$d__2
    struct $GetBeatmapDataAsync$d__2;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5
    struct $LoadBeatmapSaveDataAsync$d__5;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::GlobalNamespace::BeatmapDataSO::$RunTaskAndLogException$d__6
    struct $RunTaskAndLogException$d__6;
    public:
    // public System.String _jsonData
    // Size: 0x8
    // Offset: 0x18
    ::StringW jsonData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private IBeatmapDataBasicInfo _beatmapDataBasic
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapDataBasicInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String _jsonData
    [[deprecated("Use field access instead!")]] ::StringW& dyn__jsonData();
    // Get instance field reference: private IBeatmapDataBasicInfo _beatmapDataBasic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapDataBasicInfo*& dyn__beatmapDataBasic();
    // public System.Void .ctor()
    // Offset: 0x1566594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSO*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync()
    // Offset: 0x1566130
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();
    // public System.Threading.Tasks.Task`1<IReadonlyBeatmapData> GetBeatmapDataAsync(BeatmapDifficulty beatmapDifficulty, System.Single beatsPerMinute, System.Boolean loadingForDesignatedEnvironment, EnvironmentInfoSO environmentInfo, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x1566230
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float beatsPerMinute, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // public System.Void SetJsonData(System.String jsonData)
    // Offset: 0x156637C
    void SetJsonData(::StringW jsonData);
    // private System.Threading.Tasks.Task`1<BeatmapSaveDataVersion3.BeatmapSaveData> LoadBeatmapSaveDataAsync()
    // Offset: 0x1566384
    ::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* LoadBeatmapSaveDataAsync();
    // private System.Threading.Tasks.Task RunTaskAndLogException(System.Action action)
    // Offset: 0x15664A4
    ::System::Threading::Tasks::Task* RunTaskAndLogException(::System::Action* action);
  }; // BeatmapDataSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataSO), 32 + sizeof(::GlobalNamespace::IBeatmapDataBasicInfo*)> __GlobalNamespace_BeatmapDataSOSizeCheck;
  static_assert(sizeof(BeatmapDataSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync
// Il2CppName: GetBeatmapDataBasicInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync
// Il2CppName: GetBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (GlobalNamespace::BeatmapDataSO::*)(::GlobalNamespace::BeatmapDifficulty, float, bool, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync)> {
  static const MethodInfo* get() {
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* beatsPerMinute = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* loadingForDesignatedEnvironment = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* environmentInfo = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "GetBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapDifficulty, beatsPerMinute, loadingForDesignatedEnvironment, environmentInfo, playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::SetJsonData
// Il2CppName: SetJsonData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)(::StringW)>(&GlobalNamespace::BeatmapDataSO::SetJsonData)> {
  static const MethodInfo* get() {
    static auto* jsonData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "SetJsonData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync
// Il2CppName: LoadBeatmapSaveDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "LoadBeatmapSaveDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::RunTaskAndLogException
// Il2CppName: RunTaskAndLogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::BeatmapDataSO::*)(::System::Action*)>(&GlobalNamespace::BeatmapDataSO::RunTaskAndLogException)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "RunTaskAndLogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
