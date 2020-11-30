// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Priority_Queue.IPriorityQueue`2
#include "Priority_Queue/IPriorityQueue_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Autogenerated type: Priority_Queue.IFixedSizePriorityQueue`2
  template<typename TItem, typename TPriority>
  class IFixedSizePriorityQueue_2 : public Priority_Queue::IPriorityQueue_2<TItem, TPriority> {
    public:
    // public System.Void Resize(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    void Resize(int maxNodes) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IFixedSizePriorityQueue_2").WithContext("Resize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Resize", {}, ::il2cpp_utils::ExtractTypes(maxNodes)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, maxNodes);
    }
    // public System.Int32 get_MaxSize()
    // Offset: 0xFFFFFFFF
    int get_MaxSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IFixedSizePriorityQueue_2").WithContext("get_MaxSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_MaxSize", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Void ResetNode(TItem node)
    // Offset: 0xFFFFFFFF
    void ResetNode(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IFixedSizePriorityQueue_2").WithContext("ResetNode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ResetNode", {}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
  }; // Priority_Queue.IFixedSizePriorityQueue`2
  // Could not write size check! Type: Priority_Queue.IFixedSizePriorityQueue`2 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::IFixedSizePriorityQueue_2, "Priority_Queue", "IFixedSizePriorityQueue`2");
#pragma pack(pop)