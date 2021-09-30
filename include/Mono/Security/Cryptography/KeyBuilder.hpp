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
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.KeyBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyBuilder : public ::Il2CppObject {
    public:
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(System::Security::Cryptography::RandomNumberGenerator* value);
    // static private System.Security.Cryptography.RandomNumberGenerator get_Rng()
    // Offset: 0x1F9C624
    static System::Security::Cryptography::RandomNumberGenerator* get_Rng();
    // static public System.Byte[] Key(System.Int32 size)
    // Offset: 0x1F9B694
    static ::ArrayW<uint8_t> Key(int size);
  }; // Mono.Security.Cryptography.KeyBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::KeyBuilder*, "Mono.Security.Cryptography", "KeyBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyBuilder::get_Rng
// Il2CppName: get_Rng
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RandomNumberGenerator* (*)()>(&Mono::Security::Cryptography::KeyBuilder::get_Rng)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyBuilder*), "get_Rng", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyBuilder::Key
// Il2CppName: Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&Mono::Security::Cryptography::KeyBuilder::Key)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyBuilder*), "Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
