// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchUnblockFlowResult
  class LaunchUnblockFlowResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLaunchUnblockFlowResult
  class MessageWithLaunchUnblockFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchUnblockFlowResult*> {
    public:
    // protected Oculus.Platform.Models.LaunchUnblockFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x113A0D0
    Oculus::Platform::Models::LaunchUnblockFlowResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x113A02C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLaunchUnblockFlowResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.LaunchUnblockFlowResult GetLaunchUnblockFlowResult()
    // Offset: 0x113A08C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchUnblockFlowResult Message::GetLaunchUnblockFlowResult()
    Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult();
  }; // Oculus.Platform.MessageWithLaunchUnblockFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchUnblockFlowResult*, "Oculus.Platform", "MessageWithLaunchUnblockFlowResult");
#pragma pack(pop)
