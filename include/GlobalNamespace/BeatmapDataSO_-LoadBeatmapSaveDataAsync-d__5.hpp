// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataSO
#include "GlobalNamespace/BeatmapDataSO.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5, "", "BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__5");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapSaveDataVersion3.BeatmapSaveData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> $$t__builder;
    // public BeatmapDataSO <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDataSO* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSO*) == 0x8);
    // private BeatmapDataSO/<>c__DisplayClass5_0 <>8__1
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $LoadBeatmapSaveDataAsync$d__5
    constexpr $LoadBeatmapSaveDataAsync$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> $$t__builder_ = {}, ::GlobalNamespace::BeatmapDataSO* $$4__this_ = {}, ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0* $$8__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapSaveDataVersion3.BeatmapSaveData> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>& dyn_$$t__builder();
    // Get instance field reference: public BeatmapDataSO <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataSO*& dyn_$$4__this();
    // Get instance field reference: private BeatmapDataSO/<>c__DisplayClass5_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1566EB4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15670E4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::*)()>(&GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$LoadBeatmapSaveDataAsync$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
