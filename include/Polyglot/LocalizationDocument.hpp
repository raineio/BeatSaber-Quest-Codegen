// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
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
  // Autogenerated type: Polyglot.LocalizationDocument
  class LocalizationDocument : public ::Il2CppObject {
    public:
    // private System.String docsId
    // Offset: 0x10
    ::Il2CppString* docsId;
    // private System.String sheetId
    // Offset: 0x18
    ::Il2CppString* sheetId;
    // private Polyglot.GoogleDriveDownloadFormat format
    // Offset: 0x20
    Polyglot::GoogleDriveDownloadFormat format;
    // private UnityEngine.TextAsset textAsset
    // Offset: 0x28
    UnityEngine::TextAsset* textAsset;
    // private System.Boolean downloadOnStart
    // Offset: 0x30
    bool downloadOnStart;
    // public UnityEngine.TextAsset get_TextAsset()
    // Offset: 0x1EEF3CC
    UnityEngine::TextAsset* get_TextAsset();
    // public System.Void set_TextAsset(UnityEngine.TextAsset value)
    // Offset: 0x1EEF3D4
    void set_TextAsset(UnityEngine::TextAsset* value);
    // public System.String get_DocsId()
    // Offset: 0x1EEF3DC
    ::Il2CppString* get_DocsId();
    // public System.Void set_DocsId(System.String value)
    // Offset: 0x1EEF3E4
    void set_DocsId(::Il2CppString* value);
    // public System.String get_SheetId()
    // Offset: 0x1EEF3EC
    ::Il2CppString* get_SheetId();
    // public System.Void set_SheetId(System.String value)
    // Offset: 0x1EEF3F4
    void set_SheetId(::Il2CppString* value);
    // public Polyglot.GoogleDriveDownloadFormat get_Format()
    // Offset: 0x1EEF3FC
    Polyglot::GoogleDriveDownloadFormat get_Format();
    // public System.Void set_Format(Polyglot.GoogleDriveDownloadFormat value)
    // Offset: 0x1EEF404
    void set_Format(Polyglot::GoogleDriveDownloadFormat value);
    // public System.Boolean get_DownloadOnStart()
    // Offset: 0x1EEF40C
    bool get_DownloadOnStart();
    // public System.Void set_DownloadOnStart(System.Boolean value)
    // Offset: 0x1EEF414
    void set_DownloadOnStart(bool value);
    // public System.Void .ctor()
    // Offset: 0x1EEF420
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalizationDocument* New_ctor();
  }; // Polyglot.LocalizationDocument
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationDocument*, "Polyglot", "LocalizationDocument");
#pragma pack(pop)
