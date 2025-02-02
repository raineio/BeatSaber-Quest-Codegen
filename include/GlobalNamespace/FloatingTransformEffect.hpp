// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FloatingTransformEffect
  class FloatingTransformEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FloatingTransformEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatingTransformEffect*, "", "FloatingTransformEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: FloatingTransformEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatingTransformEffect : public ::UnityEngine::MonoBehaviour/*, public ::Zenject::ITickable*/ {
    public:
    public:
    // private UnityEngine.Vector3 _positionMultiplier
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 positionMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _rotationMultiplier
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 rotationMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0x111EF78
    // [NullAllowed] Offset: 0x111EF78
    // private UnityEngine.Transform _rotationTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* rotationTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _maxRotationDegrees
    // Size: 0x4
    // Offset: 0x38
    float maxRotationDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x111EFE4
    // private UnityEngine.Vector2 _xAmplitude
    // Size: 0x8
    // Offset: 0x3C
    ::UnityEngine::Vector2 xAmplitude;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _xFrequency
    // Size: 0x8
    // Offset: 0x44
    ::UnityEngine::Vector2 xFrequency;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [HeaderAttribute] Offset: 0x111F040
    // private UnityEngine.Vector2 _yAmplitude
    // Size: 0x8
    // Offset: 0x4C
    ::UnityEngine::Vector2 yAmplitude;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _yFrequency
    // Size: 0x8
    // Offset: 0x54
    ::UnityEngine::Vector2 yFrequency;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [HeaderAttribute] Offset: 0x111F09C
    // private UnityEngine.Vector2 _zAmplitude
    // Size: 0x8
    // Offset: 0x5C
    ::UnityEngine::Vector2 zAmplitude;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _zFrequency
    // Size: 0x8
    // Offset: 0x64
    ::UnityEngine::Vector2 zFrequency;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: zFrequency and: transform
    char __padding9[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _origin
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _offsetX
    // Size: 0x4
    // Offset: 0x84
    float offsetX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _offsetY
    // Size: 0x4
    // Offset: 0x88
    float offsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _offsetZ
    // Size: 0x4
    // Offset: 0x8C
    float offsetZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _amplitudeX
    // Size: 0x4
    // Offset: 0x90
    float amplitudeX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _amplitudeY
    // Size: 0x4
    // Offset: 0x94
    float amplitudeY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _amplitudeZ
    // Size: 0x4
    // Offset: 0x98
    float amplitudeZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _frequencyX
    // Size: 0x4
    // Offset: 0x9C
    float frequencyX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _frequencyY
    // Size: 0x4
    // Offset: 0xA0
    float frequencyY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _frequencyZ
    // Size: 0x4
    // Offset: 0xA4
    float frequencyZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion _targetRotation
    // Size: 0x10
    // Offset: 0xA8
    ::UnityEngine::Quaternion targetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating interface conversion operator: operator ::Zenject::ITickable
    operator ::Zenject::ITickable() noexcept {
      return *reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: i_ITickable
    inline ::Zenject::ITickable* i_ITickable() noexcept {
      return reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _positionMultiplier
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__positionMultiplier();
    // Get instance field reference: private UnityEngine.Vector3 _rotationMultiplier
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rotationMultiplier();
    // Get instance field reference: private UnityEngine.Transform _rotationTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rotationTransform();
    // Get instance field reference: private System.Single _maxRotationDegrees
    [[deprecated("Use field access instead!")]] float& dyn__maxRotationDegrees();
    // Get instance field reference: private UnityEngine.Vector2 _xAmplitude
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__xAmplitude();
    // Get instance field reference: private UnityEngine.Vector2 _xFrequency
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__xFrequency();
    // Get instance field reference: private UnityEngine.Vector2 _yAmplitude
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__yAmplitude();
    // Get instance field reference: private UnityEngine.Vector2 _yFrequency
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__yFrequency();
    // Get instance field reference: private UnityEngine.Vector2 _zAmplitude
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__zAmplitude();
    // Get instance field reference: private UnityEngine.Vector2 _zFrequency
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__zFrequency();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Vector3 _origin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__origin();
    // Get instance field reference: private System.Single _offsetX
    [[deprecated("Use field access instead!")]] float& dyn__offsetX();
    // Get instance field reference: private System.Single _offsetY
    [[deprecated("Use field access instead!")]] float& dyn__offsetY();
    // Get instance field reference: private System.Single _offsetZ
    [[deprecated("Use field access instead!")]] float& dyn__offsetZ();
    // Get instance field reference: private System.Single _amplitudeX
    [[deprecated("Use field access instead!")]] float& dyn__amplitudeX();
    // Get instance field reference: private System.Single _amplitudeY
    [[deprecated("Use field access instead!")]] float& dyn__amplitudeY();
    // Get instance field reference: private System.Single _amplitudeZ
    [[deprecated("Use field access instead!")]] float& dyn__amplitudeZ();
    // Get instance field reference: private System.Single _frequencyX
    [[deprecated("Use field access instead!")]] float& dyn__frequencyX();
    // Get instance field reference: private System.Single _frequencyY
    [[deprecated("Use field access instead!")]] float& dyn__frequencyY();
    // Get instance field reference: private System.Single _frequencyZ
    [[deprecated("Use field access instead!")]] float& dyn__frequencyZ();
    // Get instance field reference: private UnityEngine.Quaternion _targetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__targetRotation();
    // public System.Void .ctor()
    // Offset: 0x13A0B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatingTransformEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FloatingTransformEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatingTransformEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13A0728
    void Start();
    // public System.Void Tick()
    // Offset: 0x13A0850
    void Tick();
    // private System.Void Refresh()
    // Offset: 0x13A076C
    void Refresh();
    // private UnityEngine.Vector3 GetPoint(System.Single time)
    // Offset: 0x13A0A54
    ::UnityEngine::Vector3 GetPoint(float time);
  }; // FloatingTransformEffect
  #pragma pack(pop)
  static check_size<sizeof(FloatingTransformEffect), 168 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_FloatingTransformEffectSizeCheck;
  static_assert(sizeof(FloatingTransformEffect) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FloatingTransformEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FloatingTransformEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatingTransformEffect::*)()>(&GlobalNamespace::FloatingTransformEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatingTransformEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatingTransformEffect::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatingTransformEffect::*)()>(&GlobalNamespace::FloatingTransformEffect::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatingTransformEffect*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatingTransformEffect::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatingTransformEffect::*)()>(&GlobalNamespace::FloatingTransformEffect::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatingTransformEffect*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatingTransformEffect::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::FloatingTransformEffect::*)(float)>(&GlobalNamespace::FloatingTransformEffect::GetPoint)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatingTransformEffect*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
