// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRChaperone
  class CVRChaperone : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRChaperone FnTable
    // Offset: 0x10
    Valve::VR::IVRChaperone FnTable;
    // Creating conversion operator: operator Valve::VR::IVRChaperone
    constexpr operator Valve::VR::IVRChaperone() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1307778
    static CVRChaperone* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.ChaperoneCalibrationState GetCalibrationState()
    // Offset: 0x130788C
    Valve::VR::ChaperoneCalibrationState GetCalibrationState();
    // public System.Boolean GetPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x1307AB8
    bool GetPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetPlayAreaRect(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1307D50
    bool GetPlayAreaRect(Valve::VR::HmdQuad_t& rect);
    // public System.Void ReloadInfo()
    // Offset: 0x1307FC4
    void ReloadInfo();
    // public System.Void SetSceneColor(Valve.VR.HmdColor_t color)
    // Offset: 0x13081E8
    void SetSceneColor(Valve::VR::HmdColor_t color);
    // public System.Void GetBoundsColor(ref Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref Valve.VR.HmdColor_t pOutputCameraColor)
    // Offset: 0x13084AC
    void GetBoundsColor(Valve::VR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, Valve::VR::HmdColor_t& pOutputCameraColor);
    // public System.Boolean AreBoundsVisible()
    // Offset: 0x1308764
    bool AreBoundsVisible();
    // public System.Void ForceBoundsVisible(System.Boolean bForce)
    // Offset: 0x1308994
    void ForceBoundsVisible(bool bForce);
  }; // Valve.VR.CVRChaperone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRChaperone*, "Valve.VR", "CVRChaperone");
#pragma pack(pop)
