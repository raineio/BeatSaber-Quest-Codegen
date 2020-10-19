// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: IAsyncLocal
  class IAsyncLocal;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ExecutionContext/Reader
  struct ExecutionContext::Reader : public System::ValueType {
    public:
    // private System.Threading.ExecutionContext m_ec
    // Offset: 0x0
    System::Threading::ExecutionContext* m_ec;
    // Creating value type constructor for type: Reader
    constexpr Reader(System::Threading::ExecutionContext* m_ec_ = {}) noexcept : m_ec{m_ec_} {}
    // Creating conversion operator: operator System::Threading::ExecutionContext*
    constexpr operator System::Threading::ExecutionContext*() const noexcept {
      return m_ec;
    }
    // public System.Void .ctor(System.Threading.ExecutionContext ec)
    // Offset: 0xC787C0
    // ABORTED: conflicts with another method.  Reader(System::Threading::ExecutionContext* ec);
    // public System.Threading.ExecutionContext DangerousGetRawExecutionContext()
    // Offset: 0xC787C8
    System::Threading::ExecutionContext* DangerousGetRawExecutionContext();
    // public System.Boolean get_IsNull()
    // Offset: 0xC787D0
    bool get_IsNull();
    // public System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0xC787E0
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // public System.Boolean get_IsFlowSuppressed()
    // Offset: 0xC787FC
    bool get_IsFlowSuppressed();
    // public System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0xC78818
    System::Threading::SynchronizationContext* get_SynchronizationContext();
    // public System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0xC78830
    System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext/Reader get_LogicalCallContext()
    // Offset: 0xC78848
    System::Runtime::Remoting::Messaging::LogicalCallContext::Reader get_LogicalCallContext();
    // public System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader get_IllogicalCallContext()
    // Offset: 0xC78850
    System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader get_IllogicalCallContext();
    // public System.Object GetLocalValue(System.Threading.IAsyncLocal local)
    // Offset: 0xC78858
    ::Il2CppObject* GetLocalValue(System::Threading::IAsyncLocal* local);
    // public System.Boolean HasSameLocalValues(System.Threading.ExecutionContext other)
    // Offset: 0xC78860
    bool HasSameLocalValues(System::Threading::ExecutionContext* other);
  }; // System.Threading.ExecutionContext/Reader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::Reader, "System.Threading", "ExecutionContext/Reader");
#pragma pack(pop)
