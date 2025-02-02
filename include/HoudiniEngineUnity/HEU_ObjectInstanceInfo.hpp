// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InstancedInput
  class HEU_InstancedInput;
  // Forward declaring type: HEU_PartData
  class HEU_PartData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ObjectInstanceInfo
  class HEU_ObjectInstanceInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, "HoudiniEngineUnity", "HEU_ObjectInstanceInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ObjectInstanceInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ObjectInstanceInfo : public ::UnityEngine::ScriptableObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*/ {
    public:
    public:
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InstancedInput> _instancedInputs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* instancedInputs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*) == 0x8);
    // public HoudiniEngineUnity.HEU_PartData _partTarget
    // Size: 0x8
    // Offset: 0x20
    ::HoudiniEngineUnity::HEU_PartData* partTarget;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_PartData*) == 0x8);
    // public System.Int32 _instancedObjectNodeID
    // Size: 0x4
    // Offset: 0x28
    int instancedObjectNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: instancedObjectNodeID and: instancedObjectPath
    char __padding2[0x4] = {};
    // public System.String _instancedObjectPath
    // Size: 0x8
    // Offset: 0x30
    ::StringW instancedObjectPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> _instances
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* instances;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_ObjectInstanceInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* i_HEU_ObjectInstanceInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InstancedInput> _instancedInputs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*& dyn__instancedInputs();
    // Get instance field reference: public HoudiniEngineUnity.HEU_PartData _partTarget
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_PartData*& dyn__partTarget();
    // Get instance field reference: public System.Int32 _instancedObjectNodeID
    [[deprecated("Use field access instead!")]] int& dyn__instancedObjectNodeID();
    // Get instance field reference: public System.String _instancedObjectPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__instancedObjectPath();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> _instances
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn__instances();
    // public System.Void .ctor()
    // Offset: 0x18CFD98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ObjectInstanceInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_ObjectInstanceInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ObjectInstanceInfo*, creationType>()));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_ObjectInstanceInfo other)
    // Offset: 0x18CFC80
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo* other);
  }; // HoudiniEngineUnity.HEU_ObjectInstanceInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_ObjectInstanceInfo), 56 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __HoudiniEngineUnity_HEU_ObjectInstanceInfoSizeCheck;
  static_assert(sizeof(HEU_ObjectInstanceInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectInstanceInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ObjectInstanceInfo::*)(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*)>(&HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ObjectInstanceInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ObjectInstanceInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
