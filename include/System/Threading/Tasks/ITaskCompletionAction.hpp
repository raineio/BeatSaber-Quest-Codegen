// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ITaskCompletionAction
  class ITaskCompletionAction;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::Tasks::ITaskCompletionAction);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ITaskCompletionAction*, "System.Threading.Tasks", "ITaskCompletionAction");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ITaskCompletionAction
  // [TokenAttribute] Offset: FFFFFFFF
  class ITaskCompletionAction {
    public:
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0xFFFFFFFF
    void Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.ITaskCompletionAction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::ITaskCompletionAction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ITaskCompletionAction::*)(System::Threading::Tasks::Task*)>(&System::Threading::Tasks::ITaskCompletionAction::Invoke)> {
  static const MethodInfo* get() {
    static auto* completingTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ITaskCompletionAction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completingTask});
  }
};
