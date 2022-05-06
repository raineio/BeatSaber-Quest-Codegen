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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AnimatedAvatarPoseController
  class AnimatedAvatarPoseController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AnimatedAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimatedAvatarPoseController*, "", "AnimatedAvatarPoseController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AnimatedAvatarPoseController
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedAvatarPoseController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10CF73C
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarPoseController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly AvatarPoseController _avatarPoseController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarPoseController*& dyn__avatarPoseController();
    // public System.Void .ctor()
    // Offset: 0x14E9548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedAvatarPoseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AnimatedAvatarPoseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedAvatarPoseController*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x14E933C
    void LateUpdate();
  }; // AnimatedAvatarPoseController
  #pragma pack(pop)
  static check_size<sizeof(AnimatedAvatarPoseController), 24 + sizeof(::GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AnimatedAvatarPoseControllerSizeCheck;
  static_assert(sizeof(AnimatedAvatarPoseController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnimatedAvatarPoseController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AnimatedAvatarPoseController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimatedAvatarPoseController::*)()>(&GlobalNamespace::AnimatedAvatarPoseController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimatedAvatarPoseController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
