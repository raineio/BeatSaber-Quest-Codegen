// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LivestreamingVideoStats
  class LivestreamingVideoStats : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CommentCount
    // Offset: 0x10
    int CommentCount;
    // public readonly System.Int32 ReactionCount
    // Offset: 0x14
    int ReactionCount;
    // public readonly System.String TotalViews
    // Offset: 0x18
    ::Il2CppString* TotalViews;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x113AF9C
    static LivestreamingVideoStats* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LivestreamingVideoStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingVideoStats*, "Oculus.Platform.Models", "LivestreamingVideoStats");
#pragma pack(pop)
