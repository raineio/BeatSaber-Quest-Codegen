// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LocalizationDocument);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationDocument*, "Polyglot", "LocalizationDocument");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationDocument
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizationDocument : public ::Il2CppObject {
    public:
    public:
    // private System.String docsId
    // Size: 0x8
    // Offset: 0x10
    ::StringW docsId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String sheetId
    // Size: 0x8
    // Offset: 0x18
    ::StringW sheetId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Polyglot.GoogleDriveDownloadFormat format
    // Size: 0x4
    // Offset: 0x20
    ::Polyglot::GoogleDriveDownloadFormat format;
    // Field size check
    static_assert(sizeof(::Polyglot::GoogleDriveDownloadFormat) == 0x4);
    // Padding between fields: format and: textAsset
    char __padding2[0x4] = {};
    // private UnityEngine.TextAsset textAsset
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::TextAsset* textAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private System.Boolean downloadOnStart
    // Size: 0x1
    // Offset: 0x30
    bool downloadOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String docsId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_docsId();
    // Get instance field reference: private System.String sheetId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sheetId();
    // Get instance field reference: private Polyglot.GoogleDriveDownloadFormat format
    [[deprecated("Use field access instead!")]] ::Polyglot::GoogleDriveDownloadFormat& dyn_format();
    // Get instance field reference: private UnityEngine.TextAsset textAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_textAsset();
    // Get instance field reference: private System.Boolean downloadOnStart
    [[deprecated("Use field access instead!")]] bool& dyn_downloadOnStart();
    // public UnityEngine.TextAsset get_TextAsset()
    // Offset: 0x2ADFA28
    ::UnityEngine::TextAsset* get_TextAsset();
    // public System.Void set_TextAsset(UnityEngine.TextAsset value)
    // Offset: 0x2ADFA30
    void set_TextAsset(::UnityEngine::TextAsset* value);
    // public System.String get_DocsId()
    // Offset: 0x2ADFA38
    ::StringW get_DocsId();
    // public System.Void set_DocsId(System.String value)
    // Offset: 0x2ADFA40
    void set_DocsId(::StringW value);
    // public System.String get_SheetId()
    // Offset: 0x2ADFA48
    ::StringW get_SheetId();
    // public System.Void set_SheetId(System.String value)
    // Offset: 0x2ADFA50
    void set_SheetId(::StringW value);
    // public Polyglot.GoogleDriveDownloadFormat get_Format()
    // Offset: 0x2ADFA58
    ::Polyglot::GoogleDriveDownloadFormat get_Format();
    // public System.Void set_Format(Polyglot.GoogleDriveDownloadFormat value)
    // Offset: 0x2ADFA60
    void set_Format(::Polyglot::GoogleDriveDownloadFormat value);
    // public System.Boolean get_DownloadOnStart()
    // Offset: 0x2ADFA68
    bool get_DownloadOnStart();
    // public System.Void set_DownloadOnStart(System.Boolean value)
    // Offset: 0x2ADFA70
    void set_DownloadOnStart(bool value);
    // public System.Void .ctor()
    // Offset: 0x2ADFA7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationDocument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizationDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationDocument*, creationType>()));
    }
  }; // Polyglot.LocalizationDocument
  #pragma pack(pop)
  static check_size<sizeof(LocalizationDocument), 48 + sizeof(bool)> __Polyglot_LocalizationDocumentSizeCheck;
  static_assert(sizeof(LocalizationDocument) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::get_TextAsset
// Il2CppName: get_TextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (Polyglot::LocalizationDocument::*)()>(&Polyglot::LocalizationDocument::get_TextAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "get_TextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::set_TextAsset
// Il2CppName: set_TextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationDocument::*)(::UnityEngine::TextAsset*)>(&Polyglot::LocalizationDocument::set_TextAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "set_TextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::get_DocsId
// Il2CppName: get_DocsId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Polyglot::LocalizationDocument::*)()>(&Polyglot::LocalizationDocument::get_DocsId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "get_DocsId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::set_DocsId
// Il2CppName: set_DocsId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationDocument::*)(::StringW)>(&Polyglot::LocalizationDocument::set_DocsId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "set_DocsId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::get_SheetId
// Il2CppName: get_SheetId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Polyglot::LocalizationDocument::*)()>(&Polyglot::LocalizationDocument::get_SheetId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "get_SheetId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::set_SheetId
// Il2CppName: set_SheetId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationDocument::*)(::StringW)>(&Polyglot::LocalizationDocument::set_SheetId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "set_SheetId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::GoogleDriveDownloadFormat (Polyglot::LocalizationDocument::*)()>(&Polyglot::LocalizationDocument::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationDocument::*)(::Polyglot::GoogleDriveDownloadFormat)>(&Polyglot::LocalizationDocument::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "GoogleDriveDownloadFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::get_DownloadOnStart
// Il2CppName: get_DownloadOnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizationDocument::*)()>(&Polyglot::LocalizationDocument::get_DownloadOnStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "get_DownloadOnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::set_DownloadOnStart
// Il2CppName: set_DownloadOnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationDocument::*)(bool)>(&Polyglot::LocalizationDocument::set_DownloadOnStart)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationDocument*), "set_DownloadOnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationDocument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
