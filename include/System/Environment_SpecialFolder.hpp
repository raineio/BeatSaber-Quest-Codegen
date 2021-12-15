// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Environment
#include "System/Environment.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: SpecialFolder
  struct SpecialFolder;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Environment::SpecialFolder, "System", "Environment/SpecialFolder");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Environment/System.SpecialFolder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9E1AC
  struct Environment::SpecialFolder/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpecialFolder
    constexpr SpecialFolder(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Environment/System.SpecialFolder MyDocuments
    static constexpr const int MyDocuments = 5;
    // Get static field: static public System.Environment/System.SpecialFolder MyDocuments
    static System::Environment::SpecialFolder _get_MyDocuments();
    // Set static field: static public System.Environment/System.SpecialFolder MyDocuments
    static void _set_MyDocuments(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Desktop
    static constexpr const int Desktop = 0;
    // Get static field: static public System.Environment/System.SpecialFolder Desktop
    static System::Environment::SpecialFolder _get_Desktop();
    // Set static field: static public System.Environment/System.SpecialFolder Desktop
    static void _set_Desktop(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder MyComputer
    static constexpr const int MyComputer = 17;
    // Get static field: static public System.Environment/System.SpecialFolder MyComputer
    static System::Environment::SpecialFolder _get_MyComputer();
    // Set static field: static public System.Environment/System.SpecialFolder MyComputer
    static void _set_MyComputer(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Programs
    static constexpr const int Programs = 2;
    // Get static field: static public System.Environment/System.SpecialFolder Programs
    static System::Environment::SpecialFolder _get_Programs();
    // Set static field: static public System.Environment/System.SpecialFolder Programs
    static void _set_Programs(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Personal
    static constexpr const int Personal = 5;
    // Get static field: static public System.Environment/System.SpecialFolder Personal
    static System::Environment::SpecialFolder _get_Personal();
    // Set static field: static public System.Environment/System.SpecialFolder Personal
    static void _set_Personal(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Favorites
    static constexpr const int Favorites = 6;
    // Get static field: static public System.Environment/System.SpecialFolder Favorites
    static System::Environment::SpecialFolder _get_Favorites();
    // Set static field: static public System.Environment/System.SpecialFolder Favorites
    static void _set_Favorites(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Startup
    static constexpr const int Startup = 7;
    // Get static field: static public System.Environment/System.SpecialFolder Startup
    static System::Environment::SpecialFolder _get_Startup();
    // Set static field: static public System.Environment/System.SpecialFolder Startup
    static void _set_Startup(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Recent
    static constexpr const int Recent = 8;
    // Get static field: static public System.Environment/System.SpecialFolder Recent
    static System::Environment::SpecialFolder _get_Recent();
    // Set static field: static public System.Environment/System.SpecialFolder Recent
    static void _set_Recent(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder SendTo
    static constexpr const int SendTo = 9;
    // Get static field: static public System.Environment/System.SpecialFolder SendTo
    static System::Environment::SpecialFolder _get_SendTo();
    // Set static field: static public System.Environment/System.SpecialFolder SendTo
    static void _set_SendTo(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder StartMenu
    static constexpr const int StartMenu = 11;
    // Get static field: static public System.Environment/System.SpecialFolder StartMenu
    static System::Environment::SpecialFolder _get_StartMenu();
    // Set static field: static public System.Environment/System.SpecialFolder StartMenu
    static void _set_StartMenu(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder MyMusic
    static constexpr const int MyMusic = 13;
    // Get static field: static public System.Environment/System.SpecialFolder MyMusic
    static System::Environment::SpecialFolder _get_MyMusic();
    // Set static field: static public System.Environment/System.SpecialFolder MyMusic
    static void _set_MyMusic(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder DesktopDirectory
    static constexpr const int DesktopDirectory = 16;
    // Get static field: static public System.Environment/System.SpecialFolder DesktopDirectory
    static System::Environment::SpecialFolder _get_DesktopDirectory();
    // Set static field: static public System.Environment/System.SpecialFolder DesktopDirectory
    static void _set_DesktopDirectory(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Templates
    static constexpr const int Templates = 21;
    // Get static field: static public System.Environment/System.SpecialFolder Templates
    static System::Environment::SpecialFolder _get_Templates();
    // Set static field: static public System.Environment/System.SpecialFolder Templates
    static void _set_Templates(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder ApplicationData
    static constexpr const int ApplicationData = 26;
    // Get static field: static public System.Environment/System.SpecialFolder ApplicationData
    static System::Environment::SpecialFolder _get_ApplicationData();
    // Set static field: static public System.Environment/System.SpecialFolder ApplicationData
    static void _set_ApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder LocalApplicationData
    static constexpr const int LocalApplicationData = 28;
    // Get static field: static public System.Environment/System.SpecialFolder LocalApplicationData
    static System::Environment::SpecialFolder _get_LocalApplicationData();
    // Set static field: static public System.Environment/System.SpecialFolder LocalApplicationData
    static void _set_LocalApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder InternetCache
    static constexpr const int InternetCache = 32;
    // Get static field: static public System.Environment/System.SpecialFolder InternetCache
    static System::Environment::SpecialFolder _get_InternetCache();
    // Set static field: static public System.Environment/System.SpecialFolder InternetCache
    static void _set_InternetCache(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Cookies
    static constexpr const int Cookies = 33;
    // Get static field: static public System.Environment/System.SpecialFolder Cookies
    static System::Environment::SpecialFolder _get_Cookies();
    // Set static field: static public System.Environment/System.SpecialFolder Cookies
    static void _set_Cookies(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder History
    static constexpr const int History = 34;
    // Get static field: static public System.Environment/System.SpecialFolder History
    static System::Environment::SpecialFolder _get_History();
    // Set static field: static public System.Environment/System.SpecialFolder History
    static void _set_History(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonApplicationData
    static constexpr const int CommonApplicationData = 35;
    // Get static field: static public System.Environment/System.SpecialFolder CommonApplicationData
    static System::Environment::SpecialFolder _get_CommonApplicationData();
    // Set static field: static public System.Environment/System.SpecialFolder CommonApplicationData
    static void _set_CommonApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder System
    static constexpr const int System = 37;
    // Get static field: static public System.Environment/System.SpecialFolder System
    static System::Environment::SpecialFolder _get_System();
    // Set static field: static public System.Environment/System.SpecialFolder System
    static void _set_System(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder ProgramFiles
    static constexpr const int ProgramFiles = 38;
    // Get static field: static public System.Environment/System.SpecialFolder ProgramFiles
    static System::Environment::SpecialFolder _get_ProgramFiles();
    // Set static field: static public System.Environment/System.SpecialFolder ProgramFiles
    static void _set_ProgramFiles(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder MyPictures
    static constexpr const int MyPictures = 39;
    // Get static field: static public System.Environment/System.SpecialFolder MyPictures
    static System::Environment::SpecialFolder _get_MyPictures();
    // Set static field: static public System.Environment/System.SpecialFolder MyPictures
    static void _set_MyPictures(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonProgramFiles
    static constexpr const int CommonProgramFiles = 43;
    // Get static field: static public System.Environment/System.SpecialFolder CommonProgramFiles
    static System::Environment::SpecialFolder _get_CommonProgramFiles();
    // Set static field: static public System.Environment/System.SpecialFolder CommonProgramFiles
    static void _set_CommonProgramFiles(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder MyVideos
    static constexpr const int MyVideos = 14;
    // Get static field: static public System.Environment/System.SpecialFolder MyVideos
    static System::Environment::SpecialFolder _get_MyVideos();
    // Set static field: static public System.Environment/System.SpecialFolder MyVideos
    static void _set_MyVideos(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder NetworkShortcuts
    static constexpr const int NetworkShortcuts = 19;
    // Get static field: static public System.Environment/System.SpecialFolder NetworkShortcuts
    static System::Environment::SpecialFolder _get_NetworkShortcuts();
    // Set static field: static public System.Environment/System.SpecialFolder NetworkShortcuts
    static void _set_NetworkShortcuts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Fonts
    static constexpr const int Fonts = 20;
    // Get static field: static public System.Environment/System.SpecialFolder Fonts
    static System::Environment::SpecialFolder _get_Fonts();
    // Set static field: static public System.Environment/System.SpecialFolder Fonts
    static void _set_Fonts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonStartMenu
    static constexpr const int CommonStartMenu = 22;
    // Get static field: static public System.Environment/System.SpecialFolder CommonStartMenu
    static System::Environment::SpecialFolder _get_CommonStartMenu();
    // Set static field: static public System.Environment/System.SpecialFolder CommonStartMenu
    static void _set_CommonStartMenu(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonPrograms
    static constexpr const int CommonPrograms = 23;
    // Get static field: static public System.Environment/System.SpecialFolder CommonPrograms
    static System::Environment::SpecialFolder _get_CommonPrograms();
    // Set static field: static public System.Environment/System.SpecialFolder CommonPrograms
    static void _set_CommonPrograms(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonStartup
    static constexpr const int CommonStartup = 24;
    // Get static field: static public System.Environment/System.SpecialFolder CommonStartup
    static System::Environment::SpecialFolder _get_CommonStartup();
    // Set static field: static public System.Environment/System.SpecialFolder CommonStartup
    static void _set_CommonStartup(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonDesktopDirectory
    static constexpr const int CommonDesktopDirectory = 25;
    // Get static field: static public System.Environment/System.SpecialFolder CommonDesktopDirectory
    static System::Environment::SpecialFolder _get_CommonDesktopDirectory();
    // Set static field: static public System.Environment/System.SpecialFolder CommonDesktopDirectory
    static void _set_CommonDesktopDirectory(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder PrinterShortcuts
    static constexpr const int PrinterShortcuts = 27;
    // Get static field: static public System.Environment/System.SpecialFolder PrinterShortcuts
    static System::Environment::SpecialFolder _get_PrinterShortcuts();
    // Set static field: static public System.Environment/System.SpecialFolder PrinterShortcuts
    static void _set_PrinterShortcuts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Windows
    static constexpr const int Windows = 36;
    // Get static field: static public System.Environment/System.SpecialFolder Windows
    static System::Environment::SpecialFolder _get_Windows();
    // Set static field: static public System.Environment/System.SpecialFolder Windows
    static void _set_Windows(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder UserProfile
    static constexpr const int UserProfile = 40;
    // Get static field: static public System.Environment/System.SpecialFolder UserProfile
    static System::Environment::SpecialFolder _get_UserProfile();
    // Set static field: static public System.Environment/System.SpecialFolder UserProfile
    static void _set_UserProfile(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder SystemX86
    static constexpr const int SystemX86 = 41;
    // Get static field: static public System.Environment/System.SpecialFolder SystemX86
    static System::Environment::SpecialFolder _get_SystemX86();
    // Set static field: static public System.Environment/System.SpecialFolder SystemX86
    static void _set_SystemX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder ProgramFilesX86
    static constexpr const int ProgramFilesX86 = 42;
    // Get static field: static public System.Environment/System.SpecialFolder ProgramFilesX86
    static System::Environment::SpecialFolder _get_ProgramFilesX86();
    // Set static field: static public System.Environment/System.SpecialFolder ProgramFilesX86
    static void _set_ProgramFilesX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonProgramFilesX86
    static constexpr const int CommonProgramFilesX86 = 44;
    // Get static field: static public System.Environment/System.SpecialFolder CommonProgramFilesX86
    static System::Environment::SpecialFolder _get_CommonProgramFilesX86();
    // Set static field: static public System.Environment/System.SpecialFolder CommonProgramFilesX86
    static void _set_CommonProgramFilesX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonTemplates
    static constexpr const int CommonTemplates = 45;
    // Get static field: static public System.Environment/System.SpecialFolder CommonTemplates
    static System::Environment::SpecialFolder _get_CommonTemplates();
    // Set static field: static public System.Environment/System.SpecialFolder CommonTemplates
    static void _set_CommonTemplates(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonDocuments
    static constexpr const int CommonDocuments = 46;
    // Get static field: static public System.Environment/System.SpecialFolder CommonDocuments
    static System::Environment::SpecialFolder _get_CommonDocuments();
    // Set static field: static public System.Environment/System.SpecialFolder CommonDocuments
    static void _set_CommonDocuments(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonAdminTools
    static constexpr const int CommonAdminTools = 47;
    // Get static field: static public System.Environment/System.SpecialFolder CommonAdminTools
    static System::Environment::SpecialFolder _get_CommonAdminTools();
    // Set static field: static public System.Environment/System.SpecialFolder CommonAdminTools
    static void _set_CommonAdminTools(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder AdminTools
    static constexpr const int AdminTools = 48;
    // Get static field: static public System.Environment/System.SpecialFolder AdminTools
    static System::Environment::SpecialFolder _get_AdminTools();
    // Set static field: static public System.Environment/System.SpecialFolder AdminTools
    static void _set_AdminTools(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonMusic
    static constexpr const int CommonMusic = 53;
    // Get static field: static public System.Environment/System.SpecialFolder CommonMusic
    static System::Environment::SpecialFolder _get_CommonMusic();
    // Set static field: static public System.Environment/System.SpecialFolder CommonMusic
    static void _set_CommonMusic(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonPictures
    static constexpr const int CommonPictures = 54;
    // Get static field: static public System.Environment/System.SpecialFolder CommonPictures
    static System::Environment::SpecialFolder _get_CommonPictures();
    // Set static field: static public System.Environment/System.SpecialFolder CommonPictures
    static void _set_CommonPictures(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonVideos
    static constexpr const int CommonVideos = 55;
    // Get static field: static public System.Environment/System.SpecialFolder CommonVideos
    static System::Environment::SpecialFolder _get_CommonVideos();
    // Set static field: static public System.Environment/System.SpecialFolder CommonVideos
    static void _set_CommonVideos(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder Resources
    static constexpr const int Resources = 56;
    // Get static field: static public System.Environment/System.SpecialFolder Resources
    static System::Environment::SpecialFolder _get_Resources();
    // Set static field: static public System.Environment/System.SpecialFolder Resources
    static void _set_Resources(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder LocalizedResources
    static constexpr const int LocalizedResources = 57;
    // Get static field: static public System.Environment/System.SpecialFolder LocalizedResources
    static System::Environment::SpecialFolder _get_LocalizedResources();
    // Set static field: static public System.Environment/System.SpecialFolder LocalizedResources
    static void _set_LocalizedResources(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CommonOemLinks
    static constexpr const int CommonOemLinks = 58;
    // Get static field: static public System.Environment/System.SpecialFolder CommonOemLinks
    static System::Environment::SpecialFolder _get_CommonOemLinks();
    // Set static field: static public System.Environment/System.SpecialFolder CommonOemLinks
    static void _set_CommonOemLinks(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/System.SpecialFolder CDBurning
    static constexpr const int CDBurning = 59;
    // Get static field: static public System.Environment/System.SpecialFolder CDBurning
    static System::Environment::SpecialFolder _get_CDBurning();
    // Set static field: static public System.Environment/System.SpecialFolder CDBurning
    static void _set_CDBurning(System::Environment::SpecialFolder value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Environment/System.SpecialFolder
  #pragma pack(pop)
  static check_size<sizeof(Environment::SpecialFolder), 0 + sizeof(int)> __System_Environment_SpecialFolderSizeCheck;
  static_assert(sizeof(Environment::SpecialFolder) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
