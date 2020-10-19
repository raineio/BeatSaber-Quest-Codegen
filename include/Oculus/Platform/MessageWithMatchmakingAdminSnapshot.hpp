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
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingAdminSnapshot
  class MessageWithMatchmakingAdminSnapshot : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingAdminSnapshot*> {
    public:
    // protected Oculus.Platform.Models.MatchmakingAdminSnapshot GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x113B090
    Oculus::Platform::Models::MatchmakingAdminSnapshot* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1135308
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithMatchmakingAdminSnapshot* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.MatchmakingAdminSnapshot GetMatchmakingAdminSnapshot()
    // Offset: 0x113B04C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingAdminSnapshot Message::GetMatchmakingAdminSnapshot()
    Oculus::Platform::Models::MatchmakingAdminSnapshot* GetMatchmakingAdminSnapshot();
  }; // Oculus.Platform.MessageWithMatchmakingAdminSnapshot
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingAdminSnapshot*, "Oculus.Platform", "MessageWithMatchmakingAdminSnapshot");
#pragma pack(pop)
