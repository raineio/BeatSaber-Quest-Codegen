// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4AchievementIdsModelSO
  class PS4AchievementIdsModelSO;
  // Forward declaring type: AchievementIdsModelSO
  class AchievementIdsModelSO;
  // Forward declaring type: PlatformAchievementsHandler
  class PlatformAchievementsHandler;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlatformAchievementsModelSO
  class PlatformAchievementsModelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlatformAchievementsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO*, "", "PlatformAchievementsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformAchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult
    struct UnlockAchievementResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult
    struct GetUnlockedAchievementsResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler
    class UnlockAchievementCompletionHandler;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler
    class GetUnlockedAchievementsCompletionHandler;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private PS4AchievementIdsModelSO _ps4AchievementIdsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4AchievementIdsModelSO*) == 0x8);
    // private AchievementIdsModelSO _achievementIdsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AchievementIdsModelSO* achievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementIdsModelSO*) == 0x8);
    // private PlatformAchievementsHandler _platformAchievementsHandler
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsHandler*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PS4AchievementIdsModelSO _ps4AchievementIdsModel
    GlobalNamespace::PS4AchievementIdsModelSO*& dyn__ps4AchievementIdsModel();
    // Get instance field reference: private AchievementIdsModelSO _achievementIdsModel
    GlobalNamespace::AchievementIdsModelSO*& dyn__achievementIdsModel();
    // Get instance field reference: private PlatformAchievementsHandler _platformAchievementsHandler
    GlobalNamespace::PlatformAchievementsHandler*& dyn__platformAchievementsHandler();
    // private PlatformAchievementsHandler get_platformAchievementsHandler()
    // Offset: 0x114E320
    GlobalNamespace::PlatformAchievementsHandler* get_platformAchievementsHandler();
    // public System.Void Initialize()
    // Offset: 0x114E3C8
    void Initialize();
    // private System.Void CreatePlatformAchievementsHandler()
    // Offset: 0x114E350
    void CreatePlatformAchievementsHandler();
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0x114E3CC
    GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0x114E6B4
    GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0x114E9AC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO*, creationType>()));
    }
  }; // PlatformAchievementsModelSO
  #pragma pack(pop)
  static check_size<sizeof(PlatformAchievementsModelSO), 40 + sizeof(GlobalNamespace::PlatformAchievementsHandler*)> __GlobalNamespace_PlatformAchievementsModelSOSizeCheck;
  static_assert(sizeof(PlatformAchievementsModelSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::get_platformAchievementsHandler
// Il2CppName: get_platformAchievementsHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlatformAchievementsHandler* (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::get_platformAchievementsHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "get_platformAchievementsHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::CreatePlatformAchievementsHandler
// Il2CppName: CreatePlatformAchievementsHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::*)()>(&GlobalNamespace::PlatformAchievementsModelSO::CreatePlatformAchievementsHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "CreatePlatformAchievementsHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievement
// Il2CppName: UnlockAchievement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsModelSO::*)(::StringW, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievement)> {
  static const MethodInfo* get() {
    static auto* achievementId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "UnlockAchievement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{achievementId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievements
// Il2CppName: GetUnlockedAchievements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsModelSO::*)(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievements)> {
  static const MethodInfo* get() {
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO*), "GetUnlockedAchievements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
