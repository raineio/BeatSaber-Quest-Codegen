// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.Error
  class Error : public ::Il2CppObject {
    public:
    // public readonly System.Int32 Code
    // Offset: 0x10
    int Code;
    // public readonly System.Int32 HttpCode
    // Offset: 0x14
    int HttpCode;
    // public readonly System.String Message
    // Offset: 0x18
    ::Il2CppString* Message;
    // public System.Void .ctor(System.Int32 code, System.String message, System.Int32 httpCode)
    // Offset: 0x11332E0
    static Error* New_ctor(int code, ::Il2CppString* message, int httpCode);
  }; // Oculus.Platform.Models.Error
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Error*, "Oculus.Platform.Models", "Error");
#pragma pack(pop)
