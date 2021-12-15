// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetSaberFakeGlowColor
  class SetSaberFakeGlowColor;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SetSaberFakeGlowColor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberFakeGlowColor*, "", "SetSaberFakeGlowColor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberFakeGlowColor
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSaberFakeGlowColor : public UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Color _tintColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xF3FE70
    // [NullAllowed] Offset: 0xF3FE70
    // private SaberTypeObject _saberTypeObject
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberTypeObject* saberTypeObject;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private Parametric3SliceSpriteController _parametric3SliceSprite
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::Parametric3SliceSpriteController* parametric3SliceSprite;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Parametric3SliceSpriteController*) == 0x8);
    // [InjectAttribute] Offset: 0xF3FEC8
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _tintColor
    UnityEngine::Color& dyn__tintColor();
    // Get instance field reference: private SaberTypeObject _saberTypeObject
    GlobalNamespace::SaberTypeObject*& dyn__saberTypeObject();
    // Get instance field reference: private Parametric3SliceSpriteController _parametric3SliceSprite
    GlobalNamespace::Parametric3SliceSpriteController*& dyn__parametric3SliceSprite();
    // Get instance field reference: private ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private SaberType _saberType
    GlobalNamespace::SaberType& dyn__saberType();
    // public System.Void set_saberType(SaberType value)
    // Offset: 0x122A318
    void set_saberType(GlobalNamespace::SaberType value);
    // protected System.Void Start()
    // Offset: 0x1236960
    void Start();
    // private System.Void SetColors()
    // Offset: 0x1236900
    void SetColors();
    // public System.Void .ctor()
    // Offset: 0x12369F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberFakeGlowColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberFakeGlowColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberFakeGlowColor*, creationType>()));
    }
  }; // SetSaberFakeGlowColor
  #pragma pack(pop)
  static check_size<sizeof(SetSaberFakeGlowColor), 64 + sizeof(GlobalNamespace::SaberType)> __GlobalNamespace_SetSaberFakeGlowColorSizeCheck;
  static_assert(sizeof(SetSaberFakeGlowColor) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::set_saberType
// Il2CppName: set_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::SetSaberFakeGlowColor::set_saberType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetSaberFakeGlowColor*), "set_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)()>(&GlobalNamespace::SetSaberFakeGlowColor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetSaberFakeGlowColor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)()>(&GlobalNamespace::SetSaberFakeGlowColor::SetColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetSaberFakeGlowColor*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
