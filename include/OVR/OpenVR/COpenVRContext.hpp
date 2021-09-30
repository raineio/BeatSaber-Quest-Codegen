// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.COpenVRContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct COpenVRContext/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.IntPtr m_pVRSystem
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_pVRSystem;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRChaperone
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr m_pVRChaperone;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRChaperoneSetup
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_pVRChaperoneSetup;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRCompositor
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr m_pVRCompositor;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVROverlay
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr m_pVROverlay;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRResources
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr m_pVRResources;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRRenderModels
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr m_pVRRenderModels;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRExtendedDisplay
    // Size: 0x8
    // Offset: 0x38
    System::IntPtr m_pVRExtendedDisplay;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRSettings
    // Size: 0x8
    // Offset: 0x40
    System::IntPtr m_pVRSettings;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRApplications
    // Size: 0x8
    // Offset: 0x48
    System::IntPtr m_pVRApplications;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRTrackedCamera
    // Size: 0x8
    // Offset: 0x50
    System::IntPtr m_pVRTrackedCamera;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRScreenshots
    // Size: 0x8
    // Offset: 0x58
    System::IntPtr m_pVRScreenshots;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRDriverManager
    // Size: 0x8
    // Offset: 0x60
    System::IntPtr m_pVRDriverManager;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRInput
    // Size: 0x8
    // Offset: 0x68
    System::IntPtr m_pVRInput;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRIOBuffer
    // Size: 0x8
    // Offset: 0x70
    System::IntPtr m_pVRIOBuffer;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pVRSpatialAnchors
    // Size: 0x8
    // Offset: 0x78
    System::IntPtr m_pVRSpatialAnchors;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: COpenVRContext
    constexpr COpenVRContext(System::IntPtr m_pVRSystem_ = {}, System::IntPtr m_pVRChaperone_ = {}, System::IntPtr m_pVRChaperoneSetup_ = {}, System::IntPtr m_pVRCompositor_ = {}, System::IntPtr m_pVROverlay_ = {}, System::IntPtr m_pVRResources_ = {}, System::IntPtr m_pVRRenderModels_ = {}, System::IntPtr m_pVRExtendedDisplay_ = {}, System::IntPtr m_pVRSettings_ = {}, System::IntPtr m_pVRApplications_ = {}, System::IntPtr m_pVRTrackedCamera_ = {}, System::IntPtr m_pVRScreenshots_ = {}, System::IntPtr m_pVRDriverManager_ = {}, System::IntPtr m_pVRInput_ = {}, System::IntPtr m_pVRIOBuffer_ = {}, System::IntPtr m_pVRSpatialAnchors_ = {}) noexcept : m_pVRSystem{m_pVRSystem_}, m_pVRChaperone{m_pVRChaperone_}, m_pVRChaperoneSetup{m_pVRChaperoneSetup_}, m_pVRCompositor{m_pVRCompositor_}, m_pVROverlay{m_pVROverlay_}, m_pVRResources{m_pVRResources_}, m_pVRRenderModels{m_pVRRenderModels_}, m_pVRExtendedDisplay{m_pVRExtendedDisplay_}, m_pVRSettings{m_pVRSettings_}, m_pVRApplications{m_pVRApplications_}, m_pVRTrackedCamera{m_pVRTrackedCamera_}, m_pVRScreenshots{m_pVRScreenshots_}, m_pVRDriverManager{m_pVRDriverManager_}, m_pVRInput{m_pVRInput_}, m_pVRIOBuffer{m_pVRIOBuffer_}, m_pVRSpatialAnchors{m_pVRSpatialAnchors_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr m_pVRSystem
    System::IntPtr& dyn_m_pVRSystem();
    // Get instance field reference: public System.IntPtr m_pVRChaperone
    System::IntPtr& dyn_m_pVRChaperone();
    // Get instance field reference: public System.IntPtr m_pVRChaperoneSetup
    System::IntPtr& dyn_m_pVRChaperoneSetup();
    // Get instance field reference: public System.IntPtr m_pVRCompositor
    System::IntPtr& dyn_m_pVRCompositor();
    // Get instance field reference: public System.IntPtr m_pVROverlay
    System::IntPtr& dyn_m_pVROverlay();
    // Get instance field reference: public System.IntPtr m_pVRResources
    System::IntPtr& dyn_m_pVRResources();
    // Get instance field reference: public System.IntPtr m_pVRRenderModels
    System::IntPtr& dyn_m_pVRRenderModels();
    // Get instance field reference: public System.IntPtr m_pVRExtendedDisplay
    System::IntPtr& dyn_m_pVRExtendedDisplay();
    // Get instance field reference: public System.IntPtr m_pVRSettings
    System::IntPtr& dyn_m_pVRSettings();
    // Get instance field reference: public System.IntPtr m_pVRApplications
    System::IntPtr& dyn_m_pVRApplications();
    // Get instance field reference: public System.IntPtr m_pVRTrackedCamera
    System::IntPtr& dyn_m_pVRTrackedCamera();
    // Get instance field reference: public System.IntPtr m_pVRScreenshots
    System::IntPtr& dyn_m_pVRScreenshots();
    // Get instance field reference: public System.IntPtr m_pVRDriverManager
    System::IntPtr& dyn_m_pVRDriverManager();
    // Get instance field reference: public System.IntPtr m_pVRInput
    System::IntPtr& dyn_m_pVRInput();
    // Get instance field reference: public System.IntPtr m_pVRIOBuffer
    System::IntPtr& dyn_m_pVRIOBuffer();
    // Get instance field reference: public System.IntPtr m_pVRSpatialAnchors
    System::IntPtr& dyn_m_pVRSpatialAnchors();
  }; // OVR.OpenVR.COpenVRContext
  #pragma pack(pop)
  static check_size<sizeof(COpenVRContext), 120 + sizeof(System::IntPtr)> __OVR_OpenVR_COpenVRContextSizeCheck;
  static_assert(sizeof(COpenVRContext) == 0x80);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::COpenVRContext, "OVR.OpenVR", "COpenVRContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
