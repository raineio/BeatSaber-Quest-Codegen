// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Transform
  class Test_Transform;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
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
  // Forward declaring type: Test_Transform_Extensions
  class Test_Transform_Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Transform_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Transform_Extensions*, "HoudiniEngineUnity", "Test_Transform_Extensions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Transform_Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Test_Transform_Extensions : public ::Il2CppObject {
    public:
    // Nested type: ::HoudiniEngineUnity::Test_Transform_Extensions::$$c
    class $$c;
    // static public HoudiniEngineUnity.Test_Transform ToTestObject(UnityEngine.Transform self)
    // Offset: 0x2A8E240
    static ::HoudiniEngineUnity::Test_Transform* ToTestObject(::UnityEngine::Transform* self);
    // static public HoudiniEngineUnity.Test_Transform[] ToTestObject(UnityEngine.Transform[] self)
    // Offset: 0x2A8E2A4
    static ::ArrayW<::HoudiniEngineUnity::Test_Transform*> ToTestObject(::ArrayW<::UnityEngine::Transform*> self);
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.Test_Transform> ToTestObject(System.Collections.Generic.List`1<UnityEngine.Transform> self)
    // Offset: 0x2A8E390
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Transform*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* self);
  }; // HoudiniEngineUnity.Test_Transform_Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_Transform* (*)(::UnityEngine::Transform*)>(&HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Transform_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::HoudiniEngineUnity::Test_Transform*> (*)(::ArrayW<::UnityEngine::Transform*>)>(&HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Transform_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Transform*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*)>(&HoudiniEngineUnity::Test_Transform_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Transform_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
