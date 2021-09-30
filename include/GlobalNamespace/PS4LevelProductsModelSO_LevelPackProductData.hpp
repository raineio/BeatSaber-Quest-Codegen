// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PS4LevelProductsModelSO
#include "GlobalNamespace/PS4LevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PS4LevelProductsModelSO/LevelPackProductData
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4LevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String _productLabel
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* productLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _categoryLabel
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* categoryLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* packId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _packLevelPriceDiscountMul
    // Size: 0x4
    // Offset: 0x28
    float packLevelPriceDiscountMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: packLevelPriceDiscountMul and: levelProductsData
    char __padding3[0x4] = {};
    // private PS4LevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*> levelProductsData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>) == 0x8);
    public:
    // Get instance field reference: private System.String _productLabel
    ::Il2CppString*& dyn__productLabel();
    // Get instance field reference: private System.String _categoryLabel
    ::Il2CppString*& dyn__categoryLabel();
    // Get instance field reference: private System.String _packId
    ::Il2CppString*& dyn__packId();
    // Get instance field reference: private System.Single _packLevelPriceDiscountMul
    float& dyn__packLevelPriceDiscountMul();
    // Get instance field reference: private PS4LevelProductsModelSO/LevelProductData[] _levelProductsData
    ::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>& dyn__levelProductsData();
    // public System.String get_productLabel()
    // Offset: 0x1125170
    ::Il2CppString* get_productLabel();
    // public System.String get_categoryLabel()
    // Offset: 0x1125178
    ::Il2CppString* get_categoryLabel();
    // public System.String get_levelPackId()
    // Offset: 0x1125180
    ::Il2CppString* get_levelPackId();
    // public System.Single get_packLevelPriceDiscountMul()
    // Offset: 0x1125188
    float get_packLevelPriceDiscountMul();
    // public PS4LevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x1125190
    ::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*> get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x1125198
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // PS4LevelProductsModelSO/LevelPackProductData
  #pragma pack(pop)
  static check_size<sizeof(PS4LevelProductsModelSO::LevelPackProductData), 48 + sizeof(::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>)> __GlobalNamespace_PS4LevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(PS4LevelProductsModelSO::LevelPackProductData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*, "", "PS4LevelProductsModelSO/LevelPackProductData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_productLabel
// Il2CppName: get_productLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_productLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*), "get_productLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_categoryLabel
// Il2CppName: get_categoryLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_categoryLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*), "get_categoryLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_levelPackId
// Il2CppName: get_levelPackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_levelPackId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*), "get_levelPackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_packLevelPriceDiscountMul
// Il2CppName: get_packLevelPriceDiscountMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_packLevelPriceDiscountMul)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*), "get_packLevelPriceDiscountMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_levelProductsData
// Il2CppName: get_levelProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*> (GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::get_levelProductsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*), "get_levelProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
