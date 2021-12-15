// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Console
#include "System/Console.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: WindowsConsole
  class WindowsConsole;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Console::WindowsConsole);
DEFINE_IL2CPP_ARG_TYPE(System::Console::WindowsConsole*, "System", "Console/WindowsConsole");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Console/System.WindowsConsole
  // [TokenAttribute] Offset: FFFFFFFF
  class Console::WindowsConsole : public ::Il2CppObject {
    public:
    // Nested type: System::Console::WindowsConsole::WindowsCancelHandler
    class WindowsCancelHandler;
    // Get static field: static public System.Boolean ctrlHandlerAdded
    static bool _get_ctrlHandlerAdded();
    // Set static field: static public System.Boolean ctrlHandlerAdded
    static void _set_ctrlHandlerAdded(bool value);
    // Get static field: static private System.Console/System.WindowsConsole/System.WindowsCancelHandler cancelHandler
    static System::Console::WindowsConsole::WindowsCancelHandler* _get_cancelHandler();
    // Set static field: static private System.Console/System.WindowsConsole/System.WindowsCancelHandler cancelHandler
    static void _set_cancelHandler(System::Console::WindowsConsole::WindowsCancelHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x1B92CF4
    static void _cctor();
    // static private System.Int32 GetConsoleCP()
    // Offset: 0x1B92B98
    static int GetConsoleCP();
    // static private System.Int32 GetConsoleOutputCP()
    // Offset: 0x1B92C0C
    static int GetConsoleOutputCP();
    // static private System.Boolean DoWindowsConsoleCancelEvent(System.Int32 keyCode)
    // Offset: 0x1B92C84
    static bool DoWindowsConsoleCancelEvent(int keyCode);
    // static public System.Int32 GetInputCodePage()
    // Offset: 0x1B91594
    static int GetInputCodePage();
    // static public System.Int32 GetOutputCodePage()
    // Offset: 0x1B915F0
    static int GetOutputCodePage();
  }; // System.Console/System.WindowsConsole
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Console::WindowsConsole::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Console::WindowsConsole::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::GetConsoleCP
// Il2CppName: GetConsoleCP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Console::WindowsConsole::GetConsoleCP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), "GetConsoleCP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::GetConsoleOutputCP
// Il2CppName: GetConsoleOutputCP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Console::WindowsConsole::GetConsoleOutputCP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), "GetConsoleOutputCP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::DoWindowsConsoleCancelEvent
// Il2CppName: DoWindowsConsoleCancelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Console::WindowsConsole::DoWindowsConsoleCancelEvent)> {
  static const MethodInfo* get() {
    static auto* keyCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), "DoWindowsConsoleCancelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyCode});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::GetInputCodePage
// Il2CppName: GetInputCodePage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Console::WindowsConsole::GetInputCodePage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), "GetInputCodePage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::GetOutputCodePage
// Il2CppName: GetOutputCodePage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Console::WindowsConsole::GetOutputCodePage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole*), "GetOutputCodePage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
