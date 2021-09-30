// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_AnimationCurve
  class Test_AnimationCurve;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_AnimationCurve_Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Test_AnimationCurve_Extensions : public ::Il2CppObject {
    public:
    // Nested type: HoudiniEngineUnity::Test_AnimationCurve_Extensions::$$c
    class $$c;
    // static public HoudiniEngineUnity.Test_AnimationCurve ToTestObject(UnityEngine.AnimationCurve self)
    // Offset: 0x170869C
    static HoudiniEngineUnity::Test_AnimationCurve* ToTestObject(UnityEngine::AnimationCurve* self);
    // static public HoudiniEngineUnity.Test_AnimationCurve[] ToTestObject(UnityEngine.AnimationCurve[] self)
    // Offset: 0x1708700
    static ::ArrayW<HoudiniEngineUnity::Test_AnimationCurve*> ToTestObject(::ArrayW<UnityEngine::AnimationCurve*> self);
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.Test_AnimationCurve> ToTestObject(System.Collections.Generic.List`1<UnityEngine.AnimationCurve> self)
    // Offset: 0x17087EC
    static System::Collections::Generic::List_1<HoudiniEngineUnity::Test_AnimationCurve*>* ToTestObject(System::Collections::Generic::List_1<UnityEngine::AnimationCurve*>* self);
  }; // HoudiniEngineUnity.Test_AnimationCurve_Extensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_AnimationCurve_Extensions*, "HoudiniEngineUnity", "Test_AnimationCurve_Extensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_AnimationCurve* (*)(UnityEngine::AnimationCurve*)>(&HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_AnimationCurve_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<HoudiniEngineUnity::Test_AnimationCurve*> (*)(::ArrayW<UnityEngine::AnimationCurve*>)>(&HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_AnimationCurve_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::Test_AnimationCurve*>* (*)(System::Collections::Generic::List_1<UnityEngine::AnimationCurve*>*)>(&HoudiniEngineUnity::Test_AnimationCurve_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_AnimationCurve_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
