// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PrivacyPolicyViewController
  class PrivacyPolicyViewController : public HMUI::ViewController {
    public:
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private LocalizedTextAsset _privacyPolicyLocalizedTextAsset
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LocalizedTextAsset* privacyPolicyLocalizedTextAsset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalizedTextAsset*) == 0x8);
    // Creating value type constructor for type: PrivacyPolicyViewController
    PrivacyPolicyViewController(HMUI::TextPageScrollView* textPageScrollView_ = {}, GlobalNamespace::LocalizedTextAsset* privacyPolicyLocalizedTextAsset_ = {}) noexcept : textPageScrollView{textPageScrollView_}, privacyPolicyLocalizedTextAsset{privacyPolicyLocalizedTextAsset_} {}
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10A8060
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x10A80B4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivacyPolicyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PrivacyPolicyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivacyPolicyViewController*, creationType>()));
    }
  }; // PrivacyPolicyViewController
  #pragma pack(pop)
  static check_size<sizeof(PrivacyPolicyViewController), 120 + sizeof(GlobalNamespace::LocalizedTextAsset*)> __GlobalNamespace_PrivacyPolicyViewControllerSizeCheck;
  static_assert(sizeof(PrivacyPolicyViewController) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool, bool)>(&GlobalNamespace::PrivacyPolicyViewController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrivacyPolicyViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
