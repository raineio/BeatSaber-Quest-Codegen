// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PoseObjectIdSO
  class PoseObjectIdSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PoseObject
  class PoseObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PoseObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObject*, "", "PoseObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PoseObject
  // [TokenAttribute] Offset: FFFFFFFF
  class PoseObject : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private PoseObjectIdSO _poseObjectId
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PoseObjectIdSO* poseObjectId;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PoseObjectIdSO*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private PoseObjectIdSO _poseObjectId
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PoseObjectIdSO*& dyn__poseObjectId();
    // public UnityEngine.Transform get_objectTransform()
    // Offset: 0x14237C8
    ::UnityEngine::Transform* get_objectTransform();
    // public System.String get_id()
    // Offset: 0x14237D0
    ::StringW get_id();
    // public System.Void .ctor(UnityEngine.Transform transform, PoseObjectIdSO poseObjectId)
    // Offset: 0x14237EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoseObject* New_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoseObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoseObject*, creationType>(transform, poseObjectId)));
    }
  }; // PoseObject
  #pragma pack(pop)
  static check_size<sizeof(PoseObject), 24 + sizeof(::GlobalNamespace::PoseObjectIdSO*)> __GlobalNamespace_PoseObjectSizeCheck;
  static_assert(sizeof(PoseObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoseObject::get_objectTransform
// Il2CppName: get_objectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::PoseObject::*)()>(&GlobalNamespace::PoseObject::get_objectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseObject*), "get_objectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseObject::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PoseObject::*)()>(&GlobalNamespace::PoseObject::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseObject*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
