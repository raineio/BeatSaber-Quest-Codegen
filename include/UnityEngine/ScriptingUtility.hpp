// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptingUtility
  class ScriptingUtility;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ScriptingUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScriptingUtility*, "UnityEngine", "ScriptingUtility");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScriptingUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptingUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ScriptingUtility::TestClass
    struct TestClass;
    // static private System.Boolean IsManagedCodeWorking()
    // Offset: 0x1DFEAB4
    static bool IsManagedCodeWorking();
  }; // UnityEngine.ScriptingUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ScriptingUtility::IsManagedCodeWorking
// Il2CppName: IsManagedCodeWorking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::ScriptingUtility::IsManagedCodeWorking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ScriptingUtility*), "IsManagedCodeWorking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
