// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Guid/GuidParseThrowStyle
#include "System/Guid_GuidParseThrowStyle.hpp"
// Including type: System.Guid/ParseFailureKind
#include "System/Guid_ParseFailureKind.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Guid/GuidResult
  struct Guid::GuidResult : public System::ValueType {
    public:
    // System.Guid parsedGuid
    // Offset: 0x0
    System::Guid parsedGuid;
    // System.Guid/GuidParseThrowStyle throwStyle
    // Offset: 0x10
    System::Guid::GuidParseThrowStyle throwStyle;
    // System.Guid/ParseFailureKind m_failure
    // Offset: 0x14
    System::Guid::ParseFailureKind m_failure;
    // System.String m_failureMessageID
    // Offset: 0x18
    ::Il2CppString* m_failureMessageID;
    // System.Object m_failureMessageFormatArgument
    // Offset: 0x20
    ::Il2CppObject* m_failureMessageFormatArgument;
    // System.String m_failureArgumentName
    // Offset: 0x28
    ::Il2CppString* m_failureArgumentName;
    // System.Exception m_innerException
    // Offset: 0x30
    System::Exception* m_innerException;
    // Creating value type constructor for type: GuidResult
    constexpr GuidResult(System::Guid parsedGuid_ = {}, System::Guid::GuidParseThrowStyle throwStyle_ = {}, System::Guid::ParseFailureKind m_failure_ = {}, ::Il2CppString* m_failureMessageID_ = {}, ::Il2CppObject* m_failureMessageFormatArgument_ = {}, ::Il2CppString* m_failureArgumentName_ = {}, System::Exception* m_innerException_ = {}) noexcept : parsedGuid{parsedGuid_}, throwStyle{throwStyle_}, m_failure{m_failure_}, m_failureMessageID{m_failureMessageID_}, m_failureMessageFormatArgument{m_failureMessageFormatArgument_}, m_failureArgumentName{m_failureArgumentName_}, m_innerException{m_innerException_} {}
    // System.Void Init(System.Guid/GuidParseThrowStyle canThrow)
    // Offset: 0xC703E4
    void Init(System::Guid::GuidParseThrowStyle canThrow);
    // System.Void SetFailure(System.Exception nativeException)
    // Offset: 0xC703EC
    void SetFailure(System::Exception* nativeException);
    // System.Void SetFailure(System.Guid/ParseFailureKind failure, System.String failureMessageID)
    // Offset: 0xC703FC
    void SetFailure(System::Guid::ParseFailureKind failure, ::Il2CppString* failureMessageID);
    // System.Void SetFailure(System.Guid/ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0xC70410
    void SetFailure(System::Guid::ParseFailureKind failure, ::Il2CppString* failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Void SetFailure(System.Guid/ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument, System.String failureArgumentName, System.Exception innerException)
    // Offset: 0xC70420
    void SetFailure(System::Guid::ParseFailureKind failure, ::Il2CppString* failureMessageID, ::Il2CppObject* failureMessageFormatArgument, ::Il2CppString* failureArgumentName, System::Exception* innerException);
    // System.Exception GetGuidParseException()
    // Offset: 0xC70428
    System::Exception* GetGuidParseException();
  }; // System.Guid/GuidResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Guid::GuidResult, "System", "Guid/GuidResult");
#pragma pack(pop)
