// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.StackedController
#include "HMUI/StackedController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.StackedController/HMUI.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StackedController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 numberOfViewControllersToPop
    // Size: 0x4
    // Offset: 0x10
    int numberOfViewControllersToPop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return numberOfViewControllersToPop;
    }
    // Get instance field reference: public System.Int32 numberOfViewControllersToPop
    int& dyn_numberOfViewControllersToPop();
    // System.Void <PopViewControllers>g__AnimationLayouter|0(System.Single t, HMUI.ViewController[] viewControllers, System.Collections.Generic.HashSet`1<HMUI.ViewController> removingViewControllers)
    // Offset: 0x141D988
    void $PopViewControllers$g__AnimationLayouter_0(float t, ::ArrayW<HMUI::ViewController*> viewControllers, System::Collections::Generic::HashSet_1<HMUI::ViewController*>* removingViewControllers);
    // public System.Void .ctor()
    // Offset: 0x141D834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackedController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::StackedController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackedController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // HMUI.StackedController/HMUI.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(StackedController::$$c__DisplayClass5_0), 16 + sizeof(int)> __HMUI_StackedController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(StackedController::$$c__DisplayClass5_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::StackedController::$$c__DisplayClass5_0*, "HMUI", "StackedController/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::StackedController::$$c__DisplayClass5_0::$PopViewControllers$g__AnimationLayouter_0
// Il2CppName: <PopViewControllers>g__AnimationLayouter|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::$$c__DisplayClass5_0::*)(float, ::ArrayW<HMUI::ViewController*>, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*)>(&HMUI::StackedController::$$c__DisplayClass5_0::$PopViewControllers$g__AnimationLayouter_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    static auto* removingViewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController::$$c__DisplayClass5_0*), "<PopViewControllers>g__AnimationLayouter|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, viewControllers, removingViewControllers});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
