// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: Lightmapping
  class Lightmapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::Lightmapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Lightmapping*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
  // [TokenAttribute] Offset: FFFFFFFF
  class Lightmapping : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate
    class RequestLightsDelegate;
    // Nested type: ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c
    class $$c;
    // [RequiredByNativeCodeAttribute] Offset: 0x104B05C
    // Get static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate s_DefaultDelegate
    static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_DefaultDelegate();
    // Set static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate s_DefaultDelegate
    static void _set_s_DefaultDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // [RequiredByNativeCodeAttribute] Offset: 0x104B06C
    // Get static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate s_RequestLightsDelegate
    static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_RequestLightsDelegate();
    // Set static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate s_RequestLightsDelegate
    static void _set_s_RequestLightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // static private System.Void .cctor()
    // Offset: 0x1F9ADAC
    static void _cctor();
    // static public System.Void SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate del)
    // Offset: 0x1F9A76C
    static void SetDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* del);
    // static public UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.RequestLightsDelegate GetDelegate()
    // Offset: 0x1F9A7FC
    static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* GetDelegate();
    // static public System.Void ResetDelegate()
    // Offset: 0x1F9A864
    static void ResetDelegate();
    // static System.Void RequestLights(UnityEngine.Light[] lights, System.IntPtr outLightsPtr, System.Int32 outLightsCount)
    // Offset: 0x1F9A8D0
    static void RequestLights(::ArrayW<::UnityEngine::Light*> lights, ::System::IntPtr outLightsPtr, int outLightsCount);
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate
// Il2CppName: SetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping*), "SetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate
// Il2CppName: GetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* (*)()>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping*), "GetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate
// Il2CppName: ResetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping*), "ResetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights
// Il2CppName: RequestLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Light*>, ::System::IntPtr, int)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights)> {
  static const MethodInfo* get() {
    static auto* lights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Light"), 1)->byval_arg;
    static auto* outLightsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* outLightsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping*), "RequestLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lights, outLightsPtr, outLightsCount});
  }
};
