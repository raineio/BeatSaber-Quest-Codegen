// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.ITimeProvider
#include "BGNet/Core/ITimeProvider.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UtcTimeProvider
  class UtcTimeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UtcTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UtcTimeProvider*, "", "UtcTimeProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UtcTimeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class UtcTimeProvider : public ::Il2CppObject/*, public ::BGNet::Core::ITimeProvider*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::ITimeProvider
    operator ::BGNet::Core::ITimeProvider() noexcept {
      return *reinterpret_cast<::BGNet::Core::ITimeProvider*>(this);
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10B5AC0
    // Get static field: static private readonly System.DateTime _epoch
    static ::System::DateTime _get__epoch();
    // Set static field: static private readonly System.DateTime _epoch
    static void _set__epoch(::System::DateTime value);
    // public System.Void .ctor()
    // Offset: 0x263DA04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UtcTimeProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UtcTimeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UtcTimeProvider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x263DA0C
    static void _cctor();
    // public System.Int64 GetTimeMs()
    // Offset: 0x263D8B4
    int64_t GetTimeMs();
    // public System.Threading.Tasks.Task DelayMs(System.Int32 millis, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x263D98C
    ::System::Threading::Tasks::Task* DelayMs(int millis, ::System::Threading::CancellationToken cancellationToken);
  }; // UtcTimeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UtcTimeProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UtcTimeProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::UtcTimeProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UtcTimeProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UtcTimeProvider::GetTimeMs
// Il2CppName: GetTimeMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::UtcTimeProvider::*)()>(&GlobalNamespace::UtcTimeProvider::GetTimeMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UtcTimeProvider*), "GetTimeMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UtcTimeProvider::DelayMs
// Il2CppName: DelayMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::UtcTimeProvider::*)(int, ::System::Threading::CancellationToken)>(&GlobalNamespace::UtcTimeProvider::DelayMs)> {
  static const MethodInfo* get() {
    static auto* millis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UtcTimeProvider*), "DelayMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millis, cancellationToken});
  }
};
