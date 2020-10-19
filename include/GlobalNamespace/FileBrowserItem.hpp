// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FileBrowserItem
  class FileBrowserItem : public ::Il2CppObject {
    public:
    // private System.String <displayName>k__BackingField
    // Offset: 0x10
    ::Il2CppString* displayName;
    // private System.String <fullPath>k__BackingField
    // Offset: 0x18
    ::Il2CppString* fullPath;
    // private System.Boolean <isDirectory>k__BackingField
    // Offset: 0x20
    bool isDirectory;
    // public System.String get_displayName()
    // Offset: 0x20208FC
    ::Il2CppString* get_displayName();
    // private System.Void set_displayName(System.String value)
    // Offset: 0x2020904
    void set_displayName(::Il2CppString* value);
    // public System.String get_fullPath()
    // Offset: 0x202090C
    ::Il2CppString* get_fullPath();
    // private System.Void set_fullPath(System.String value)
    // Offset: 0x2020914
    void set_fullPath(::Il2CppString* value);
    // public System.Boolean get_isDirectory()
    // Offset: 0x202091C
    bool get_isDirectory();
    // private System.Void set_isDirectory(System.Boolean value)
    // Offset: 0x2020924
    void set_isDirectory(bool value);
    // public System.Void .ctor(System.String displayName, System.String fullPath, System.Boolean isDirectory)
    // Offset: 0x2020930
    static FileBrowserItem* New_ctor(::Il2CppString* displayName, ::Il2CppString* fullPath, bool isDirectory);
  }; // FileBrowserItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
#pragma pack(pop)
