// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanDescription
  struct HumanDescription;
  // Skipping declaration: Quaternion because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Avatar
  // [UsedByNativeCodeAttribute] Offset: DA8ED8
  // [NativeHeaderAttribute] Offset: DA8ED8
  class Avatar : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Avatar
    Avatar() noexcept {}
    // public System.Boolean get_isValid()
    // Offset: 0x235C54C
    bool get_isValid();
    // public System.Boolean get_isHuman()
    // Offset: 0x235C58C
    bool get_isHuman();
    // public UnityEngine.HumanDescription get_humanDescription()
    // Offset: 0x235C5CC
    UnityEngine::HumanDescription get_humanDescription();
    // System.Void SetMuscleMinMax(System.Int32 muscleId, System.Single min, System.Single max)
    // Offset: 0x235C694
    void SetMuscleMinMax(int muscleId, float min, float max);
    // System.Void SetParameter(System.Int32 parameterId, System.Single value)
    // Offset: 0x235C6FC
    void SetParameter(int parameterId, float value);
    // System.Single GetAxisLength(System.Int32 humanId)
    // Offset: 0x235C75C
    float GetAxisLength(int humanId);
    // UnityEngine.Quaternion GetPreRotation(System.Int32 humanId)
    // Offset: 0x235C828
    UnityEngine::Quaternion GetPreRotation(int humanId);
    // UnityEngine.Quaternion GetPostRotation(System.Int32 humanId)
    // Offset: 0x235C8EC
    UnityEngine::Quaternion GetPostRotation(int humanId);
    // UnityEngine.Quaternion GetZYPostQ(System.Int32 humanId, UnityEngine.Quaternion parentQ, UnityEngine.Quaternion q)
    // Offset: 0x235C9B0
    UnityEngine::Quaternion GetZYPostQ(int humanId, UnityEngine::Quaternion parentQ, UnityEngine::Quaternion q);
    // UnityEngine.Quaternion GetZYRoll(System.Int32 humanId, UnityEngine.Vector3 uvw)
    // Offset: 0x235CAEC
    UnityEngine::Quaternion GetZYRoll(int humanId, UnityEngine::Vector3 uvw);
    // UnityEngine.Vector3 GetLimitSign(System.Int32 humanId)
    // Offset: 0x235CBE4
    UnityEngine::Vector3 GetLimitSign(int humanId);
    // System.Single Internal_GetAxisLength(System.Int32 humanId)
    // Offset: 0x235C7D8
    float Internal_GetAxisLength(int humanId);
    // UnityEngine.Quaternion Internal_GetPreRotation(System.Int32 humanId)
    // Offset: 0x235C880
    UnityEngine::Quaternion Internal_GetPreRotation(int humanId);
    // UnityEngine.Quaternion Internal_GetPostRotation(System.Int32 humanId)
    // Offset: 0x235C944
    UnityEngine::Quaternion Internal_GetPostRotation(int humanId);
    // UnityEngine.Quaternion Internal_GetZYPostQ(System.Int32 humanId, UnityEngine.Quaternion parentQ, UnityEngine.Quaternion q)
    // Offset: 0x235CA68
    UnityEngine::Quaternion Internal_GetZYPostQ(int humanId, UnityEngine::Quaternion parentQ, UnityEngine::Quaternion q);
    // UnityEngine.Quaternion Internal_GetZYRoll(System.Int32 humanId, UnityEngine.Vector3 uvw)
    // Offset: 0x235CB6C
    UnityEngine::Quaternion Internal_GetZYRoll(int humanId, UnityEngine::Vector3 uvw);
    // UnityEngine.Vector3 Internal_GetLimitSign(System.Int32 humanId)
    // Offset: 0x235CC3C
    UnityEngine::Vector3 Internal_GetLimitSign(int humanId);
    // private System.Void get_humanDescription_Injected(out UnityEngine.HumanDescription ret)
    // Offset: 0x235C644
    void get_humanDescription_Injected(UnityEngine::HumanDescription& ret);
    // private System.Void Internal_GetPreRotation_Injected(System.Int32 humanId, out UnityEngine.Quaternion ret)
    // Offset: 0x235CCAC
    void Internal_GetPreRotation_Injected(int humanId, UnityEngine::Quaternion& ret);
    // private System.Void Internal_GetPostRotation_Injected(System.Int32 humanId, out UnityEngine.Quaternion ret)
    // Offset: 0x235CD04
    void Internal_GetPostRotation_Injected(int humanId, UnityEngine::Quaternion& ret);
    // private System.Void Internal_GetZYPostQ_Injected(System.Int32 humanId, ref UnityEngine.Quaternion parentQ, ref UnityEngine.Quaternion q, out UnityEngine.Quaternion ret)
    // Offset: 0x235CD5C
    void Internal_GetZYPostQ_Injected(int humanId, UnityEngine::Quaternion& parentQ, UnityEngine::Quaternion& q, UnityEngine::Quaternion& ret);
    // private System.Void Internal_GetZYRoll_Injected(System.Int32 humanId, ref UnityEngine.Vector3 uvw, out UnityEngine.Quaternion ret)
    // Offset: 0x235CDCC
    void Internal_GetZYRoll_Injected(int humanId, UnityEngine::Vector3& uvw, UnityEngine::Quaternion& ret);
    // private System.Void Internal_GetLimitSign_Injected(System.Int32 humanId, out UnityEngine.Vector3 ret)
    // Offset: 0x235CE34
    void Internal_GetLimitSign_Injected(int humanId, UnityEngine::Vector3& ret);
    // private System.Void .ctor()
    // Offset: 0x235C4E4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Avatar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Avatar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Avatar*, creationType>()));
    }
  }; // UnityEngine.Avatar
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Avatar*, "UnityEngine", "Avatar");
// Writing MetadataGetter for method: UnityEngine::Avatar::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Avatar::*)()>(&UnityEngine::Avatar::get_isValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::get_isHuman
// Il2CppName: get_isHuman
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Avatar::*)()>(&UnityEngine::Avatar::get_isHuman)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "get_isHuman", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::get_humanDescription
// Il2CppName: get_humanDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::HumanDescription (UnityEngine::Avatar::*)()>(&UnityEngine::Avatar::get_humanDescription)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "get_humanDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::SetMuscleMinMax
// Il2CppName: SetMuscleMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, float, float)>(&UnityEngine::Avatar::SetMuscleMinMax)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "SetMuscleMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::SetParameter
// Il2CppName: SetParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, float)>(&UnityEngine::Avatar::SetParameter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "SetParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetAxisLength
// Il2CppName: GetAxisLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::GetAxisLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetAxisLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetPreRotation
// Il2CppName: GetPreRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::GetPreRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetPreRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetPostRotation
// Il2CppName: GetPostRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::GetPostRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetPostRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetZYPostQ
// Il2CppName: GetZYPostQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int, UnityEngine::Quaternion, UnityEngine::Quaternion)>(&UnityEngine::Avatar::GetZYPostQ)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetZYPostQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetZYRoll
// Il2CppName: GetZYRoll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int, UnityEngine::Vector3)>(&UnityEngine::Avatar::GetZYRoll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetZYRoll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::GetLimitSign
// Il2CppName: GetLimitSign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::GetLimitSign)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "GetLimitSign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetAxisLength
// Il2CppName: Internal_GetAxisLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::Internal_GetAxisLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetAxisLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetPreRotation
// Il2CppName: Internal_GetPreRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::Internal_GetPreRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetPreRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetPostRotation
// Il2CppName: Internal_GetPostRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::Internal_GetPostRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetPostRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetZYPostQ
// Il2CppName: Internal_GetZYPostQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int, UnityEngine::Quaternion, UnityEngine::Quaternion)>(&UnityEngine::Avatar::Internal_GetZYPostQ)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetZYPostQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetZYRoll
// Il2CppName: Internal_GetZYRoll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::Avatar::*)(int, UnityEngine::Vector3)>(&UnityEngine::Avatar::Internal_GetZYRoll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetZYRoll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetLimitSign
// Il2CppName: Internal_GetLimitSign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Avatar::*)(int)>(&UnityEngine::Avatar::Internal_GetLimitSign)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetLimitSign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::get_humanDescription_Injected
// Il2CppName: get_humanDescription_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(UnityEngine::HumanDescription&)>(&UnityEngine::Avatar::get_humanDescription_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "get_humanDescription_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::HumanDescription&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetPreRotation_Injected
// Il2CppName: Internal_GetPreRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, UnityEngine::Quaternion&)>(&UnityEngine::Avatar::Internal_GetPreRotation_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetPreRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetPostRotation_Injected
// Il2CppName: Internal_GetPostRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, UnityEngine::Quaternion&)>(&UnityEngine::Avatar::Internal_GetPostRotation_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetPostRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetZYPostQ_Injected
// Il2CppName: Internal_GetZYPostQ_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, UnityEngine::Quaternion&, UnityEngine::Quaternion&, UnityEngine::Quaternion&)>(&UnityEngine::Avatar::Internal_GetZYPostQ_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetZYPostQ_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetZYRoll_Injected
// Il2CppName: Internal_GetZYRoll_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&UnityEngine::Avatar::Internal_GetZYRoll_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetZYRoll_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::Internal_GetLimitSign_Injected
// Il2CppName: Internal_GetLimitSign_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Avatar::*)(int, UnityEngine::Vector3&)>(&UnityEngine::Avatar::Internal_GetLimitSign_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Avatar*), "Internal_GetLimitSign_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Avatar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
