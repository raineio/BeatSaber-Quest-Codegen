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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: TriggerEventBroadcaster
  class TriggerEventBroadcaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::TriggerEventBroadcaster);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TriggerEventBroadcaster*, "RootMotion", "TriggerEventBroadcaster");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.TriggerEventBroadcaster
  // [TokenAttribute] Offset: FFFFFFFF
  class TriggerEventBroadcaster : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject target
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_target();
    // public System.Void .ctor()
    // Offset: 0x1FCF3A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerEventBroadcaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::TriggerEventBroadcaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerEventBroadcaster*, creationType>()));
    }
    // private System.Void OnTriggerEnter(UnityEngine.Collider collider)
    // Offset: 0x1FCF178
    void OnTriggerEnter(::UnityEngine::Collider* collider);
    // private System.Void OnTriggerStay(UnityEngine.Collider collider)
    // Offset: 0x1FCF230
    void OnTriggerStay(::UnityEngine::Collider* collider);
    // private System.Void OnTriggerExit(UnityEngine.Collider collider)
    // Offset: 0x1FCF2E8
    void OnTriggerExit(::UnityEngine::Collider* collider);
  }; // RootMotion.TriggerEventBroadcaster
  #pragma pack(pop)
  static check_size<sizeof(TriggerEventBroadcaster), 24 + sizeof(::UnityEngine::GameObject*)> __RootMotion_TriggerEventBroadcasterSizeCheck;
  static_assert(sizeof(TriggerEventBroadcaster) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::TriggerEventBroadcaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::TriggerEventBroadcaster::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(&RootMotion::TriggerEventBroadcaster::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::TriggerEventBroadcaster*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: RootMotion::TriggerEventBroadcaster::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(&RootMotion::TriggerEventBroadcaster::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::TriggerEventBroadcaster*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: RootMotion::TriggerEventBroadcaster::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(&RootMotion::TriggerEventBroadcaster::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::TriggerEventBroadcaster*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
