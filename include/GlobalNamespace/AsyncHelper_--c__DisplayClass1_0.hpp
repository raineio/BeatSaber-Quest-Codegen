// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AsyncHelper
#include "GlobalNamespace/AsyncHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c__DisplayClass1_0
  class $$c__DisplayClass1_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0*, "", "AsyncHelper/<>c__DisplayClass1_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AsyncHelper/<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AsyncHelper::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::$$RunSync$b__0$d
    struct $$RunSync$b__0$d;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Func`1<System.Threading.Tasks.Task> asyncTask
    // Size: 0x8
    // Offset: 0x10
    System::Func_1<System::Threading::Tasks::Task*>* asyncTask;
    // Field size check
    static_assert(sizeof(System::Func_1<System::Threading::Tasks::Task*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Func_1<System::Threading::Tasks::Task*>*
    constexpr operator System::Func_1<System::Threading::Tasks::Task*>*() const noexcept {
      return asyncTask;
    }
    // Get instance field reference: public System.Func`1<System.Threading.Tasks.Task> asyncTask
    System::Func_1<System::Threading::Tasks::Task*>*& dyn_asyncTask();
    // System.Threading.Tasks.Task <RunSync>b__0()
    // Offset: 0x138DF84
    System::Threading::Tasks::Task* $RunSync$b__0();
    // public System.Void .ctor()
    // Offset: 0x138DF7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncHelper::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncHelper::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // AsyncHelper/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(AsyncHelper::$$c__DisplayClass1_0), 16 + sizeof(System::Func_1<System::Threading::Tasks::Task*>*)> __GlobalNamespace_AsyncHelper_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(AsyncHelper::$$c__DisplayClass1_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::$RunSync$b__0
// Il2CppName: <RunSync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::*)()>(&GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::$RunSync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0*), "<RunSync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
