// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ThreadPriority
#include "System/Threading/ThreadPriority.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ThreadedTask
  class HEU_ThreadedTask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_ThreadedTask);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ThreadedTask*, "HoudiniEngineUnity", "HEU_ThreadedTask");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ThreadedTask
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ThreadedTask : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean _isComplete
    // Size: 0x1
    // Offset: 0x10
    bool isComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isActive
    // Size: 0x1
    // Offset: 0x11
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _stopRequested
    // Size: 0x1
    // Offset: 0x12
    bool stopRequested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: stopRequested and: lockHandle
    char __padding2[0x5] = {};
    // private System.Object _lockHandle
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* lockHandle;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.Thread _thread
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Thread* thread;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private System.Threading.ThreadPriority _priority
    // Size: 0x4
    // Offset: 0x28
    System::Threading::ThreadPriority priority;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPriority) == 0x4);
    // private System.Boolean _isBackground
    // Size: 0x1
    // Offset: 0x2C
    bool isBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isBackground and: name
    char __padding6[0x3] = {};
    // protected System.String _name
    // Size: 0x8
    // Offset: 0x30
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _isComplete
    bool& dyn__isComplete();
    // Get instance field reference: private System.Boolean _isActive
    bool& dyn__isActive();
    // Get instance field reference: private System.Boolean _stopRequested
    bool& dyn__stopRequested();
    // Get instance field reference: private System.Object _lockHandle
    ::Il2CppObject*& dyn__lockHandle();
    // Get instance field reference: private System.Threading.Thread _thread
    System::Threading::Thread*& dyn__thread();
    // Get instance field reference: private System.Threading.ThreadPriority _priority
    System::Threading::ThreadPriority& dyn__priority();
    // Get instance field reference: private System.Boolean _isBackground
    bool& dyn__isBackground();
    // Get instance field reference: protected System.String _name
    ::StringW& dyn__name();
    // public System.String get_TaskName()
    // Offset: 0x1853934
    ::StringW get_TaskName();
    // public System.Boolean get_IsComplete()
    // Offset: 0x18535D0
    bool get_IsComplete();
    // public System.Void set_IsComplete(System.Boolean value)
    // Offset: 0x18534F0
    void set_IsComplete(bool value);
    // public System.Boolean get_IsActive()
    // Offset: 0x185306C
    bool get_IsActive();
    // public System.Void set_IsActive(System.Boolean value)
    // Offset: 0x185345C
    void set_IsActive(bool value);
    // public System.Boolean get_StopRequested()
    // Offset: 0x1853860
    bool get_StopRequested();
    // public System.Void set_StopRequested(System.Boolean value)
    // Offset: 0x1853664
    void set_StopRequested(bool value);
    // public System.Threading.ThreadPriority get_Priority()
    // Offset: 0x185393C
    System::Threading::ThreadPriority get_Priority();
    // public System.Void set_Priority(System.Threading.ThreadPriority value)
    // Offset: 0x1853944
    void set_Priority(System::Threading::ThreadPriority value);
    // public System.Boolean get_IsBackground()
    // Offset: 0x185394C
    bool get_IsBackground();
    // public System.Void set_IsBackground(System.Boolean value)
    // Offset: 0x1853954
    void set_IsBackground(bool value);
    // public System.Void Start()
    // Offset: 0x1853308
    void Start();
    // public System.Void Stop()
    // Offset: 0x1853584
    void Stop();
    // public System.Void Abort()
    // Offset: 0x18536F8
    void Abort();
    // public System.Void Reset()
    // Offset: 0x185373C
    void Reset();
    // public System.Void Update()
    // Offset: 0x18537F8
    void Update();
    // protected System.Void DoWork()
    // Offset: 0x18538F4
    void DoWork();
    // protected System.Void OnComplete()
    // Offset: 0x18538F8
    void OnComplete();
    // protected System.Void OnStopped()
    // Offset: 0x18538FC
    void OnStopped();
    // protected System.Void CleanUp()
    // Offset: 0x1853900
    void CleanUp();
    // private System.Void Run()
    // Offset: 0x1853904
    void Run();
    // public System.Void .ctor()
    // Offset: 0x1853960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ThreadedTask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_ThreadedTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ThreadedTask*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_ThreadedTask
  #pragma pack(pop)
  static check_size<sizeof(HEU_ThreadedTask), 48 + sizeof(::StringW)> __HoudiniEngineUnity_HEU_ThreadedTaskSizeCheck;
  static_assert(sizeof(HEU_ThreadedTask) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_TaskName
// Il2CppName: get_TaskName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_TaskName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_TaskName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_IsComplete
// Il2CppName: get_IsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_IsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_IsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::set_IsComplete
// Il2CppName: set_IsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)(bool)>(&HoudiniEngineUnity::HEU_ThreadedTask::set_IsComplete)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "set_IsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::set_IsActive
// Il2CppName: set_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)(bool)>(&HoudiniEngineUnity::HEU_ThreadedTask::set_IsActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "set_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_StopRequested
// Il2CppName: get_StopRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_StopRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_StopRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::set_StopRequested
// Il2CppName: set_StopRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)(bool)>(&HoudiniEngineUnity::HEU_ThreadedTask::set_StopRequested)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "set_StopRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_Priority
// Il2CppName: get_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadPriority (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_Priority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::set_Priority
// Il2CppName: set_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)(System::Threading::ThreadPriority)>(&HoudiniEngineUnity::HEU_ThreadedTask::set_Priority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadPriority")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "set_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::get_IsBackground
// Il2CppName: get_IsBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::get_IsBackground)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "get_IsBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::set_IsBackground
// Il2CppName: set_IsBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)(bool)>(&HoudiniEngineUnity::HEU_ThreadedTask::set_IsBackground)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "set_IsBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::DoWork
// Il2CppName: DoWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::DoWork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "DoWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::OnComplete
// Il2CppName: OnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::OnComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "OnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::OnStopped
// Il2CppName: OnStopped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::OnStopped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "OnStopped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadedTask::*)()>(&HoudiniEngineUnity::HEU_ThreadedTask::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadedTask*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
