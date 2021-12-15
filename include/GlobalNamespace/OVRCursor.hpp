// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRCursor
  class OVRCursor;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRCursor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCursor*, "", "OVRCursor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRCursor
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRCursor : public UnityEngine::MonoBehaviour {
    public:
    // public System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0xFFFFFFFF
    void SetCursorRay(UnityEngine::Transform* ray);
    // public System.Void SetCursorStartDest(UnityEngine.Vector3 start, UnityEngine.Vector3 dest, UnityEngine.Vector3 normal)
    // Offset: 0xFFFFFFFF
    void SetCursorStartDest(UnityEngine::Vector3 start, UnityEngine::Vector3 dest, UnityEngine::Vector3 normal);
    // protected System.Void .ctor()
    // Offset: 0x13E24F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCursor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCursor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCursor*, creationType>()));
    }
  }; // OVRCursor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCursor::SetCursorRay
// Il2CppName: SetCursorRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCursor::*)(UnityEngine::Transform*)>(&GlobalNamespace::OVRCursor::SetCursorRay)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCursor*), "SetCursorRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCursor::SetCursorStartDest
// Il2CppName: SetCursorStartDest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCursor::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::OVRCursor::SetCursorStartDest)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCursor*), "SetCursorStartDest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, dest, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCursor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
