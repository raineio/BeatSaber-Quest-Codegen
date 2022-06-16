// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IExperimentModel
  class IExperimentModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusTestExperiment
  class OculusTestExperiment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusTestExperiment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment*, "", "OculusTestExperiment");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusTestExperiment
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusTestExperiment : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OculusTestExperiment::ExperimentData
    class ExperimentData;
    // Nested type: ::GlobalNamespace::OculusTestExperiment::$Init$d__3
    struct $Init$d__3;
    public:
    // [InjectAttribute] Offset: 0x10D32E0
    // private readonly IExperimentModel _experimentModel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IExperimentModel* experimentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IExperimentModel*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::IExperimentModel*
    constexpr operator ::GlobalNamespace::IExperimentModel*() const noexcept {
      return experimentModel;
    }
    // static field const value: static private System.String kIsInTest1Key
    static constexpr const char* kIsInTest1Key = "beatsaber_experiments:test_parameter";
    // Get static field: static private System.String kIsInTest1Key
    static ::StringW _get_kIsInTest1Key();
    // Set static field: static private System.String kIsInTest1Key
    static void _set_kIsInTest1Key(::StringW value);
    // Get instance field reference: private readonly IExperimentModel _experimentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IExperimentModel*& dyn__experimentModel();
    // public System.Void .ctor()
    // Offset: 0x1566BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusTestExperiment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusTestExperiment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusTestExperiment*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x1566B30
    void Init();
  }; // OculusTestExperiment
  #pragma pack(pop)
  static check_size<sizeof(OculusTestExperiment), 16 + sizeof(::GlobalNamespace::IExperimentModel*)> __GlobalNamespace_OculusTestExperimentSizeCheck;
  static_assert(sizeof(OculusTestExperiment) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusTestExperiment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusTestExperiment::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusTestExperiment::*)()>(&GlobalNamespace::OculusTestExperiment::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusTestExperiment*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
