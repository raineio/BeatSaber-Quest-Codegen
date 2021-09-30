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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: SpawnLaserAnimation
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class SpawnLaserAnimation : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Transform _centerThresholdTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* centerThresholdTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _horizontalLasersTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* horizontalLasersTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TubeBloomPrePassLight _leftHorizontalLaser
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TubeBloomPrePassLight* leftHorizontalLaser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private TubeBloomPrePassLight _rightHorizontalLaser
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* rightHorizontalLaser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // public System.Single _normalizedDistance
    // Size: 0x4
    // Offset: 0x38
    float normalizedDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _alphaMultiplier
    // Size: 0x4
    // Offset: 0x3C
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _laserLength
    // Size: 0x4
    // Offset: 0x40
    float laserLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _centerDistance
    // Size: 0x4
    // Offset: 0x44
    float centerDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x48
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _centerThresholdTransform
    UnityEngine::Transform*& dyn__centerThresholdTransform();
    // Get instance field reference: private UnityEngine.Transform _horizontalLasersTransform
    UnityEngine::Transform*& dyn__horizontalLasersTransform();
    // Get instance field reference: private TubeBloomPrePassLight _leftHorizontalLaser
    GlobalNamespace::TubeBloomPrePassLight*& dyn__leftHorizontalLaser();
    // Get instance field reference: private TubeBloomPrePassLight _rightHorizontalLaser
    GlobalNamespace::TubeBloomPrePassLight*& dyn__rightHorizontalLaser();
    // Get instance field reference: public System.Single _normalizedDistance
    float& dyn__normalizedDistance();
    // Get instance field reference: public System.Single _alphaMultiplier
    float& dyn__alphaMultiplier();
    // Get instance field reference: public System.Single _laserLength
    float& dyn__laserLength();
    // Get instance field reference: private System.Single _centerDistance
    float& dyn__centerDistance();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // private System.Void InitIfNeeded()
    // Offset: 0x110DF3C
    void InitIfNeeded();
    // protected System.Void LateUpdate()
    // Offset: 0x110E00C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x110E17C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnLaserAnimation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpawnLaserAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnLaserAnimation*, creationType>()));
    }
  }; // SpawnLaserAnimation
  #pragma pack(pop)
  static check_size<sizeof(SpawnLaserAnimation), 72 + sizeof(bool)> __GlobalNamespace_SpawnLaserAnimationSizeCheck;
  static_assert(sizeof(SpawnLaserAnimation) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnLaserAnimation*, "", "SpawnLaserAnimation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnLaserAnimation::*)()>(&GlobalNamespace::SpawnLaserAnimation::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnLaserAnimation*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnLaserAnimation::*)()>(&GlobalNamespace::SpawnLaserAnimation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnLaserAnimation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
