// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnvironmentBrandingManager
#include "GlobalNamespace/EnvironmentBrandingManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentBrandingManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentBrandingManager::InitData*, "", "EnvironmentBrandingManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentBrandingManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentBrandingManager::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean hideBranding
    // Size: 0x1
    // Offset: 0x10
    bool hideBranding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideBranding;
    }
    // Get instance field reference: public readonly System.Boolean hideBranding
    [[deprecated("Use field access instead!")]] bool& dyn_hideBranding();
    // public System.Void .ctor(System.Boolean hideBranding)
    // Offset: 0x136B3C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentBrandingManager::InitData* New_ctor(bool hideBranding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentBrandingManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentBrandingManager::InitData*, creationType>(hideBranding)));
    }
  }; // EnvironmentBrandingManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentBrandingManager::InitData), 16 + sizeof(bool)> __GlobalNamespace_EnvironmentBrandingManager_InitDataSizeCheck;
  static_assert(sizeof(EnvironmentBrandingManager::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentBrandingManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
