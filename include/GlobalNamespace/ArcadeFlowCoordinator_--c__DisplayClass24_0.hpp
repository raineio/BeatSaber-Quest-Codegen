// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ArcadeFlowCoordinator
#include "GlobalNamespace/ArcadeFlowCoordinator.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c__DisplayClass24_0
  class $$c__DisplayClass24_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0*, "", "ArcadeFlowCoordinator/<>c__DisplayClass24_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ArcadeFlowCoordinator/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ArcadeFlowCoordinator::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public ArcadeFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ArcadeFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ArcadeFlowCoordinator*) == 0x8);
    // public ResultsViewController resultsViewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    public:
    // Get instance field reference: public ArcadeFlowCoordinator <>4__this
    GlobalNamespace::ArcadeFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public ResultsViewController resultsViewController
    GlobalNamespace::ResultsViewController*& dyn_resultsViewController();
    // System.Void <HandleResultsViewControllerRestartButtonPressed>b__0()
    // Offset: 0x13123BC
    void $HandleResultsViewControllerRestartButtonPressed$b__0();
    // public System.Void .ctor()
    // Offset: 0x131220C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArcadeFlowCoordinator::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArcadeFlowCoordinator::$$c__DisplayClass24_0*, creationType>()));
    }
  }; // ArcadeFlowCoordinator/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(ArcadeFlowCoordinator::$$c__DisplayClass24_0), 24 + sizeof(GlobalNamespace::ResultsViewController*)> __GlobalNamespace_ArcadeFlowCoordinator_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(ArcadeFlowCoordinator::$$c__DisplayClass24_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0::$HandleResultsViewControllerRestartButtonPressed$b__0
// Il2CppName: <HandleResultsViewControllerRestartButtonPressed>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0::$HandleResultsViewControllerRestartButtonPressed$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0*), "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
