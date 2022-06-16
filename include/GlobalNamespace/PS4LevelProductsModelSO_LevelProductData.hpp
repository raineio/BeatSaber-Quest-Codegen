// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PS4LevelProductsModelSO
#include "GlobalNamespace/PS4LevelProductsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4LevelProductsModelSO::LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*, "", "PS4LevelProductsModelSO/LevelProductData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PS4LevelProductsModelSO/LevelProductData
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4LevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    public:
    // private System.String _entitlementLabel
    // Size: 0x8
    // Offset: 0x10
    ::StringW entitlementLabel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _productLabel
    // Size: 0x8
    // Offset: 0x18
    ::StringW productLabel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x20
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _entitlementLabel
    [[deprecated("Use field access instead!")]] ::StringW& dyn__entitlementLabel();
    // Get instance field reference: private System.String _productLabel
    [[deprecated("Use field access instead!")]] ::StringW& dyn__productLabel();
    // Get instance field reference: private System.String _levelId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelId();
    // public System.String get_entitlementLabel()
    // Offset: 0x135E084
    ::StringW get_entitlementLabel();
    // public System.String get_productLabel()
    // Offset: 0x135E08C
    ::StringW get_productLabel();
    // public System.String get_levelId()
    // Offset: 0x135E094
    ::StringW get_levelId();
    // public System.Void .ctor()
    // Offset: 0x135E09C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LevelProductsModelSO::LevelProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LevelProductsModelSO::LevelProductData*, creationType>()));
    }
  }; // PS4LevelProductsModelSO/LevelProductData
  #pragma pack(pop)
  static check_size<sizeof(PS4LevelProductsModelSO::LevelProductData), 32 + sizeof(::StringW)> __GlobalNamespace_PS4LevelProductsModelSO_LevelProductDataSizeCheck;
  static_assert(sizeof(PS4LevelProductsModelSO::LevelProductData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_entitlementLabel
// Il2CppName: get_entitlementLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_entitlementLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*), "get_entitlementLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_productLabel
// Il2CppName: get_productLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_productLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*), "get_productLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_levelId
// Il2CppName: get_levelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_levelId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*), "get_levelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
