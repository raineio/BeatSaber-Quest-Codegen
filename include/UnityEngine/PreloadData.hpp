// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PreloadData
  class PreloadData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::PreloadData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PreloadData*, "UnityEngine", "PreloadData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PreloadData
  // [TokenAttribute] Offset: FFFFFFFF
  class PreloadData : public UnityEngine::Object {
    public:
    // System.Void PreloadDataDontStripMe()
    // Offset: 0x1DEF3FC
    void PreloadDataDontStripMe();
  }; // UnityEngine.PreloadData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PreloadData::PreloadDataDontStripMe
// Il2CppName: PreloadDataDontStripMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PreloadData::*)()>(&UnityEngine::PreloadData::PreloadDataDontStripMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PreloadData*), "PreloadDataDontStripMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
