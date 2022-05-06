// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Guid/System.GuidParseThrowStyle
#include "System/Guid_GuidParseThrowStyle.hpp"
// Including type: System.Guid/System.ParseFailureKind
#include "System/Guid_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Guid::GuidResult, "System", "Guid/GuidResult");
// Type namespace: System
namespace System {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Guid/System.GuidResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct Guid::GuidResult/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Guid parsedGuid
    // Size: 0x10
    // Offset: 0x0
    ::System::Guid parsedGuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // System.Guid/System.GuidParseThrowStyle throwStyle
    // Size: 0x4
    // Offset: 0x10
    ::System::Guid::GuidParseThrowStyle throwStyle;
    // Field size check
    static_assert(sizeof(::System::Guid::GuidParseThrowStyle) == 0x4);
    // System.Guid/System.ParseFailureKind m_failure
    // Size: 0x4
    // Offset: 0x14
    ::System::Guid::ParseFailureKind m_failure;
    // Field size check
    static_assert(sizeof(::System::Guid::ParseFailureKind) == 0x4);
    // System.String m_failureMessageID
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_failureMessageID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object m_failureMessageFormatArgument
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_failureMessageFormatArgument;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String m_failureArgumentName
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_failureArgumentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Exception m_innerException
    // Size: 0x8
    // Offset: 0x30
    ::System::Exception* m_innerException;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Creating value type constructor for type: GuidResult
    constexpr GuidResult(::System::Guid parsedGuid_ = {}, ::System::Guid::GuidParseThrowStyle throwStyle_ = {}, ::System::Guid::ParseFailureKind m_failure_ = {}, ::StringW m_failureMessageID_ = {}, ::Il2CppObject* m_failureMessageFormatArgument_ = {}, ::StringW m_failureArgumentName_ = {}, ::System::Exception* m_innerException_ = {}) noexcept : parsedGuid{parsedGuid_}, throwStyle{throwStyle_}, m_failure{m_failure_}, m_failureMessageID{m_failureMessageID_}, m_failureMessageFormatArgument{m_failureMessageFormatArgument_}, m_failureArgumentName{m_failureArgumentName_}, m_innerException{m_innerException_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Guid parsedGuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_parsedGuid();
    // Get instance field reference: System.Guid/System.GuidParseThrowStyle throwStyle
    [[deprecated("Use field access instead!")]] ::System::Guid::GuidParseThrowStyle& dyn_throwStyle();
    // Get instance field reference: System.Guid/System.ParseFailureKind m_failure
    [[deprecated("Use field access instead!")]] ::System::Guid::ParseFailureKind& dyn_m_failure();
    // Get instance field reference: System.String m_failureMessageID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_failureMessageID();
    // Get instance field reference: System.Object m_failureMessageFormatArgument
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_failureMessageFormatArgument();
    // Get instance field reference: System.String m_failureArgumentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_failureArgumentName();
    // Get instance field reference: System.Exception m_innerException
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_m_innerException();
    // System.Void Init(System.Guid/System.GuidParseThrowStyle canThrow)
    // Offset: 0x1FA14E0
    void Init(::System::Guid::GuidParseThrowStyle canThrow);
    // System.Void SetFailure(System.Exception nativeException)
    // Offset: 0x1FA2FB4
    void SetFailure(::System::Exception* nativeException);
    // System.Void SetFailure(System.Guid/System.ParseFailureKind failure, System.String failureMessageID)
    // Offset: 0x1FA1B74
    void SetFailure(::System::Guid::ParseFailureKind failure, ::StringW failureMessageID);
    // System.Void SetFailure(System.Guid/System.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0x1FA2A74
    void SetFailure(::System::Guid::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Void SetFailure(System.Guid/System.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument, System.String failureArgumentName, System.Exception innerException)
    // Offset: 0x1FA27B4
    void SetFailure(::System::Guid::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument, ::StringW failureArgumentName, ::System::Exception* innerException);
    // System.Exception GetGuidParseException()
    // Offset: 0x1FA17C8
    ::System::Exception* GetGuidParseException();
  }; // System.Guid/System.GuidResult
  #pragma pack(pop)
  static check_size<sizeof(Guid::GuidResult), 48 + sizeof(::System::Exception*)> __System_Guid_GuidResultSizeCheck;
  static_assert(sizeof(Guid::GuidResult) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Guid::GuidResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Guid::GuidResult::*)(::System::Guid::GuidParseThrowStyle)>(&System::Guid::GuidResult::Init)> {
  static const MethodInfo* get() {
    static auto* canThrow = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidParseThrowStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canThrow});
  }
};
// Writing MetadataGetter for method: System::Guid::GuidResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Guid::GuidResult::*)(::System::Exception*)>(&System::Guid::GuidResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* nativeException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeException});
  }
};
// Writing MetadataGetter for method: System::Guid::GuidResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Guid::GuidResult::*)(::System::Guid::ParseFailureKind, ::StringW)>(&System::Guid::GuidResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Guid/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID});
  }
};
// Writing MetadataGetter for method: System::Guid::GuidResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Guid::GuidResult::*)(::System::Guid::ParseFailureKind, ::StringW, ::Il2CppObject*)>(&System::Guid::GuidResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Guid/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument});
  }
};
// Writing MetadataGetter for method: System::Guid::GuidResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Guid::GuidResult::*)(::System::Guid::ParseFailureKind, ::StringW, ::Il2CppObject*, ::StringW, ::System::Exception*)>(&System::Guid::GuidResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Guid/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* failureArgumentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument, failureArgumentName, innerException});
  }
};
// Writing MetadataGetter for method: System::Guid::GuidResult::GetGuidParseException
// Il2CppName: GetGuidParseException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Guid::GuidResult::*)()>(&System::Guid::GuidResult::GetGuidParseException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid::GuidResult), "GetGuidParseException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
