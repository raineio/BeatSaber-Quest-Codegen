// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SelectLevelCategoryViewController
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0*, "", "SelectLevelCategoryViewController/<>c__DisplayClass12_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelCategoryViewController/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SelectLevelCategoryViewController::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory> enabledLevelCategories;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>
    constexpr operator ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>() const noexcept {
      return enabledLevelCategories;
    }
    // Get instance field reference: public SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>& dyn_enabledLevelCategories();
    // public System.Void .ctor()
    // Offset: 0x148E8C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController::$$c__DisplayClass12_0*, creationType>()));
    }
    // System.Boolean <Setup>b__0(SelectLevelCategoryViewController/LevelCategoryInfo data)
    // Offset: 0x148ED40
    bool $Setup$b__0(::GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo* data);
  }; // SelectLevelCategoryViewController/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(SelectLevelCategoryViewController::$$c__DisplayClass12_0), 16 + sizeof(::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>)> __GlobalNamespace_SelectLevelCategoryViewController_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(SelectLevelCategoryViewController::$$c__DisplayClass12_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::$Setup$b__0
// Il2CppName: <Setup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::*)(::GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*)>(&GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::$Setup$b__0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0*), "<Setup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
