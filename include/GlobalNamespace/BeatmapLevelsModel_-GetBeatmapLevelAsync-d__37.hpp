// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: BeatmapLevelLoader/LoadBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelLoader.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelsModel/<GetBeatmapLevelAsync>d__37
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$t__builder;
    // public BeatmapLevelsModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelsModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // public System.String levelID
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelLoader/LoadBeatmapLevelResult> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$u__2;
    public:
    // Creating value type constructor for type: $GetBeatmapLevelAsync$d__37
    constexpr $GetBeatmapLevelAsync$d__37(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$t__builder_ = {}, GlobalNamespace::BeatmapLevelsModel* $$4__this_ = {}, ::Il2CppString* levelID_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelID{levelID_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>& dyn_$$t__builder();
    // Get instance field reference: public BeatmapLevelsModel <>4__this
    GlobalNamespace::BeatmapLevelsModel*& dyn_$$4__this();
    // Get instance field reference: public System.String levelID
    ::Il2CppString*& dyn_levelID();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelLoader/LoadBeatmapLevelResult> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x129D6C4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x129DAD4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelsModel/<GetBeatmapLevelAsync>d__37
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37, "", "BeatmapLevelsModel/<GetBeatmapLevelAsync>d__37");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::*)()>(&GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
