// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMaskBodyPart
  struct AvatarMaskBodyPart;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMask
  class AvatarMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AvatarMask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AvatarMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 105F838
  // [UsedByNativeCodeAttribute] Offset: 105F838
  // [NativeHeaderAttribute] Offset: 105F838
  // [MovedFromAttribute] Offset: 105F838
  class AvatarMask : public ::UnityEngine::Object {
    public:
    // public System.Int32 get_transformCount()
    // Offset: 0x2A4F498
    int get_transformCount();
    // public System.Boolean GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart index)
    // Offset: 0x2A4F448
    bool GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index);
    // public System.String GetTransformPath(System.Int32 index)
    // Offset: 0x2A4F4D8
    ::StringW GetTransformPath(int index);
    // private System.Single GetTransformWeight(System.Int32 index)
    // Offset: 0x2A4F528
    float GetTransformWeight(int index);
    // public System.Boolean GetTransformActive(System.Int32 index)
    // Offset: 0x2A4F578
    bool GetTransformActive(int index);
  }; // UnityEngine.AvatarMask
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AvatarMask::get_transformCount
// Il2CppName: get_transformCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AvatarMask::*)()>(&UnityEngine::AvatarMask::get_transformCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AvatarMask*), "get_transformCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AvatarMask::GetHumanoidBodyPartActive
// Il2CppName: GetHumanoidBodyPartActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AvatarMask::*)(::UnityEngine::AvatarMaskBodyPart)>(&UnityEngine::AvatarMask::GetHumanoidBodyPartActive)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarMaskBodyPart")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AvatarMask*), "GetHumanoidBodyPartActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AvatarMask::GetTransformPath
// Il2CppName: GetTransformPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AvatarMask::*)(int)>(&UnityEngine::AvatarMask::GetTransformPath)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AvatarMask*), "GetTransformPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AvatarMask::GetTransformWeight
// Il2CppName: GetTransformWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AvatarMask::*)(int)>(&UnityEngine::AvatarMask::GetTransformWeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AvatarMask*), "GetTransformWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AvatarMask::GetTransformActive
// Il2CppName: GetTransformActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AvatarMask::*)(int)>(&UnityEngine::AvatarMask::GetTransformActive)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AvatarMask*), "GetTransformActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
