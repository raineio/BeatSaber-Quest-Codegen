// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: UnexpectedLogMessageException
  class UnexpectedLogMessageException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*, "UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException");
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  // [TokenAttribute] Offset: FFFFFFFF
  class UnexpectedLogMessageException : public ::NUnit::Framework::ResultStateException {
    public:
    public:
    // public UnityEngine.TestTools.Logging.LogMatch LogEvent
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::TestTools::Logging::LogMatch* LogEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::Logging::LogMatch*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::TestTools::Logging::LogMatch*
    constexpr operator ::UnityEngine::TestTools::Logging::LogMatch*() const noexcept {
      return LogEvent;
    }
    // Get instance field reference: public UnityEngine.TestTools.Logging.LogMatch LogEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::Logging::LogMatch*& dyn_LogEvent();
    // public System.Void .ctor(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x2B746F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnexpectedLogMessageException* New_ctor(::UnityEngine::TestTools::Logging::LogMatch* log) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnexpectedLogMessageException*, creationType>(log)));
    }
    // static private System.String BuildMessage(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x2B7472C
    static ::StringW BuildMessage(::UnityEngine::TestTools::Logging::LogMatch* log);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x2B74780
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    ::NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0x2B747E8
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::StringW get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  #pragma pack(pop)
  static check_size<sizeof(UnexpectedLogMessageException), 136 + sizeof(::UnityEngine::TestTools::Logging::LogMatch*)> __UnityEngine_TestTools_TestRunner_UnexpectedLogMessageExceptionSizeCheck;
  static_assert(sizeof(UnexpectedLogMessageException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::BuildMessage
// Il2CppName: BuildMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::TestTools::Logging::LogMatch*)>(&UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::BuildMessage)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogMatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*), "BuildMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ResultState* (UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::*)()>(&UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::*)()>(&UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
