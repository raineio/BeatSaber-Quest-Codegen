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
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OneTimeLightColorEffect
  class OneTimeLightColorEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OneTimeLightColorEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OneTimeLightColorEffect*, "", "OneTimeLightColorEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OneTimeLightColorEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class OneTimeLightColorEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private ColorSO _color
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSO* color;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x20
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lightsId
    // Size: 0x4
    // Offset: 0x24
    int lightsId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0x10D57D8
    // private LightWithIdManager _lightWithIdManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LightWithIdManager* lightWithIdManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSO _color
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__color();
    // Get instance field reference: private System.Single _alpha
    [[deprecated("Use field access instead!")]] float& dyn__alpha();
    // Get instance field reference: private System.Int32 _lightsId
    [[deprecated("Use field access instead!")]] int& dyn__lightsId();
    // Get instance field reference: private LightWithIdManager _lightWithIdManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIdManager*& dyn__lightWithIdManager();
    // public System.Void .ctor()
    // Offset: 0x1550C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeLightColorEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OneTimeLightColorEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeLightColorEffect*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x1550C00
    void Update();
  }; // OneTimeLightColorEffect
  #pragma pack(pop)
  static check_size<sizeof(OneTimeLightColorEffect), 40 + sizeof(::GlobalNamespace::LightWithIdManager*)> __GlobalNamespace_OneTimeLightColorEffectSizeCheck;
  static_assert(sizeof(OneTimeLightColorEffect) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OneTimeLightColorEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OneTimeLightColorEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OneTimeLightColorEffect::*)()>(&GlobalNamespace::OneTimeLightColorEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OneTimeLightColorEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
