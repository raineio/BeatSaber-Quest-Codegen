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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTrail
  class SaberTrail;
  // Forward declaring type: SetSaberGlowColor
  class SetSaberGlowColor;
  // Forward declaring type: SetSaberFakeGlowColor
  class SetSaberFakeGlowColor;
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberModelController
  class SaberModelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberModelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelController*, "", "SaberModelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelController
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberModelController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SaberModelController::InitData
    class InitData;
    public:
    // private SaberTrail _saberTrail
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SaberTrail* saberTrail;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberTrail*) == 0x8);
    // private SetSaberGlowColor[] _setSaberGlowColors
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::SetSaberGlowColor*> setSaberGlowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetSaberGlowColor*>) == 0x8);
    // private SetSaberFakeGlowColor[] _setSaberFakeGlowColors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*> setSaberFakeGlowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*>) == 0x8);
    // [NullAllowed] Offset: 0x10DA9BC
    // private TubeBloomPrePassLight _saberLight
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::TubeBloomPrePassLight* saberLight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0x10DA9F4
    // private readonly SaberModelController/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SaberModelController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberModelController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x10DAA04
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberTrail _saberTrail
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberTrail*& dyn__saberTrail();
    // Get instance field reference: private SetSaberGlowColor[] _setSaberGlowColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SetSaberGlowColor*>& dyn__setSaberGlowColors();
    // Get instance field reference: private SetSaberFakeGlowColor[] _setSaberFakeGlowColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*>& dyn__setSaberFakeGlowColors();
    // Get instance field reference: private TubeBloomPrePassLight _saberLight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TubeBloomPrePassLight*& dyn__saberLight();
    // Get instance field reference: private readonly SaberModelController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberModelController::InitData*& dyn__initData();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // public System.Void .ctor()
    // Offset: 0x145E7D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberModelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController*, creationType>()));
    }
    // public System.Void Init(UnityEngine.Transform parent, Saber saber)
    // Offset: 0x145E500
    void Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber);
  }; // SaberModelController
  #pragma pack(pop)
  static check_size<sizeof(SaberModelController), 64 + sizeof(::GlobalNamespace::ColorManager*)> __GlobalNamespace_SaberModelControllerSizeCheck;
  static_assert(sizeof(SaberModelController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelController::*)(::UnityEngine::Transform*, ::GlobalNamespace::Saber*)>(&GlobalNamespace::SaberModelController::Init)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberModelController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, saber});
  }
};
