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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RandomAnimationStartTime
  class RandomAnimationStartTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime*, "", "RandomAnimationStartTime");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RandomAnimationStartTime
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomAnimationStartTime : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animation*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animation _animation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animation*& dyn__animation();
    // public System.Void .ctor()
    // Offset: 0x2A265C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomAnimationStartTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RandomAnimationStartTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomAnimationStartTime*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x2A26364
    void Start();
  }; // RandomAnimationStartTime
  #pragma pack(pop)
  static check_size<sizeof(RandomAnimationStartTime), 24 + sizeof(::UnityEngine::Animation*)> __GlobalNamespace_RandomAnimationStartTimeSizeCheck;
  static_assert(sizeof(RandomAnimationStartTime) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimationStartTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimationStartTime::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomAnimationStartTime::*)()>(&GlobalNamespace::RandomAnimationStartTime::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomAnimationStartTime*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
