// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DisappearingArrowControllerBase`1
#include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BurstSliderGameNoteController
  class BurstSliderGameNoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BurstSliderNoteDisappearingArrowController
  class BurstSliderNoteDisappearingArrowController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderNoteDisappearingArrowController*, "", "BurstSliderNoteDisappearingArrowController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BurstSliderNoteDisappearingArrowController
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstSliderNoteDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::BurstSliderGameNoteController*> {
    public:
    public:
    // private BurstSliderGameNoteController _burstSliderNoteController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BurstSliderGameNoteController* burstSliderNoteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BurstSliderGameNoteController*) == 0x8);
    public:
    // Get instance field reference: private BurstSliderGameNoteController _burstSliderNoteController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BurstSliderGameNoteController*& dyn__burstSliderNoteController();
    // protected BurstSliderGameNoteController get_gameNoteController()
    // Offset: 0x133B154
    ::GlobalNamespace::BurstSliderGameNoteController* get_gameNoteController();
    // public System.Void .ctor()
    // Offset: 0x133B15C
    // Implemented from: DisappearingArrowControllerBase`1
    // Base method: System.Void DisappearingArrowControllerBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstSliderNoteDisappearingArrowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BurstSliderNoteDisappearingArrowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstSliderNoteDisappearingArrowController*, creationType>()));
    }
  }; // BurstSliderNoteDisappearingArrowController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController
// Il2CppName: get_gameNoteController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BurstSliderGameNoteController* (GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderNoteDisappearingArrowController*), "get_gameNoteController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
