// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Misc
  class Misc : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Misc
    Misc() noexcept {}
    // static public System.Void Destroy(UnityEngine.Object obj)
    // Offset: 0x19AEB18
    static void Destroy(UnityEngine::Object* obj);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj)
    // Offset: 0x19AEC2C
    static void DestroyImmediate(UnityEngine::Object* obj);
  }; // UnityEngine.UI.Misc
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Misc*, "UnityEngine.UI", "Misc");
// Writing MetadataGetter for method: UnityEngine::UI::Misc::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*)>(&UnityEngine::UI::Misc::Destroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Misc*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Object*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Misc::DestroyImmediate
// Il2CppName: DestroyImmediate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*)>(&UnityEngine::UI::Misc::DestroyImmediate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Misc*), "DestroyImmediate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Object*>()});
  }
};
