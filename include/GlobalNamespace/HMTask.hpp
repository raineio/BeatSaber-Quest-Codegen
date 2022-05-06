// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HMTask
  class HMTask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HMTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMTask*, "", "HMTask");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2B
  #pragma pack(push, 1)
  // Autogenerated type: HMTask
  // [TokenAttribute] Offset: FFFFFFFF
  class HMTask : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::HMTask::$RunCoroutine$d__8
    class $RunCoroutine$d__8;
    public:
    // private System.Threading.Thread _thread
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Thread* thread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    // private System.Action _job
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* job;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action _finishCallback
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* finishCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _canceled
    // Size: 0x1
    // Offset: 0x28
    bool canceled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x29
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _finished
    // Size: 0x1
    // Offset: 0x2A
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Threading.Thread _thread
    [[deprecated("Use field access instead!")]] ::System::Threading::Thread*& dyn__thread();
    // Get instance field reference: private System.Action _job
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn__job();
    // Get instance field reference: private System.Action _finishCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn__finishCallback();
    // Get instance field reference: private System.Boolean _canceled
    [[deprecated("Use field access instead!")]] bool& dyn__canceled();
    // Get instance field reference: private System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Boolean _finished
    [[deprecated("Use field access instead!")]] bool& dyn__finished();
    // public System.Void .ctor(System.Action job, System.Action finishCallback)
    // Offset: 0x15A2B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMTask* New_ctor(::System::Action* job, ::System::Action* finishCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HMTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMTask*, creationType>(job, finishCallback)));
    }
    // public System.Void Run()
    // Offset: 0x15A2C4C
    void Run();
    // public System.Collections.IEnumerator RunCoroutine()
    // Offset: 0x15A96A0
    ::System::Collections::IEnumerator* RunCoroutine();
    // private System.Void RunJob()
    // Offset: 0x15A973C
    void RunJob();
    // public System.Void Cancel()
    // Offset: 0x15A9810
    void Cancel();
    // private System.Boolean <RunCoroutine>b__8_0()
    // Offset: 0x15A981C
    bool $RunCoroutine$b__8_0();
    // private System.Void <RunJob>b__9_0()
    // Offset: 0x15A9824
    void $RunJob$b__9_0();
  }; // HMTask
  #pragma pack(pop)
  static check_size<sizeof(HMTask), 42 + sizeof(bool)> __GlobalNamespace_HMTaskSizeCheck;
  static_assert(sizeof(HMTask) == 0x2B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMTask::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMTask::RunCoroutine
// Il2CppName: RunCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::RunCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "RunCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMTask::RunJob
// Il2CppName: RunJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::RunJob)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "RunJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMTask::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMTask::$RunCoroutine$b__8_0
// Il2CppName: <RunCoroutine>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::$RunCoroutine$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "<RunCoroutine>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMTask::$RunJob$b__9_0
// Il2CppName: <RunJob>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMTask::*)()>(&GlobalNamespace::HMTask::$RunJob$b__9_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMTask*), "<RunJob>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
