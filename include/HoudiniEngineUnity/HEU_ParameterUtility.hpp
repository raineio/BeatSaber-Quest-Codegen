// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HAPI_ParmInfo
#include "HoudiniEngineUnity/HAPI_ParmInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ParameterUtility
  class HEU_ParameterUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterUtility*, "HoudiniEngineUnity", "HEU_ParameterUtility");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ParameterUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ParameterUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean GetToggle(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.Boolean outValue)
    // Offset: 0x1AED3F4
    static bool GetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<bool> outValue);
    // static public System.Boolean SetToggle(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Boolean setValue)
    // Offset: 0x1AED64C
    static bool SetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, bool setValue);
    // static public System.Boolean GetInt(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.Int32 outValue)
    // Offset: 0x1AED774
    static bool GetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<int> outValue);
    // static public System.Boolean SetInt(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Int32 setValue)
    // Offset: 0x1AED8AC
    static bool SetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, int setValue);
    // static public System.Boolean GetFloat(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.Single outValue)
    // Offset: 0x1AED9DC
    static bool GetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<float> outValue);
    // static public System.Boolean GetFloats(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.Single[] outValues)
    // Offset: 0x1AEDB18
    static bool GetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<::ArrayW<float>> outValues);
    // static public System.Boolean SetFloat(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Single setValue)
    // Offset: 0x1AEDC58
    static bool SetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, float setValue);
    // static public System.Boolean SetFloats(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Single[] setValues)
    // Offset: 0x1AEDD94
    static bool SetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ::ArrayW<float> setValues);
    // static public System.Boolean GetString(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.String outValue)
    // Offset: 0x1AEDEB8
    static bool GetString(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<::StringW> outValue);
    // static public System.Boolean SetString(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.String setValue)
    // Offset: 0x1AEDFF8
    static bool SetString(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ::StringW setValue);
    // static public System.Boolean SetChoice(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Int32 setValue)
    // Offset: 0x1AEE148
    static bool SetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, int setValue);
    // static public System.Boolean GetChoice(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out System.Int32 outValue)
    // Offset: 0x1AEE2C4
    static bool GetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<int> outValue);
    // static public System.Boolean SetInputNode(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, UnityEngine.GameObject obj, System.Int32 index)
    // Offset: 0x1AEE424
    static bool SetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ::UnityEngine::GameObject* obj, int index);
    // static public System.Boolean GetInputNode(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, System.Int32 index, out UnityEngine.GameObject obj)
    // Offset: 0x1AEE5D4
    static bool GetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, int index, ByRef<::UnityEngine::GameObject*> obj);
    // static public System.Boolean GetColor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, out UnityEngine.Color getValue)
    // Offset: 0x1AEE78C
    static bool GetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ByRef<::UnityEngine::Color> getValue);
    // static public System.Boolean SetColor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String paramName, UnityEngine.Color setValue)
    // Offset: 0x1AEE8C4
    static bool SetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW paramName, ::UnityEngine::Color setValue);
    // static public System.Int32 GetParameterIndexFromName(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.String parameterName)
    // Offset: 0x1AEEA08
    static int GetParameterIndexFromName(::HoudiniEngineUnity::HEU_SessionBase* session, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName);
    // static public System.Int32 GetParameterIndexFromNameOrTag(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.String parameterName)
    // Offset: 0x1AEEB0C
    static int GetParameterIndexFromNameOrTag(::HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName);
    // static public System.Int32 FindTextureParamByNameOrTag(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.String parameterName, System.String useTextureParmName)
    // Offset: 0x1AEEB80
    static int FindTextureParamByNameOrTag(::HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, ::StringW useTextureParmName);
    // static public System.Boolean GetParameterFloatValue(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.String parameterName, System.Single defaultValue, out System.Single returnValue)
    // Offset: 0x1AEED54
    static bool GetParameterFloatValue(::HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, float defaultValue, ByRef<float> returnValue);
    // static public System.Boolean GetParameterColor3Value(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.String parameterName, UnityEngine.Color defaultValue, out UnityEngine.Color outputColor)
    // Offset: 0x1AEEE70
    static bool GetParameterColor3Value(::HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, ::UnityEngine::Color defaultValue, ByRef<::UnityEngine::Color> outputColor);
  }; // HoudiniEngineUnity.HEU_ParameterUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetToggle
// Il2CppName: GetToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<bool>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetToggle)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetToggle
// Il2CppName: SetToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, bool)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetToggle)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<int>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetInt)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetInt
// Il2CppName: SetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, int)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetInt)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<float>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetFloat)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValue = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetFloats
// Il2CppName: GetFloats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<::ArrayW<float>>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetFloats)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetFloats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValues});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, float)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetFloat)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetFloats
// Il2CppName: SetFloats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ::ArrayW<float>)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetFloats)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetFloats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValues});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<::StringW>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetString)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValue = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetString)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetChoice
// Il2CppName: SetChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, int)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetChoice)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetChoice
// Il2CppName: GetChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<int>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetChoice)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, outValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetInputNode
// Il2CppName: SetInputNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ::UnityEngine::GameObject*, int)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetInputNode)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetInputNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, obj, index});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetInputNode
// Il2CppName: GetInputNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, int, ByRef<::UnityEngine::GameObject*>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetInputNode)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetInputNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, index, obj});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ByRef<::UnityEngine::Color>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetColor)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* getValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, getValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ::UnityEngine::Color)>(&HoudiniEngineUnity::HEU_ParameterUtility::SetColor)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, paramName, setValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetParameterIndexFromName
// Il2CppName: GetParameterIndexFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo>, ::StringW)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetParameterIndexFromName)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetParameterIndexFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, parameters, parameterName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetParameterIndexFromNameOrTag
// Il2CppName: GetParameterIndexFromNameOrTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo>, ::StringW)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetParameterIndexFromNameOrTag)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetParameterIndexFromNameOrTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters, parameterName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::FindTextureParamByNameOrTag
// Il2CppName: FindTextureParamByNameOrTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo>, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ParameterUtility::FindTextureParamByNameOrTag)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* useTextureParmName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "FindTextureParamByNameOrTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters, parameterName, useTextureParmName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetParameterFloatValue
// Il2CppName: GetParameterFloatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo>, ::StringW, float, ByRef<float>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetParameterFloatValue)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* returnValue = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetParameterFloatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters, parameterName, defaultValue, returnValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ParameterUtility::GetParameterColor3Value
// Il2CppName: GetParameterColor3Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo>, ::StringW, ::UnityEngine::Color, ByRef<::UnityEngine::Color>)>(&HoudiniEngineUnity::HEU_ParameterUtility::GetParameterColor3Value)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* outputColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ParameterUtility*), "GetParameterColor3Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters, parameterName, defaultValue, outputColor});
  }
};
