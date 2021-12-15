// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::IKSolver);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver*, "RootMotion.FinalIK", "IKSolver");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolver : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::IKSolver::Point
    class Point;
    // Nested type: RootMotion::FinalIK::IKSolver::Bone
    class Bone;
    // Nested type: RootMotion::FinalIK::IKSolver::Node
    class Node;
    // Nested type: RootMotion::FinalIK::IKSolver::UpdateDelegate
    class UpdateDelegate;
    // Nested type: RootMotion::FinalIK::IKSolver::IterationDelegate
    class IterationDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Vector3 IKPosition
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xF5E414
    // [RangeAttribute] Offset: 0xF5E414
    // public System.Single IKPositionWeight
    // Size: 0x4
    // Offset: 0x1C
    float IKPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: OnPreInitiate
    char __padding2[0x7] = {};
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreInitiate
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreInitiate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostInitiate
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostInitiate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreUpdate
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreUpdate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostUpdate
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostUpdate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // protected System.Boolean firstInitiation
    // Size: 0x1
    // Offset: 0x48
    bool firstInitiation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstInitiation and: root
    char __padding7[0x7] = {};
    // protected UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector3 IKPosition
    UnityEngine::Vector3& dyn_IKPosition();
    // Get instance field reference: public System.Single IKPositionWeight
    float& dyn_IKPositionWeight();
    // Get instance field reference: private System.Boolean <initiated>k__BackingField
    bool& dyn_$initiated$k__BackingField();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreInitiate
    RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPreInitiate();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostInitiate
    RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPostInitiate();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreUpdate
    RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPreUpdate();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostUpdate
    RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPostUpdate();
    // Get instance field reference: protected System.Boolean firstInitiation
    bool& dyn_firstInitiation();
    // Get instance field reference: protected UnityEngine.Transform root
    UnityEngine::Transform*& dyn_root();
    // public System.Boolean get_initiated()
    // Offset: 0x1E86D1C
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1E86D24
    void set_initiated(bool value);
    // public System.Boolean IsValid()
    // Offset: 0x1E86BF4
    bool IsValid();
    // public System.Boolean IsValid(ref System.String message)
    // Offset: 0xFFFFFFFF
    bool IsValid(ByRef<::Il2CppString*> message);
    // public System.Void Initiate(UnityEngine.Transform root)
    // Offset: 0x1E7F640
    void Initiate(UnityEngine::Transform* root);
    // public System.Void Update()
    // Offset: 0x1E7F560
    void Update();
    // public UnityEngine.Vector3 GetIKPosition()
    // Offset: 0x1E86C70
    UnityEngine::Vector3 GetIKPosition();
    // public System.Void SetIKPosition(UnityEngine.Vector3 position)
    // Offset: 0x1E86C7C
    void SetIKPosition(UnityEngine::Vector3 position);
    // public System.Single GetIKPositionWeight()
    // Offset: 0x1E86C88
    float GetIKPositionWeight();
    // public System.Void SetIKPositionWeight(System.Single weight)
    // Offset: 0x1E86C90
    void SetIKPositionWeight(float weight);
    // public UnityEngine.Transform GetRoot()
    // Offset: 0x1E86D14
    UnityEngine::Transform* GetRoot();
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0xFFFFFFFF
    ::ArrayW<RootMotion::FinalIK::IKSolver::Point*> GetPoints();
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0xFFFFFFFF
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public System.Void FixTransforms()
    // Offset: 0xFFFFFFFF
    void FixTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0xFFFFFFFF
    void StoreDefaultLocalState();
    // protected System.Void OnInitiate()
    // Offset: 0xFFFFFFFF
    void OnInitiate();
    // protected System.Void OnUpdate()
    // Offset: 0xFFFFFFFF
    void OnUpdate();
    // protected System.Void LogWarning(System.String message)
    // Offset: 0x1E86D30
    void LogWarning(::Il2CppString* message);
    // static public UnityEngine.Transform ContainsDuplicateBone(RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones)
    // Offset: 0x1E86D48
    static UnityEngine::Transform* ContainsDuplicateBone(::ArrayW<RootMotion::FinalIK::IKSolver::Bone*> bones);
    // static public System.Boolean HierarchyIsValid(RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones)
    // Offset: 0x1E86E84
    static bool HierarchyIsValid(::ArrayW<RootMotion::FinalIK::IKSolver::Bone*> bones);
    // static protected System.Single PreSolveBones(ref RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones)
    // Offset: 0x1E86F30
    static float PreSolveBones(ByRef<::ArrayW<RootMotion::FinalIK::IKSolver::Bone*>> bones);
    // protected System.Void .ctor()
    // Offset: 0x1E872B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver
  #pragma pack(pop)
  static check_size<sizeof(IKSolver), 80 + sizeof(UnityEngine::Transform*)> __RootMotion_FinalIK_IKSolverSizeCheck;
  static_assert(sizeof(IKSolver) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)(bool)>(&RootMotion::FinalIK::IKSolver::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolver::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::IKSolver::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolver::Initiate)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::GetIKPosition
// Il2CppName: GetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::GetIKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "GetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::SetIKPosition
// Il2CppName: SetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolver::SetIKPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "SetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::GetIKPositionWeight
// Il2CppName: GetIKPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::GetIKPositionWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "GetIKPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::SetIKPositionWeight
// Il2CppName: SetIKPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)(float)>(&RootMotion::FinalIK::IKSolver::SetIKPositionWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "SetIKPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::GetRoot
// Il2CppName: GetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::GetRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "GetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::IKSolver::Point*> (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolver::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolver::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)()>(&RootMotion::FinalIK::IKSolver::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::*)(::Il2CppString*)>(&RootMotion::FinalIK::IKSolver::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::ContainsDuplicateBone
// Il2CppName: ContainsDuplicateBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(::ArrayW<RootMotion::FinalIK::IKSolver::Bone*>)>(&RootMotion::FinalIK::IKSolver::ContainsDuplicateBone)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Bone"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "ContainsDuplicateBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::HierarchyIsValid
// Il2CppName: HierarchyIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<RootMotion::FinalIK::IKSolver::Bone*>)>(&RootMotion::FinalIK::IKSolver::HierarchyIsValid)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Bone"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "HierarchyIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::PreSolveBones
// Il2CppName: PreSolveBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::ArrayW<RootMotion::FinalIK::IKSolver::Bone*>>)>(&RootMotion::FinalIK::IKSolver::PreSolveBones)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Bone"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver*), "PreSolveBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
