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
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AsyncComputeOperation
  class AsyncComputeOperation;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::AsyncComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncComputeOperation*, "", "AsyncComputeOperation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AsyncComputeOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncComputeOperation : public ::Il2CppObject {
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
    // private readonly System.Int32 _timeoutMs
    // Size: 0x4
    // Offset: 0x10
    int timeoutMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: timeoutMs and: stopwatch
    char __padding0[0x4] = {};
    // private readonly System.Diagnostics.Stopwatch _stopwatch
    // Size: 0x8
    // Offset: 0x18
    System::Diagnostics::Stopwatch* stopwatch;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Stopwatch*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int32 _timeoutMs
    int& dyn__timeoutMs();
    // Get instance field reference: private readonly System.Diagnostics.Stopwatch _stopwatch
    System::Diagnostics::Stopwatch*& dyn__stopwatch();
    // public System.Double get_elapsedTime()
    // Offset: 0x155B924
    double get_elapsedTime();
    // protected System.Boolean get_hasTimedOut()
    // Offset: 0x155B9B8
    bool get_hasTimedOut();
    // protected System.Void .ctor(System.Int32 timeoutMs)
    // Offset: 0x155B9F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncComputeOperation* New_ctor(int timeoutMs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncComputeOperation*, creationType>(timeoutMs)));
    }
    // public System.Void Execute(System.Boolean disposed)
    // Offset: 0xFFFFFFFF
    void Execute(bool disposed);
  }; // AsyncComputeOperation
  #pragma pack(pop)
  static check_size<sizeof(AsyncComputeOperation), 24 + sizeof(System::Diagnostics::Stopwatch*)> __GlobalNamespace_AsyncComputeOperationSizeCheck;
  static_assert(sizeof(AsyncComputeOperation) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeOperation::get_elapsedTime
// Il2CppName: get_elapsedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::AsyncComputeOperation::*)()>(&GlobalNamespace::AsyncComputeOperation::get_elapsedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeOperation*), "get_elapsedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeOperation::get_hasTimedOut
// Il2CppName: get_hasTimedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AsyncComputeOperation::*)()>(&GlobalNamespace::AsyncComputeOperation::get_hasTimedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeOperation*), "get_hasTimedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AsyncComputeOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeOperation::*)(bool)>(&GlobalNamespace::AsyncComputeOperation::Execute)> {
  static const MethodInfo* get() {
    static auto* disposed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AsyncComputeOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposed});
  }
};
