// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyBlockAnimator
#include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockVectorAnimator
  class MaterialPropertyBlockVectorAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockVectorAnimator*, "", "MaterialPropertyBlockVectorAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockVectorAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class MaterialPropertyBlockVectorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    public:
    // [SpaceAttribute] Offset: 0x10BFD6C
    // private UnityEngine.Vector4 _vector
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Vector4 vector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Vector4 _vector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn__vector();
    // public System.Void .ctor()
    // Offset: 0x1E76054
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockVectorAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyBlockVectorAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockVectorAnimator*, creationType>()));
    }
    // protected override System.Void SetProperty()
    // Offset: 0x1E76014
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::SetProperty()
    void SetProperty();
  }; // MaterialPropertyBlockVectorAnimator
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockVectorAnimator), 48 + sizeof(::UnityEngine::Vector4)> __GlobalNamespace_MaterialPropertyBlockVectorAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockVectorAnimator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockVectorAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty
// Il2CppName: SetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockVectorAnimator*), "SetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
