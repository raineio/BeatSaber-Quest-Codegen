// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/QueueSegment
  class ThreadPoolWorkQueue::QueueSegment : public ::Il2CppObject {
    public:
    // readonly System.Threading.IThreadPoolWorkItem[] nodes
    // Offset: 0x10
    ::Array<System::Threading::IThreadPoolWorkItem*>* nodes;
    // private System.Int32 indexes
    // Offset: 0x18
    int indexes;
    // public System.Threading.ThreadPoolWorkQueue/QueueSegment Next
    // Offset: 0x20
    System::Threading::ThreadPoolWorkQueue::QueueSegment* Next;
    // private System.Void GetIndexes(out System.Int32 upper, out System.Int32 lower)
    // Offset: 0x14A4EFC
    void GetIndexes(int& upper, int& lower);
    // private System.Boolean CompareExchangeIndexes(ref System.Int32 prevUpper, System.Int32 newUpper, ref System.Int32 prevLower, System.Int32 newLower)
    // Offset: 0x14A4F3C
    bool CompareExchangeIndexes(int& prevUpper, int newUpper, int& prevLower, int newLower);
    // public System.Boolean IsUsedUp()
    // Offset: 0x14A4800
    bool IsUsedUp();
    // public System.Boolean TryEnqueue(System.Threading.IThreadPoolWorkItem node)
    // Offset: 0x14A3E6C
    bool TryEnqueue(System::Threading::IThreadPoolWorkItem* node);
    // public System.Boolean TryDequeue(out System.Threading.IThreadPoolWorkItem node)
    // Offset: 0x14A46E8
    bool TryDequeue(System::Threading::IThreadPoolWorkItem*& node);
    // public System.Void .ctor()
    // Offset: 0x14A36B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ThreadPoolWorkQueue::QueueSegment* New_ctor();
  }; // System.Threading.ThreadPoolWorkQueue/QueueSegment
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue::QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
#pragma pack(pop)
