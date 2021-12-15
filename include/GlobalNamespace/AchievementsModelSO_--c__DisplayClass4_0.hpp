// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AchievementsModelSO
#include "GlobalNamespace/AchievementsModelSO.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0*, "", "AchievementsModelSO/<>c__DisplayClass4_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsModelSO/<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AchievementsModelSO::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public AchievementsModelSO <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AchievementsModelSO* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementsModelSO*) == 0x8);
    // public System.String achievementId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* achievementId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public AchievementsModelSO <>4__this
    GlobalNamespace::AchievementsModelSO*& dyn_$$4__this();
    // Get instance field reference: public System.String achievementId
    ::Il2CppString*& dyn_achievementId();
    // System.Void <UnlockAchievement>b__0(PlatformAchievementsModelSO/UnlockAchievementResult result)
    // Offset: 0x130BA1C
    void $UnlockAchievement$b__0(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result);
    // public System.Void .ctor()
    // Offset: 0x130B8E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsModelSO::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsModelSO::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // AchievementsModelSO/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(AchievementsModelSO::$$c__DisplayClass4_0), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_AchievementsModelSO_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(AchievementsModelSO::$$c__DisplayClass4_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::$UnlockAchievement$b__0
// Il2CppName: <UnlockAchievement>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::*)(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult)>(&GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::$UnlockAchievement$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0*), "<UnlockAchievement>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
