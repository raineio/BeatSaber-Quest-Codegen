// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
  // [TokenAttribute] Offset: FFFFFFFF
  class IGcmExponentiator {
    public:
    // public System.Void Init(System.Byte[] x)
    // Offset: 0xFFFFFFFF
    void Init(::ArrayW<uint8_t> x);
    // public System.Void ExponentiateX(System.Int64 pow, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmExponentiator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX
// Il2CppName: ExponentiateX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(int64_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX)> {
  static const MethodInfo* get() {
    static auto* pow = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*), "ExponentiateX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pow, output});
  }
};
