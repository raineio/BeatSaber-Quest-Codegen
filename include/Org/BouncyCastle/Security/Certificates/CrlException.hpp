// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Forward declaring type: CrlException
  class CrlException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CrlException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CrlException*, "Org.BouncyCastle.Security.Certificates", "CrlException");
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CrlException
  // [TokenAttribute] Offset: FFFFFFFF
  class CrlException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // public System.Void .ctor()
    // Offset: 0x17AD258
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CrlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlException*, creationType>()));
    }
    // public System.Void .ctor(System.String msg)
    // Offset: 0x17AD260
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String msg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlException* New_ctor(::StringW msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CrlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlException*, creationType>(msg)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CrlException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CrlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CrlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
