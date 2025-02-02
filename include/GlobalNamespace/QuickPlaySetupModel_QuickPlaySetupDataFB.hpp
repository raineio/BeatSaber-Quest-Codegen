// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupModel
#include "GlobalNamespace/QuickPlaySetupModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupDataFB*, "", "QuickPlaySetupModel/QuickPlaySetupDataFB");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupModel/QuickPlaySetupDataFB
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class QuickPlaySetupModel::QuickPlaySetupDataFB : public ::Il2CppObject {
    public:
    public:
    // public QuickPlaySetupData[] data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::QuickPlaySetupData*> data;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::QuickPlaySetupData*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::QuickPlaySetupData*>
    constexpr operator ::ArrayW<::GlobalNamespace::QuickPlaySetupData*>() const noexcept {
      return data;
    }
    // Get instance field reference: public QuickPlaySetupData[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::QuickPlaySetupData*>& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x142AFE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupModel::QuickPlaySetupDataFB* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupDataFB::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupModel::QuickPlaySetupDataFB*, creationType>()));
    }
  }; // QuickPlaySetupModel/QuickPlaySetupDataFB
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupModel::QuickPlaySetupDataFB), 16 + sizeof(::ArrayW<::GlobalNamespace::QuickPlaySetupData*>)> __GlobalNamespace_QuickPlaySetupModel_QuickPlaySetupDataFBSizeCheck;
  static_assert(sizeof(QuickPlaySetupModel::QuickPlaySetupDataFB) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupDataFB::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
