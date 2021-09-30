// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Skipping declaration: TaskResult because it is already included!
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Task
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Task : public ::Il2CppObject {
    public:
    // Nested type: HoudiniEngineUnity::HEU_Task::TaskStatus
    struct TaskStatus;
    // Nested type: HoudiniEngineUnity::HEU_Task::TaskResult
    struct TaskResult;
    // Nested type: HoudiniEngineUnity::HEU_Task::TaskCallback
    class TaskCallback;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus
    // [TokenAttribute] Offset: FFFFFFFF
    struct TaskStatus/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TaskStatus
      constexpr TaskStatus(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus NONE
      static constexpr const int NONE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus NONE
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_NONE();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus NONE
      static void _set_NONE(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_START
      static constexpr const int PENDING_START = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_START
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_PENDING_START();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_START
      static void _set_PENDING_START(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus STARTED
      static constexpr const int STARTED = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus STARTED
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_STARTED();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus STARTED
      static void _set_STARTED(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus REQUIRE_UPDATE
      static constexpr const int REQUIRE_UPDATE = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus REQUIRE_UPDATE
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_REQUIRE_UPDATE();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus REQUIRE_UPDATE
      static void _set_REQUIRE_UPDATE(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_COMPLETE
      static constexpr const int PENDING_COMPLETE = 4;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_COMPLETE
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_PENDING_COMPLETE();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus PENDING_COMPLETE
      static void _set_PENDING_COMPLETE(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus COMPLETED
      static constexpr const int COMPLETED = 5;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus COMPLETED
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_COMPLETED();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus COMPLETED
      static void _set_COMPLETED(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus UNUSED
      static constexpr const int UNUSED = 6;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus UNUSED
      static HoudiniEngineUnity::HEU_Task::TaskStatus _get_UNUSED();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus UNUSED
      static void _set_UNUSED(HoudiniEngineUnity::HEU_Task::TaskStatus value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus
    #pragma pack(pop)
    static check_size<sizeof(HEU_Task::TaskStatus), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_Task_TaskStatusSizeCheck;
    static_assert(sizeof(HEU_Task::TaskStatus) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult
    // [TokenAttribute] Offset: FFFFFFFF
    struct TaskResult/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TaskResult
      constexpr TaskResult(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult NONE
      static constexpr const int NONE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult NONE
      static HoudiniEngineUnity::HEU_Task::TaskResult _get_NONE();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult NONE
      static void _set_NONE(HoudiniEngineUnity::HEU_Task::TaskResult value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult SUCCESS
      static constexpr const int SUCCESS = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult SUCCESS
      static HoudiniEngineUnity::HEU_Task::TaskResult _get_SUCCESS();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult SUCCESS
      static void _set_SUCCESS(HoudiniEngineUnity::HEU_Task::TaskResult value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult FAILED
      static constexpr const int FAILED = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult FAILED
      static HoudiniEngineUnity::HEU_Task::TaskResult _get_FAILED();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult FAILED
      static void _set_FAILED(HoudiniEngineUnity::HEU_Task::TaskResult value);
      // static field const value: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult KILLED
      static constexpr const int KILLED = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult KILLED
      static HoudiniEngineUnity::HEU_Task::TaskResult _get_KILLED();
      // Set static field: static public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult KILLED
      static void _set_KILLED(HoudiniEngineUnity::HEU_Task::TaskResult value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult
    #pragma pack(pop)
    static check_size<sizeof(HEU_Task::TaskResult), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_Task_TaskResultSizeCheck;
    static_assert(sizeof(HEU_Task::TaskResult) == 0x4);
    // public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus _status
    // Size: 0x4
    // Offset: 0x10
    HoudiniEngineUnity::HEU_Task::TaskStatus status;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_Task::TaskStatus) == 0x4);
    // public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult _result
    // Size: 0x4
    // Offset: 0x14
    HoudiniEngineUnity::HEU_Task::TaskResult result;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_Task::TaskResult) == 0x4);
    // private System.Guid _guid
    // Size: 0x10
    // Offset: 0x18
    System::Guid guid;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskCallback _taskCompletedDelegate
    // Size: 0x8
    // Offset: 0x28
    HoudiniEngineUnity::HEU_Task::TaskCallback* taskCompletedDelegate;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_Task::TaskCallback*) == 0x8);
    // Get instance field reference: public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskStatus _status
    HoudiniEngineUnity::HEU_Task::TaskStatus& dyn__status();
    // Get instance field reference: public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult _result
    HoudiniEngineUnity::HEU_Task::TaskResult& dyn__result();
    // Get instance field reference: private System.Guid _guid
    System::Guid& dyn__guid();
    // Get instance field reference: public HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskCallback _taskCompletedDelegate
    HoudiniEngineUnity::HEU_Task::TaskCallback*& dyn__taskCompletedDelegate();
    // public System.Guid get_TaskGuid()
    // Offset: 0x17D9D14
    System::Guid get_TaskGuid();
    // public System.Void DoTask()
    // Offset: 0xFFFFFFFF
    void DoTask();
    // public System.Void UpdateTask()
    // Offset: 0x17D9D98
    void UpdateTask();
    // public System.Void KillTask()
    // Offset: 0xFFFFFFFF
    void KillTask();
    // public System.Void CompleteTask(HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult result)
    // Offset: 0xFFFFFFFF
    void CompleteTask(HoudiniEngineUnity::HEU_Task::TaskResult result);
    // public System.Void .ctor()
    // Offset: 0x17D9D20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Task* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Task::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Task*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Task
  #pragma pack(pop)
  static check_size<sizeof(HEU_Task), 40 + sizeof(HoudiniEngineUnity::HEU_Task::TaskCallback*)> __HoudiniEngineUnity_HEU_TaskSizeCheck;
  static_assert(sizeof(HEU_Task) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Task*, "HoudiniEngineUnity", "HEU_Task");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Task::TaskStatus, "HoudiniEngineUnity", "HEU_Task/TaskStatus");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Task::TaskResult, "HoudiniEngineUnity", "HEU_Task/TaskResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::get_TaskGuid
// Il2CppName: get_TaskGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (HoudiniEngineUnity::HEU_Task::*)()>(&HoudiniEngineUnity::HEU_Task::get_TaskGuid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task*), "get_TaskGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::DoTask
// Il2CppName: DoTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::*)()>(&HoudiniEngineUnity::HEU_Task::DoTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task*), "DoTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::UpdateTask
// Il2CppName: UpdateTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::*)()>(&HoudiniEngineUnity::HEU_Task::UpdateTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task*), "UpdateTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::KillTask
// Il2CppName: KillTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::*)()>(&HoudiniEngineUnity::HEU_Task::KillTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task*), "KillTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::CompleteTask
// Il2CppName: CompleteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::*)(HoudiniEngineUnity::HEU_Task::TaskResult)>(&HoudiniEngineUnity::HEU_Task::CompleteTask)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task/TaskResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task*), "CompleteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!