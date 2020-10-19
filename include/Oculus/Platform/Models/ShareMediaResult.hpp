// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.ShareMediaStatus
#include "Oculus/Platform/ShareMediaStatus.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.ShareMediaResult
  class ShareMediaResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.ShareMediaStatus Status
    // Offset: 0x10
    Oculus::Platform::ShareMediaStatus Status;
    // Creating conversion operator: operator Oculus::Platform::ShareMediaStatus
    constexpr operator Oculus::Platform::ShareMediaStatus() const noexcept {
      return Status;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x113EDA8
    static ShareMediaResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.ShareMediaResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ShareMediaResult*, "Oculus.Platform.Models", "ShareMediaResult");
#pragma pack(pop)
