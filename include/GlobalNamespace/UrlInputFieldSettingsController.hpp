// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: InputFieldSettingsController
#include "GlobalNamespace/InputFieldSettingsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UrlInputFieldSettingsController
  class UrlInputFieldSettingsController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::UrlInputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UrlInputFieldSettingsController*, "", "UrlInputFieldSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UrlInputFieldSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class UrlInputFieldSettingsController : public GlobalNamespace::InputFieldSettingsController {
    public:
    // public System.Void .ctor()
    // Offset: 0x1BD74D8
    // Implemented from: InputFieldSettingsController
    // Base method: System.Void InputFieldSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UrlInputFieldSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UrlInputFieldSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UrlInputFieldSettingsController*, creationType>()));
    }
    // protected override System.Void HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    // Offset: 0x1BD7440
    // Implemented from: InputFieldSettingsController
    // Base method: System.Void InputFieldSettingsController::HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    void HandleInputFieldDidChange(HMUI::InputFieldView* inputFieldView);
  }; // UrlInputFieldSettingsController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UrlInputFieldSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange
// Il2CppName: HandleInputFieldDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UrlInputFieldSettingsController::*)(HMUI::InputFieldView*)>(&GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange)> {
  static const MethodInfo* get() {
    static auto* inputFieldView = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UrlInputFieldSettingsController*), "HandleInputFieldDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputFieldView});
  }
};
