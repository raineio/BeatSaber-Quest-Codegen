// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: CurveNodeData
  class CurveNodeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::CurveNodeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CurveNodeData*, "HoudiniEngineUnity", "CurveNodeData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.CurveNodeData
  // [TokenAttribute] Offset: FFFFFFFF
  class CurveNodeData : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotation
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 scale
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>*>(this);
    }
    // Creating interface conversion operator: i_CurveNodeData
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>* i_CurveNodeData() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 scale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_scale();
    // public System.Void .ctor()
    // Offset: 0x1733A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurveNodeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::CurveNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurveNodeData*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Vector3 position)
    // Offset: 0x1733AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurveNodeData* New_ctor(::UnityEngine::Vector3 position) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::CurveNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurveNodeData*, creationType>(position)));
    }
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1733BB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurveNodeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::CurveNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurveNodeData*, creationType>(position, rotation)));
    }
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale)
    // Offset: 0x1733C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurveNodeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::CurveNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurveNodeData*, creationType>(position, rotation, scale)));
    }
    // public System.Void .ctor(HoudiniEngineUnity.CurveNodeData other)
    // Offset: 0x1733D94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurveNodeData* New_ctor(::HoudiniEngineUnity::CurveNodeData* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::CurveNodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurveNodeData*, creationType>(other)));
    }
    // public UnityEngine.Quaternion GetRotation()
    // Offset: 0x1733E74
    ::UnityEngine::Quaternion GetRotation();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.CurveNodeData other)
    // Offset: 0x1733EFC
    bool IsEquivalentTo(::HoudiniEngineUnity::CurveNodeData* other);
  }; // HoudiniEngineUnity.CurveNodeData
  #pragma pack(pop)
  static check_size<sizeof(CurveNodeData), 40 + sizeof(::UnityEngine::Vector3)> __HoudiniEngineUnity_CurveNodeDataSizeCheck;
  static_assert(sizeof(CurveNodeData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (HoudiniEngineUnity::CurveNodeData::*)()>(&HoudiniEngineUnity::CurveNodeData::GetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::CurveNodeData*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::CurveNodeData::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::CurveNodeData::*)(::HoudiniEngineUnity::CurveNodeData*)>(&HoudiniEngineUnity::CurveNodeData::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "CurveNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::CurveNodeData*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
