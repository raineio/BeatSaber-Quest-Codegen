// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpaceConvertor
  class PlayerSpaceConvertor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSpaceConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpaceConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSpaceConvertor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion worldToPlayerSpaceRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__worldToPlayerSpaceRotation();
    // public UnityEngine.Quaternion get_worldToPlayerSpaceRotation()
    // Offset: 0x13D9E44
    ::UnityEngine::Quaternion get_worldToPlayerSpaceRotation();
    // public System.Void .ctor()
    // Offset: 0x13D9F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpaceConvertor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSpaceConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpaceConvertor*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13D9E50
    void Start();
  }; // PlayerSpaceConvertor
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpaceConvertor), 24 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_PlayerSpaceConvertorSizeCheck;
  static_assert(sizeof(PlayerSpaceConvertor) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation
// Il2CppName: get_worldToPlayerSpaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::PlayerSpaceConvertor::*)()>(&GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpaceConvertor*), "get_worldToPlayerSpaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpaceConvertor::*)()>(&GlobalNamespace::PlayerSpaceConvertor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpaceConvertor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
