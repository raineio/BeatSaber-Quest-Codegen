// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ShowcaseFlowCoordinator
#include "GlobalNamespace/ShowcaseFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ShowcaseFlowCoordinator/<>c__DisplayClass30_0
  // [CompilerGeneratedAttribute] Offset: E125A8
  class ShowcaseFlowCoordinator::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public ShowcaseFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ShowcaseFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ShowcaseFlowCoordinator*) == 0x8);
    // public ResultsViewController resultsViewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_0
    $$c__DisplayClass30_0(GlobalNamespace::ShowcaseFlowCoordinator* $$4__this_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}) noexcept : $$4__this{$$4__this_}, resultsViewController{resultsViewController_} {}
    // System.Void <HandleResultsViewControllerRestartButtonPressed>b__0()
    // Offset: 0x10DE864
    void $HandleResultsViewControllerRestartButtonPressed$b__0();
    // public System.Void .ctor()
    // Offset: 0x10DE394
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowcaseFlowCoordinator::$$c__DisplayClass30_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowcaseFlowCoordinator::$$c__DisplayClass30_0*, creationType>()));
    }
  }; // ShowcaseFlowCoordinator/<>c__DisplayClass30_0
  #pragma pack(pop)
  static check_size<sizeof(ShowcaseFlowCoordinator::$$c__DisplayClass30_0), 24 + sizeof(GlobalNamespace::ResultsViewController*)> __GlobalNamespace_ShowcaseFlowCoordinator_$$c__DisplayClass30_0SizeCheck;
  static_assert(sizeof(ShowcaseFlowCoordinator::$$c__DisplayClass30_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0*, "", "ShowcaseFlowCoordinator/<>c__DisplayClass30_0");
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0::$HandleResultsViewControllerRestartButtonPressed$b__0
// Il2CppName: <HandleResultsViewControllerRestartButtonPressed>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0::*)()>(&GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0::$HandleResultsViewControllerRestartButtonPressed$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0*), "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
