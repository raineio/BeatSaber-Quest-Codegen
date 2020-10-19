// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ReaderWriterCount
  class ReaderWriterCount : public ::Il2CppObject {
    public:
    // public System.Int64 lockID
    // Offset: 0x10
    int64_t lockID;
    // public System.Int32 readercount
    // Offset: 0x18
    int readercount;
    // public System.Int32 writercount
    // Offset: 0x1C
    int writercount;
    // public System.Int32 upgradecount
    // Offset: 0x20
    int upgradecount;
    // public System.Threading.ReaderWriterCount next
    // Offset: 0x28
    System::Threading::ReaderWriterCount* next;
    // public System.Void .ctor()
    // Offset: 0x1F2C2A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ReaderWriterCount* New_ctor();
  }; // System.Threading.ReaderWriterCount
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterCount*, "System.Threading", "ReaderWriterCount");
#pragma pack(pop)
