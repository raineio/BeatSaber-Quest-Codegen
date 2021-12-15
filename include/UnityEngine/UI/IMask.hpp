// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: IMask
  class IMask;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::UI::IMask);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMask*, "UnityEngine.UI", "IMask");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: EEA35C
  // [ObsoleteAttribute] Offset: EEA35C
  class IMask {
    public:
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0xFFFFFFFF
    UnityEngine::RectTransform* get_rectTransform();
    // public System.Boolean Enabled()
    // Offset: 0xFFFFFFFF
    bool Enabled();
  }; // UnityEngine.UI.IMask
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::IMask::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (UnityEngine::UI::IMask::*)()>(&UnityEngine::UI::IMask::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IMask*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::IMask::Enabled
// Il2CppName: Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::IMask::*)()>(&UnityEngine::UI::IMask::Enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IMask*), "Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
