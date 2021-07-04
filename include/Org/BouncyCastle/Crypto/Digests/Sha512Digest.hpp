// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.LongDigest
#include "Org/BouncyCastle/Crypto/Digests/LongDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha512Digest
  class Sha512Digest : public Org::BouncyCastle::Crypto::Digests::LongDigest {
    public:
    // Creating value type constructor for type: Sha512Digest
    Sha512Digest() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha512Digest t)
    // Offset: 0x18DC4B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha512Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512Digest*, creationType>(t)));
    }
    // public System.Void .ctor()
    // Offset: 0x18DC450
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x18DC530
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.String LongDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x18DC578
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::GetDigestSize()
    int GetDigestSize();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18DC580
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x18DC66C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset()
    void Reset();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18DC6C0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable LongDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18DC720
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha512Digest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha512Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha512Digest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Utilities::IMemoable*>()});
  }
};
