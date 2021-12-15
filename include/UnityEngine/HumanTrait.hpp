// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanTrait
  class HumanTrait;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::HumanTrait);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HumanTrait
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: ECE04C
  class HumanTrait : public ::Il2CppObject {
    public:
    // static public System.Int32 get_MuscleCount()
    // Offset: 0x263E1C8
    static int get_MuscleCount();
    // static public System.String[] get_MuscleName()
    // Offset: 0x263E67C
    static ::ArrayW<::Il2CppString*> get_MuscleName();
    // static System.Int32 GetBoneIndexFromMono(System.Int32 humanId)
    // Offset: 0x2639D80
    static int GetBoneIndexFromMono(int humanId);
  }; // UnityEngine.HumanTrait
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HumanTrait::get_MuscleCount
// Il2CppName: get_MuscleCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::HumanTrait::get_MuscleCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "get_MuscleCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanTrait::get_MuscleName
// Il2CppName: get_MuscleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppString*> (*)()>(&UnityEngine::HumanTrait::get_MuscleName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "get_MuscleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanTrait::GetBoneIndexFromMono
// Il2CppName: GetBoneIndexFromMono
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::HumanTrait::GetBoneIndexFromMono)> {
  static const MethodInfo* get() {
    static auto* humanId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "GetBoneIndexFromMono", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{humanId});
  }
};
