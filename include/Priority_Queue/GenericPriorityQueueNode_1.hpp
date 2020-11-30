// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Autogenerated type: Priority_Queue.GenericPriorityQueueNode`1
  template<typename TPriority>
  class GenericPriorityQueueNode_1 : public ::Il2CppObject {
    public:
    // private TPriority <Priority>k__BackingField
    // Offset: 0x0
    TPriority Priority;
    // private System.Int32 <QueueIndex>k__BackingField
    // Offset: 0x0
    int QueueIndex;
    // private System.Int64 <InsertionIndex>k__BackingField
    // Offset: 0x0
    int64_t InsertionIndex;
    // public TPriority get_Priority()
    // Offset: 0xFFFFFFFF
    TPriority get_Priority() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("get_Priority");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TPriority>(), "get_Priority", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TPriority, false>(this, ___internal__method);
    }
    // protected internal System.Void set_Priority(TPriority value)
    // Offset: 0xFFFFFFFF
    void set_Priority(TPriority value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("set_Priority");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Priority", {}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int32 get_QueueIndex()
    // Offset: 0xFFFFFFFF
    int get_QueueIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("get_QueueIndex");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_QueueIndex", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // System.Void set_QueueIndex(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_QueueIndex(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("set_QueueIndex");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_QueueIndex", {}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int64 get_InsertionIndex()
    // Offset: 0xFFFFFFFF
    int64_t get_InsertionIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("get_InsertionIndex");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_InsertionIndex", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
    }
    // System.Void set_InsertionIndex(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void set_InsertionIndex(int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext("set_InsertionIndex");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_InsertionIndex", {}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GenericPriorityQueueNode_1<TPriority>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("GenericPriorityQueueNode_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<GenericPriorityQueueNode_1<TPriority>*>());
    }
  }; // Priority_Queue.GenericPriorityQueueNode`1
  // Could not write size check! Type: Priority_Queue.GenericPriorityQueueNode`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::GenericPriorityQueueNode_1, "Priority_Queue", "GenericPriorityQueueNode`1");
#pragma pack(pop)