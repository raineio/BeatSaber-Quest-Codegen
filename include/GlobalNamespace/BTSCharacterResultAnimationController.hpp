// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
  // Forward declaring type: MaterialPropertyBlockFloatAnimator
  class MaterialPropertyBlockFloatAnimator;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterResultAnimationController
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterResultAnimationController : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private MaterialPropertyBlockColorSetter _rimLightColorSetter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // [SpaceAttribute] Offset: 0xEFE74C
    // private UnityEngine.GameObject _collidersGameObject
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* collidersGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MaterialPropertyBlockColorSetter _rimLightColorSetter
    GlobalNamespace::MaterialPropertyBlockColorSetter*& dyn__rimLightColorSetter();
    // Get instance field reference: private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    GlobalNamespace::MaterialPropertyBlockFloatAnimator*& dyn__rimLightIntensityAnimator();
    // Get instance field reference: private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    GlobalNamespace::MaterialPropertyBlockFloatAnimator*& dyn__rimLightEdgeStartAnimator();
    // Get instance field reference: private UnityEngine.GameObject _collidersGameObject
    UnityEngine::GameObject*& dyn__collidersGameObject();
    // public System.Void SetCharacter(BTSCharacter btsCharacter)
    // Offset: 0x1250774
    void SetCharacter(GlobalNamespace::BTSCharacter* btsCharacter);
    // public System.Void StopAnimation()
    // Offset: 0x12507E4
    void StopAnimation();
    // public System.Void .ctor()
    // Offset: 0x1250804
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterResultAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterResultAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterResultAnimationController*, creationType>()));
    }
  }; // BTSCharacterResultAnimationController
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterResultAnimationController), 48 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_BTSCharacterResultAnimationControllerSizeCheck;
  static_assert(sizeof(BTSCharacterResultAnimationController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterResultAnimationController*, "", "BTSCharacterResultAnimationController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter
// Il2CppName: SetCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterResultAnimationController::*)(GlobalNamespace::BTSCharacter*)>(&GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter)> {
  static const MethodInfo* get() {
    static auto* btsCharacter = &::il2cpp_utils::GetClassFromName("", "BTSCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterResultAnimationController*), "SetCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btsCharacter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation
// Il2CppName: StopAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterResultAnimationController::*)()>(&GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterResultAnimationController*), "StopAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterResultAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
