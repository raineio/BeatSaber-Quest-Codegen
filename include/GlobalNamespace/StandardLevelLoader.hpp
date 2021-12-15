// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelLoader
  class StandardLevelLoader;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::StandardLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelLoader*, "", "StandardLevelLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelLoader : public ::Il2CppObject {
    public:
    // static public StandardLevelInfoSaveData LoadStandardLevelSaveData(System.String levelInfoFilenamePath)
    // Offset: 0x1223094
    static GlobalNamespace::StandardLevelInfoSaveData* LoadStandardLevelSaveData(::Il2CppString* levelInfoFilenamePath);
  }; // StandardLevelLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData
// Il2CppName: LoadStandardLevelSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardLevelInfoSaveData* (*)(::Il2CppString*)>(&GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData)> {
  static const MethodInfo* get() {
    static auto* levelInfoFilenamePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelLoader*), "LoadStandardLevelSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelInfoFilenamePath});
  }
};
