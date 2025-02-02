// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HMACMD5
  class HMACMD5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::HMACMD5);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACMD5*, "System.Security.Cryptography", "HMACMD5");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HMACMD5
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1076E28
  class HMACMD5 : public ::System::Security::Cryptography::HMAC {
    public:
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x24DFEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACMD5* New_ctor(::ArrayW<uint8_t> key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HMACMD5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACMD5*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x24DFE8C
    // Implemented from: System.Security.Cryptography.HMAC
    // Base method: System.Void HMAC::.ctor()
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACMD5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HMACMD5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACMD5*, creationType>()));
    }
  }; // System.Security.Cryptography.HMACMD5
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HMACMD5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::HMACMD5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
