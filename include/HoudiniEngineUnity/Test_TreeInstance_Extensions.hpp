// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TreeInstance
#include "UnityEngine/TreeInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_TreeInstance
  class Test_TreeInstance;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_TreeInstance_Extensions
  class Test_TreeInstance_Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_TreeInstance_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TreeInstance_Extensions*, "HoudiniEngineUnity", "Test_TreeInstance_Extensions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_TreeInstance_Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Test_TreeInstance_Extensions : public ::Il2CppObject {
    public:
    // Nested type: ::HoudiniEngineUnity::Test_TreeInstance_Extensions::$$c
    class $$c;
    // static public HoudiniEngineUnity.Test_TreeInstance ToTestObject(UnityEngine.TreeInstance self)
    // Offset: 0x2A8E798
    static ::HoudiniEngineUnity::Test_TreeInstance* ToTestObject(::UnityEngine::TreeInstance self);
    // static public HoudiniEngineUnity.Test_TreeInstance[] ToTestObject(UnityEngine.TreeInstance[] self)
    // Offset: 0x2A8CC8C
    static ::ArrayW<::HoudiniEngineUnity::Test_TreeInstance*> ToTestObject(::ArrayW<::UnityEngine::TreeInstance> self);
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.Test_TreeInstance> ToTestObject(System.Collections.Generic.List`1<UnityEngine.TreeInstance> self)
    // Offset: 0x2A8E820
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TreeInstance*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>* self);
  }; // HoudiniEngineUnity.Test_TreeInstance_Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_TreeInstance* (*)(::UnityEngine::TreeInstance)>(&HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "TreeInstance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TreeInstance_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::HoudiniEngineUnity::Test_TreeInstance*> (*)(::ArrayW<::UnityEngine::TreeInstance>)>(&HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "TreeInstance"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TreeInstance_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TreeInstance*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*)>(&HoudiniEngineUnity::Test_TreeInstance_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "TreeInstance")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TreeInstance_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
