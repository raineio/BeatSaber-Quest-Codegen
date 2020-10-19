// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
  // Forward declaring type: EIOBufferMode
  struct EIOBufferMode;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRIOBuffer
  class CVRIOBuffer : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRIOBuffer FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRIOBuffer FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRIOBuffer
    constexpr operator OVR::OpenVR::IVRIOBuffer() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x115463C
    static CVRIOBuffer* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.EIOBufferError Open(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, ref System.UInt64 pulBuffer)
    // Offset: 0x115474C
    OVR::OpenVR::EIOBufferError Open(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, uint64_t& pulBuffer);
    // public OVR.OpenVR.EIOBufferError Close(System.UInt64 ulBuffer)
    // Offset: 0x115476C
    OVR::OpenVR::EIOBufferError Close(uint64_t ulBuffer);
    // public OVR.OpenVR.EIOBufferError Read(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0x1154788
    OVR::OpenVR::EIOBufferError Read(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead);
    // public OVR.OpenVR.EIOBufferError Write(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes)
    // Offset: 0x11547A8
    OVR::OpenVR::EIOBufferError Write(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes);
    // public System.UInt64 PropertyContainer(System.UInt64 ulBuffer)
    // Offset: 0x11547C4
    uint64_t PropertyContainer(uint64_t ulBuffer);
  }; // OVR.OpenVR.CVRIOBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRIOBuffer*, "OVR.OpenVR", "CVRIOBuffer");
#pragma pack(pop)
