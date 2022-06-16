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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FtpStatusCode
  struct FtpStatusCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpStatusCode, "System.Net", "FtpStatusCode");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpStatusCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct FtpStatusCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FtpStatusCode
    constexpr FtpStatusCode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Net.FtpStatusCode Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public System.Net.FtpStatusCode Undefined
    static ::System::Net::FtpStatusCode _get_Undefined();
    // Set static field: static public System.Net.FtpStatusCode Undefined
    static void _set_Undefined(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode RestartMarker
    static constexpr const int RestartMarker = 110;
    // Get static field: static public System.Net.FtpStatusCode RestartMarker
    static ::System::Net::FtpStatusCode _get_RestartMarker();
    // Set static field: static public System.Net.FtpStatusCode RestartMarker
    static void _set_RestartMarker(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ServiceTemporarilyNotAvailable
    static constexpr const int ServiceTemporarilyNotAvailable = 120;
    // Get static field: static public System.Net.FtpStatusCode ServiceTemporarilyNotAvailable
    static ::System::Net::FtpStatusCode _get_ServiceTemporarilyNotAvailable();
    // Set static field: static public System.Net.FtpStatusCode ServiceTemporarilyNotAvailable
    static void _set_ServiceTemporarilyNotAvailable(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode DataAlreadyOpen
    static constexpr const int DataAlreadyOpen = 125;
    // Get static field: static public System.Net.FtpStatusCode DataAlreadyOpen
    static ::System::Net::FtpStatusCode _get_DataAlreadyOpen();
    // Set static field: static public System.Net.FtpStatusCode DataAlreadyOpen
    static void _set_DataAlreadyOpen(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode OpeningData
    static constexpr const int OpeningData = 150;
    // Get static field: static public System.Net.FtpStatusCode OpeningData
    static ::System::Net::FtpStatusCode _get_OpeningData();
    // Set static field: static public System.Net.FtpStatusCode OpeningData
    static void _set_OpeningData(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode CommandOK
    static constexpr const int CommandOK = 200;
    // Get static field: static public System.Net.FtpStatusCode CommandOK
    static ::System::Net::FtpStatusCode _get_CommandOK();
    // Set static field: static public System.Net.FtpStatusCode CommandOK
    static void _set_CommandOK(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode CommandExtraneous
    static constexpr const int CommandExtraneous = 202;
    // Get static field: static public System.Net.FtpStatusCode CommandExtraneous
    static ::System::Net::FtpStatusCode _get_CommandExtraneous();
    // Set static field: static public System.Net.FtpStatusCode CommandExtraneous
    static void _set_CommandExtraneous(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode DirectoryStatus
    static constexpr const int DirectoryStatus = 212;
    // Get static field: static public System.Net.FtpStatusCode DirectoryStatus
    static ::System::Net::FtpStatusCode _get_DirectoryStatus();
    // Set static field: static public System.Net.FtpStatusCode DirectoryStatus
    static void _set_DirectoryStatus(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode FileStatus
    static constexpr const int FileStatus = 213;
    // Get static field: static public System.Net.FtpStatusCode FileStatus
    static ::System::Net::FtpStatusCode _get_FileStatus();
    // Set static field: static public System.Net.FtpStatusCode FileStatus
    static void _set_FileStatus(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode SystemType
    static constexpr const int SystemType = 215;
    // Get static field: static public System.Net.FtpStatusCode SystemType
    static ::System::Net::FtpStatusCode _get_SystemType();
    // Set static field: static public System.Net.FtpStatusCode SystemType
    static void _set_SystemType(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode SendUserCommand
    static constexpr const int SendUserCommand = 220;
    // Get static field: static public System.Net.FtpStatusCode SendUserCommand
    static ::System::Net::FtpStatusCode _get_SendUserCommand();
    // Set static field: static public System.Net.FtpStatusCode SendUserCommand
    static void _set_SendUserCommand(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ClosingControl
    static constexpr const int ClosingControl = 221;
    // Get static field: static public System.Net.FtpStatusCode ClosingControl
    static ::System::Net::FtpStatusCode _get_ClosingControl();
    // Set static field: static public System.Net.FtpStatusCode ClosingControl
    static void _set_ClosingControl(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ClosingData
    static constexpr const int ClosingData = 226;
    // Get static field: static public System.Net.FtpStatusCode ClosingData
    static ::System::Net::FtpStatusCode _get_ClosingData();
    // Set static field: static public System.Net.FtpStatusCode ClosingData
    static void _set_ClosingData(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode EnteringPassive
    static constexpr const int EnteringPassive = 227;
    // Get static field: static public System.Net.FtpStatusCode EnteringPassive
    static ::System::Net::FtpStatusCode _get_EnteringPassive();
    // Set static field: static public System.Net.FtpStatusCode EnteringPassive
    static void _set_EnteringPassive(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode LoggedInProceed
    static constexpr const int LoggedInProceed = 230;
    // Get static field: static public System.Net.FtpStatusCode LoggedInProceed
    static ::System::Net::FtpStatusCode _get_LoggedInProceed();
    // Set static field: static public System.Net.FtpStatusCode LoggedInProceed
    static void _set_LoggedInProceed(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ServerWantsSecureSession
    static constexpr const int ServerWantsSecureSession = 234;
    // Get static field: static public System.Net.FtpStatusCode ServerWantsSecureSession
    static ::System::Net::FtpStatusCode _get_ServerWantsSecureSession();
    // Set static field: static public System.Net.FtpStatusCode ServerWantsSecureSession
    static void _set_ServerWantsSecureSession(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode FileActionOK
    static constexpr const int FileActionOK = 250;
    // Get static field: static public System.Net.FtpStatusCode FileActionOK
    static ::System::Net::FtpStatusCode _get_FileActionOK();
    // Set static field: static public System.Net.FtpStatusCode FileActionOK
    static void _set_FileActionOK(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode PathnameCreated
    static constexpr const int PathnameCreated = 257;
    // Get static field: static public System.Net.FtpStatusCode PathnameCreated
    static ::System::Net::FtpStatusCode _get_PathnameCreated();
    // Set static field: static public System.Net.FtpStatusCode PathnameCreated
    static void _set_PathnameCreated(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode SendPasswordCommand
    static constexpr const int SendPasswordCommand = 331;
    // Get static field: static public System.Net.FtpStatusCode SendPasswordCommand
    static ::System::Net::FtpStatusCode _get_SendPasswordCommand();
    // Set static field: static public System.Net.FtpStatusCode SendPasswordCommand
    static void _set_SendPasswordCommand(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode NeedLoginAccount
    static constexpr const int NeedLoginAccount = 332;
    // Get static field: static public System.Net.FtpStatusCode NeedLoginAccount
    static ::System::Net::FtpStatusCode _get_NeedLoginAccount();
    // Set static field: static public System.Net.FtpStatusCode NeedLoginAccount
    static void _set_NeedLoginAccount(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode FileCommandPending
    static constexpr const int FileCommandPending = 350;
    // Get static field: static public System.Net.FtpStatusCode FileCommandPending
    static ::System::Net::FtpStatusCode _get_FileCommandPending();
    // Set static field: static public System.Net.FtpStatusCode FileCommandPending
    static void _set_FileCommandPending(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ServiceNotAvailable
    static constexpr const int ServiceNotAvailable = 421;
    // Get static field: static public System.Net.FtpStatusCode ServiceNotAvailable
    static ::System::Net::FtpStatusCode _get_ServiceNotAvailable();
    // Set static field: static public System.Net.FtpStatusCode ServiceNotAvailable
    static void _set_ServiceNotAvailable(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode CantOpenData
    static constexpr const int CantOpenData = 425;
    // Get static field: static public System.Net.FtpStatusCode CantOpenData
    static ::System::Net::FtpStatusCode _get_CantOpenData();
    // Set static field: static public System.Net.FtpStatusCode CantOpenData
    static void _set_CantOpenData(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ConnectionClosed
    static constexpr const int ConnectionClosed = 426;
    // Get static field: static public System.Net.FtpStatusCode ConnectionClosed
    static ::System::Net::FtpStatusCode _get_ConnectionClosed();
    // Set static field: static public System.Net.FtpStatusCode ConnectionClosed
    static void _set_ConnectionClosed(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailableOrBusy
    static constexpr const int ActionNotTakenFileUnavailableOrBusy = 450;
    // Get static field: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailableOrBusy
    static ::System::Net::FtpStatusCode _get_ActionNotTakenFileUnavailableOrBusy();
    // Set static field: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailableOrBusy
    static void _set_ActionNotTakenFileUnavailableOrBusy(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionAbortedLocalProcessingError
    static constexpr const int ActionAbortedLocalProcessingError = 451;
    // Get static field: static public System.Net.FtpStatusCode ActionAbortedLocalProcessingError
    static ::System::Net::FtpStatusCode _get_ActionAbortedLocalProcessingError();
    // Set static field: static public System.Net.FtpStatusCode ActionAbortedLocalProcessingError
    static void _set_ActionAbortedLocalProcessingError(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionNotTakenInsufficientSpace
    static constexpr const int ActionNotTakenInsufficientSpace = 452;
    // Get static field: static public System.Net.FtpStatusCode ActionNotTakenInsufficientSpace
    static ::System::Net::FtpStatusCode _get_ActionNotTakenInsufficientSpace();
    // Set static field: static public System.Net.FtpStatusCode ActionNotTakenInsufficientSpace
    static void _set_ActionNotTakenInsufficientSpace(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode CommandSyntaxError
    static constexpr const int CommandSyntaxError = 500;
    // Get static field: static public System.Net.FtpStatusCode CommandSyntaxError
    static ::System::Net::FtpStatusCode _get_CommandSyntaxError();
    // Set static field: static public System.Net.FtpStatusCode CommandSyntaxError
    static void _set_CommandSyntaxError(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ArgumentSyntaxError
    static constexpr const int ArgumentSyntaxError = 501;
    // Get static field: static public System.Net.FtpStatusCode ArgumentSyntaxError
    static ::System::Net::FtpStatusCode _get_ArgumentSyntaxError();
    // Set static field: static public System.Net.FtpStatusCode ArgumentSyntaxError
    static void _set_ArgumentSyntaxError(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode CommandNotImplemented
    static constexpr const int CommandNotImplemented = 502;
    // Get static field: static public System.Net.FtpStatusCode CommandNotImplemented
    static ::System::Net::FtpStatusCode _get_CommandNotImplemented();
    // Set static field: static public System.Net.FtpStatusCode CommandNotImplemented
    static void _set_CommandNotImplemented(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode BadCommandSequence
    static constexpr const int BadCommandSequence = 503;
    // Get static field: static public System.Net.FtpStatusCode BadCommandSequence
    static ::System::Net::FtpStatusCode _get_BadCommandSequence();
    // Set static field: static public System.Net.FtpStatusCode BadCommandSequence
    static void _set_BadCommandSequence(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode NotLoggedIn
    static constexpr const int NotLoggedIn = 530;
    // Get static field: static public System.Net.FtpStatusCode NotLoggedIn
    static ::System::Net::FtpStatusCode _get_NotLoggedIn();
    // Set static field: static public System.Net.FtpStatusCode NotLoggedIn
    static void _set_NotLoggedIn(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode AccountNeeded
    static constexpr const int AccountNeeded = 532;
    // Get static field: static public System.Net.FtpStatusCode AccountNeeded
    static ::System::Net::FtpStatusCode _get_AccountNeeded();
    // Set static field: static public System.Net.FtpStatusCode AccountNeeded
    static void _set_AccountNeeded(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailable
    static constexpr const int ActionNotTakenFileUnavailable = 550;
    // Get static field: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailable
    static ::System::Net::FtpStatusCode _get_ActionNotTakenFileUnavailable();
    // Set static field: static public System.Net.FtpStatusCode ActionNotTakenFileUnavailable
    static void _set_ActionNotTakenFileUnavailable(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionAbortedUnknownPageType
    static constexpr const int ActionAbortedUnknownPageType = 551;
    // Get static field: static public System.Net.FtpStatusCode ActionAbortedUnknownPageType
    static ::System::Net::FtpStatusCode _get_ActionAbortedUnknownPageType();
    // Set static field: static public System.Net.FtpStatusCode ActionAbortedUnknownPageType
    static void _set_ActionAbortedUnknownPageType(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode FileActionAborted
    static constexpr const int FileActionAborted = 552;
    // Get static field: static public System.Net.FtpStatusCode FileActionAborted
    static ::System::Net::FtpStatusCode _get_FileActionAborted();
    // Set static field: static public System.Net.FtpStatusCode FileActionAborted
    static void _set_FileActionAborted(::System::Net::FtpStatusCode value);
    // static field const value: static public System.Net.FtpStatusCode ActionNotTakenFilenameNotAllowed
    static constexpr const int ActionNotTakenFilenameNotAllowed = 553;
    // Get static field: static public System.Net.FtpStatusCode ActionNotTakenFilenameNotAllowed
    static ::System::Net::FtpStatusCode _get_ActionNotTakenFilenameNotAllowed();
    // Set static field: static public System.Net.FtpStatusCode ActionNotTakenFilenameNotAllowed
    static void _set_ActionNotTakenFilenameNotAllowed(::System::Net::FtpStatusCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.FtpStatusCode
  #pragma pack(pop)
  static check_size<sizeof(FtpStatusCode), 0 + sizeof(int)> __System_Net_FtpStatusCodeSizeCheck;
  static_assert(sizeof(FtpStatusCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
