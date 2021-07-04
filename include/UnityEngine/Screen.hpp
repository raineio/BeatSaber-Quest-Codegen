// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Resolution
#include "UnityEngine/Resolution.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Screen
  // [NativeHeaderAttribute] Offset: D8E600
  // [NativeHeaderAttribute] Offset: D8E600
  // [StaticAccessorAttribute] Offset: D8E600
  class Screen : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Screen
    Screen() noexcept {}
    // static public System.Int32 get_width()
    // Offset: 0x1B33AF8
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x1B33B2C
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x1B33B60
    static float get_dpi();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x1B33B94
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x1B33BC8
    static void set_fullScreen(bool value);
    // static public UnityEngine.FullScreenMode get_fullScreenMode()
    // Offset: 0x1B33C08
    static UnityEngine::FullScreenMode get_fullScreenMode();
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
    // Offset: 0x1B33C3C
    static void SetResolution(int width, int height, UnityEngine::FullScreenMode fullscreenMode, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen, System.Int32 preferredRefreshRate)
    // Offset: 0x1B33CA4
    static void SetResolution(int width, int height, bool fullscreen, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen)
    // Offset: 0x1B33D14
    static void SetResolution(int width, int height, bool fullscreen);
    // static public UnityEngine.Resolution[] get_resolutions()
    // Offset: 0x1B33D78
    static ::Array<UnityEngine::Resolution>* get_resolutions();
  }; // UnityEngine.Screen
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Screen*, "UnityEngine", "Screen");
// Writing MetadataGetter for method: UnityEngine::Screen::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_width)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_height)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_dpi
// Il2CppName: get_dpi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Screen::get_dpi)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_dpi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreen
// Il2CppName: get_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Screen::get_fullScreen)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::set_fullScreen
// Il2CppName: set_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Screen::set_fullScreen)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "set_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreenMode
// Il2CppName: get_fullScreenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::FullScreenMode (*)()>(&UnityEngine::Screen::get_fullScreenMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, UnityEngine::FullScreenMode, int)>(&UnityEngine::Screen::SetResolution)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::FullScreenMode>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, bool, int)>(&UnityEngine::Screen::SetResolution)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, bool)>(&UnityEngine::Screen::SetResolution)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_resolutions
// Il2CppName: get_resolutions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Resolution>* (*)()>(&UnityEngine::Screen::get_resolutions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_resolutions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
