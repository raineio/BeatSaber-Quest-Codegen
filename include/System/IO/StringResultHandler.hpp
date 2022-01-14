// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.SearchResultHandler`1
#include "System/IO/SearchResultHandler_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: StringResultHandler
  class StringResultHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::IO::StringResultHandler);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringResultHandler*, "System.IO", "StringResultHandler");
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.StringResultHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class StringResultHandler : public System::IO::SearchResultHandler_1<::StringW> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean _includeFiles
    // Size: 0x1
    // Offset: 0x10
    bool includeFiles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _includeDirs
    // Size: 0x1
    // Offset: 0x11
    bool includeDirs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean _includeFiles
    bool& dyn__includeFiles();
    // Get instance field reference: private System.Boolean _includeDirs
    bool& dyn__includeDirs();
    // System.Void .ctor(System.Boolean includeFiles, System.Boolean includeDirs)
    // Offset: 0x1A0926C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringResultHandler* New_ctor(bool includeFiles, bool includeDirs) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringResultHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringResultHandler*, creationType>(includeFiles, includeDirs)));
    }
    // System.String CreateObject(System.IO.SearchResult result)
    // Offset: 0x1A09350
    ::StringW CreateObject(System::IO::SearchResult* result);
    // override System.Boolean IsResultIncluded(System.IO.SearchResult result)
    // Offset: 0x1A092E0
    // Implemented from: System.IO.SearchResultHandler`1
    // Base method: System.Boolean SearchResultHandler_1::IsResultIncluded(System.IO.SearchResult result)
    bool IsResultIncluded(System::IO::SearchResult* result);
  }; // System.IO.StringResultHandler
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StringResultHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringResultHandler::CreateObject
// Il2CppName: CreateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::StringResultHandler::*)(System::IO::SearchResult*)>(&System::IO::StringResultHandler::CreateObject)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System.IO", "SearchResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringResultHandler*), "CreateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: System::IO::StringResultHandler::IsResultIncluded
// Il2CppName: IsResultIncluded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StringResultHandler::*)(System::IO::SearchResult*)>(&System::IO::StringResultHandler::IsResultIncluded)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System.IO", "SearchResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringResultHandler*), "IsResultIncluded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
