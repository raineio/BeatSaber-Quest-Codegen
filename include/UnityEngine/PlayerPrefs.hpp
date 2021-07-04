// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PlayerPrefs
  // [NativeHeaderAttribute] Offset: D8FAC8
  class PlayerPrefs : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PlayerPrefs
    PlayerPrefs() noexcept {}
    // static private System.Boolean TrySetInt(System.String key, System.Int32 value)
    // Offset: 0x1B23E98
    static bool TrySetInt(::Il2CppString* key, int value);
    // static private System.Boolean TrySetSetString(System.String key, System.String value)
    // Offset: 0x1B23EE8
    static bool TrySetSetString(::Il2CppString* key, ::Il2CppString* value);
    // static public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x1B23F38
    static void SetInt(::Il2CppString* key, int value);
    // static public System.Int32 GetInt(System.String key, System.Int32 defaultValue)
    // Offset: 0x1B24064
    static int GetInt(::Il2CppString* key, int defaultValue);
    // static public System.Int32 GetInt(System.String key)
    // Offset: 0x1B240B4
    static int GetInt(::Il2CppString* key);
    // static public System.Void SetString(System.String key, System.String value)
    // Offset: 0x1B240F8
    static void SetString(::Il2CppString* key, ::Il2CppString* value);
    // static public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x1B241AC
    static ::Il2CppString* GetString(::Il2CppString* key, ::Il2CppString* defaultValue);
    // static public System.String GetString(System.String key)
    // Offset: 0x1B241FC
    static ::Il2CppString* GetString(::Il2CppString* key);
    // static public System.Void DeleteAll()
    // Offset: 0x1B24278
    static void DeleteAll();
  }; // UnityEngine.PlayerPrefs
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetInt
// Il2CppName: TrySetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int)>(&UnityEngine::PlayerPrefs::TrySetInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetSetString
// Il2CppName: TrySetSetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::PlayerPrefs::TrySetSetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetSetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetInt
// Il2CppName: SetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, int)>(&UnityEngine::PlayerPrefs::SetInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int)>(&UnityEngine::PlayerPrefs::GetInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&UnityEngine::PlayerPrefs::GetInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::PlayerPrefs::SetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::PlayerPrefs::GetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&UnityEngine::PlayerPrefs::GetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::DeleteAll
// Il2CppName: DeleteAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::PlayerPrefs::DeleteAll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "DeleteAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
