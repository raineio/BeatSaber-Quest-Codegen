// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::AchievementsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsModelSO*, "", "AchievementsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private PlatformAchievementsModelSO _platformAchievementsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlatformAchievementsModelSO* platformAchievementsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsModelSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _unlockedAchievementIds
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::StringW>* unlockedAchievementIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x28
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlatformAchievementsModelSO _platformAchievementsModel
    GlobalNamespace::PlatformAchievementsModelSO*& dyn__platformAchievementsModel();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> _unlockedAchievementIds
    System::Collections::Generic::HashSet_1<::StringW>*& dyn__unlockedAchievementIds();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // public System.Void Initialize()
    // Offset: 0x130A864
    void Initialize();
    // public System.Void UnlockAchievement(AchievementSO achievement)
    // Offset: 0x130B7DC
    void UnlockAchievement(GlobalNamespace::AchievementSO* achievement);
    // private System.Void <Initialize>b__3_0(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] achievementIds)
    // Offset: 0x130B960
    void $Initialize$b__3_0(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::ArrayW<::StringW> achievementIds);
    // public System.Void .ctor()
    // Offset: 0x130B8F0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsModelSO*, creationType>()));
    }
  }; // AchievementsModelSO
  #pragma pack(pop)
  static check_size<sizeof(AchievementsModelSO), 40 + sizeof(bool)> __GlobalNamespace_AchievementsModelSOSizeCheck;
  static_assert(sizeof(AchievementsModelSO) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsModelSO::*)()>(&GlobalNamespace::AchievementsModelSO::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsModelSO*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::UnlockAchievement
// Il2CppName: UnlockAchievement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsModelSO::*)(GlobalNamespace::AchievementSO*)>(&GlobalNamespace::AchievementsModelSO::UnlockAchievement)> {
  static const MethodInfo* get() {
    static auto* achievement = &::il2cpp_utils::GetClassFromName("", "AchievementSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsModelSO*), "UnlockAchievement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{achievement});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::$Initialize$b__3_0
// Il2CppName: <Initialize>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsModelSO::*)(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult, ::ArrayW<::StringW>)>(&GlobalNamespace::AchievementsModelSO::$Initialize$b__3_0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsResult")->byval_arg;
    static auto* achievementIds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsModelSO*), "<Initialize>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, achievementIds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
