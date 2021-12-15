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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: IBeatEffectDidFinishEvent
  class IBeatEffectDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatEffect
  class BeatEffect;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffect*, "", "BeatEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatEffect::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Transform _spriteTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* spriteTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // [SpaceAttribute] Offset: 0xF3A504
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteXScaleCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* spriteXScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteYScaleCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* spriteYScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _transparencyCurve
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* transparencyCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>*) == 0x8);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x58
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x5C
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.SpriteRenderer _spriteRenderer
    UnityEngine::SpriteRenderer*& dyn__spriteRenderer();
    // Get instance field reference: private UnityEngine.Transform _spriteTransform
    UnityEngine::Transform*& dyn__spriteTransform();
    // Get instance field reference: private TubeBloomPrePassLight _tubeBloomPrePassLight
    GlobalNamespace::TubeBloomPrePassLight*& dyn__tubeBloomPrePassLight();
    // Get instance field reference: private UnityEngine.AnimationCurve _lightIntensityCurve
    UnityEngine::AnimationCurve*& dyn__lightIntensityCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _spriteXScaleCurve
    UnityEngine::AnimationCurve*& dyn__spriteXScaleCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _spriteYScaleCurve
    UnityEngine::AnimationCurve*& dyn__spriteYScaleCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _transparencyCurve
    UnityEngine::AnimationCurve*& dyn__transparencyCurve();
    // Get instance field reference: private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>*& dyn__didFinishEvent();
    // Get instance field reference: private System.Single _animationDuration
    float& dyn__animationDuration();
    // Get instance field reference: private System.Single _elapsedTime
    float& dyn__elapsedTime();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // public ILazyCopyHashSet`1<IBeatEffectDidFinishEvent> get_didFinishEvent()
    // Offset: 0x12C6164
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* get_didFinishEvent();
    // public System.Void Init(UnityEngine.Color color, System.Single animationDuration, UnityEngine.Quaternion rotation)
    // Offset: 0x12C616C
    void Init(UnityEngine::Color color, float animationDuration, UnityEngine::Quaternion rotation);
    // public System.Void ManualUpdate(System.Single deltaTime)
    // Offset: 0x12C6264
    void ManualUpdate(float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x12C653C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffect*, creationType>()));
    }
  }; // BeatEffect
  #pragma pack(pop)
  static check_size<sizeof(BeatEffect), 96 + sizeof(UnityEngine::Color)> __GlobalNamespace_BeatEffectSizeCheck;
  static_assert(sizeof(BeatEffect) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* (GlobalNamespace::BeatEffect::*)()>(&GlobalNamespace::BeatEffect::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffect::*)(UnityEngine::Color, float, UnityEngine::Quaternion)>(&GlobalNamespace::BeatEffect::Init)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* animationDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, animationDuration, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffect::*)(float)>(&GlobalNamespace::BeatEffect::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
