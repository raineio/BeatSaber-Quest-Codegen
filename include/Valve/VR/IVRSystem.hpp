// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x178
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRSystem
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRSystem/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize
    class _GetRecommendedRenderTargetSize;
    // Nested type: Valve::VR::IVRSystem::_GetProjectionMatrix
    class _GetProjectionMatrix;
    // Nested type: Valve::VR::IVRSystem::_GetProjectionRaw
    class _GetProjectionRaw;
    // Nested type: Valve::VR::IVRSystem::_ComputeDistortion
    class _ComputeDistortion;
    // Nested type: Valve::VR::IVRSystem::_GetEyeToHeadTransform
    class _GetEyeToHeadTransform;
    // Nested type: Valve::VR::IVRSystem::_GetTimeSinceLastVsync
    class _GetTimeSinceLastVsync;
    // Nested type: Valve::VR::IVRSystem::_GetD3D9AdapterIndex
    class _GetD3D9AdapterIndex;
    // Nested type: Valve::VR::IVRSystem::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Nested type: Valve::VR::IVRSystem::_GetOutputDevice
    class _GetOutputDevice;
    // Nested type: Valve::VR::IVRSystem::_IsDisplayOnDesktop
    class _IsDisplayOnDesktop;
    // Nested type: Valve::VR::IVRSystem::_SetDisplayVisibility
    class _SetDisplayVisibility;
    // Nested type: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose
    class _GetDeviceToAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_ResetSeatedZeroPose
    class _ResetSeatedZeroPose;
    // Nested type: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    class _GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose
    class _GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass
    class _GetSortedTrackedDeviceIndicesOfClass;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel
    class _GetTrackedDeviceActivityLevel;
    // Nested type: Valve::VR::IVRSystem::_ApplyTransform
    class _ApplyTransform;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole
    class _GetTrackedDeviceIndexForControllerRole;
    // Nested type: Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex
    class _GetControllerRoleForTrackedDeviceIndex;
    // Nested type: Valve::VR::IVRSystem::_GetTrackedDeviceClass
    class _GetTrackedDeviceClass;
    // Nested type: Valve::VR::IVRSystem::_IsTrackedDeviceConnected
    class _IsTrackedDeviceConnected;
    // Nested type: Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty
    class _GetBoolTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty
    class _GetFloatTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty
    class _GetInt32TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty
    class _GetUint64TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty
    class _GetMatrix34TrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty
    class _GetArrayTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty
    class _GetStringTrackedDeviceProperty;
    // Nested type: Valve::VR::IVRSystem::_GetPropErrorNameFromEnum
    class _GetPropErrorNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_PollNextEvent
    class _PollNextEvent;
    // Nested type: Valve::VR::IVRSystem::_PollNextEventWithPose
    class _PollNextEventWithPose;
    // Nested type: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum
    class _GetEventTypeNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_GetHiddenAreaMesh
    class _GetHiddenAreaMesh;
    // Nested type: Valve::VR::IVRSystem::_GetControllerState
    class _GetControllerState;
    // Nested type: Valve::VR::IVRSystem::_GetControllerStateWithPose
    class _GetControllerStateWithPose;
    // Nested type: Valve::VR::IVRSystem::_TriggerHapticPulse
    class _TriggerHapticPulse;
    // Nested type: Valve::VR::IVRSystem::_GetButtonIdNameFromEnum
    class _GetButtonIdNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum
    class _GetControllerAxisTypeNameFromEnum;
    // Nested type: Valve::VR::IVRSystem::_IsInputAvailable
    class _IsInputAvailable;
    // Nested type: Valve::VR::IVRSystem::_IsSteamVRDrawingControllers
    class _IsSteamVRDrawingControllers;
    // Nested type: Valve::VR::IVRSystem::_ShouldApplicationPause
    class _ShouldApplicationPause;
    // Nested type: Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork
    class _ShouldApplicationReduceRenderingWork;
    // Nested type: Valve::VR::IVRSystem::_DriverDebugRequest
    class _DriverDebugRequest;
    // Nested type: Valve::VR::IVRSystem::_PerformFirmwareUpdate
    class _PerformFirmwareUpdate;
    // Nested type: Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting
    class _AcknowledgeQuit_Exiting;
    // Nested type: Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt
    class _AcknowledgeQuit_UserPrompt;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // Valve.VR.IVRSystem/Valve.VR._GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetProjectionMatrix GetProjectionMatrix
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetProjectionMatrix*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetProjectionRaw GetProjectionRaw
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::IVRSystem::_GetProjectionRaw* GetProjectionRaw;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetProjectionRaw*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._ComputeDistortion ComputeDistortion
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::IVRSystem::_ComputeDistortion* ComputeDistortion;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_ComputeDistortion*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetEyeToHeadTransform GetEyeToHeadTransform
    // Size: 0x8
    // Offset: 0x20
    Valve::VR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetEyeToHeadTransform*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetTimeSinceLastVsync GetTimeSinceLastVsync
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetTimeSinceLastVsync*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetD3D9AdapterIndex GetD3D9AdapterIndex
    // Size: 0x8
    // Offset: 0x30
    Valve::VR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetD3D9AdapterIndex*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetDXGIOutputInfo GetDXGIOutputInfo
    // Size: 0x8
    // Offset: 0x38
    Valve::VR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetDXGIOutputInfo*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetOutputDevice GetOutputDevice
    // Size: 0x8
    // Offset: 0x40
    Valve::VR::IVRSystem::_GetOutputDevice* GetOutputDevice;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetOutputDevice*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._IsDisplayOnDesktop IsDisplayOnDesktop
    // Size: 0x8
    // Offset: 0x48
    Valve::VR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_IsDisplayOnDesktop*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._SetDisplayVisibility SetDisplayVisibility
    // Size: 0x8
    // Offset: 0x50
    Valve::VR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_SetDisplayVisibility*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x58
    Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._ResetSeatedZeroPose ResetSeatedZeroPose
    // Size: 0x8
    // Offset: 0x60
    Valve::VR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_ResetSeatedZeroPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x68
    Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    // Size: 0x8
    // Offset: 0x70
    Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    // Size: 0x8
    // Offset: 0x78
    Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    // Size: 0x8
    // Offset: 0x80
    Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._ApplyTransform ApplyTransform
    // Size: 0x8
    // Offset: 0x88
    Valve::VR::IVRSystem::_ApplyTransform* ApplyTransform;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_ApplyTransform*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    // Size: 0x8
    // Offset: 0x90
    Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    // Size: 0x8
    // Offset: 0x98
    Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceClass GetTrackedDeviceClass
    // Size: 0x8
    // Offset: 0xA0
    Valve::VR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetTrackedDeviceClass*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._IsTrackedDeviceConnected IsTrackedDeviceConnected
    // Size: 0x8
    // Offset: 0xA8
    Valve::VR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_IsTrackedDeviceConnected*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xB0
    Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xB8
    Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xC0
    Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xC8
    Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xD0
    Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xD8
    Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    // Size: 0x8
    // Offset: 0xE0
    Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    // Size: 0x8
    // Offset: 0xE8
    Valve::VR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetPropErrorNameFromEnum*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._PollNextEvent PollNextEvent
    // Size: 0x8
    // Offset: 0xF0
    Valve::VR::IVRSystem::_PollNextEvent* PollNextEvent;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_PollNextEvent*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._PollNextEventWithPose PollNextEventWithPose
    // Size: 0x8
    // Offset: 0xF8
    Valve::VR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_PollNextEventWithPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    // Size: 0x8
    // Offset: 0x100
    Valve::VR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetHiddenAreaMesh GetHiddenAreaMesh
    // Size: 0x8
    // Offset: 0x108
    Valve::VR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetHiddenAreaMesh*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetControllerState GetControllerState
    // Size: 0x8
    // Offset: 0x110
    Valve::VR::IVRSystem::_GetControllerState* GetControllerState;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerState*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose GetControllerStateWithPose
    // Size: 0x8
    // Offset: 0x118
    Valve::VR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerStateWithPose*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._TriggerHapticPulse TriggerHapticPulse
    // Size: 0x8
    // Offset: 0x120
    Valve::VR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_TriggerHapticPulse*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    // Size: 0x8
    // Offset: 0x128
    Valve::VR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetButtonIdNameFromEnum*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    // Size: 0x8
    // Offset: 0x130
    Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._IsInputAvailable IsInputAvailable
    // Size: 0x8
    // Offset: 0x138
    Valve::VR::IVRSystem::_IsInputAvailable* IsInputAvailable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_IsInputAvailable*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    // Size: 0x8
    // Offset: 0x140
    Valve::VR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_IsSteamVRDrawingControllers*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._ShouldApplicationPause ShouldApplicationPause
    // Size: 0x8
    // Offset: 0x148
    Valve::VR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_ShouldApplicationPause*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    // Size: 0x8
    // Offset: 0x150
    Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._DriverDebugRequest DriverDebugRequest
    // Size: 0x8
    // Offset: 0x158
    Valve::VR::IVRSystem::_DriverDebugRequest* DriverDebugRequest;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_DriverDebugRequest*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._PerformFirmwareUpdate PerformFirmwareUpdate
    // Size: 0x8
    // Offset: 0x160
    Valve::VR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_PerformFirmwareUpdate*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    // Size: 0x8
    // Offset: 0x168
    Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting*) == 0x8);
    // Valve.VR.IVRSystem/Valve.VR._AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    // Size: 0x8
    // Offset: 0x170
    Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt*) == 0x8);
    public:
    // Creating value type constructor for type: IVRSystem
    constexpr IVRSystem(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize_ = {}, Valve::VR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix_ = {}, Valve::VR::IVRSystem::_GetProjectionRaw* GetProjectionRaw_ = {}, Valve::VR::IVRSystem::_ComputeDistortion* ComputeDistortion_ = {}, Valve::VR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform_ = {}, Valve::VR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync_ = {}, Valve::VR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex_ = {}, Valve::VR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}, Valve::VR::IVRSystem::_GetOutputDevice* GetOutputDevice_ = {}, Valve::VR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop_ = {}, Valve::VR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility_ = {}, Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose_ = {}, Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose_ = {}, Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel_ = {}, Valve::VR::IVRSystem::_ApplyTransform* ApplyTransform_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole_ = {}, Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex_ = {}, Valve::VR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass_ = {}, Valve::VR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected_ = {}, Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty_ = {}, Valve::VR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum_ = {}, Valve::VR::IVRSystem::_PollNextEvent* PollNextEvent_ = {}, Valve::VR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose_ = {}, Valve::VR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum_ = {}, Valve::VR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh_ = {}, Valve::VR::IVRSystem::_GetControllerState* GetControllerState_ = {}, Valve::VR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose_ = {}, Valve::VR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse_ = {}, Valve::VR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum_ = {}, Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum_ = {}, Valve::VR::IVRSystem::_IsInputAvailable* IsInputAvailable_ = {}, Valve::VR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers_ = {}, Valve::VR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause_ = {}, Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork_ = {}, Valve::VR::IVRSystem::_DriverDebugRequest* DriverDebugRequest_ = {}, Valve::VR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate_ = {}, Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting_ = {}, Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt_ = {}) noexcept : GetRecommendedRenderTargetSize{GetRecommendedRenderTargetSize_}, GetProjectionMatrix{GetProjectionMatrix_}, GetProjectionRaw{GetProjectionRaw_}, ComputeDistortion{ComputeDistortion_}, GetEyeToHeadTransform{GetEyeToHeadTransform_}, GetTimeSinceLastVsync{GetTimeSinceLastVsync_}, GetD3D9AdapterIndex{GetD3D9AdapterIndex_}, GetDXGIOutputInfo{GetDXGIOutputInfo_}, GetOutputDevice{GetOutputDevice_}, IsDisplayOnDesktop{IsDisplayOnDesktop_}, SetDisplayVisibility{SetDisplayVisibility_}, GetDeviceToAbsoluteTrackingPose{GetDeviceToAbsoluteTrackingPose_}, ResetSeatedZeroPose{ResetSeatedZeroPose_}, GetSeatedZeroPoseToStandingAbsoluteTrackingPose{GetSeatedZeroPoseToStandingAbsoluteTrackingPose_}, GetRawZeroPoseToStandingAbsoluteTrackingPose{GetRawZeroPoseToStandingAbsoluteTrackingPose_}, GetSortedTrackedDeviceIndicesOfClass{GetSortedTrackedDeviceIndicesOfClass_}, GetTrackedDeviceActivityLevel{GetTrackedDeviceActivityLevel_}, ApplyTransform{ApplyTransform_}, GetTrackedDeviceIndexForControllerRole{GetTrackedDeviceIndexForControllerRole_}, GetControllerRoleForTrackedDeviceIndex{GetControllerRoleForTrackedDeviceIndex_}, GetTrackedDeviceClass{GetTrackedDeviceClass_}, IsTrackedDeviceConnected{IsTrackedDeviceConnected_}, GetBoolTrackedDeviceProperty{GetBoolTrackedDeviceProperty_}, GetFloatTrackedDeviceProperty{GetFloatTrackedDeviceProperty_}, GetInt32TrackedDeviceProperty{GetInt32TrackedDeviceProperty_}, GetUint64TrackedDeviceProperty{GetUint64TrackedDeviceProperty_}, GetMatrix34TrackedDeviceProperty{GetMatrix34TrackedDeviceProperty_}, GetArrayTrackedDeviceProperty{GetArrayTrackedDeviceProperty_}, GetStringTrackedDeviceProperty{GetStringTrackedDeviceProperty_}, GetPropErrorNameFromEnum{GetPropErrorNameFromEnum_}, PollNextEvent{PollNextEvent_}, PollNextEventWithPose{PollNextEventWithPose_}, GetEventTypeNameFromEnum{GetEventTypeNameFromEnum_}, GetHiddenAreaMesh{GetHiddenAreaMesh_}, GetControllerState{GetControllerState_}, GetControllerStateWithPose{GetControllerStateWithPose_}, TriggerHapticPulse{TriggerHapticPulse_}, GetButtonIdNameFromEnum{GetButtonIdNameFromEnum_}, GetControllerAxisTypeNameFromEnum{GetControllerAxisTypeNameFromEnum_}, IsInputAvailable{IsInputAvailable_}, IsSteamVRDrawingControllers{IsSteamVRDrawingControllers_}, ShouldApplicationPause{ShouldApplicationPause_}, ShouldApplicationReduceRenderingWork{ShouldApplicationReduceRenderingWork_}, DriverDebugRequest{DriverDebugRequest_}, PerformFirmwareUpdate{PerformFirmwareUpdate_}, AcknowledgeQuit_Exiting{AcknowledgeQuit_Exiting_}, AcknowledgeQuit_UserPrompt{AcknowledgeQuit_UserPrompt_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*& dyn_GetRecommendedRenderTargetSize();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetProjectionMatrix GetProjectionMatrix
    Valve::VR::IVRSystem::_GetProjectionMatrix*& dyn_GetProjectionMatrix();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetProjectionRaw GetProjectionRaw
    Valve::VR::IVRSystem::_GetProjectionRaw*& dyn_GetProjectionRaw();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._ComputeDistortion ComputeDistortion
    Valve::VR::IVRSystem::_ComputeDistortion*& dyn_ComputeDistortion();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetEyeToHeadTransform GetEyeToHeadTransform
    Valve::VR::IVRSystem::_GetEyeToHeadTransform*& dyn_GetEyeToHeadTransform();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetTimeSinceLastVsync GetTimeSinceLastVsync
    Valve::VR::IVRSystem::_GetTimeSinceLastVsync*& dyn_GetTimeSinceLastVsync();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetD3D9AdapterIndex GetD3D9AdapterIndex
    Valve::VR::IVRSystem::_GetD3D9AdapterIndex*& dyn_GetD3D9AdapterIndex();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetDXGIOutputInfo GetDXGIOutputInfo
    Valve::VR::IVRSystem::_GetDXGIOutputInfo*& dyn_GetDXGIOutputInfo();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetOutputDevice GetOutputDevice
    Valve::VR::IVRSystem::_GetOutputDevice*& dyn_GetOutputDevice();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._IsDisplayOnDesktop IsDisplayOnDesktop
    Valve::VR::IVRSystem::_IsDisplayOnDesktop*& dyn_IsDisplayOnDesktop();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._SetDisplayVisibility SetDisplayVisibility
    Valve::VR::IVRSystem::_SetDisplayVisibility*& dyn_SetDisplayVisibility();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*& dyn_GetDeviceToAbsoluteTrackingPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._ResetSeatedZeroPose ResetSeatedZeroPose
    Valve::VR::IVRSystem::_ResetSeatedZeroPose*& dyn_ResetSeatedZeroPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*& dyn_GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*& dyn_GetRawZeroPoseToStandingAbsoluteTrackingPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    Valve::VR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*& dyn_GetSortedTrackedDeviceIndicesOfClass();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel*& dyn_GetTrackedDeviceActivityLevel();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._ApplyTransform ApplyTransform
    Valve::VR::IVRSystem::_ApplyTransform*& dyn_ApplyTransform();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*& dyn_GetTrackedDeviceIndexForControllerRole();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*& dyn_GetControllerRoleForTrackedDeviceIndex();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceClass GetTrackedDeviceClass
    Valve::VR::IVRSystem::_GetTrackedDeviceClass*& dyn_GetTrackedDeviceClass();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._IsTrackedDeviceConnected IsTrackedDeviceConnected
    Valve::VR::IVRSystem::_IsTrackedDeviceConnected*& dyn_IsTrackedDeviceConnected();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty*& dyn_GetBoolTrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*& dyn_GetFloatTrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty*& dyn_GetInt32TrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*& dyn_GetUint64TrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    Valve::VR::IVRSystem::_GetMatrix34TrackedDeviceProperty*& dyn_GetMatrix34TrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*& dyn_GetArrayTrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty*& dyn_GetStringTrackedDeviceProperty();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    Valve::VR::IVRSystem::_GetPropErrorNameFromEnum*& dyn_GetPropErrorNameFromEnum();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._PollNextEvent PollNextEvent
    Valve::VR::IVRSystem::_PollNextEvent*& dyn_PollNextEvent();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._PollNextEventWithPose PollNextEventWithPose
    Valve::VR::IVRSystem::_PollNextEventWithPose*& dyn_PollNextEventWithPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*& dyn_GetEventTypeNameFromEnum();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetHiddenAreaMesh GetHiddenAreaMesh
    Valve::VR::IVRSystem::_GetHiddenAreaMesh*& dyn_GetHiddenAreaMesh();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetControllerState GetControllerState
    Valve::VR::IVRSystem::_GetControllerState*& dyn_GetControllerState();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose GetControllerStateWithPose
    Valve::VR::IVRSystem::_GetControllerStateWithPose*& dyn_GetControllerStateWithPose();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._TriggerHapticPulse TriggerHapticPulse
    Valve::VR::IVRSystem::_TriggerHapticPulse*& dyn_TriggerHapticPulse();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    Valve::VR::IVRSystem::_GetButtonIdNameFromEnum*& dyn_GetButtonIdNameFromEnum();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    Valve::VR::IVRSystem::_GetControllerAxisTypeNameFromEnum*& dyn_GetControllerAxisTypeNameFromEnum();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._IsInputAvailable IsInputAvailable
    Valve::VR::IVRSystem::_IsInputAvailable*& dyn_IsInputAvailable();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    Valve::VR::IVRSystem::_IsSteamVRDrawingControllers*& dyn_IsSteamVRDrawingControllers();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._ShouldApplicationPause ShouldApplicationPause
    Valve::VR::IVRSystem::_ShouldApplicationPause*& dyn_ShouldApplicationPause();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork*& dyn_ShouldApplicationReduceRenderingWork();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._DriverDebugRequest DriverDebugRequest
    Valve::VR::IVRSystem::_DriverDebugRequest*& dyn_DriverDebugRequest();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._PerformFirmwareUpdate PerformFirmwareUpdate
    Valve::VR::IVRSystem::_PerformFirmwareUpdate*& dyn_PerformFirmwareUpdate();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting*& dyn_AcknowledgeQuit_Exiting();
    // Get instance field reference: Valve.VR.IVRSystem/Valve.VR._AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt*& dyn_AcknowledgeQuit_UserPrompt();
  }; // Valve.VR.IVRSystem
  #pragma pack(pop)
  static check_size<sizeof(IVRSystem), 368 + sizeof(Valve::VR::IVRSystem::_AcknowledgeQuit_UserPrompt*)> __Valve_VR_IVRSystemSizeCheck;
  static_assert(sizeof(IVRSystem) == 0x178);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem, "Valve.VR", "IVRSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
