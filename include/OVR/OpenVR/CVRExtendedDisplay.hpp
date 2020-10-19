// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRExtendedDisplay
  class CVRExtendedDisplay : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRExtendedDisplay FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRExtendedDisplay FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRExtendedDisplay
    constexpr operator OVR::OpenVR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x11544B0
    static CVRExtendedDisplay* New_ctor(System::IntPtr pInterface);
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x11545C0
    void GetWindowBounds(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetEyeOutputViewport(OVR.OpenVR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x11545EC
    void GetEyeOutputViewport(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1154618
    void GetDXGIOutputInfo(int& pnAdapterIndex, int& pnAdapterOutputIndex);
  }; // OVR.OpenVR.CVRExtendedDisplay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRExtendedDisplay*, "OVR.OpenVR", "CVRExtendedDisplay");
#pragma pack(pop)
