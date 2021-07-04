// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.ITextElement
  class ITextElement {
    public:
    // Creating value type constructor for type: ITextElement
    ITextElement() noexcept {}
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xFFFFFFFF
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xFFFFFFFF
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // public System.Int32 GetInstanceID()
    // Offset: 0xFFFFFFFF
    int GetInstanceID();
  }; // TMPro.ITextElement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::ITextElement*, "TMPro", "ITextElement");
// Writing MetadataGetter for method: TMPro::ITextElement::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (TMPro::ITextElement::*)()>(&TMPro::ITextElement::get_sharedMaterial)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::ITextElement::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ITextElement::*)(UnityEngine::UI::CanvasUpdate)>(&TMPro::ITextElement::Rebuild)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::CanvasUpdate>()});
  }
};
// Writing MetadataGetter for method: TMPro::ITextElement::GetInstanceID
// Il2CppName: GetInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::ITextElement::*)()>(&TMPro::ITextElement::GetInstanceID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "GetInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
