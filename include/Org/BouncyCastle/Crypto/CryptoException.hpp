// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: CryptoException
  class CryptoException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::CryptoException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::CryptoException*, "Org.BouncyCastle.Crypto", "CryptoException");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.CryptoException
  // [TokenAttribute] Offset: FFFFFFFF
  class CryptoException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x234B64C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::CryptoException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x234B6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::CryptoException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x234B72C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoException* New_ctor(::StringW message, ::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::CryptoException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoException*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Crypto.CryptoException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::CryptoException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::CryptoException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::CryptoException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
