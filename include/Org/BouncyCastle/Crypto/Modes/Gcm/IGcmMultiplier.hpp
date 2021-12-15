// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Forward declaring type: IGcmMultiplier
  class IGcmMultiplier;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmMultiplier");
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class IGcmMultiplier {
    public:
    // public System.Void Init(System.Byte[] H)
    // Offset: 0xFFFFFFFF
    void Init(::ArrayW<uint8_t> H);
    // public System.Void MultiplyH(System.Byte[] x)
    // Offset: 0xFFFFFFFF
    void MultiplyH(::ArrayW<uint8_t> x);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init)> {
  static const MethodInfo* get() {
    static auto* H = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{H});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH
// Il2CppName: MultiplyH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*), "MultiplyH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
