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
  // Autogenerated type: Oculus.Platform.Models.AchievementUpdate
  class AchievementUpdate : public ::Il2CppObject {
    public:
    // public readonly System.Boolean JustUnlocked
    // Offset: 0x10
    bool JustUnlocked;
    // public readonly System.String Name
    // Offset: 0x18
    ::Il2CppString* Name;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1137444
    static AchievementUpdate* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AchievementUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
#pragma pack(pop)
