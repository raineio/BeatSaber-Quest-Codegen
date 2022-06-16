// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Resolution
#include "UnityEngine/Resolution.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FullScreenMode
  struct FullScreenMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Screen
  class Screen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Screen*, "UnityEngine", "Screen");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Screen
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1044EBC
  // [NativeHeaderAttribute] Offset: 1044EBC
  // [StaticAccessorAttribute] Offset: 1044EBC
  class Screen : public ::Il2CppObject {
    public:
    // static public System.Int32 get_width()
    // Offset: 0x2114184
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x21141B8
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x21141EC
    static float get_dpi();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x2114220
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x2114254
    static void set_fullScreen(bool value);
    // static public UnityEngine.FullScreenMode get_fullScreenMode()
    // Offset: 0x2114294
    static ::UnityEngine::FullScreenMode get_fullScreenMode();
    // static public UnityEngine.Resolution[] get_resolutions()
    // Offset: 0x2114404
    static ::ArrayW<::UnityEngine::Resolution> get_resolutions();
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
    // Offset: 0x21142C8
    static void SetResolution(int width, int height, ::UnityEngine::FullScreenMode fullscreenMode, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen, System.Int32 preferredRefreshRate)
    // Offset: 0x2114330
    static void SetResolution(int width, int height, bool fullscreen, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen)
    // Offset: 0x21143A0
    static void SetResolution(int width, int height, bool fullscreen);
  }; // UnityEngine.Screen
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Screen::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_dpi
// Il2CppName: get_dpi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Screen::get_dpi)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_dpi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreen
// Il2CppName: get_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Screen::get_fullScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::set_fullScreen
// Il2CppName: set_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Screen::set_fullScreen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "set_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreenMode
// Il2CppName: get_fullScreenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FullScreenMode (*)()>(&UnityEngine::Screen::get_fullScreenMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_resolutions
// Il2CppName: get_resolutions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Resolution> (*)()>(&UnityEngine::Screen::get_resolutions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_resolutions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, ::UnityEngine::FullScreenMode, int)>(&UnityEngine::Screen::SetResolution)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fullscreenMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FullScreenMode")->byval_arg;
    static auto* preferredRefreshRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, fullscreenMode, preferredRefreshRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, bool, int)>(&UnityEngine::Screen::SetResolution)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fullscreen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* preferredRefreshRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, fullscreen, preferredRefreshRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, bool)>(&UnityEngine::Screen::SetResolution)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fullscreen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, fullscreen});
  }
};
