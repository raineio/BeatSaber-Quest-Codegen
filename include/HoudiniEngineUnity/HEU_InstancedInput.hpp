// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InstancedInput
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InstancedInput : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InstancedInput*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.GameObject _instancedGameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* instancedGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 _rotationOffset
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _scaleOffset
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 scaleOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InstancedInput*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InstancedInput*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InstancedInput*>*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject _instancedGameObject
    UnityEngine::GameObject*& dyn__instancedGameObject();
    // Get instance field reference: public UnityEngine.Vector3 _rotationOffset
    UnityEngine::Vector3& dyn__rotationOffset();
    // Get instance field reference: public UnityEngine.Vector3 _scaleOffset
    UnityEngine::Vector3& dyn__scaleOffset();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_InstancedInput other)
    // Offset: 0x152AC58
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_InstancedInput* other);
    // public System.Void .ctor()
    // Offset: 0x152ADB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InstancedInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_InstancedInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InstancedInput*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InstancedInput
  #pragma pack(pop)
  static check_size<sizeof(HEU_InstancedInput), 36 + sizeof(UnityEngine::Vector3)> __HoudiniEngineUnity_HEU_InstancedInputSizeCheck;
  static_assert(sizeof(HEU_InstancedInput) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InstancedInput*, "HoudiniEngineUnity", "HEU_InstancedInput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InstancedInput::*)(HoudiniEngineUnity::HEU_InstancedInput*)>(&HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InstancedInput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InstancedInput*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InstancedInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
