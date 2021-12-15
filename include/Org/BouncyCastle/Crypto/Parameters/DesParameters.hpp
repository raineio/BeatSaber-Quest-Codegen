// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DesParameters
  class DesParameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DesParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DesParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DesParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DesParameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
    public:
    // Get static field: static private readonly System.Byte[] DES_weak_keys
    static ::ArrayW<uint8_t> _get_DES_weak_keys();
    // Set static field: static private readonly System.Byte[] DES_weak_keys
    static void _set_DES_weak_keys(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x13B7D54
    static void _cctor();
    // static public System.Boolean IsWeakKey(System.Byte[] key, System.Int32 offset)
    // Offset: 0x13B77A0
    static bool IsWeakKey(::ArrayW<uint8_t> key, int offset);
    // static public System.Boolean IsWeakKey(System.Byte[] key)
    // Offset: 0x13B79D8
    static bool IsWeakKey(::ArrayW<uint8_t> key);
    // static public System.Byte SetOddParity(System.Byte b)
    // Offset: 0x13B7C58
    static uint8_t SetOddParity(uint8_t b);
    // static public System.Void SetOddParity(System.Byte[] bytes)
    // Offset: 0x13B7C78
    static void SetOddParity(::ArrayW<uint8_t> bytes);
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x13B7640
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesParameters* New_ctor(::ArrayW<uint8_t> key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DesParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesParameters*, creationType>(key)));
    }
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x13B7A40
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesParameters* New_ctor(::ArrayW<uint8_t> key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DesParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesParameters*, creationType>(key, keyOff, keyLen)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.DesParameters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::DesParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Parameters::DesParameters::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesParameters*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::DesParameters::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesParameters*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::SetOddParity
// Il2CppName: SetOddParity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint8_t)>(&Org::BouncyCastle::Crypto::Parameters::DesParameters::SetOddParity)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesParameters*), "SetOddParity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::SetOddParity
// Il2CppName: SetOddParity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::DesParameters::SetOddParity)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesParameters*), "SetOddParity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
