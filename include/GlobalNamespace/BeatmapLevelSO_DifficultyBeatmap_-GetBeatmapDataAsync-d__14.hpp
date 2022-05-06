// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelSO/DifficultyBeatmap
#include "GlobalNamespace/BeatmapLevelSO_DifficultyBeatmap.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14, "", "BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataAsync>d__14");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataAsync>d__14
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IReadonlyBeatmapData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> $$t__builder;
    // public BeatmapLevelSO/DifficultyBeatmap <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*) == 0x8);
    // public EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IReadonlyBeatmapData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> $$u__1;
    public:
    // Creating value type constructor for type: $GetBeatmapDataAsync$d__14
    constexpr $GetBeatmapDataAsync$d__14(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> $$t__builder_ = {}, ::GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap* $$4__this_ = {}, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, environmentInfo{environmentInfo_}, playerSpecificSettings{playerSpecificSettings_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IReadonlyBeatmapData> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& dyn_$$t__builder();
    // Get instance field reference: public BeatmapLevelSO/DifficultyBeatmap <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*& dyn_$$4__this();
    // Get instance field reference: public EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<IReadonlyBeatmapData> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x150935C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1509674
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataAsync>d__14
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::$GetBeatmapDataAsync$d__14), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
