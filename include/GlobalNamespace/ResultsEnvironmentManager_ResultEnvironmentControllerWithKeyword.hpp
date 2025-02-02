// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ResultsEnvironmentManager
#include "GlobalNamespace/ResultsEnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*, "", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword : public ::Il2CppObject {
    public:
    public:
    // private System.String _keyword
    // Size: 0x8
    // Offset: 0x10
    ::StringW keyword;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private BaseResultsEnvironmentController _resultsEnvironmentController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BaseResultsEnvironmentController* resultsEnvironmentController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BaseResultsEnvironmentController*) == 0x8);
    public:
    // Get instance field reference: private System.String _keyword
    [[deprecated("Use field access instead!")]] ::StringW& dyn__keyword();
    // Get instance field reference: private BaseResultsEnvironmentController _resultsEnvironmentController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BaseResultsEnvironmentController*& dyn__resultsEnvironmentController();
    // public System.String get_keyword()
    // Offset: 0x1431DC8
    ::StringW get_keyword();
    // public BaseResultsEnvironmentController get_resultsEnvironmentController()
    // Offset: 0x1431DD0
    ::GlobalNamespace::BaseResultsEnvironmentController* get_resultsEnvironmentController();
    // public System.Void .ctor()
    // Offset: 0x1431DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*, creationType>()));
    }
  }; // ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword), 24 + sizeof(::GlobalNamespace::BaseResultsEnvironmentController*)> __GlobalNamespace_ResultsEnvironmentManager_ResultEnvironmentControllerWithKeywordSizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::*)()>(&GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::get_resultsEnvironmentController
// Il2CppName: get_resultsEnvironmentController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseResultsEnvironmentController* (GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::*)()>(&GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::get_resultsEnvironmentController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*), "get_resultsEnvironmentController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
