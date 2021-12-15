// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAgreements
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerAgreements : public ::Il2CppObject {
    public:
    // public System.Int32 eulaVersion
    // Size: 0x4
    // Offset: 0x10
    int eulaVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 privacyPolicyVersion
    // Size: 0x4
    // Offset: 0x14
    int privacyPolicyVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 healthAndSafetyVersion
    // Size: 0x4
    // Offset: 0x18
    int healthAndSafetyVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayerAgreements
    PlayerAgreements(int eulaVersion_ = {}, int privacyPolicyVersion_ = {}, int healthAndSafetyVersion_ = {}) noexcept : eulaVersion{eulaVersion_}, privacyPolicyVersion{privacyPolicyVersion_}, healthAndSafetyVersion{healthAndSafetyVersion_} {}
    // static field const value: static public System.Int32 kFirstEulaVersion
    static constexpr const int kFirstEulaVersion = 1;
    // Get static field: static public System.Int32 kFirstEulaVersion
    static int _get_kFirstEulaVersion();
    // Set static field: static public System.Int32 kFirstEulaVersion
    static void _set_kFirstEulaVersion(int value);
    // static field const value: static public System.Int32 kFirstPrivacyPolicyVersion
    static constexpr const int kFirstPrivacyPolicyVersion = 1;
    // Get static field: static public System.Int32 kFirstPrivacyPolicyVersion
    static int _get_kFirstPrivacyPolicyVersion();
    // Set static field: static public System.Int32 kFirstPrivacyPolicyVersion
    static void _set_kFirstPrivacyPolicyVersion(int value);
    // static field const value: static private System.Int32 kCurrentEulaVersion
    static constexpr const int kCurrentEulaVersion = 1;
    // Get static field: static private System.Int32 kCurrentEulaVersion
    static int _get_kCurrentEulaVersion();
    // Set static field: static private System.Int32 kCurrentEulaVersion
    static void _set_kCurrentEulaVersion(int value);
    // static field const value: static private System.Int32 kCurrentPrivacyPolicyVersion
    static constexpr const int kCurrentPrivacyPolicyVersion = 1;
    // Get static field: static private System.Int32 kCurrentPrivacyPolicyVersion
    static int _get_kCurrentPrivacyPolicyVersion();
    // Set static field: static private System.Int32 kCurrentPrivacyPolicyVersion
    static void _set_kCurrentPrivacyPolicyVersion(int value);
    // static field const value: static private System.Int32 kCurrentHealthAndSafetyVersion
    static constexpr const int kCurrentHealthAndSafetyVersion = 1;
    // Get static field: static private System.Int32 kCurrentHealthAndSafetyVersion
    static int _get_kCurrentHealthAndSafetyVersion();
    // Set static field: static private System.Int32 kCurrentHealthAndSafetyVersion
    static void _set_kCurrentHealthAndSafetyVersion(int value);
    // Get instance field reference: public System.Int32 eulaVersion
    int& dyn_eulaVersion();
    // Get instance field reference: public System.Int32 privacyPolicyVersion
    int& dyn_privacyPolicyVersion();
    // Get instance field reference: public System.Int32 healthAndSafetyVersion
    int& dyn_healthAndSafetyVersion();
    // public System.Void .ctor(System.Int32 eulaVersion, System.Int32 privacyPolicyVersion, System.Int32 healthAndSafetyVersion)
    // Offset: 0x11518E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAgreements* New_ctor(int eulaVersion, int privacyPolicyVersion, int healthAndSafetyVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAgreements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAgreements*, creationType>(eulaVersion, privacyPolicyVersion, healthAndSafetyVersion)));
    }
    // public System.Void AgreeToEula()
    // Offset: 0x1151920
    void AgreeToEula();
    // public System.Void AgreeToPrivacyPolicy()
    // Offset: 0x115192C
    void AgreeToPrivacyPolicy();
    // public System.Void AgreeToHealthAndSafety()
    // Offset: 0x1151938
    void AgreeToHealthAndSafety();
    // public System.Boolean AgreedToEula()
    // Offset: 0x1151944
    bool AgreedToEula();
    // public System.Boolean AgreedToPrivacyPolicy()
    // Offset: 0x1151954
    bool AgreedToPrivacyPolicy();
    // public System.Boolean AgreedToHealthAndSafety()
    // Offset: 0x1151964
    bool AgreedToHealthAndSafety();
    // public System.Void .ctor()
    // Offset: 0x11518B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAgreements* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAgreements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAgreements*, creationType>()));
    }
  }; // PlayerAgreements
  #pragma pack(pop)
  static check_size<sizeof(PlayerAgreements), 24 + sizeof(int)> __GlobalNamespace_PlayerAgreementsSizeCheck;
  static_assert(sizeof(PlayerAgreements) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAgreements*, "", "PlayerAgreements");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToEula
// Il2CppName: AgreeToEula
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToEula)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToEula", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy
// Il2CppName: AgreeToPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety
// Il2CppName: AgreeToHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToEula
// Il2CppName: AgreedToEula
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToEula)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToEula", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy
// Il2CppName: AgreedToPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety
// Il2CppName: AgreedToHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!