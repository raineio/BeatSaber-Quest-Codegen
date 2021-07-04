// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
#include "UnityEngine/UI/HorizontalOrVerticalLayoutGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.HorizontalLayoutGroup
  // [AddComponentMenu] Offset: DC532C
  class HorizontalLayoutGroup : public UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
    public:
    // Creating value type constructor for type: HorizontalLayoutGroup
    HorizontalLayoutGroup() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x1918DBC
    // Implemented from: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
    // Base method: System.Void HorizontalOrVerticalLayoutGroup::.ctor()
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HorizontalLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::HorizontalLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HorizontalLayoutGroup*, creationType>()));
    }
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1918DDC
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x19190A4
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x19190B0
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x1919688
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical()
    void SetLayoutVertical();
  }; // UnityEngine.UI.HorizontalLayoutGroup
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalLayoutGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputHorizontal
// Il2CppName: CalculateLayoutInputHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalLayoutGroup*), "CalculateLayoutInputHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputVertical
// Il2CppName: CalculateLayoutInputVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalLayoutGroup*), "CalculateLayoutInputVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalLayoutGroup::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalLayoutGroup::SetLayoutHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalLayoutGroup*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalLayoutGroup::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalLayoutGroup::SetLayoutVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalLayoutGroup*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
