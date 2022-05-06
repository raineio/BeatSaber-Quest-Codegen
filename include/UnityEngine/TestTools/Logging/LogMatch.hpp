// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Logging::LogMatch);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Logging::LogMatch*, "UnityEngine.TestTools.Logging", "LogMatch");
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogMatch
  // [TokenAttribute] Offset: FFFFFFFF
  class LogMatch : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean m_UseRegex
    // Size: 0x1
    // Offset: 0x10
    bool m_UseRegex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseRegex and: m_Message
    char __padding0[0x7] = {};
    // private System.String m_Message
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_MessageRegex
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_MessageRegex;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_LogType
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_LogType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Boolean m_UseRegex
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseRegex();
    // Get instance field reference: private System.String m_Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Message();
    // Get instance field reference: private System.String m_MessageRegex
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_MessageRegex();
    // Get instance field reference: private System.String m_LogType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_LogType();
    // public System.String get_Message()
    // Offset: 0x19834B4
    ::StringW get_Message();
    // public System.Text.RegularExpressions.Regex get_MessageRegex()
    // Offset: 0x19834BC
    ::System::Text::RegularExpressions::Regex* get_MessageRegex();
    // public System.Nullable`1<UnityEngine.LogType> get_LogType()
    // Offset: 0x1983534
    ::System::Nullable_1<::UnityEngine::LogType> get_LogType();
    // public System.Void .ctor()
    // Offset: 0x19837F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogMatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::Logging::LogMatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogMatch*, creationType>()));
    }
    // public System.Boolean Matches(UnityEngine.TestTools.Logging.LogEvent log)
    // Offset: 0x1983650
    bool Matches(::UnityEngine::TestTools::Logging::LogEvent* log);
    // public override System.String ToString()
    // Offset: 0x1983728
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.TestTools.Logging.LogMatch
  #pragma pack(pop)
  static check_size<sizeof(LogMatch), 40 + sizeof(::StringW)> __UnityEngine_TestTools_Logging_LogMatchSizeCheck;
  static_assert(sizeof(LogMatch) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_MessageRegex
// Il2CppName: get_MessageRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Regex* (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_MessageRegex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_MessageRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_LogType
// Il2CppName: get_LogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::LogType> (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_LogType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_LogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Logging::LogMatch::*)(::UnityEngine::TestTools::Logging::LogEvent*)>(&UnityEngine::TestTools::Logging::LogMatch::Matches)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
