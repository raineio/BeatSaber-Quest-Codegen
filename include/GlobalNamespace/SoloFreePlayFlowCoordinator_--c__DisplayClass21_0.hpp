// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SoloFreePlayFlowCoordinator
#include "GlobalNamespace/SoloFreePlayFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0 : public ::Il2CppObject {
    public:
    public:
    // public SoloFreePlayFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SoloFreePlayFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SoloFreePlayFlowCoordinator*) == 0x8);
    // public ResultsViewController resultsViewController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ResultsViewController*) == 0x8);
    public:
    // Get instance field reference: public SoloFreePlayFlowCoordinator <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SoloFreePlayFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public ResultsViewController resultsViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ResultsViewController*& dyn_resultsViewController();
    // public System.Void .ctor()
    // Offset: 0x138B870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0*, creationType>()));
    }
    // System.Void <HandleResultsViewControllerRestartButtonPressed>b__0()
    // Offset: 0x138BBE0
    void $HandleResultsViewControllerRestartButtonPressed$b__0();
  }; // SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0
  #pragma pack(pop)
  static check_size<sizeof(SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0), 24 + sizeof(::GlobalNamespace::ResultsViewController*)> __GlobalNamespace_SoloFreePlayFlowCoordinator_$$c__DisplayClass21_0SizeCheck;
  static_assert(sizeof(SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0::$HandleResultsViewControllerRestartButtonPressed$b__0
// Il2CppName: <HandleResultsViewControllerRestartButtonPressed>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0::$HandleResultsViewControllerRestartButtonPressed$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass21_0*), "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
