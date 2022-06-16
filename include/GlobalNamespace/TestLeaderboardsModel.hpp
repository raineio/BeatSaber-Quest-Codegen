// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TestLeaderboardsModel
  class TestLeaderboardsModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TestLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestLeaderboardsModel*, "", "TestLeaderboardsModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TestLeaderboardsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class TestLeaderboardsModel : public ::Il2CppObject/*, public ::OnlineServices::ILeaderboardsModel*/ {
    public:
    // Nested type: ::GlobalNamespace::TestLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: ::GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5
    struct $SendLevelScoreResultAsync$d__5;
    public:
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::StringW>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::OnlineServices::ILeaderboardsModel
    operator ::OnlineServices::ILeaderboardsModel() noexcept {
      return *reinterpret_cast<::OnlineServices::ILeaderboardsModel*>(this);
    }
    // Creating interface conversion operator: i_ILeaderboardsModel
    inline ::OnlineServices::ILeaderboardsModel* i_ILeaderboardsModel() noexcept {
      return reinterpret_cast<::OnlineServices::ILeaderboardsModel*>(this);
    }
    // Creating conversion operator: operator ::System::Action_1<::StringW>*
    constexpr operator ::System::Action_1<::StringW>*() const noexcept {
      return scoreForLeaderboardDidUploadEvent;
    }
    // Get instance field reference: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_scoreForLeaderboardDidUploadEvent();
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1474AE0
    void add_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1474B84
    void remove_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void .ctor()
    // Offset: 0x1474E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TestLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestLeaderboardsModel*, creationType>()));
    }
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1474C28
    ::StringW GetLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1474C34
    ::System::Threading::Tasks::Task_1<::OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(::OnlineServices::GetLeaderboardFilterData leaderboardFilterData, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1474D48
    ::System::Threading::Tasks::Task_1<::OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(::OnlineServices::LevelScoreResultsData levelScoreResult, ::System::Threading::CancellationToken cancellationToken);
  }; // TestLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(TestLeaderboardsModel), 16 + sizeof(::System::Action_1<::StringW>*)> __GlobalNamespace_TestLeaderboardsModelSizeCheck;
  static_assert(sizeof(TestLeaderboardsModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::TestLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestLeaderboardsModel::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::TestLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::GetLeaderboardId
// Il2CppName: GetLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::TestLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::TestLeaderboardsModel::GetLeaderboardId)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "GetLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OnlineServices::GetLeaderboardEntriesResult>* (GlobalNamespace::TestLeaderboardsModel::*)(::OnlineServices::GetLeaderboardFilterData, ::System::Threading::CancellationToken)>(&GlobalNamespace::TestLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardFilterData = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardFilterData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardFilterData, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OnlineServices::SendLeaderboardEntryResult>* (GlobalNamespace::TestLeaderboardsModel::*)(::OnlineServices::LevelScoreResultsData, ::System::Threading::CancellationToken)>(&GlobalNamespace::TestLeaderboardsModel::SendLevelScoreResultAsync)> {
  static const MethodInfo* get() {
    static auto* levelScoreResult = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResult, cancellationToken});
  }
};
