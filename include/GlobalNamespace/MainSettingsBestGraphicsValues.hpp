// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MainSettingsBestGraphicsValues
  class MainSettingsBestGraphicsValues : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MainSettingsBestGraphicsValues
    MainSettingsBestGraphicsValues() noexcept {}
    // static public System.Void ApplyValues(MainSettingsModelSO mainSettingsModel)
    // Offset: 0x24037C0
    static void ApplyValues(GlobalNamespace::MainSettingsModelSO* mainSettingsModel);
    // public System.Void .ctor()
    // Offset: 0x2403904
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsBestGraphicsValues* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainSettingsBestGraphicsValues::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsBestGraphicsValues*, creationType>()));
    }
  }; // MainSettingsBestGraphicsValues
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsBestGraphicsValues*, "", "MainSettingsBestGraphicsValues");
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsBestGraphicsValues::ApplyValues
// Il2CppName: ApplyValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::MainSettingsModelSO*)>(&GlobalNamespace::MainSettingsBestGraphicsValues::ApplyValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsBestGraphicsValues*), "ApplyValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MainSettingsModelSO*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsBestGraphicsValues::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
