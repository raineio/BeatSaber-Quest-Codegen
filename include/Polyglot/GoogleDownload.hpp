// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: GoogleDownload
  class GoogleDownload;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::GoogleDownload);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::GoogleDownload*, "Polyglot", "GoogleDownload");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.GoogleDownload
  // [TokenAttribute] Offset: FFFFFFFF
  class GoogleDownload : public ::Il2CppObject {
    public:
    // Nested type: ::Polyglot::GoogleDownload::$DownloadSheet$d__0
    class $DownloadSheet$d__0;
    // static public System.Collections.IEnumerator DownloadSheet(System.String docsId, System.String sheetId, System.Action`1<System.String> done, Polyglot.GoogleDriveDownloadFormat format, System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x2ADD6D8
    static ::System::Collections::IEnumerator* DownloadSheet(::StringW docsId, ::StringW sheetId, ::System::Action_1<::StringW>* done, ::Polyglot::GoogleDriveDownloadFormat format, ::System::Func_2<float, bool>* progressbar);
  }; // Polyglot.GoogleDownload
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::GoogleDownload::DownloadSheet
// Il2CppName: DownloadSheet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::StringW, ::StringW, ::System::Action_1<::StringW>*, ::Polyglot::GoogleDriveDownloadFormat, ::System::Func_2<float, bool>*)>(&Polyglot::GoogleDownload::DownloadSheet)> {
  static const MethodInfo* get() {
    static auto* docsId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sheetId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* done = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("Polyglot", "GoogleDriveDownloadFormat")->byval_arg;
    static auto* progressbar = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload*), "DownloadSheet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{docsId, sheetId, done, format, progressbar});
  }
};
