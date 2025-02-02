// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
#include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012Digest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: Gost3411_2012_512Digest
  class Gost3411_2012_512Digest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_512Digest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3411_2012_512Digest : public ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
    public:
    // Get static field: static private readonly System.Byte[] IV
    static ::ArrayW<uint8_t> _get_IV();
    // Set static field: static private readonly System.Byte[] IV
    static void _set_IV(::ArrayW<uint8_t> value);
    // public System.Void .ctor()
    // Offset: 0x2353188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_512Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_512Digest*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest other)
    // Offset: 0x2353220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_512Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_512Digest*, creationType>(other)));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x2353140
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.String Gost3411_2012Digest::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // static private System.Void .cctor()
    // Offset: 0x2353338
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Void Gost3411_2012Digest::.cctor()
    static void _cctor();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x23532D0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Int32 Gost3411_2012Digest::GetDigestSize()
    int GetDigestSize();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x23532D8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: Org.BouncyCastle.Utilities.IMemoable Gost3411_2012Digest::Copy()
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
