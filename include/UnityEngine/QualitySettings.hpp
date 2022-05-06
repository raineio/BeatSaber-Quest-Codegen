// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorSpace
  struct ColorSpace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: QualitySettings
  class QualitySettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.QualitySettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10447EC
  // [StaticAccessorAttribute] Offset: 10447EC
  // [NativeHeaderAttribute] Offset: 10447EC
  class QualitySettings : public ::UnityEngine::Object {
    public:
    // static public System.Void set_vSyncCount(System.Int32 value)
    // Offset: 0x210B454
    static void set_vSyncCount(int value);
    // static public System.Int32 get_antiAliasing()
    // Offset: 0x210B494
    static int get_antiAliasing();
    // static public System.Void set_antiAliasing(System.Int32 value)
    // Offset: 0x210B4C8
    static void set_antiAliasing(int value);
    // static public System.Void set_maxQueuedFrames(System.Int32 value)
    // Offset: 0x210B508
    static void set_maxQueuedFrames(int value);
    // static public UnityEngine.ColorSpace get_activeColorSpace()
    // Offset: 0x210B548
    static ::UnityEngine::ColorSpace get_activeColorSpace();
  }; // UnityEngine.QualitySettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::QualitySettings::set_vSyncCount
// Il2CppName: set_vSyncCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::QualitySettings::set_vSyncCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::QualitySettings*), "set_vSyncCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::QualitySettings::get_antiAliasing
// Il2CppName: get_antiAliasing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::QualitySettings::get_antiAliasing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::QualitySettings*), "get_antiAliasing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::QualitySettings::set_antiAliasing
// Il2CppName: set_antiAliasing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::QualitySettings::set_antiAliasing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::QualitySettings*), "set_antiAliasing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::QualitySettings::set_maxQueuedFrames
// Il2CppName: set_maxQueuedFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::QualitySettings::set_maxQueuedFrames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::QualitySettings*), "set_maxQueuedFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::QualitySettings::get_activeColorSpace
// Il2CppName: get_activeColorSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorSpace (*)()>(&UnityEngine::QualitySettings::get_activeColorSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::QualitySettings*), "get_activeColorSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
