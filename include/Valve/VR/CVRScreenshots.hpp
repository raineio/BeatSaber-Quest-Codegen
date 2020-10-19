// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRScreenshots
  class CVRScreenshots : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRScreenshots FnTable
    // Offset: 0x10
    Valve::VR::IVRScreenshots FnTable;
    // Creating conversion operator: operator Valve::VR::IVRScreenshots
    constexpr operator Valve::VR::IVRScreenshots() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x130C0F0
    static CVRScreenshots* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRScreenshotError RequestScreenshot(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x130C20C
    Valve::VR::EVRScreenshotError RequestScreenshot(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public Valve.VR.EVRScreenshotError HookScreenshot(Valve.VR.EVRScreenshotType[] pSupportedTypes)
    // Offset: 0x130C22C
    Valve::VR::EVRScreenshotError HookScreenshot(::Array<Valve::VR::EVRScreenshotType>* pSupportedTypes);
    // public Valve.VR.EVRScreenshotType GetScreenshotPropertyType(System.UInt32 screenshotHandle, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x130C254
    Valve::VR::EVRScreenshotType GetScreenshotPropertyType(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError);
    // public System.UInt32 GetScreenshotPropertyFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x130C270
    uint GetScreenshotPropertyFilename(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, Valve::VR::EVRScreenshotError& pError);
    // public Valve.VR.EVRScreenshotError UpdateScreenshotProgress(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x12FED98
    Valve::VR::EVRScreenshotError UpdateScreenshotProgress(uint screenshotHandle, float flProgress);
    // public Valve.VR.EVRScreenshotError TakeStereoScreenshot(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x130C28C
    Valve::VR::EVRScreenshotError TakeStereoScreenshot(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public Valve.VR.EVRScreenshotError SubmitScreenshot(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x130C2AC
    Valve::VR::EVRScreenshotError SubmitScreenshot(uint screenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename);
  }; // Valve.VR.CVRScreenshots
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRScreenshots*, "Valve.VR", "CVRScreenshots");
#pragma pack(pop)
