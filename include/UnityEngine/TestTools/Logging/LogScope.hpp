// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogScope
  class LogScope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::Logging::LogScope);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope*, "UnityEngine.TestTools.Logging", "LogScope");
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope
  // [TokenAttribute] Offset: FFFFFFFF
  class LogScope : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: UnityEngine::TestTools::Logging::LogScope::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Object m_Lock
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_Lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean m_Disposed
    // Size: 0x1
    // Offset: 0x18
    bool m_Disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_NeedToProcessLogs
    // Size: 0x1
    // Offset: 0x19
    bool m_NeedToProcessLogs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_NeedToProcessLogs and: ExpectedLogs
    char __padding2[0x6] = {};
    // private System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> <ExpectedLogs>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* ExpectedLogs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <AllLogs>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* AllLogs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <FailingLogs>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* FailingLogs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>*) == 0x8);
    // private System.Boolean <IgnoreFailingMessages>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool IgnoreFailingMessages;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsNUnitException>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool IsNUnitException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsNUnitSuccessException>k__BackingField
    // Size: 0x1
    // Offset: 0x3A
    bool IsNUnitSuccessException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsNUnitInconclusiveException>k__BackingField
    // Size: 0x1
    // Offset: 0x3B
    bool IsNUnitInconclusiveException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsNUnitIgnoreException>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool IsNUnitIgnoreException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsNUnitIgnoreException and: NUnitExceptionMessage
    char __padding10[0x3] = {};
    // private System.String <NUnitExceptionMessage>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::StringW NUnitExceptionMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogScope> s_ActiveScopes
    static System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogScope*>* _get_s_ActiveScopes();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogScope> s_ActiveScopes
    static void _set_s_ActiveScopes(System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogScope*>* value);
    // Get instance field reference: private readonly System.Object m_Lock
    ::Il2CppObject*& dyn_m_Lock();
    // Get instance field reference: private System.Boolean m_Disposed
    bool& dyn_m_Disposed();
    // Get instance field reference: private System.Boolean m_NeedToProcessLogs
    bool& dyn_m_NeedToProcessLogs();
    // Get instance field reference: private System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> <ExpectedLogs>k__BackingField
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>*& dyn_$ExpectedLogs$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <AllLogs>k__BackingField
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>*& dyn_$AllLogs$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <FailingLogs>k__BackingField
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>*& dyn_$FailingLogs$k__BackingField();
    // Get instance field reference: private System.Boolean <IgnoreFailingMessages>k__BackingField
    bool& dyn_$IgnoreFailingMessages$k__BackingField();
    // Get instance field reference: private System.Boolean <IsNUnitException>k__BackingField
    bool& dyn_$IsNUnitException$k__BackingField();
    // Get instance field reference: private System.Boolean <IsNUnitSuccessException>k__BackingField
    bool& dyn_$IsNUnitSuccessException$k__BackingField();
    // Get instance field reference: private System.Boolean <IsNUnitInconclusiveException>k__BackingField
    bool& dyn_$IsNUnitInconclusiveException$k__BackingField();
    // Get instance field reference: private System.Boolean <IsNUnitIgnoreException>k__BackingField
    bool& dyn_$IsNUnitIgnoreException$k__BackingField();
    // Get instance field reference: private System.String <NUnitExceptionMessage>k__BackingField
    ::StringW& dyn_$NUnitExceptionMessage$k__BackingField();
    // public System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> get_ExpectedLogs()
    // Offset: 0x16D0258
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* get_ExpectedLogs();
    // public System.Void set_ExpectedLogs(System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> value)
    // Offset: 0x16D0260
    void set_ExpectedLogs(System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* value);
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> get_AllLogs()
    // Offset: 0x16D0268
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* get_AllLogs();
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> get_FailingLogs()
    // Offset: 0x16D0270
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* get_FailingLogs();
    // public System.Boolean get_IgnoreFailingMessages()
    // Offset: 0x16D0278
    bool get_IgnoreFailingMessages();
    // public System.Void set_IgnoreFailingMessages(System.Boolean value)
    // Offset: 0x16D0280
    void set_IgnoreFailingMessages(bool value);
    // private System.Void set_IsNUnitException(System.Boolean value)
    // Offset: 0x16D028C
    void set_IsNUnitException(bool value);
    // private System.Void set_IsNUnitSuccessException(System.Boolean value)
    // Offset: 0x16D0298
    void set_IsNUnitSuccessException(bool value);
    // private System.Void set_IsNUnitInconclusiveException(System.Boolean value)
    // Offset: 0x16D02A4
    void set_IsNUnitInconclusiveException(bool value);
    // private System.Void set_IsNUnitIgnoreException(System.Boolean value)
    // Offset: 0x16D02B0
    void set_IsNUnitIgnoreException(bool value);
    // private System.Void set_NUnitExceptionMessage(System.String value)
    // Offset: 0x16D02BC
    void set_NUnitExceptionMessage(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x16D0E90
    static void _cctor();
    // private System.Void Activate()
    // Offset: 0x16D02C4
    void Activate();
    // private System.Void Deactivate()
    // Offset: 0x16D0438
    void Deactivate();
    // static private System.Void RegisterScope(UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0x16D03C0
    static void RegisterScope(UnityEngine::TestTools::Logging::LogScope* logScope);
    // static private System.Void UnregisterScope(UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0x16D04FC
    static void UnregisterScope(UnityEngine::TestTools::Logging::LogScope* logScope);
    // public System.Void AddLog(System.String message, System.String stacktrace, UnityEngine.LogType type)
    // Offset: 0x16D0574
    void AddLog(::StringW message, ::StringW stacktrace, UnityEngine::LogType type);
    // static private System.Boolean IsNUnitResultStateException(System.String stacktrace, UnityEngine.LogType logType)
    // Offset: 0x16D08A0
    static bool IsNUnitResultStateException(::StringW stacktrace, UnityEngine::LogType logType);
    // static private System.Boolean IsFailingLog(UnityEngine.LogType type)
    // Offset: 0x16D093C
    static bool IsFailingLog(UnityEngine::LogType type);
    // public System.Void Dispose()
    // Offset: 0x16BF3A8
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16D0958
    void Dispose(bool disposing);
    // public System.Boolean AnyFailingLogs()
    // Offset: 0x16BF350
    bool AnyFailingLogs();
    // public System.Void ProcessExpectedLogs()
    // Offset: 0x16D0974
    void ProcessExpectedLogs();
    // public System.Void NoUnexpectedReceived()
    // Offset: 0x16D0CE4
    void NoUnexpectedReceived();
    // public System.Void .ctor()
    // Offset: 0x16BF26C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogScope* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Logging::LogScope::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogScope*, creationType>()));
    }
  }; // UnityEngine.TestTools.Logging.LogScope
  #pragma pack(pop)
  static check_size<sizeof(LogScope), 64 + sizeof(::StringW)> __UnityEngine_TestTools_Logging_LogScopeSizeCheck;
  static_assert(sizeof(LogScope) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::get_ExpectedLogs
// Il2CppName: get_ExpectedLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::get_ExpectedLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "get_ExpectedLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_ExpectedLogs
// Il2CppName: set_ExpectedLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>*)>(&UnityEngine::TestTools::Logging::LogScope::set_ExpectedLogs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Queue`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogMatch")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_ExpectedLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::get_AllLogs
// Il2CppName: get_AllLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::get_AllLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "get_AllLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::get_FailingLogs
// Il2CppName: get_FailingLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::get_FailingLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "get_FailingLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::get_IgnoreFailingMessages
// Il2CppName: get_IgnoreFailingMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::get_IgnoreFailingMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "get_IgnoreFailingMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_IgnoreFailingMessages
// Il2CppName: set_IgnoreFailingMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::set_IgnoreFailingMessages)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_IgnoreFailingMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_IsNUnitException
// Il2CppName: set_IsNUnitException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::set_IsNUnitException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_IsNUnitException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_IsNUnitSuccessException
// Il2CppName: set_IsNUnitSuccessException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::set_IsNUnitSuccessException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_IsNUnitSuccessException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_IsNUnitInconclusiveException
// Il2CppName: set_IsNUnitInconclusiveException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::set_IsNUnitInconclusiveException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_IsNUnitInconclusiveException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_IsNUnitIgnoreException
// Il2CppName: set_IsNUnitIgnoreException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::set_IsNUnitIgnoreException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_IsNUnitIgnoreException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::set_NUnitExceptionMessage
// Il2CppName: set_NUnitExceptionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(::StringW)>(&UnityEngine::TestTools::Logging::LogScope::set_NUnitExceptionMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "set_NUnitExceptionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::Logging::LogScope::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::RegisterScope
// Il2CppName: RegisterScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::TestTools::Logging::LogScope*)>(&UnityEngine::TestTools::Logging::LogScope::RegisterScope)> {
  static const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "RegisterScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::UnregisterScope
// Il2CppName: UnregisterScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::TestTools::Logging::LogScope*)>(&UnityEngine::TestTools::Logging::LogScope::UnregisterScope)> {
  static const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "UnregisterScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::AddLog
// Il2CppName: AddLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(::StringW, ::StringW, UnityEngine::LogType)>(&UnityEngine::TestTools::Logging::LogScope::AddLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stacktrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "AddLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, stacktrace, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::IsNUnitResultStateException
// Il2CppName: IsNUnitResultStateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, UnityEngine::LogType)>(&UnityEngine::TestTools::Logging::LogScope::IsNUnitResultStateException)> {
  static const MethodInfo* get() {
    static auto* stacktrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "IsNUnitResultStateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stacktrace, logType});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::IsFailingLog
// Il2CppName: IsFailingLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::LogType)>(&UnityEngine::TestTools::Logging::LogScope::IsFailingLog)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "IsFailingLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)(bool)>(&UnityEngine::TestTools::Logging::LogScope::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::AnyFailingLogs
// Il2CppName: AnyFailingLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::AnyFailingLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "AnyFailingLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::ProcessExpectedLogs
// Il2CppName: ProcessExpectedLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::ProcessExpectedLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "ProcessExpectedLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::NoUnexpectedReceived
// Il2CppName: NoUnexpectedReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Logging::LogScope::*)()>(&UnityEngine::TestTools::Logging::LogScope::NoUnexpectedReceived)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope*), "NoUnexpectedReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
