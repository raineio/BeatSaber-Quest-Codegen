// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SecureRandomProvider
  class SecureRandomProvider : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SecureRandomProvider::SecureRandomState
    class SecureRandomState;
    // Creating value type constructor for type: SecureRandomProvider
    SecureRandomProvider() noexcept {}
    // Get static field: static private SecureRandomProvider/SecureRandomState _secureRandomState
    static GlobalNamespace::SecureRandomProvider::SecureRandomState* _get__secureRandomState();
    // Set static field: static private SecureRandomProvider/SecureRandomState _secureRandomState
    static void _set__secureRandomState(GlobalNamespace::SecureRandomProvider::SecureRandomState* value);
    // static public System.Byte[] GetBytes(System.Int32 length)
    // Offset: 0x237A89C
    static ::Array<uint8_t>* GetBytes(int length);
    // static public System.Byte GetByte()
    // Offset: 0x237AA0C
    static uint8_t GetByte();
    // static public System.Void GetBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x237AB30
    static void GetBytes(::Array<uint8_t>* buffer, int offset, int length);
    // static public System.Void GetBytes(System.Byte[] buffer)
    // Offset: 0x237ABC0
    static void GetBytes(::Array<uint8_t>* buffer);
    // static private System.Void .cctor()
    // Offset: 0x237AC44
    static void _cctor();
  }; // SecureRandomProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SecureRandomProvider*, "", "SecureRandomProvider");
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(int)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)()>(&GlobalNamespace::SecureRandomProvider::GetByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, int)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SecureRandomProvider::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
