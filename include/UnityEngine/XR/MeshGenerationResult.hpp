// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.XR.MeshId
#include "UnityEngine/XR/MeshId.hpp"
// Including type: UnityEngine.XR.MeshGenerationStatus
#include "UnityEngine/XR/MeshGenerationStatus.hpp"
// Including type: UnityEngine.XR.MeshVertexAttributes
#include "UnityEngine/XR/MeshVertexAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: MeshGenerationResult
  struct MeshGenerationResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.MeshGenerationResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 106E0A8
  // [NativeHeaderAttribute] Offset: 106E0A8
  struct MeshGenerationResult/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x106E4E4
    // private readonly UnityEngine.XR.MeshId <MeshId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::XR::MeshId MeshId;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::MeshId) == 0x10);
    // [DebuggerBrowsableAttribute] Offset: 0x106E520
    // private readonly UnityEngine.Mesh <Mesh>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* Mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x106E55C
    // private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshCollider* MeshCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshCollider*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x106E598
    // private readonly UnityEngine.XR.MeshGenerationStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::XR::MeshGenerationStatus Status;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::MeshGenerationStatus) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x106E5D4
    // private readonly UnityEngine.XR.MeshVertexAttributes <Attributes>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::XR::MeshVertexAttributes Attributes;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::MeshVertexAttributes) == 0x4);
    public:
    // Creating value type constructor for type: MeshGenerationResult
    constexpr MeshGenerationResult(::UnityEngine::XR::MeshId MeshId_ = {}, ::UnityEngine::Mesh* Mesh_ = {}, ::UnityEngine::MeshCollider* MeshCollider_ = {}, ::UnityEngine::XR::MeshGenerationStatus Status_ = {}, ::UnityEngine::XR::MeshVertexAttributes Attributes_ = {}) noexcept : MeshId{MeshId_}, Mesh{Mesh_}, MeshCollider{MeshCollider_}, Status{Status_}, Attributes{Attributes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>
    operator ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*>(this);
    }
    // Creating interface conversion operator: i_MeshGenerationResult
    inline ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>* i_MeshGenerationResult() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.XR.MeshId <MeshId>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::MeshId& dyn_$MeshId$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Mesh <Mesh>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_$Mesh$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshCollider*& dyn_$MeshCollider$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.XR.MeshGenerationStatus <Status>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::MeshGenerationStatus& dyn_$Status$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.XR.MeshVertexAttributes <Attributes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::MeshVertexAttributes& dyn_$Attributes$k__BackingField();
    // public UnityEngine.XR.MeshId get_MeshId()
    // Offset: 0x2AD04F0
    ::UnityEngine::XR::MeshId get_MeshId();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0x2AD04FC
    ::UnityEngine::Mesh* get_Mesh();
    // public UnityEngine.MeshCollider get_MeshCollider()
    // Offset: 0x2AD0504
    ::UnityEngine::MeshCollider* get_MeshCollider();
    // public UnityEngine.XR.MeshGenerationStatus get_Status()
    // Offset: 0x2AD050C
    ::UnityEngine::XR::MeshGenerationStatus get_Status();
    // public UnityEngine.XR.MeshVertexAttributes get_Attributes()
    // Offset: 0x2AD0514
    ::UnityEngine::XR::MeshVertexAttributes get_Attributes();
    // public System.Boolean Equals(UnityEngine.XR.MeshGenerationResult other)
    // Offset: 0x2AD05BC
    bool Equals(::UnityEngine::XR::MeshGenerationResult other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2AD051C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2AD0770
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.MeshGenerationResult
  #pragma pack(pop)
  static check_size<sizeof(MeshGenerationResult), 36 + sizeof(::UnityEngine::XR::MeshVertexAttributes)> __UnityEngine_XR_MeshGenerationResultSizeCheck;
  static_assert(sizeof(MeshGenerationResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::get_MeshId
// Il2CppName: get_MeshId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::MeshId (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::get_MeshId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "get_MeshId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::get_Mesh
// Il2CppName: get_Mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::get_Mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "get_Mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::get_MeshCollider
// Il2CppName: get_MeshCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshCollider* (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::get_MeshCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "get_MeshCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::MeshGenerationStatus (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::MeshVertexAttributes (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshGenerationResult::*)(::UnityEngine::XR::MeshGenerationResult)>(&UnityEngine::XR::MeshGenerationResult::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "MeshGenerationResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshGenerationResult::*)(::Il2CppObject*)>(&UnityEngine::XR::MeshGenerationResult::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshGenerationResult::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::MeshGenerationResult::*)()>(&UnityEngine::XR::MeshGenerationResult::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshGenerationResult), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
