// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.UploadHandler
#include "UnityEngine/Networking/UploadHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UploadHandlerRaw
  class UploadHandlerRaw : public UnityEngine::Networking::UploadHandler {
    public:
    // static private System.IntPtr Create(UnityEngine.Networking.UploadHandlerRaw self, System.Byte[] data)
    // Offset: 0x1F4E260
    static System::IntPtr Create(UnityEngine::Networking::UploadHandlerRaw* self, ::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1F4E2B0
    static UploadHandlerRaw* New_ctor(::Array<uint8_t>* data);
  }; // UnityEngine.Networking.UploadHandlerRaw
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
#pragma pack(pop)
