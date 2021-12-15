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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusDeviceConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusDeviceConfig : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OculusDeviceConfig::State
    struct State;
    // Creating value type constructor for type: OculusDeviceConfig
    OculusDeviceConfig() noexcept {}
    // Get static field: static private UnityEngine.AndroidJavaObject _context
    static UnityEngine::AndroidJavaObject* _get__context();
    // Set static field: static private UnityEngine.AndroidJavaObject _context
    static void _set__context(UnityEngine::AndroidJavaObject* value);
    // Get static field: static private UnityEngine.AndroidJavaClass _oculusDeviceConfig
    static UnityEngine::AndroidJavaClass* _get__oculusDeviceConfig();
    // Set static field: static private UnityEngine.AndroidJavaClass _oculusDeviceConfig
    static void _set__oculusDeviceConfig(UnityEngine::AndroidJavaClass* value);
    // static private System.Void .cctor()
    // Offset: 0x1366A30
    static void _cctor();
    // static public System.Void Init()
    // Offset: 0x1366B04
    static void Init();
    // static public OculusDeviceConfig/State GetCurrentState()
    // Offset: 0x1366BF8
    static GlobalNamespace::OculusDeviceConfig::State GetCurrentState();
    // static public System.Boolean DidPrefetchParamName(System.String key)
    // Offset: 0x1366D18
    static bool DidPrefetchParamName(::Il2CppString* key);
    // static public System.String GetError()
    // Offset: 0x1366E0C
    static ::Il2CppString* GetError();
    // static public System.Boolean GetBoolean(System.String key)
    // Offset: 0x1366F2C
    static bool GetBoolean(::Il2CppString* key);
    // static public System.Int64 GetLong(System.String key)
    // Offset: 0x1367054
    static int64_t GetLong(::Il2CppString* key);
    // static public System.Double GetDouble(System.String key)
    // Offset: 0x136717C
    static double GetDouble(::Il2CppString* key);
    // static public System.String GetString(System.String key)
    // Offset: 0x13672A4
    static ::Il2CppString* GetString(::Il2CppString* key);
  }; // OculusDeviceConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusDeviceConfig*, "", "OculusDeviceConfig");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusDeviceConfig::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusDeviceConfig::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetCurrentState
// Il2CppName: GetCurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OculusDeviceConfig::State (*)()>(&GlobalNamespace::OculusDeviceConfig::GetCurrentState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetCurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::DidPrefetchParamName
// Il2CppName: DidPrefetchParamName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&GlobalNamespace::OculusDeviceConfig::DidPrefetchParamName)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "DidPrefetchParamName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetError
// Il2CppName: GetError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&GlobalNamespace::OculusDeviceConfig::GetError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetBoolean
// Il2CppName: GetBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&GlobalNamespace::OculusDeviceConfig::GetBoolean)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetLong
// Il2CppName: GetLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Il2CppString*)>(&GlobalNamespace::OculusDeviceConfig::GetLong)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetDouble
// Il2CppName: GetDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*)>(&GlobalNamespace::OculusDeviceConfig::GetDouble)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfig::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::OculusDeviceConfig::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfig*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};