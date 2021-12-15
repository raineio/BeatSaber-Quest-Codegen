// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class StaticMemoryPool_7;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: Vector3Tween
  class Vector3Tween;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Tweening::Vector3Tween);
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector3Tween*, "Tweening", "Vector3Tween");
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.Vector3Tween
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector3Tween : public Tweening::Tween_1<UnityEngine::Vector3> {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF4AB2C
    // Get static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Vector3,UnityEngine.Vector3,System.Action`1<UnityEngine.Vector3>,System.Single,Tweening.EaseType,System.Single,Tweening.Vector3Tween> Pool
    static Zenject::StaticMemoryPool_7<UnityEngine::Vector3, UnityEngine::Vector3, System::Action_1<UnityEngine::Vector3>*, float, Tweening::EaseType, float, Tweening::Vector3Tween*>* _get_Pool();
    // Set static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Vector3,UnityEngine.Vector3,System.Action`1<UnityEngine.Vector3>,System.Single,Tweening.EaseType,System.Single,Tweening.Vector3Tween> Pool
    static void _set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Vector3, UnityEngine::Vector3, System::Action_1<UnityEngine::Vector3>*, float, Tweening::EaseType, float, Tweening::Vector3Tween*>* value);
    // public System.Void .ctor(UnityEngine.Vector3 fromValue, UnityEngine.Vector3 toValue, System.Action`1<UnityEngine.Vector3> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x120CB34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3Tween* New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector3Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3Tween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(UnityEngine.Vector3 fromValue, UnityEngine.Vector3 toValue, System.Action`1<UnityEngine.Vector3> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x120CBFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3Tween* New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector3Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3Tween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // static private System.Void .cctor()
    // Offset: 0x120CDC0
    static void _cctor();
    // public UnityEngine.Vector3 GetValue(System.Single t)
    // Offset: 0x120CCC4
    UnityEngine::Vector3 GetValue(float t);
    // public System.Void .ctor()
    // Offset: 0x120CAE4
    // Implemented from: Tweening.Tween`1
    // Base method: System.Void Tween_1::.ctor()
    // Base method: System.Void Tween::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3Tween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector3Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3Tween*, creationType>()));
    }
  }; // Tweening.Vector3Tween
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::Vector3Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::Vector3Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::Vector3Tween::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tweening::Vector3Tween::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Vector3Tween*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Vector3Tween::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (Tweening::Vector3Tween::*)(float)>(&Tweening::Vector3Tween::GetValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Vector3Tween*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Vector3Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
