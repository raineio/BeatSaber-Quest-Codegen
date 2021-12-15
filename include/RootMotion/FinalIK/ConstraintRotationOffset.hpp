// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: ConstraintRotationOffset
  class ConstraintRotationOffset;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::ConstraintRotationOffset);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintRotationOffset*, "RootMotion.FinalIK", "ConstraintRotationOffset");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotationOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintRotationOffset : public RootMotion::FinalIK::Constraint {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Quaternion offset
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultRotation
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion defaultRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion lastLocalRotation
    // Size: 0x10
    // Offset: 0x4C
    UnityEngine::Quaternion lastLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultTargetLocalRotation
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Quaternion defaultTargetLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x6C
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Quaternion offset
    UnityEngine::Quaternion& dyn_offset();
    // Get instance field reference: private UnityEngine.Quaternion defaultRotation
    UnityEngine::Quaternion& dyn_defaultRotation();
    // Get instance field reference: private UnityEngine.Quaternion defaultLocalRotation
    UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // Get instance field reference: private UnityEngine.Quaternion lastLocalRotation
    UnityEngine::Quaternion& dyn_lastLocalRotation();
    // Get instance field reference: private UnityEngine.Quaternion defaultTargetLocalRotation
    UnityEngine::Quaternion& dyn_defaultTargetLocalRotation();
    // Get instance field reference: private System.Boolean initiated
    bool& dyn_initiated();
    // private System.Boolean get_rotationChanged()
    // Offset: 0x1EADDF8
    bool get_rotationChanged();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1EADED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotationOffset* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotationOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotationOffset*, creationType>(transform)));
    }
    // public System.Void .ctor()
    // Offset: 0x1EADEC8
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotationOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotationOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotationOffset*, creationType>()));
    }
    // public override System.Void UpdateConstraint()
    // Offset: 0x1EADC58
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
  }; // RootMotion.FinalIK.ConstraintRotationOffset
  #pragma pack(pop)
  static check_size<sizeof(ConstraintRotationOffset), 108 + sizeof(bool)> __RootMotion_FinalIK_ConstraintRotationOffsetSizeCheck;
  static_assert(sizeof(ConstraintRotationOffset) == 0x6D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged
// Il2CppName: get_rotationChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::ConstraintRotationOffset::*)()>(&RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintRotationOffset*), "get_rotationChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotationOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotationOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint
// Il2CppName: UpdateConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintRotationOffset::*)()>(&RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintRotationOffset*), "UpdateConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
