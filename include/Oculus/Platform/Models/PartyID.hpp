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
  // Autogenerated type: Oculus.Platform.Models.PartyID
  class PartyID : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Offset: 0x10
    uint64_t ID;
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return ID;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x113CF28
    static PartyID* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.PartyID
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyID*, "Oculus.Platform.Models", "PartyID");
#pragma pack(pop)
