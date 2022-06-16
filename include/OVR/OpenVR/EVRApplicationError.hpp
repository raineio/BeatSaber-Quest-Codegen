// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationError, "OVR.OpenVR", "EVRApplicationError");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRApplicationError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRApplicationError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRApplicationError
    constexpr EVRApplicationError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRApplicationError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRApplicationError None
    static ::OVR::OpenVR::EVRApplicationError _get_None();
    // Set static field: static public OVR.OpenVR.EVRApplicationError None
    static void _set_None(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError AppKeyAlreadyExists
    static constexpr const int AppKeyAlreadyExists = 100;
    // Get static field: static public OVR.OpenVR.EVRApplicationError AppKeyAlreadyExists
    static ::OVR::OpenVR::EVRApplicationError _get_AppKeyAlreadyExists();
    // Set static field: static public OVR.OpenVR.EVRApplicationError AppKeyAlreadyExists
    static void _set_AppKeyAlreadyExists(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError NoManifest
    static constexpr const int NoManifest = 101;
    // Get static field: static public OVR.OpenVR.EVRApplicationError NoManifest
    static ::OVR::OpenVR::EVRApplicationError _get_NoManifest();
    // Set static field: static public OVR.OpenVR.EVRApplicationError NoManifest
    static void _set_NoManifest(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError NoApplication
    static constexpr const int NoApplication = 102;
    // Get static field: static public OVR.OpenVR.EVRApplicationError NoApplication
    static ::OVR::OpenVR::EVRApplicationError _get_NoApplication();
    // Set static field: static public OVR.OpenVR.EVRApplicationError NoApplication
    static void _set_NoApplication(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError InvalidIndex
    static constexpr const int InvalidIndex = 103;
    // Get static field: static public OVR.OpenVR.EVRApplicationError InvalidIndex
    static ::OVR::OpenVR::EVRApplicationError _get_InvalidIndex();
    // Set static field: static public OVR.OpenVR.EVRApplicationError InvalidIndex
    static void _set_InvalidIndex(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError UnknownApplication
    static constexpr const int UnknownApplication = 104;
    // Get static field: static public OVR.OpenVR.EVRApplicationError UnknownApplication
    static ::OVR::OpenVR::EVRApplicationError _get_UnknownApplication();
    // Set static field: static public OVR.OpenVR.EVRApplicationError UnknownApplication
    static void _set_UnknownApplication(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError IPCFailed
    static constexpr const int IPCFailed = 105;
    // Get static field: static public OVR.OpenVR.EVRApplicationError IPCFailed
    static ::OVR::OpenVR::EVRApplicationError _get_IPCFailed();
    // Set static field: static public OVR.OpenVR.EVRApplicationError IPCFailed
    static void _set_IPCFailed(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyRunning
    static constexpr const int ApplicationAlreadyRunning = 106;
    // Get static field: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyRunning
    static ::OVR::OpenVR::EVRApplicationError _get_ApplicationAlreadyRunning();
    // Set static field: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyRunning
    static void _set_ApplicationAlreadyRunning(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError InvalidManifest
    static constexpr const int InvalidManifest = 107;
    // Get static field: static public OVR.OpenVR.EVRApplicationError InvalidManifest
    static ::OVR::OpenVR::EVRApplicationError _get_InvalidManifest();
    // Set static field: static public OVR.OpenVR.EVRApplicationError InvalidManifest
    static void _set_InvalidManifest(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError InvalidApplication
    static constexpr const int InvalidApplication = 108;
    // Get static field: static public OVR.OpenVR.EVRApplicationError InvalidApplication
    static ::OVR::OpenVR::EVRApplicationError _get_InvalidApplication();
    // Set static field: static public OVR.OpenVR.EVRApplicationError InvalidApplication
    static void _set_InvalidApplication(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError LaunchFailed
    static constexpr const int LaunchFailed = 109;
    // Get static field: static public OVR.OpenVR.EVRApplicationError LaunchFailed
    static ::OVR::OpenVR::EVRApplicationError _get_LaunchFailed();
    // Set static field: static public OVR.OpenVR.EVRApplicationError LaunchFailed
    static void _set_LaunchFailed(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyStarting
    static constexpr const int ApplicationAlreadyStarting = 110;
    // Get static field: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyStarting
    static ::OVR::OpenVR::EVRApplicationError _get_ApplicationAlreadyStarting();
    // Set static field: static public OVR.OpenVR.EVRApplicationError ApplicationAlreadyStarting
    static void _set_ApplicationAlreadyStarting(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError LaunchInProgress
    static constexpr const int LaunchInProgress = 111;
    // Get static field: static public OVR.OpenVR.EVRApplicationError LaunchInProgress
    static ::OVR::OpenVR::EVRApplicationError _get_LaunchInProgress();
    // Set static field: static public OVR.OpenVR.EVRApplicationError LaunchInProgress
    static void _set_LaunchInProgress(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError OldApplicationQuitting
    static constexpr const int OldApplicationQuitting = 112;
    // Get static field: static public OVR.OpenVR.EVRApplicationError OldApplicationQuitting
    static ::OVR::OpenVR::EVRApplicationError _get_OldApplicationQuitting();
    // Set static field: static public OVR.OpenVR.EVRApplicationError OldApplicationQuitting
    static void _set_OldApplicationQuitting(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError TransitionAborted
    static constexpr const int TransitionAborted = 113;
    // Get static field: static public OVR.OpenVR.EVRApplicationError TransitionAborted
    static ::OVR::OpenVR::EVRApplicationError _get_TransitionAborted();
    // Set static field: static public OVR.OpenVR.EVRApplicationError TransitionAborted
    static void _set_TransitionAborted(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError IsTemplate
    static constexpr const int IsTemplate = 114;
    // Get static field: static public OVR.OpenVR.EVRApplicationError IsTemplate
    static ::OVR::OpenVR::EVRApplicationError _get_IsTemplate();
    // Set static field: static public OVR.OpenVR.EVRApplicationError IsTemplate
    static void _set_IsTemplate(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError SteamVRIsExiting
    static constexpr const int SteamVRIsExiting = 115;
    // Get static field: static public OVR.OpenVR.EVRApplicationError SteamVRIsExiting
    static ::OVR::OpenVR::EVRApplicationError _get_SteamVRIsExiting();
    // Set static field: static public OVR.OpenVR.EVRApplicationError SteamVRIsExiting
    static void _set_SteamVRIsExiting(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError BufferTooSmall
    static constexpr const int BufferTooSmall = 200;
    // Get static field: static public OVR.OpenVR.EVRApplicationError BufferTooSmall
    static ::OVR::OpenVR::EVRApplicationError _get_BufferTooSmall();
    // Set static field: static public OVR.OpenVR.EVRApplicationError BufferTooSmall
    static void _set_BufferTooSmall(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError PropertyNotSet
    static constexpr const int PropertyNotSet = 201;
    // Get static field: static public OVR.OpenVR.EVRApplicationError PropertyNotSet
    static ::OVR::OpenVR::EVRApplicationError _get_PropertyNotSet();
    // Set static field: static public OVR.OpenVR.EVRApplicationError PropertyNotSet
    static void _set_PropertyNotSet(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError UnknownProperty
    static constexpr const int UnknownProperty = 202;
    // Get static field: static public OVR.OpenVR.EVRApplicationError UnknownProperty
    static ::OVR::OpenVR::EVRApplicationError _get_UnknownProperty();
    // Set static field: static public OVR.OpenVR.EVRApplicationError UnknownProperty
    static void _set_UnknownProperty(::OVR::OpenVR::EVRApplicationError value);
    // static field const value: static public OVR.OpenVR.EVRApplicationError InvalidParameter
    static constexpr const int InvalidParameter = 203;
    // Get static field: static public OVR.OpenVR.EVRApplicationError InvalidParameter
    static ::OVR::OpenVR::EVRApplicationError _get_InvalidParameter();
    // Set static field: static public OVR.OpenVR.EVRApplicationError InvalidParameter
    static void _set_InvalidParameter(::OVR::OpenVR::EVRApplicationError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EVRApplicationError
  #pragma pack(pop)
  static check_size<sizeof(EVRApplicationError), 0 + sizeof(int)> __OVR_OpenVR_EVRApplicationErrorSizeCheck;
  static_assert(sizeof(EVRApplicationError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
