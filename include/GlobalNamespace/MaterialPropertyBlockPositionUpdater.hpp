// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyBlockAnimator
#include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
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
  // Forward declaring type: MaterialPropertyBlockPositionUpdater
  class MaterialPropertyBlockPositionUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockPositionUpdater*, "", "MaterialPropertyBlockPositionUpdater");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockPositionUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class MaterialPropertyBlockPositionUpdater : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    public:
    // [SpaceAttribute] Offset: 0x11076A8
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform _targetTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__targetTransform();
    // public System.Void .ctor()
    // Offset: 0x1CDB8D4
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockPositionUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyBlockPositionUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockPositionUpdater*, creationType>()));
    }
    // protected override System.Void SetProperty()
    // Offset: 0x1CDB7BC
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::SetProperty()
    void SetProperty();
  }; // MaterialPropertyBlockPositionUpdater
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockPositionUpdater), 48 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_MaterialPropertyBlockPositionUpdaterSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockPositionUpdater) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockPositionUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockPositionUpdater::SetProperty
// Il2CppName: SetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockPositionUpdater::*)()>(&GlobalNamespace::MaterialPropertyBlockPositionUpdater::SetProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockPositionUpdater*), "SetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
