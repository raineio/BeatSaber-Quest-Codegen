// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: INotifyCompletion
  class INotifyCompletion;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::CompilerServices::INotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::INotifyCompletion*, "System.Runtime.CompilerServices", "INotifyCompletion");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.INotifyCompletion
  // [TokenAttribute] Offset: FFFFFFFF
  class INotifyCompletion {
    public:
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0xFFFFFFFF
    void OnCompleted(System::Action* continuation);
  }; // System.Runtime.CompilerServices.INotifyCompletion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::INotifyCompletion::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::INotifyCompletion::*)(System::Action*)>(&System::Runtime::CompilerServices::INotifyCompletion::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::INotifyCompletion*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
