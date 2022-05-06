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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrailElement
  class TrailElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrailElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElement*, "", "TrailElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TrailElement
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailElement : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 normal
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x28
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single localDistance
    // Size: 0x4
    // Offset: 0x2C
    float localDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x30
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_normal();
    // Get instance field reference: public System.Single distance
    [[deprecated("Use field access instead!")]] float& dyn_distance();
    // Get instance field reference: public System.Single localDistance
    [[deprecated("Use field access instead!")]] float& dyn_localDistance();
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor()
    // Offset: 0x14217A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrailElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailElement*, creationType>()));
    }
    // public System.Void SetData(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single time)
    // Offset: 0x1421574
    void SetData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float time);
    // public System.Void CopyFrom(TrailElement other)
    // Offset: 0x1421674
    void CopyFrom(::GlobalNamespace::TrailElement* other);
    // public System.Void SetDistance(System.Single value)
    // Offset: 0x14216B4
    void SetDistance(float value);
    // public System.Void UpdateLocalDistance(TrailElement prev)
    // Offset: 0x14216BC
    void UpdateLocalDistance(::GlobalNamespace::TrailElement* prev);
  }; // TrailElement
  #pragma pack(pop)
  static check_size<sizeof(TrailElement), 48 + sizeof(float)> __GlobalNamespace_TrailElementSizeCheck;
  static_assert(sizeof(TrailElement) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::TrailElement::SetData)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(&GlobalNamespace::TrailElement::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "TrailElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::SetDistance
// Il2CppName: SetDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(float)>(&GlobalNamespace::TrailElement::SetDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "SetDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::UpdateLocalDistance
// Il2CppName: UpdateLocalDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(&GlobalNamespace::TrailElement::UpdateLocalDistance)> {
  static const MethodInfo* get() {
    static auto* prev = &::il2cpp_utils::GetClassFromName("", "TrailElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "UpdateLocalDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prev});
  }
};
